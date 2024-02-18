#include<bits/stdc++.h>

using namespace std;

void print1(int x){
    int start;
for (int i = 0; i < x; i++)
   {
    
    if(i%2 == 0) start = 1;
    else start = 0; 
    for (int j = 0; j <= i; j++)
    {
        cout << start;
        start = 1-start;
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