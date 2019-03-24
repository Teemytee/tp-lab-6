#include "Employee.h"

int main(){
  std::string name = "abc";
  Employee e1(name);
  Employee e2(name);
  std::cout << e1.get_fio() << " " << e1.get_count() << " " << e1.get_id() << "\n";
  return 0;
}
