#include<bits/stdc++.h>
using namespace std;

int n;
string a;
vector<string> vt;

void SinhHoanVi(int n){
    a = "";
    for (int i = 1; i <= n; i++)
        a += to_string(i);
    while (1){
        // for (int j = 1; j <= n; j++)
        //     cout << a[j];
        // cout << " ";
        vt.push_back(a);
        //for (int k = 1; k <= n; k++){
        int i = n - 2;
        while (i > -1 && a[i] > a[i+1]) // i lon nhat khi a[i] < a[i+1]
            i--;
        if (i == -1){
            return;
        }
        int k = n-1;
        while (a[i] > a[k]) // a[k] be nhat trong a[k] > a[i], k > i
            k--;
        // doi cho a[i] voi a[k]
        int tg = a[i];
        a[i] = a[k];
        a[k] = tg;
        // doi cho cac phan tu tu a[j+1] -> a[n-1]
        int l = i + 1;
        int r = n-1;
        while (l < r){
            tg = a[l];
            a[l] = a[r];
            a[r] = tg;
            l++; r--;
        }
    }
}

void solve(){
    cin >> n;
    //a.resize(n);
    vt.clear();
    SinhHoanVi(n);
    reverse(vt.begin(), vt.end());
    for (string i : vt) 
        cout << i << " ";
}

int main(){
    int t; cin >> t;
    while (t--){
        solve();
        cout << endl;
    }
    return 0;
}