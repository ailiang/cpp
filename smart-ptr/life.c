
#include <iostream>
#include <memory>
using namespace std;

class T
{
public:
	T()
	{
		cout << " construct T \n";
	}

	~T()
	{
		cout << " ~construc T \n";
	}

	void call()
	{
		cout << " call \n";
	}
};


int main()
{
	weak_ptr<T> wt;
	{
		shared_ptr<T> st = make_shared<T>();
		wt = st;
		auto st2 = wt.lock();
		st2->call();
	}
	auto st3 = wt.lock();
	if( st3 )
	{
		cout << " wt \n";
	}
	else
	{
		cout << " no wt \n";
	}

}
