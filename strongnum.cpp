//Check whether a number is a strong number
#include<iostream>
using namespace std;
int main()
{
   int num;
   cout<<"Enter the number";
   cin>>num;
   int sum=0,nop,rem;
   nop=num;
   while(num)
   {
       rem=num%10;
       int fact=1;
       for(int i=rem;i>0;i--){
           fact=fact*i;
       }
       sum=fact+sum;
       num=num/10;

   }
   if(nop==sum){
       cout<<nop<<"is a strong number";
   }
   else{
       cout<<"It's not a strong number";
   }
   return 0;
}
