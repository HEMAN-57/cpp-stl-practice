#include<iostream>
#include<vector>
using namespace std;
void explainVector(){
    vector<int> v(3);
    v.at(0) = 12;
    v.at(1) = 24;
    v.at(2) = 45;
    v.emplace_back(1);
    v.emplace_back(2);
    auto original = v;
    // v contains {12, 24, 45, 1, 2} indexing is from 0 to 4.
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<" "<<"1st output(12th line)"<<endl;
    vector<pair<int, int>> vec;
    vec.emplace_back(1,2);
    cout<<vec[0].second<<endl;
    vector<int> v1(5, 20);
    vector<int> v2(v1);
    //size can be changed dynamically in vectors at any point of time
    // even if first we emplace 1 and then we want to increase,
    // then also the size can be increased by writing the 10th line next.
    cout<<v2.at(2)<<"-"<<"2nd output(21st line)"<<endl;
    auto it = v.begin();
    it = it+2;
    cout<< *(it)<<"-"<<"3rd output(24th line)"<<endl;
    cout<<v.at(4)<<"-"<<"4th output(25th line)"<<endl;
    cout<<v.back()<<"-"<<"5th output(26th line)"<<endl;
    for(auto it = v.begin(); it!=v.end();it++){
        cout<<*(it)<<" "<<endl;
    }
    cout<<"6th output(30th line)"<<endl;
    for(auto it : v){
        cout<< it<<endl;
    }
    cout<<"7th output(34th line)"<<endl;
    // ERASE FUNCTION
    v.erase(v.begin());
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;
    }
    cout<<"8th output(39th line)"<<endl;
    v.erase(v.end()-1);
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;
    }
    cout<<"9th output(44th line)"<<endl;
    v.erase(v.begin()+1, v.end()-1);
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;
    }
    cout<<"10th output(49th line)"<<endl;
    v = original;
    for(auto it = v.begin();it != v.end();it++){
        cout<<*(it)<<endl;
    }
    cout<<"11th output(55th line)"<<endl;
    // INSERT FUNCTION
    v.insert(v.begin()+1,2, 300);// v.insert(v.begin()+1300) inserts 300 once
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;
    }
    cout<<"12th output(62nd line)"<<endl;
    vector<int> v3(2, 50); // v3 contains {50,50}
    v.insert(v.begin(), v3.begin(), v3.end());
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;
    }
    cout<<"13th output(68th line)"<<endl;
    //SIZE FUNCTION
    cout<<v.size()<<"-"<<"14th output(70th line)"<<endl;
    v = original;
    cout<<v.size()<<"-"<<"15th output(72nd line)"<<endl;
    //POP BACK FUNCTION(removes the last element)
    v.pop_back();
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    cout<<"16th output(78th line)"<<endl;
    // SWAP FUNCTION
    v.swap(v3);
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    cout<<"17th output(84th line)"<<endl;
    // CLEAR FUNCTION
    v.clear();
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    cout<<"18th output(90th line)"<<endl;
    // EMPTY FUNCTION
    cout<<v.empty()<<endl;
    v = original;
    cout<<v.empty()<<endl;
}
// auto is used in case of vector<int>::iterator (shortcut).
int main(){
    explainVector();
    return 0;
}
