// operating with variables

#include <iostream>
using namespace std;

int main ()
{
	// declaring variables:
	int a, b, c, d, e, f;
	int result;
	
	// process
	a = 10;
	b = 5;
	c = 12;
	d = 2;
	e = 5;
	f = 7;
	b = b + 3;
	c = c - 5;
	f = f + 3;
	result = a - b + f / e - d + c;
	
	// print out the result:
	cout << result;
	
	// terminate the program:
	return 0;
}
