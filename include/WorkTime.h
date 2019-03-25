#pragma once

/* ==================== [Интерфейс: WorkTime] ==================== */
// * расчет оплаты исходя из отработанного времени (часы умножаются на ставку)

class WorkTime
{
public:
	WorkTime() {}

	/* ========== [Метод: рассчитать зар.плату по отработанному времени] ========== */
	virtual int WorkTimePaymentMethod(int worktime, int base) = 0;

	~WorkTime() {}
};