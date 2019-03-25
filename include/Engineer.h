//Engineer. He has base and payment per hour + bonuses from the project.
class Engineer :public Employee, public IWorkTime, public IProject
{
protected:
	double base;//payment per hour
	MyProject* project;
	double coefficient;//contribution to the project
public:
	Engineer(int _id, string _name, int _worktime, double _base, MyProject* _project,double _coefficient):Employee(_id, _name, _worktime)
	{
		base = _base;
		project = _project;
		coefficient = _coefficient;
	}
	virtual double PaymentWorkTime()
	{
		double payment = worktime * base;
		return payment;
	}
	virtual double PaymentProject()
	{
		unsigned int payment = coefficient * (project->budget);
		return payment;
	}
	virtual double CalcPayment()
	{
		payment = PaymentWorkTime() + PaymentProject();

		return payment;
	}

};
//software engineer
class Programmer:public Engineer
{
public:
	Programmer(int _id, string _name, int _worktime, double _base, MyProject* _project, double _coefficient) :Engineer(_id, _name, _worktime,_base, _project, _coefficient) 
	{
		position="programmer";
	};
};
//testing engineer
class Tester :public Engineer
{
public:
	Tester(int _id, string _name, int _worktime, double _base, MyProject* _project, double _coefficient) :Engineer(_id, _name, _worktime, _base, _project, _coefficient) 
	{
		position="tester";
	};
};

class TeamLeader :public Programmer, public IHeading
{
protected:
	int subordinate;
	double moneyForPerson = 1000.0;
public:
	TeamLeader(int _id, string _name,  int _worktime,double _base, MyProject* _project,double _coefficient,int _subordinate) :Programmer(_id, _name,_worktime,_base,_project,_coefficient)
	{
		position="teamLeader";
		subordinate = _subordinate;
	}
	virtual double HeadingPayment()
	{
		double payment = moneyForPerson * subordinate;
		return payment;
	}
	virtual double CalcPayment()
	{
		payment = PaymentWorkTime() + PaymentProject()+ HeadingPayment();
		return payment;
	}
};