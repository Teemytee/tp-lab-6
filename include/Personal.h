
//Employee for hire with payment for actually worked time. Has base per hour.
class Personal : public Employee, public IWorkTime
{
protected:
	double base;//base per hour
public:
	Personal(int _id, string _name, int _worktime,double _base):Employee(_id, _name,_worktime)
	{
		base = _base;
	}
	virtual double PaymentWorkTime()
	{
		double payment = worktime * base;
		return payment;
	}
	virtual double CalcPayment() {
		payment = PaymentWorkTime();
		return payment;
	}
};
 //cleaner.
class Cleaner :public Personal
{
public:
	Cleaner(int _id, string _name, int _worktime, double _base) :Personal(_id, _name, _worktime, _base)
	{
		position=positions::cleaner;
	}
};
//driver.
class Driver :public Personal
{
public:
	Driver(int _id, string _name,  int _worktime, double _base) :Personal(_id, _name, _worktime, _base)
	{
		position=positions::driver;
	}
};
