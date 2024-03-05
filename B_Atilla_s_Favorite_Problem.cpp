#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mx= 0;
        for(int i = 0; i < n; i++){
            mx = max(mx,s[i]- 'a' + 1);
        }

        cout << mx << '\n';

    }
    return 0;
}