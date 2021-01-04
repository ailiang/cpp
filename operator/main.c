
#include <iostream>
using namespace std;

class item
{
public:

	explicit item( int i ): i1(i)
	{

	}
	int i1;
	int operator+( const item& o )
	{
		cout << "call member operator\n";
		return i1 + o.i1;
	}
	int operator()()
	{
		cout << "call operator() \n";
		return i1;
	}
};

int operator+( const item& it1, int i )
{
	cout << " call operator　\n";
	return it1.i1 + i;
}

item _global_item(1111);
item* Get()
{
	return &_global_item;
}

int main()
{
	cout << item(10) + item(1) << endl;
	item obj1(100), obj2(200);
	cout << obj1 + 100 << endl;
	cout << obj1() << endl;
	cout << (*Get())() << endl;
	return 0;
}
