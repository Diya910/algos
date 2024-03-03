#include <bits/stdc++.h>

using namespace std;

void countFreq(int arr[],int n)
{
   unordered_map<int,int> map;

   int maxFreq = 0, minFreq = n;
   int maxEle = 0, minEle = 0;

   for (int i = 0; i < n; i++){
        map[arr[i]]++;
        }
    for (auto it : map){
        int count = it.second;
        int element = it.first;
    }    

       if(count>maxFreq){
        maxFreq = count;
        maxEle = element;
       }

       if (count< minFreq){
        minFreq = count;
        minEle = element;
       }

   }
   cout << "The highest frequency element is: " << maxEle <<"and freq is "<< maxFreq << "\n";
    cout << "The lowest frequency element is: " << minEle <<"and freq is "<< minFreq << "\n";
}

int main(){
   int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}