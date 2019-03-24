#include "Header.h"
int main()
{
	ifstream in;
	in.open("../Data/input.txt");
	ofstream out;
	out.open("../Data/output.txt");
	ReadandPrint(in,out);
	system("pause");
}