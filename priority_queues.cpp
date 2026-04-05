#include<iostream>
#include<queue>
using namespace std;
void explainPQ(){
    priority_queue<int> pq;
    pq.emplace(5);
    pq.push(2);
    pq.emplace(8);
    pq.emplace(10);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top();
}
int main(){
    explainPQ();
    return 0;
}
