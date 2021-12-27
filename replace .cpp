#include <string>
#include <iostream>

using namespace std;
int main()
{
	string name ("luoyi,lawen,aike");
	string hrt ("tobby ,malong");
	int ind;
	name.replace(12,4,hrt,6,6);
	cout<<"changed name  "<<name<<endl;
	string stud("lawen");
	ind = name.find_first_of("ao",1);
	ind = name.find_first_not_of("luoyi");
/*	if (ind==string::npos)
	{
		cout<< "can not find!!"<<endl;
	
	}
	 else
	 {
	 	cout<<"lawen:  " <<ind<<endl;
	 }*/
	 cout<<"fide first of ao : "<<ind<<endl;
	 cout<<"first of no fine "<<ind<<endl;
	return 0;
}
