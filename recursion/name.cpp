#include <bits/stdc++.h>

using namespace std;

void fun(int i, int n) {
    if (i > n)
        return;
    cout << "Raj" << endl;
    fun(i + 1, n);
}

int main() {
    int n;
    cin >> n;
    int i = 0;
    fun(i, n);
    return 0;
}