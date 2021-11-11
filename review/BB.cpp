//
//
//

#include <stack>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    stack<char> stk;
    char c;
    c = getchar();
    bool flag = true;
    while (true){
        if (c == '@'){
            break;
        }
        if (c==')' || c=='('){
            stk.push(c);
            break;
        }
        c = getchar();
    }
    c = getchar();
    while (c!='@'){

        if (c=='('){
            stk.push(c);
        }else if (c==')'){
            if (stk.empty()){
                flag = false;
            }else{
                c = stk.top();
                if (c == '('){
                    stk.pop();
                } else{
                    stk.push(c);
                }
            }
        }

        if (!flag) break;

        c = getchar();
    }

    if (flag){
        if (stk.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }else cout << "NO" << endl;

     return 0;
}
