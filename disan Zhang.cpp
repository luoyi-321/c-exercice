#include<iostream>
#include<string>
using namespace std;
int main()
{
	string line("luoyi,lawen,aike,malong");
	string la;
	string::iterator itB = line.begin();
	string::iterator itE = line.end();
	
	la.assign(itB+6,itE-7);
	cout<<la<<endl;
}
/*	for(;arrow!=line.begin();arrow--)
	{
	
		cout<<*arrow<<"_";
	
	}
cout<<endl;
	return 0;
}
*/ 
