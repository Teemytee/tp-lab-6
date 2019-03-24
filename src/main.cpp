#include <iostream>
#include "Cleaner.h"
#include <string>
#include "Tester.h"
#include "parse.h"
#include "Table.h"

int main(){
 vector<Employee*> state;
 //Cleaner a(5, "vasya", 150);
 //Tester b("asd", 6, 170, "octave");
 //cout << b.getPayment();
 state = parse();
 Statistics(state);

 return 0;
}