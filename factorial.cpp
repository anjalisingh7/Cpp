//Factorial of a number
#include<iostream>
using namespace std;
int main()
{
    int num,i,fact=1;
    cout<<"Enter the number: "<<"\n";
    cin>>num;
    for(i=num;i>0;i--){
        fact=fact*i;
        
    }
    cout<<fact;
    return 0;
}