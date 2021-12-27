#include<iostream>
#include<string>
template<class T>
T Max(T a,T b)
{
	return(a>b)?a:b;
}
using namespace std;

int main(){
	
	string name1="luoyi";
	string name2="aike";
	int a=19;
	int b=21;
	int a1=21;
	int b1=19;
    double a2=1.65;
	double b2=1.70;
	if (a>b)
		cout<<"the taller's name is  "<<name1<<endl;
	else
		cout<<"the taller's name is  "<<name2<<endl;

	cout<<"your age are "<<Max(a1,b1)<<endl;

	cout<<"your heihgt have "<<Max(a2,b2)<<endl;
}


