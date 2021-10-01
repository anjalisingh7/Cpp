//Tell if a number is Armstrong number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,rem,temp,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    temp=num;
    do{
        rem=num%10;
        sum=sum+pow(rem,3);
        num/=10;
    }while(num!=0);
    if(sum==temp)
    cout<<temp<<" is an Armstrong number";
    else
    cout<<"Not an Armstrong number";
    return 0;
}