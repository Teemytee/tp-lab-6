
class Employee
{
protected:
	int id; 
	string name; 
	double worktime; 
	double payment=0;
	string position;//position in staff 
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
