#pragma once

#include "Personal.h"

/* ==================== [Работник: водитель] ==================== */

class Driver : public Personal
{
public:
	Driver(int id, string name, int worktime, int base) // конструктор с параметрами
	{
		this->id = id;				// идентификационный номер
		this->name = name;			// ФИО
		this->base = base;			// базовая ставка
		this->worktime = worktime;	// отработанное время
		calculatePayment();	// рассчитаем оплату труда
	}

	/* ========== [Метод [переопределение]: Установить зар.плату] ========== */
	void calculatePayment() override
	{
		this->payment = WorkTimePaymentMethod(this->worktime, this->base); // высчитаем по методу оплаты: исходя из отработанного времени
	}

	/* ========== [Метод: рассчитать зар.плату по отработанному времени] ========== */
	int WorkTimePaymentMethod(int worktime, int base) override
	{
		this->payment = worktime * base;
		return payment;
	}
	
	

	~Driver() {}
};

