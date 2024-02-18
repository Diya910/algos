#include<bits/stdc++.h>

using namespace std;

void print1(int x){
   for (int i = 0; i < x; i++)
   {
      for (int j = 0; j <= i; j++)
      {
        cout<<"*";
      }
      for (int j = 0; j < 2*(x-i-1); j++)
      {
        cout<<" ";
      }
      for (int j = 0; j <= i; j++)
      {
        cout<<"*";
      }
       
       cout<<endl;
   }
   for (int i = 0; i < x; i++)
   {
      for (int j = 1; j < x-i; j++)
      {
        cout<<"*";
      }
      for (int j = 0; j < 2*i+2; j++)
      {
        cout<<" ";
      }
      for (int j = 1; j < x-i; j++)
      {
        cout<<"*";
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