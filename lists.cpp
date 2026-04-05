#include<iostream>
#include<list>
using namespace std;
void lists(){
    list<int> ls;
    ls.emplace_back(2);
    ls.emplace_back(4);
    ls.emplace_front(5);
    for(auto it = ls.begin();it!=ls.end();it++){
        cout<<*it<<endl;
    }
}
int main(){
    lists();
    return 0;
}
/*LISTS AND VECTORS HAVE EVERY FUNCTION SAME AS IT IS. ONLY THING IS THAT
LISTS USE DOUBLY LL WHILE VECTORS USE SINGLE LL. SO TC OF LISTS IS BETTER
THAN VECTORS. IT CAN BE SEEN THAT IN VECTORS, THERE IS NO SUCH THING WHICH
CAN EMPLACE FRONT BUT IT IS PRESENT IN LISTS*/

