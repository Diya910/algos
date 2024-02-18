#include<bits/stdc++.h>

using namespace std;

void print1(int x){
for (int i = 0; i <= 2*x-1; i++)
   {
       int stars = i;
       if(i > x) stars = 2*x - i; 
       for(int j = 1 ; j<=stars ; j++){
        cout << "* ";
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