#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, m, k;
        cin >> n >> m >> k; 
        int a[n+5], b[m+5], c[k+5]; 
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<m; i++)
            cin >> b[i];
        for(int i=0; i<k; i++)
            cin >> c[i];
        int i=0, j=0, l=0, count=0;
        while(i<n && j<m && l<k){
            if(a[i]==b[j] && b[j]==c[l]){
                cout << a[i] << ' ';
                count++;
                i++;
                j++;
                l++;
            }
            else if(a[i]<b[j])
                i++;
            else if(b[j]<c[l])
                j++;
            else
                l++;
        }
        if(count==0)
            cout << "NO";
        cout << endl;
    }
    return 0;
}