#include <iostream>
#include <vector>
#include <string> 
using namespace std;
/*class myClass {  };
int main()
{
	string str[ ]={"Alex","John","Robert"};  // ?? *str ??? "" 
    vector<int>     v1;					// ?vector,???? int 
    vector<int>     v2(10);				// vector ?10? int ??
    vector<float>  v3(10,0);			// 10?float??,??=0
    vector<string>v4(str,str+2);    // string???,str+3?
    vector<string>::iterator sIt = v4.begin();  // vector ???
	//string::iterator sIt = v4.begin();				 // error: string ???
    while(sIt != v4.end())  cout<<*sIt++<<" "; 
    cout << endl;						   // sIt++:???????
    vector<string> v5(v4);			   // ??????????
	for ( int i=0;   i<v5.size();   i++ )  cout<< v5[i] <<" "; 
    cout << endl;   //5.length();  // error: vector??????
	vector<myClass>	  myC;
	vector<myClass*> pmyC;
	cout<<"myClass success!"<<endl;
	return 0;
}*/
template <class T1,class T2>
void Swap(T1&a,T2&b)
{
	T1 t;
	t=a;
	a=T2(b);
	b=T1(t);
}
int main()
{
	int x=5;
	char y='c';
	cout<<x<<";"<<y<<endl;
	Swap(x,y);
	cout<<char(x)<<";"<<int (y)<<endl;
	return 0;
}
