#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> vec;
    string n;
    getline(cin,n);
    while (n != ""){
       vec.push_back(n);
       getline(cin,n);
    }

    while (cin >> n){
        int len = n.size();
        int ans = 0;
        for (int i = 0; i < vec.size(); ++i) {
            if (len<=vec[i].size() && vec[i].substr(0,len) == n){
                ans++;
            }
        }
        cout << ans << endl;
    }

}
