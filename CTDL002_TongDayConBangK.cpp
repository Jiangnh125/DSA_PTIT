#include<bits/stdc++.h>
using namespace std;

int n, k, a[10000], np[10000];

void SinhNhiPhan(){
    for (int i = n - 1; i >= 0; i--){
        if(np[i] == 0){
            np[i] = 1;
            for (int j = i+1; j < n; j++)
                np[j] = 0;
            break;
        }
    }
}

int KiemTra(){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if (np[i] == 1){
            sum += a[i];
        }
    }
    if (sum == k) return 1;
    else return 0; 
}

void xuat(){
    for (int i = 0; i < n; i++){
        if (np[i] == 1){
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        np[i] = 0;
    }
    int dem = 0;
    int x = pow(2,n) - 1;
    while(x > 0){
        SinhNhiPhan();
        if(KiemTra() == 1){
            xuat();
            dem++;
        }
        x--;
    }
    cout << dem;
}