#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int a[n+5];
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==k)
                cout << i+1;
        }
        cout << endl;
    }
    return 0;
}