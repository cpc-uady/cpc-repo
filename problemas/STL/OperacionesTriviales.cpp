#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    long long n;
    cin >> n;

    vector<long long> v;

    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        v.push_back(x);
    }

    long long m;
    cin >> m;

    long long sum = 0;

    bool f = 0;

    for(long long i = 0; i < m; i++){
        string s;
        cin >> s;

        if (s == "SUMA"){
            long long k;
            cin >> k;
            sum += k;
        }
        else{
            f = 1;
        }
    }

    for(long long i = 0; i < n; i++){
        v[i] += sum;
    }

    if(f){
        sort(v.begin(), v.end());
    }

    for(long long i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << '\n';
    
    return 0;
}