#include<bits/stdc++.h>

using namespace std;

void print1(int x){
for (int i = 0; i < x; i++)
   {
       for (char ch = 'A'; ch <= 'A' + (x-i-1) ; ch++)
       {
         cout << ch << " ";
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