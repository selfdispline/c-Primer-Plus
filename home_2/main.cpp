#include <iostream>

using namespace std;

void old( int );

int main(int argc, char **argv)
{
	int age ;
	age = 0;
	cout << "Please your ages:";
	cin >> age;
	old( age );
}

void old( int monthes )
{
	int mon = monthes * 12 ;
	cout << "You were born " << mon << " monthes ago" << endl;
}
