#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    long long n, k;
    cin >> n >> k;

    map<string, vector<string>> mp;

    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        string sorig;
        cin >> sorig;
        mp[sorig].push_back(sorig);
        for(long long j = 0; j < x-1; j++){
            string s;
            cin >> s;
            mp[sorig].push_back(s);
        }
    }

    string ans = "";

    for(long long i = 0; i < k; i++){
        string s;
        cin >> s;
        
        for(auto x: mp[s]){
            if (x.size() < s.size()){
                s = x;
            }
        }

        ans += s + " ";
    }

    cout << ans << '\n';

    return 0;
}