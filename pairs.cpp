#include <iostream>
using namespace std;

void explainpair(){
    pair <int, int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair <int, pair<int,int>> p1 = {1, {3,4}};
    cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;
    pair<int, int> arr[] = {{1,2}, {2, 5}, {7, 8}};
    cout<<arr[2].first<<endl;
}
int main(){
    explainpair();
    return 0;
}
