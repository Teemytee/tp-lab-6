using namespace std;
#include <string>
class Employee {
protected:
	int id;
	string name;
	int worktime;
	double payment;
	string position;
public:
	Employee() {};
	Employee(string name1, int id1, int worktime) {
		this->name = name1;
		this->id = id1;
		this->worktime = worktime;
	}
	int GetId() {
		return id;
	}
	string GetFio() {
		return name;
	}
	int GetPayment() {
		return payment;
	}
	int GetWorktime() {
		return worktime;
	}
	string GetPosition() {
		return position;
	}
};