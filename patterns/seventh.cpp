#include<bits/stdc++.h>

using namespace std;

void print1(int x){
    int space = 2 * (x-1);
for (int i = 1; i <= x; i++)
   {
       for (int j = 1; j <= i; j++)
       {
        cout << j ;
       }
       for (int j = 0; j < space ; j++)
       {
        cout << " ";
       }
       
       for (int j = i; j >= 1; j--)
       {
        cout << j ;
       }
            
       cout<<endl;
       space -= 2;
   }
   
}

int main(){
    int x; 
    cin >> x;
    print1(x);
    return 0;
}