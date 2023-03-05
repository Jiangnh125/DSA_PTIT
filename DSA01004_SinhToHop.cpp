#include<bits/stdc++.h>
using namespace std;

int n, k, a[10001];

void SinhToHop (int n, int k, int a[10001]){
    for (int i = 1; i <= n; i++)
        a[i] = i;
    while(1){
        for (int j = 1; j <= k; j++)
            cout << a[j];
        cout << " ";
        int i = k;
        while (i > 0 && a[i] == n - k + i)
            i--;
        if (i == 0){
            return;
        }
        a[i]++;
        for (int j = i+1; j <= n; j++)
            a[j] = a[i] + j - i;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        SinhToHop(n, k, a);
        cout << endl;
    }
}