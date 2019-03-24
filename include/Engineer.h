//инженер. Имеет ставку и оплату за час + бонусы от выполняемого проекта.
class Engineer :public Employee, public IWorkTime, public IProject
{
protected:
	double base;// -базовая ставка руб. / час(если нужна). 
	MyProject* project;
	double coefficient;//вклад в проект 
public:
	Engineer(int _id, string _name, positions _position, int _worktime, double _base, MyProject* _project,double _coefficient):Employee(_id, _name,_position, _worktime)
	{
		base = _base;
		project = _project;
		coefficient = _coefficient;
	}
	virtual unsigned int PaymentWorkTime()
	{
		unsigned int payment = worktime * base;
		return payment;
	}
	virtual unsigned int PaymentProject()
	{
		unsigned int payment = coefficient * (project->budget);
		return payment;
	}
	virtual unsigned int CalcPayment()
	{
		payment = PaymentWorkTime() + PaymentProject();

		return payment;
	}

};
//инженер - программист.
class Programmer:public Engineer
{
public:
	Programmer(int _id, string _name, positions _position, int _worktime, double _base, MyProject* _project, double _coefficient) :Engineer(_id, _name, _position, _worktime,_base, _project, _coefficient) {};
};
//инженер по тестированию.
class Tester :public Engineer
{
public:
	Tester(int _id, string _name, positions _position, int _worktime, double _base, MyProject* _project, double _coefficient) :Engineer(_id, _name, _position, _worktime, _base, _project, _coefficient) {};
};

class TeamLeader :public Programmer, public IHeading
{
protected:
	int subordinate;
	unsigned int moneyForPerson = 1000;
public:
	TeamLeader(int _id, string _name, positions _position, int _worktime,double _base, MyProject* _project,double _coefficient,int _subordinate) :Programmer(_id, _name, _position,_worktime,_base,_project,_coefficient)
	{
		subordinate = _subordinate;
	}
	virtual unsigned int HeadingPayment()
	{
		unsigned int payment = moneyForPerson * subordinate;
		return payment;
	}
	virtual unsigned int CalcPayment()
	{
		payment = PaymentWorkTime() + PaymentProject()+ HeadingPayment();
		return payment;
	}
};