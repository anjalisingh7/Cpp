//sum of numbers in the given range
#include<iostream>
using namespace std;
int main()
{
    int upper_limit,lower_limit;// upper limit and lower limit
    int sum=0,i;
    cout<<"Enter lower limit";
    cin>>lower_limit;
    cout<<"Enter upper limit";
    cin>>upper_limit;
    for(i=lower_limit;i<=upper_limit;i++){
        sum=sum+i;
    }
    cout<<"The sum of"<<lower_limit<<"to"<<upper_limit <<"is"<<sum;
    return 0;
}