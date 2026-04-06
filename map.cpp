#include<iostream>
#include<map>
using namespace std;

void explainmap(){
    map<int, int> mpp;
    map<pair<int, int>, int> mpp1;

    mpp[1] = 2;
    mpp.emplace(3,1);

    mpp1[{1,2}] = 5;
    mpp1.emplace(make_pair(2,3), 10);

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    for(auto it : mpp1){
        cout << it.first.first << "," 
             << it.first.second << " -> "
             << it.second << endl;
    }
    cout<<mpp[1]<<endl;
    auto it = mpp.find(1);
    cout<<(*it).second;
}

int main(){
    explainmap();
}
