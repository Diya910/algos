#include<bits/stdc++.h>

using namespace std;
/*Eucledian Algorithn
 gcd(a,b) = gcd(a-b,a) a>b
 and the result we derived from this algorithm is using modulo
 */
int gcd(int a , int b){
    while(a>0 && b>0){
        if(a>b) a = a % b;
        else b = b % a;
    }
    if(a==0) return b;
    return a;
}
int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"the gcd of the above two no. is "<<gcd(a,b);
    return 0 ;
}