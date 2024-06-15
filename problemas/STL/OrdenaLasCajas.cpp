#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    long long n;
    cin >> n;

    vector<pair<pair<long long, long long>, long long>> v;

    for(long long i = 0; i < n; i++){
        long long x, y;
        cin >> x >> y;
        v.push_back({{x, y}, i+1});
    }

    sort(v.begin(), v.end(), [](pair<pair<long long, long long>, long long> &a, pair<pair<long long, long long>, long long> &b){
        if (a.first == b.first){
            return a.second < b.second;
        }
        if (a.first.first == b.first.first){
            return a.first.second > b.first.second;
        }
        return a.first.first < b.first.first;
    });

    for(auto x: v){
        cout << x.second << " ";
    }
    cout << '\n';

    return 0;
}