//Array part2

//============================================================================================================

#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    cout<<"Give 10 integers : "<<endl;

    for(int i=0;i<10;i++ )
    {
        cin>>arr[i];
    }

    cout<<"Integers in reverse order : ";

    for(int i=9;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

}