//Conditional Statements

//------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{

int a, b, c, d;

cout<<"Enter value of a b c d"<<endl;
cin>>a>>b>>c>>d;

cout<<(a>b)<<endl;

cout<<(a>b && c<d)<<endl;   //both should be true for output to be true(1)

cout<<(a>b || c<d)<<endl;   //both should be false for output to be false(0)
  
}