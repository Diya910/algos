#include<bits/stdc++.h>

using namespace std;

void print1(int x){
   for (int i = 0; i < x; i++)
   {
    for (int j = 0; j < x-i; j++)
    {
        cout<<"* ";
    }
       cout<<endl;
   }
   
}

int main(){
    int x; 
    cin >> x;
    print1(x);
    return 0;
}