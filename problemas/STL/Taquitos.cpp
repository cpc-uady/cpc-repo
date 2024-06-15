#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    long long n;
    cin >> n;

    queue<long long> q;

    long long tacos = 0;

    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;

        if (x == 1){
            long long t;
            cin >> t;
            q.push(t);
            continue;
        }

        if (x == 2 && !q.empty()){
            tacos += q.front();
            q.pop();
            continue;
        }

        if (x == 3){
            cout << q.size() << '\n';
            continue;
        }

        if (x == 4){
            cout << tacos << '\n';
            continue;
        }
    }

    return 0;
}