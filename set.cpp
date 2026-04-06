#include<iostream>
#include<set>
using namespace std;
void explainSet(){
    set<int> st;
    st.emplace(1);
    st.emplace(2);
    st.emplace(2);
    st.emplace(4);
    st.emplace(3);
    for(auto it = st.begin();it!=st.end();it++){
        cout<<*it<<endl;
    }
    auto it2 = st.find(57);
    if(it2!=st.end()){
        cout<<*it2<<endl;
    }
    else{
        cout<<"Element not found."<<endl;
    }
    auto cnt = st.count(9);
    cout<<cnt<<endl;
    auto lb = st.lower_bound(2);
    cout<<*lb<<endl;
    auto ub = st.upper_bound(4);

    cout<<*ub<<endl;
}
int main(){
    explainSet();
    return 0;
}
