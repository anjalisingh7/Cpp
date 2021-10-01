//Greatest of two numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    if(a>b) {
        cout<<b<<" is greater";
    
    }
    else if(a<b){
        cout<<b<< "is greater";
    }
    else{
    cout<<"both are equal";
    }
    return 0;
}