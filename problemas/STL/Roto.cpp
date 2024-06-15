#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    string s;
    getline(cin, s);

    deque<char> ans;

    bool ini = 0, fin = 1;
    string aux = "";

    for(auto c: s){
        if (c == '['){
            if (fin){
                for(auto x: aux){
                    ans.push_back(x);
                }
            }
            if (ini){
                reverse(aux.begin(), aux.end());
                for(auto x: aux){
                    ans.push_front(x);
                }
            }

            aux = "";

            ini = 1;
            fin = 0;
            continue;
        }
        if (c == ']'){
            if (ini){
                reverse(aux.begin(), aux.end());
                for(auto x: aux){
                    ans.push_front(x);
                }
                aux = "";
            }
            ini = 0;
            fin = 1;
            continue;
        }
        aux.push_back(c);
    }

    if (fin){
        for(auto x: aux){
            ans.push_back(x);
        }
    }
    else{
        reverse(aux.begin(), aux.end());
        for(auto x: aux){
            ans.push_front(x);
        }
    }

    for(auto c: ans){
        cout << c;
    }
    cout << '\n';

    return 0;
}