#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    while (cin >> n){
        map<long long int,int> pai;
        int MAX = 0;
        for (int i = 0; i < n; ++i) {
            long long int a;
            cin >> a;
            pai[a]++;
            MAX = pai[a]>MAX?pai[a]:MAX;
        }
        cout << MAX << endl;
    }
    return 0;
}

