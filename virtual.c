#include<iostream>
using namespace std;

class base1{
virtual void function(){
cout<<"this is a base calss"<<endl;

}
};
class derived1 {
virtual void function()
{
cout<<"this is 1st derived function"<<endl;
}
};
class derived2 {
display()
{
cout<<"this is 2st derived function"<<endl;
}
};
int main()
{
derived1 d1;
derived2 d2;
d2.function();
return 0;
}

