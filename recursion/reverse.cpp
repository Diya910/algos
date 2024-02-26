#include <bits/stdc++.h>

using namespace std;

void func(int i){
    if(i>=1){
    cout<<i<<endl;
    i--;
    func(i);}
    return;
}

int main(){
    int n;
    cin>>n;
    int i = n;
    func(i);
}