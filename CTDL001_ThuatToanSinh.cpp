#include<bits/stdc++.h>
using namespace std;

int n, N, a[100];

void xuat(){
    for(int i = 1; i <= N; i++)
        cout << a[i] << " ";
    for(int i = n/2; i >= 1; i--)
        cout << a[i] << " ";
    cout << endl;
}

void SinhNhiPhan (int n){
    for (int i = 0; i < n; i++) 
        a[i] = 0;
    while(1){
        xuat();
        int i = n;
        while (i > 0 && a[i] == 1){
            a[i] = 0;
            i--;
        }
        if (i == 0) return;
        else a[i] = 1;
    }
}

int main(){
    cin >> n;
    if(n % 2) N = n/2 + 1;
    else N = n/2;
    SinhNhiPhan(N);
    // xuat();
}



// #include <iostream>

// using namespace std;
// int n,N,a[100];
// void xuat()
// {
//     for(int i=1;i<=N;i++)
//         cout<<a[i]<<" ";
//     for(int i=n/2;i>=1;i--)
//         cout<<a[i]<<" ";
//     cout<<endl;
// }
// void binary(int i) {
//     if(i==N+1)
//         xuat();
//     else
//         {
//             for(int j=0;j<=1;j++)
//                 {
//                     a[i]=j;
//                     binary(i+1);
//                 }
//         }
  
// }

// int main() {
  
//   cin >> n;
//   if(n%2)
//     N=n/2+1;
//     else
//     N=n/2;
//   binary(1);
//   return 0;
// }