//
//
//
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool cmp(string a,string b){
    return a>b;
}

int main(){


    int n;
    cin >> n;
    vector<string> vet;
    for (int i = 0; i < n; ++i) {
        string a;
        cin >> a;
        vet.push_back(a);
    }
    sort(vet.begin(),vet.end(), cmp);
    string ans = "";
    for (int i = 0; i < vet.size(); ++i) {
        ans += vet[i];
    }
    cout << ans;
    return 0;
}
