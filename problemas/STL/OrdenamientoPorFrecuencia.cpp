#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    long long n;
    cin >> n;

    map<long long, long long, greater<long long>> mp;

    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        mp[x]++;
    }

    vector<pair<long long, long long>> v;
    for(auto x: mp){
        v.push_back({x.first, x.second});
    }

    sort(v.begin(), v.end(), [](pair<long long, long long> a, pair<long long, long long> b){
        if (a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    });

    for(auto x: v){
        for(long long i = 0; i < x.second; i++){
            cout << x.first << " ";
        }
    }
    cout << '\n';

    return 0;
}