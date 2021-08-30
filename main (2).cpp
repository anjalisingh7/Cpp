
//to check if number is positive or negative
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>0){
        cout<<"It is positive";
    }
    else if( n<0){
        cout<<"It is negative";
        
    }
    else{
        cout<<"Neither positive nor negative";
    }

    return 0;
}

