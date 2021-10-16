#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    if (a.size()>b.size())swap(a,b);
    int ans = 0;
    for (int i = 0; i < a.size()-1; ++i) {
        string subA = a.substr(i,2);
        string temp = b;
        int it = temp.find(subA);
        while (it!=string::npos){
            string x = a.substr(i);
            string y = b.substr(it);
            int findfirst = 0;
            while (findfirst<x.size() && findfirst < y.size() && x[findfirst]==y[findfirst])findfirst++;
            ans = ans < findfirst?findfirst:ans;
            if (it+1>temp.size()) temp = y.substr(it+1);
            else break;
            it = temp.find(subA);
        }
    }
    cout << ans;
    return 0;
}
