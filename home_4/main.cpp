#include <iostream>

using namespace std;

void queue( auto d, auto e, auto f );

int main(int argc, char **argv)
{
	float a, b, c;
	
	cout << "初始化数据：" ;
	cin >> a;
	cin >> b;
	cin >> c;
	queue( a, b, c);
}

void queue( auto d, auto e, auto f)
{
	auto t = 0.0;
	if( d < e)
	{
		t = d;
		d = e;
		e = t;
	}
	if( d < f)
	{
		t = d;
		d = f;
		f = t;
	}
	if( e < f)
	{
		t = e;
		e = f;
		f = t;
	}
	cout << "从大到小的顺序是： " << d <<" " << e <<" " <<  f  << endl;
}