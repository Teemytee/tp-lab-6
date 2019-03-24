ostream& operator <<(ostream& out, const positions&t) {
	switch (t) {
	case cleaner:return(out << "Cleaner");
	case driver:return(out << "Driver");
	case programmer:return(out << "Programmer");
	case teamLeader:return(out << "TeamLeader");
	case tester:return(out << "Tester");
	case projectManager:return(out << "ProjectManager");
	case seniorManager:return(out << "SeniorManager");
	}
	return(out);
}
class Employee
{
protected:
	int id; 
	string name; 
	double worktime; 
	double payment=0;
	positions position;//position in staff 
public:
	Employee(int _id, string _name, double _worktime)
	{
		id =_id;
		name = _name;
		worktime = _worktime;
	}
	void PrintBio()
	{
		cout << id << ' ' << name<< ' '<< position << " payment=" << payment << endl;
	}
	void PrintBio(ofstream& out)
	{
		out << id << ' ' << name << ' ' << position << " payment=" << payment << endl;
	}
	virtual double CalcPayment() = 0;
};
