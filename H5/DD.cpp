#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main() {
    map<string,int> mp;
    int n;
    cin >> n;
    while (n--){
        int a,b;
        string str;
        cin >> a >> b >> str;
        int ans = 0;
        for (int i = 0; i < str.size() - a + 1; ++i) {
            string sub = str.substr(i,a);
            if (mp[sub]!=1){
                ans++;
                mp[sub]=1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
