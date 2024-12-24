#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> v(n);
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            v[i] = {temp, i};
        }
        
        sort(v.begin(), v.end());

        int swaps = 0;
        vector<bool> visited(n, false);
        
        for (int i = 0; i < n; i++) {
            if (visited[i] || v[i][1] == i ) continue;
            
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = v[j][1];
                swaps++;
            }
            swaps--;
        }

        cout << swaps << endl;
    }
    return 0;
}
