#include<bits/stdc++.h>
using namespace std;

int n, a[10001];

void SinhHoanVi(int n){
    for (int i = 1; i <= n; i++)
        a[i] = i;
    while (1){
        for (int j = 1; j <= n; j++)
            cout << a[j];
        cout << " ";
        int i = n - 1;
        while (i > 0 && a[i] > a[i+1]) // i lon nhat khi a[i] < a[i+1]
            i--;
        if (i == 0){
            return;
        }
        int k = n;
        while (a[i] > a[k]) // a[k] be nhat trong a[k] > a[i], k > i
            k--;
        // doi cho a[i] voi a[k]
        int tg = a[i];
        a[i] = a[k];
        a[k] = tg;
        // doi cho cac phan tu tu a[j+1] -> a[n]
        int l = i + 1;
        int r = n;
        while (l < r){
            tg = a[l];
            a[l] = a[r];
            a[r] = tg;
            l++; r--;
        }
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        cin >> n;
        SinhHoanVi(n);
        cout << endl;
    }
}