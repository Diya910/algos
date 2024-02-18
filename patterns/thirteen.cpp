#include<bits/stdc++.h>

using namespace std;

void print1(int x){
   for (int i = 0; i < 2*x-1; i++)
   {
    for (int j = 0; j < 2*x-1; j++)
   {
      int top = i;
      int left = j;
      int right = 2*(x-1) - j;
      int bottom = 2*(x-1) - i;
      cout<< (x - min(min(top,bottom),min(left,right)))<<" ";
   }
      cout<< endl;
   }
   
}

int main(){
    int x; 
    cin >> x;
    print1(x);
    return 0;
}