//Conditional Statements.....if...if-else..if-else if-else...Switch case

//--------------------------------------------------------------------------------------------------------------


#include <iostream>
using namespace std;

int main()
{

 //if else-if else  method  :-
//===============================================================================================================  

// cout<<"Enter student marks"<<endl;
// int a;
// cin>>a;

// if(a>90)
// {
//     cout<<"GRADE A";
// }
// else if(a>80)
// {
//     cout<<"GRADE B";
// }
// else if(a>70)
// {
//     cout<<"GRADE C";
// }
// else 
// {
//     cout<<"PASS";
// }



//switch case method :-
//=========================================================================================================================

cout<<"Enter value of a"<<endl;
int a;
cin>>a;

switch (a)
{
case 1:
    cout<<"Good morning";
    break;                        //break is used to separate the switch cases result
case 2:
    cout<<"Good afternoon";
    break;
case 3:
    cout<<"Good evening";
    break;
case 4:
    cout<<"Good Night";
    break;
case 5:
    cout<<"Radhe Radhe";
    break;

default:
    cout<<"invalid input";
    break;
}



}