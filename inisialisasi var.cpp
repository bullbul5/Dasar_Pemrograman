#include <iostream>
using namespace std;

int main ()
{
	int a=8;			// initial value: 5
	int b(6);			// initial value: 3
	int c{4};			// initial value: 2
	int result;			// initial value undertermined
	
	a = a + b;
	result = a - c;
	cout<<result;
	
	return 0;
}
