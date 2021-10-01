//Find the sum of digits in a number
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the number";
    cin>>num;
    do{
        sum+= num %10;
        num=num/10;

    }while(num!=0);
    cout<<"The sum of number is"<<sum;
    return 0;
