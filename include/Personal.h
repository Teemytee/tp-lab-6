
//работник по найму с оплатой за фактически отработанное время. Имеет ставку за час.
class Personal : public Employee, public IWorkTime
{
protected:
	double base;// -базовая ставка руб. / час(если нужна). 
public:
	Personal(int _id, string _name, positions _position, int _worktime,double _base):Employee(_id, _name,_position,_worktime)
	{
		base = _base;
	}
	virtual unsigned int PaymentWorkTime()
	{
		unsigned int payment = worktime * base;
		return payment;
	}
	virtual unsigned int CalcPayment() {
		payment = PaymentWorkTime();
		return payment;
	}
};
 //- уборщица.
class Cleaner :public Personal
{
public:
	Cleaner(int _id, string _name, positions _position, int _worktime, double _base) :Personal(_id, _name, _position, _worktime, _base) {}
};
//водитель.
class Driver :public Personal
{
public:
	Driver(int _id, string _name, positions _position, int _worktime, double _base) :Personal(_id, _name, _position, _worktime, _base) {}
};
