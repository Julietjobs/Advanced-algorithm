#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n,m;
    while (cin >> n >> m){
        vector<int> vet;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            vet.push_back(a);
        }
        vector<int> ans;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                ans.push_back(vet[i]+vet[j]);
            }
        }
        sort(ans.begin(),ans.end(),greater<int>());
        for (int i = 0; i < m; ++i) {
            cout << ans[i] << endl;
        }
    }
    return 0;
}
