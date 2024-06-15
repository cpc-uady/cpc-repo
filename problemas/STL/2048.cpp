#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    long long n;
    cin >> n;

    stack<long long> s;

    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;

        while(!s.empty() && s.top() == x){
            s.pop();
            x *= 2;
        }

        s.push(x);
    }

    cout << s.size() << '\n';
    while(!s.empty()){
        cout << s.top() << '\n';
        s.pop();
    }

    return 0;
}