#pragma once

#include "Manager.h"
#include "Heading.h"

/* ==================== [Работник: проектный менеджер] ==================== */

class ProjectManager : public Manager, public Heading
{
protected:
	int salary;
public:
	ProjectManager() : Manager() { this->salary = 0;  };

	ProjectManager(int id, string name, string project, int budget, double deposit, int salary)
	{
		this->id = id;
		this->name = name;
		this->project = project;
		this->salary = salary;
		this->budget = budget;
		this->deposit = deposit;

		this->worktime = 0;
		calculatePayment();
	}

	/* ========== [Метод [переопределение]: Установить зар.плату] ========== */
	void calculatePayment() override
	{
		this->payment = (
			ProjectPaymentMethod(this->budget, this->deposit) +
			HeadingPaymentMethod(this->salary)
		); // высчитаем по методам оплаты: исходя из отработанного времени + исходя из участия в проекте
	}
	
	/* ========== [Метод: рассчитать зар.плату исходя из руководства (кол-во подчиненных)] ========== */
	int HeadingPaymentMethod(int sal) override
	{
		int salary = sal * 1000;
		return salary;
	}

	~ProjectManager() {}
};