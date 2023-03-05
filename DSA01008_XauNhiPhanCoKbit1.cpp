#include<bits/stdc++.h>
using namespace std;

int n, k, a[10000];

void Sinh(int i){
    for (int j = 0; j <= 1; j++){
        a[i] = j;
        if (i == n){
            int dem = 0;
            for (int x = 1; x <= n; x++)
                if (a[x] == 1) dem++;
            if (dem == k){
                for (int x = 1; x <= n; x++)
                    cout << a[x];
                cout << endl;
            }
        }
        else Sinh(i+1);
    }
}

int main(){
    int t; cin >> t;
    while (t--){
        cin >> n >> k;
        Sinh(1);
    }
    return 0;
}