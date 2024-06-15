#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    long long n;
    cin >> n;

    vector<long long> v;

    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    // version alternativa

    // sort(v.rbegin(), v.rend());

    // version alternativa 2

    // sort(v.begin(), v.end(), greater<long long>());

    for(int i = 0; i < n; i++){
        cout << v[i] << '\n';
    }
    
    return 0;
}