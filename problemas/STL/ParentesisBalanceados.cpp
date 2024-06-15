#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    long long t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        stack<char> pila;

        bool f = 1;

        for(auto c: s){
            if(c == '(' || c == '[' || c == '{'){
                pila.push(c);
            }
            else{
                if(pila.empty()){
                    f = 0;
                    break;
                }

                if (c == ')'){
                    if(pila.top() == '('){
                        pila.pop();
                    }
                    else{
                        f = 0;
                        break;
                    }
                }
                else if (c == ']'){
                    if(pila.top() == '['){
                        pila.pop();
                    }
                    else{
                        f = 0;
                        break;
                    }
                }
                else if (c == '}'){
                    if(pila.top() == '{'){
                        pila.pop();
                    }
                    else{
                        f = 0;
                        break;
                    }
                }
            }
        }

        if (f && pila.empty()){
            cout << "SI\n";
        }
        else{
            cout << "NO\n";
        }
    }


    return 0;
}