#include <iostream>

using namespace std;

long double probability(unsigned number, unsigned picks);

int main(int argc, char **argv)
{
	double total, choices;
	
	cout << "Please input the total number of the game card and the number of picks allowed:" << endl;

	while( cin >> total >> choices && choices <= total )
	{
		cout << "You have one chance in ";
		cout << probability(total,choices);
		cout << " of winning" << endl;
	}
	cout << "bey"<< endl;
}

long double probability(unsigned number, unsigned picks)
{
	unsigned n, p;
	
	long double result = 1 ;
	
	for (n = number, p = picks; p > 0 ; n--, p--)
	{
		result = result * n / p ;
		
		
	}
	return result ;
}
