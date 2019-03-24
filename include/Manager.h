//менеджер. Оплату получает из денег проекта, которым руководит. 
class Manager :public Employee, public IProject
{
protected:
	MyProject* project;
	double coefficient;//вклад в проект 
public:
	Manager(int _id, string _name, positions _position, int _worktime,MyProject* _project,double _coefficient):Employee(_id, _name, _position,_worktime) {
		project = _project;
		coefficient = _coefficient;
	}
	virtual unsigned int PaymentProject()
	{
		unsigned int payment = coefficient * (project->budget);
		return payment;
	}
	virtual unsigned int CalcPayment()
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
	ProjectManager(int _id, string _name, positions _position, int _worktime, MyProject* _project,double _coefficient,int _subordinate) :Manager(_id, _name, _position, _worktime,_project,_coefficient)
	{
		subordinate = _subordinate;
	}
	virtual unsigned int HeadingPayment()
	{
		unsigned payment = moneyForPerson * subordinate;
		return payment;
	}
	virtual unsigned int CalcPayment()
	{
		payment = PaymentProject()+ HeadingPayment();
		return payment;
	}
};
class SeniorManager :public ProjectManager
{
public:
	SeniorManager(int _id, string _name, positions _position, int _worktime, MyProject* _project,double _coefficient, int _subordinate) :ProjectManager(_id, _name, _position, _worktime, _project,_coefficient, _subordinate) {}
};