#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{
 fstream input,output;
 input.open("file.txt");
 output.open("file2.txt");
 char ch; 
 while(!input.eof())
{
input.get(ch);
output<<ch;
}
cout<<"copy done!! "<<endl;
input.close();
output.close();
}
 
