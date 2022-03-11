#include<iostream>
using namespace std;

class A {      
  public:        
    void displayA()
{
cout<<"this is A"<<endl;
}      
};
class B :public A {      
  public:        
    void displayB()
{
cout<<"this is B"<<endl;
}      
};
class C :public B {      
  public:        
    void displayC()
{
cout<<"this is C"<<endl;
}      
};
class D :public B,public C {      
  public:        
    void displayD()
{
cout<<"this is D"<<endl;
}      
};

int main()
{
A a;
B b;
C c;
D d;
return 0;
}




