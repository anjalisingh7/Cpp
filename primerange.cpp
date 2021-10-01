//Find prime numbers within a given range
#include<iostream>
#include<math.h>
using namespace std;

void prime(int num){
    int i;
    bool flag=0;
   for(i=2;i<=sqrt(num);i++)
    {
        
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<num<<endl;
    }
}
int main()
{
    int lower_limit, upper_limit,i;
    cout<<"Enter the range:"<<endl;
    cin>>lower_limit>>upper_limit;
    for(int i=lower_limit;i<=upper_limit;i++){
        prime(i);
    }
    return 0;
}