//check whether a number is a prime number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,flag=0,i;
    cout<<" Enter the number:"<<endl;
    cin>>num;
    for(i=2;i<=sqrt(num);i++)
    {
        
        if(num%i==0){
            cout<<"it is not prime";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<num <<"is a prime number";
    }
    return 0;
}