#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"The factors of "<<num<<"are: ";
    for(i=1;i<=num;i++){
      if(num%i==0)
       cout<<i<< "\t";
    }
    return 0;
}