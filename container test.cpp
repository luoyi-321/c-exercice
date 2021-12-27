#include<iostream>
#include<deque>
#include<set>
#include<functional>
using namespace std;
template<class T>
int display(char*name,T& s)
{
	cout<<name;
	multiset<int>::iterator it=s.begin();
	while(it!=s.end()){
			cout<<*it<<" ";++it;
	}


cout<<endl;
return 0;
}
int main()
{
	int a[]={9,3,9,7,10,7,3};
	int size= sizeof(a)/sizeof(int);
	multiset<int>s(a,a+size);
	display("set:",s);
	cout<<"find(9): "<<*(--s.find(9))<<endl;
	cout<<"find(8): "<<*(--s.find(8))<<endl;
	cout<<"count(9): "<<s.count(9)<<endl;
	cout<<"lower_bound(6): "<<*s.lower_bound(6)<<endl;
	return 0;
}
