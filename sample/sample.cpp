#include "ls/Exception.h"
#include "iostream"

using namespace std;

void test()
{
	throw ls::Exception(ls::Exception::LS_EOPEN);
}

int main()
{
	try 
	{
		test();
	}
	catch(ls::Exception &e)
	{
		cout << e.what() << endl;
	}
	return 0;
}
