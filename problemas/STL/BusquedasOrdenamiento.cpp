#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    long long n;
    cin >> n;

    set<long long> impar, par;

    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;

        if (x % 2 == 0){
            par.insert(x);
        }
        else{
            impar.insert(x);
        }
    }

    long long m;
    cin >> m;

    for(int i = 0; i < m; i++){
        string s;
        cin >> s;

        if(s == "EXISTE"){
            long long k;
            cin >> k;

            if (par.count(k) || impar.count(k)){
                cout << "1\n";
            }
            else{
                cout << "0\n";
            }
        }
        else{
            for(auto x: par){
                impar.insert(x+3);
            }
            par.clear();
        }
        
    }

    return 0;
}