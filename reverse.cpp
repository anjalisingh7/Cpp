//Reverse of a number
#include<iostream>
using namespace std;
int main(){
    int num,reverse=0,rem;
    cout<<"Enter the number: ";
    cin>>num;
    do{
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }while(num!=0);
    cout<<"The reverse of the number is: ";
    cin>>reverse;
    return 0;
}