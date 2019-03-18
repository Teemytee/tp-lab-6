#include <cstdlib>
#include <iostream>

#include <base.h>
#include <personnel.h>
#include <engineer.h>
#include <manager.h>

int main()
{
	TeamLeader tld{ 666, "John Scali", 100500 };
	std::cout << tld.get_id() << std::endl;
	std::cout << tld.get_name() << std::endl;
	SeniorManager smg{ 777, "Peter Ducker", 999999 };
	std::cout << smg.get_id() << std::endl;
	std::cout << smg.get_name() << std::endl;
	system("pause");
	return 0;
}
