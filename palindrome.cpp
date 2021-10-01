//Tell if a number is palindrome or not
#include<iostream>
using namespace std;
int main()
{
    int num,rem,temp,reverse =0;
    cout<<"Enter the number: ";
    cin>>num;
    temp=num;
    do{
         rem=num%10;
         reverse=(reverse*10)+rem;
         num=num/10;

    }while(num!=0);
    cout<<"Reverse of"<<temp<<"is"<<reverse;
    if(reverse==temp){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }
    return 0;
}

