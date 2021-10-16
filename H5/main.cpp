#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a;
    for (int i = 0; i < 5; ++i) {
        a.push_back(i);
    }
    vector<int> b;

    for (int i = 7; i < 15; ++i) {
        b.push_back(i);
    }
    b = a;

    return 0;
}
