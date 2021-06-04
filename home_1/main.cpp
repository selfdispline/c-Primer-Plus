#include <iostream>
#include <climits>
using namespace std;

int my_function( int a );
void time( int , int );

int main(int argc, char **argv)
{
	int time_hour;
	int time_minute;
	
	cout << "Enter the num of hours: ";
	cin >> time_hour;
	cout << "Enter the num of minutes :";
	cin >> time_minute;
	time(time_hour,time_minute);
	
	if ( 0 )
	{
	cout << "Bits per byte: "<< CHAR_BIT<< endl;
	cout << "int is: "<< sizeof(int) << "bytes. \n"<< endl;
	}
	
	return 0;
}


void time( int h , int m)
{
	cout<< "Time " << h << ":" << m << endl;

}
int my_function( int a)
{
	return 220 * a ;
}