#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--){
        string a,b;
        while (cin >> a >> b){
            int ans = 0;
            for (int i = 0; i < b.size()-a.size()+1; ++i) {
                string subB=b.substr(i,a.size());
                if (subB == a){
                    ans ++ ;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
