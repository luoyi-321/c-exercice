#include<vector>
#include<iostream>
#include<string>
using namespace std;
class test{ };
struct studenInfo
{
	string name;
	int age;
	double height,weigth,scoreOfSLt;
};
void initStudentInfo( int n,vector<studenInfo> & vt)
{
	studenInfo step;
 for(int i=1;i<n;i++)
 {
 	step.name="leuy"+i;
 	step.age=19;
 	step.weigth=56.0;
 	step.height=186.5;
 	vt.push_back(step);
 }
}

int main()
{
 vector<studenInfo> v;
 vector<studenInfo> v1;
 initStudentInfo(5,v);
 initStudentInfo(10,v1);

 
 
 studenInfo tmp;
 while(!v.empty())
 {
 	cout<<"size of v:"<<v.size()<<endl;
 	tmp=v.back();
 	cout<<"age of tmp"<<tmp.age<<"heigth of tmp"<<tmp.height<<tmp.name;
 	v.pop_back();
 	cout<<endl;
 }
 
 
return 0;
}

