#include<bits/stdc++.h>
using namespace std;

string s;

void SinhNhiPhan(){
    int n = s.length();
    for (int i = n - 1; i >= 0; i--){
        if(s[i] == '0'){
            s[i] = '1';
            for (int j = i+1; j < n; j++)
                s[j] = '0';
            break;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> s;
        SinhNhiPhan();
        cout << s << endl;
    }
}