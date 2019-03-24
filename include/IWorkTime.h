// -расчет оплаты исходя из отработанного времени(часы умножаются на ставку).
class IWorkTime
{
public:
	virtual unsigned int PaymentWorkTime()=0;
};