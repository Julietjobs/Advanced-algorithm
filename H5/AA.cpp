#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    while (cin >> a >> b){
        string ans = "";
        for (int i = 0; i < b.size(); ++i) {
            string subB=b.substr(i);
            if (subB == a.substr(0,subB.size())){
                ans = subB;
                break;
            }
        }
        if (ans.size()){
            cout << ans << " " << ans.size() << endl;
        } else cout << ans.size() << endl;
    }
    return 0;
}
