#include<bits/stdc++.h>
using namespace std;

int n; 
char a[1001];

void SinhNhiPhan(){
    for (int i = 1; i <= n; i++)
        a[i] = 'A';
    while(1){
        for (int i = 1; i <= n; i++)
            cout << a[i];
        cout << " "; 
        int i = n;
        while (i > 0 && a[i] == 'B'){
            a[i] = 'A';
            i--;
        }
        if (i == 0) return;
        else a[i] = 'B';
    }
}

int main (){
    int t; cin >> t;
    while(t--){
        cin >> n;
        SinhNhiPhan();
        cout << endl;
    }
}