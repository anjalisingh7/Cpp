//Fibonacci upto nth term
#include<iostream>
using namespace std;
int main()
{
    int n,next,i,first=0,second=1;
    cout<<"Enter n: ";
    cin>>n;
     for(i=0;i<=n;i++){
         if(i<=1)
            next=i;
         else{
            next=first+second;
            first=second;
            second=next;
         } 
         cout<<next<<" ";
     }
     return 0;
     
}