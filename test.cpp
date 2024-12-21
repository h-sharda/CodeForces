// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        long long count = 0;
        long long loop = 0;
        long long power = 1;
        long long limit = (r2+l1-1)/l1;

        for(long long power = 1; power <= limit; power*=k){

            long long mini = power*l1;
            long long maxi = power*r1;
            if(maxi >=l2 && mini<=r2){
                long long start = max(mini,l2);
                long long end = min(maxi,r2);
                count = count + (end-start +power)/power;
            }
        }
            
        cout << count << endl;
        
    }
}