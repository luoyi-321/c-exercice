#include <iostream>
using namespace std;
const  int  n =10;
template<class T>   
class  Stack      
{
    T stk[n];       
    int  top;       
public:          
    Stack() { top=-1; }   
    void  push(T ob);    
    T pop();                 
};
//----------------------------------------------------
int  main( )
{   
	Stack<char>s1 ;    
	Stack<int>s2,  *sp=&s2;           
    s1.push('i');   s1.push('y');   s1.push('o');   s1.push('u');  s1.push('l'); 
    cout<<"pop s1:" ;  
	for(int i=0;  i<6;  i++)  cout<<s1.pop();
	//-------------------------------------------
	s2.push(1);     s2.push(2);     s2.push(3); 
	cout<<endl<<"pop s2:";  
    for(int i=0;  i<3;  i++)  cout<<sp->pop();
	cout<<endl;
    return 0; 
}
//--------两个成员函数的类外实现------------
template<class T>
void Stack<T>::push(T ob)   //入栈成员函数
{ 
   if( top == n-1 )
      { cout<<"Stack full"; 
         return ; 
      }
   stk[++top] = ob; 
}
template <class T>              
T Stack<T>::pop()                //出栈成员函数
{ 
   if(top<0)
      { cout<<"Stack empty"; 
        return 0;
      }
   return  stk[top--] ;
}
