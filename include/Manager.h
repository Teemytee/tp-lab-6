//Manager. Receives payment from the money of the project, which he manages.
class Manager :public Employee, public IProject
{
protected:
	MyProject* project;
	double coefficient;//contribution to the project
public:
	Manager(int _id, string _name, int _worktime,MyProject* _project,double _coefficient):Employee(_id, _name,_worktime) {
		project = _project;
		coefficient = _coefficient;
	}
	virtual double PaymentProject()
	{
		double payment = coefficient * (project->budget);
		return payment;
	}
	virtual double CalcPayment()
	{
		payment = PaymentProject();
		return payment;
	}
}; 
class ProjectManager :public Manager, public IHeading
{
protected:
	int subordinate;
	int moneyForPerson = 1000;
public:
	ProjectManager(int _id, string _name, int _worktime, MyProject* _project,double _coefficient,int _subordinate) :Manager(_id, _name,  _worktime,_project,_coefficient)
	{
		subordinate = _subordinate;
		position="projectManager";
	}
	virtual double HeadingPayment()
	{
		double payment = moneyForPerson * subordinate;
		return payment;
	}
	virtual double CalcPayment()
	{
		payment = PaymentProject()+ HeadingPayment();
		return payment;
	}
};
class SeniorManager :public ProjectManager
{
public:
	SeniorManager(int _id, string _name,  int _worktime, MyProject* _project,double _coefficient, int _subordinate) :ProjectManager(_id, _name,  _worktime, _project,_coefficient, _subordinate) 
	{
		position="seniorManager";
	}
};