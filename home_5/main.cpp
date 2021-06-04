#include <iostream>

using namespace std;

void call( int );

int main(int argc, char **argv)
{
	int order ;
	
    cout << "1-->宝宝，帮我洗洗澡" << endl;
	cout << "2-->老婆，帮我搓搓背" << endl;
	cout << "3-->宝贝，帮我做会作业" << endl;
	cout << "4-->帮我把房间打扫下，老婆" << endl;
	cout << "5-->有时间陪我去看海，阔以不宝贝" << endl;
	
	cin >> order;
	
	call( order );
	
    return 0;
}

void call (int a)
{
	if ( a == 1 )
	{
		cout << "好的，老公，我也顺便洗一洗，爱你哦" << endl;
	}
	if ( a == 2 )
	{
		cout << "好的，老公，你也要帮我搓搓背哈，爱你哦" << endl;
	}
	if ( a == 3 )
	{
		cout << "不行，因为我也不会啊，老公/(ㄒoㄒ)/~~" << endl;
	}
	if ( a == 4 )
	{
		cout << "好哒，亲爱的主人" << endl;
	}
	if ( a == 5 )
	{
		cout << "好的，老公，宝宝最爱看海了，爱你哦" << endl;
	}

}

