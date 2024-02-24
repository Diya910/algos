#include<iostream>
using namespace std;
int main(){
    int revN = 0 ;
    int n;
    cout<<"enter the no."<<endl;
    cin>> n ;
    while (n>0){
        int lastDigit = n%10;
        n = n/10;
        revN = (revN * 10) + lastDigit;
    }
    cout<<"Reverse no. is "<<revN;
    return 0 ;
}