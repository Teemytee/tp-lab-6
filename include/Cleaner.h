#pragma once

#include "Personal.h"

/* ==================== [Работник: уборщица] ==================== */

class Cleaner : public Personal
{
public:
	Cleaner(int id, string name, int worktime, int base) // конструктор с параметрами
	{
		this->id = id;				// идентификационный номер
		this->name = name;			// фио
		this->base = base;			// ставка
		this->worktime = worktime;	//отработанное время
		calculatePayment();			// рассчитаем оплату труда
	}

	/* ========== [Метод [переопределение]: Установить зар.плату] ========== */
	void calculatePayment()
	{
		this->payment = WorkTimePaymentMethod(this->worktime, this->base); // высчитаем по методу оплаты: исходя из отработанного времени
	}
	
	/* ========== [Метод: рассчитать зар.плату по отработанному времени] ========== */
	int WorkTimePaymentMethod(int work_time, int base) override
	{
		int payment = work_time * base;
		return payment;
	}

	~Cleaner() {}
};
