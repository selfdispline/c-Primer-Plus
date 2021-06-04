#include <iostream>

using namespace std;

float turn( auto );

int main(int argc, char **argv)
{
	float cel = 0;
	
	cout << "Please enter a Celsius value: ";
	cin >> cel;
	
	auto fah= turn( cel );
	cout << cel <<" degree Celsius is "<< fah << " degree Fahrenheit." << endl;
	
	return 0;
}

float turn( auto c )
{
	return c * 1.8 + 32.0;
}