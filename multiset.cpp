#include<iostream>
#include<set>
using namespace std;

void explainMultiset(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    cout << "After inserting three 1s: ";
    for(auto x : ms) cout << x << " ";
    cout << endl;
    // Remove one occurrence of 1
    ms.erase(ms.find(1));

    cout << "After erasing one 1: ";
    for(auto x : ms) cout << x << " ";
    cout << endl;

    // Remove next two occurrences
    auto it = ms.find(1);
    ms.erase(it, next(it, 2));

    cout << "After erasing next two 1s: ";
    for(auto x : ms) cout << x << " ";
    cout << endl;
}
int main(){
    explainMultiset();
    return 0;
}
