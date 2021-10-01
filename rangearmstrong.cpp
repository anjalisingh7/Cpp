//Find Armstrong numbersw within a given range
#include<iostream>
#include<math.h>
using namespace std;
void armstrong(int num)
{ 
    int sum=0,rem;
    int temp=num;
    do{
        rem=num%10;
        sum=sum+pow(rem,3);
        num/=10;
        
    }while(num>0);
    if(temp==sum)
    cout<<temp<<"\t";
}
int main()
{
    int lower_limit,upper_limit,i;
    cout<<"Enter the range: "<<endl;
    cin>>lower_limit>>upper_limit;
    cout<<"The numbers are";
    for(i=lower_limit;i<=upper_limit;i++){
        
       armstrong(i);
    }
    return 0;
}