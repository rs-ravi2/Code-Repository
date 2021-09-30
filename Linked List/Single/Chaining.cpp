#include <bits/stdc++.H>
using namespace std;

struct myHash{
    int bucket;
    list<int>* table;
    myHash(int b){
        bucket = b;
        table = new list<int> [bucket];
    }
    void insert(int key){
        int i = key % bucket;
        table[i].push_back(key);
    }
    bool search(int key){
        int i = key % bucket;
        for(auto x:table[i]){
            if(x == key)    return true;
        }
        return false;
    }
    void remove(int key){
        int i = key % bucket;
        table[i].remove(key);
    }
};

int main(){
    myHash mh(7);
    mh.insert(10);
    mh.insert(20);
    mh.insert(15);
    mh.insert(7);
    cout << mh.search(10) << endl;
    mh.remove(15);
    cout << mh.search(15);
    return 0;
}