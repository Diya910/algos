#include<bits/stdc++.h>

using namespace std;

void print1(int x){
for (int i = 0; i < x; i++)
   {
       char ch = 'A' + x - 1;
       for (char j = ch - i; j <= ch; j++)
       {
        cout << j << " ";
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