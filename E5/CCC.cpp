#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    while (cin >> n){
        vector<int> vet;
        for (int i = 0; i < n; ++i) {
            char c; int a;
            cin >> c >> a;
            if (c == 'I'){
                vet.push_back(a);
                sort(vet.begin(),vet.end());
            } else{
                cout << vet[vet.size()-a]<<endl;
            }
        }
    }
    return 0;
}
