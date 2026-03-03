#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;

// int main(){
//     vector<int> vec; // no sizegiven so has size 0
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     vec.push_back(6);
//     vec.pop_back();

//     cout << vec.size()<< endl;
//     cout << vec.capacity()<< endl;

//     for(int val : vec){
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

// int main(){
//     vector<int> vec = {1,2,3,4,5};
//     // .erase() need iterator as input
//     // vec.erase(vec.begin());  //erase first element
//     // // to delete at index 2  
//     // vec.erase(vec.begin()+2);

//     vec.erase(vec.begin()+1,vec.begin()+3);
//     vec.insert(vec.begin()+2,100);

//     for(int val : vec){
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }


// int main(){
//     vector<int> vec = {4,6,2,9,7,4};
    
    
//     // vector<int>::iterator it;
//     // // forward loop
//     // for(it = vec.begin(); it != vec.end(); it++){ // similar to for each loop
//     //     cout << *(it) << " ";
//     // }
//     // cout<< endl;

//     // vector<int>:: reverse_iterator it2;
//     // for(it2 = vec.rbegin(); it2 != vec.rend(); it2++){
//     //     cout << *(it2) << " ";
//     // }

//     // we can make iterator inside loop only

//     for(vector<int>:: reverse_iterator it = vec.rbegin(); it != vec.rend(); it++){
//         cout << *(it) << " ";
//     }
//     cout << endl;

//     // simply we can give auto to identify which loop it could go

//     for(auto it2 = vec.rbegin(); it2 != vec.rend(); it2++){
//         cout << *(it2) << " ";
//     }

//     return 0;
// }

// // list
// int main(){
//     list<int> l = {1,2,3};

//     l.push_back(7);
//     l.push_back(9);
//     l.push_front(19);
//     l.emplace_front(3);

//     l.pop_back();
//     l.pop_front();

//     for(int val : l){
//         cout << val << " ";
//     }

//     return 0;
// }


// Deque (Tmplemented internally as dynamic arrays)
// int main(){
//     deque<int> d = {1,2,3};

//     d.push_back(7);
//     d.push_back(9);
//     d.push_front(19);
//     d.emplace_front(3);

//     d.pop_back();
//     d.pop_front();

//     for(int val : d){
//         cout << val << " ";
//     }

//     cout << endl;
//     cout<< d[2];

//     return 0;
// }

// Pair

// int main(){
//     pair<int, int> p = {4,7};

//     cout << p.first << endl;
//     cout << p.second << endl;

//     pair<char, int> p2 = {'a',1};

//     pair<int, pair<int, int>> p3 = {1,{2,4}};

//     cout << p3.first << endl;
//     // cout << p3.second << endl; //will give error

//     cout << p3.second.first << endl;

//     vector<pair<int,int>> vec = {{1,2},{3,5},{7,2},{35,2}};

//     for(pair<int,int> p : vec){
//         cout << p.first << " ";
//         cout << p.second << endl;
//     }

//     vec.push_back({4,5}); //assumes already created object 
//     // or we can use emplace back

//     vec.emplace_back(11,5); //in-place object creation

//     for(pair<int,int> p : vec){
//         cout << p.first << " ";
//         cout << p.second << endl;
//     }

//     return 0;
// }


// Stack LIFO

// int main(){
//     stack<int> s;

//     s.push(1);
//     s.push(2);
//     s.push(3);

//     // cout<< "Top Value " << s.top()<< endl;

//     // s.pop();// remove top element

//     while(!s.empty()){ //s.empty check if my stack is empty
        
//         cout << s.top() << " ";
//         s.pop(); 

//     }

//     cout << endl;


//     return 0;
// }

// Queue FIFO

// int main(){
//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);

//     while(!q.empty()){
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;
    
//     return 0;
// }

// Priority Queue (highest priority out)

// int main(){
//     priority_queue<int> q;

//     q.push(3);
//     q.push(5);
//     q.push(2);
//     q.push(10);

//     while(!q.empty()){
//         cout << q.top() << " ";
//         q.pop();
//     }
//     cout << endl;
    
    

//     // rev priority queue
//     priority_queue<int, vector<int>, greater<int>> pq;
//     pq.push(3);
//     pq.push(5);
//     pq.push(2);
//     pq.push(10);

//     while(!pq.empty()){
//         cout << pq.top() << " ";
//         pq.pop();
//     }
//     cout << endl;

//     return 0;
// }

// int main(){

//     map<string, int> m;
//     m["tv"] = 100;
//     m["laptop"] = 100;
//     m["headphone"] = 50;
//     m["tablet"] = 120;
//     m["watch"] = 50;
//     m.insert({"camera",25});
//     m.emplace("phone",10);

//     for(auto p : m){ // will be lexicographically ascending order of keys
//         cout << p.first << " " << p.second<< endl;

//     }

//     if(m.find("camera")!= m.end()){
//         cout << "camera exist as key."<< endl; 
//     }else{
//         cout << "camera does not exist as key."<< endl;
//     }

//     return 0;
// }

// Multi Map

// int main(){
//     multimap<string, int> mm;

//     mm.insert({"tv",100});
//     mm.emplace("laptop",50);
//     mm.emplace("laptop",50);
//     mm.emplace("laptop",50);
//     mm.emplace("laptop",50);
    
//     for(auto p:mm){
//         cout << p.first << " "<<p.second<< endl;
//     }// will print laptop 4 times

//     // mm.erase("tv"); // will erase all tv
//     mm.erase(mm.find("laptop")); //will erase tv of given iterator
//     cout << "after erase using iterator"<< endl;

//     for(auto p:mm){
//         cout << p.first << " "<<p.second<< endl;
//     }// will print laptop 3 times
//     return 0;
// }


// int main(){
//     unordered_map<string, int> mm; // need to include container

//     mm.insert({"tv",100});
//     mm.emplace("laptop",50);
//     mm.emplace("fridge",50);
//     mm.emplace("phone",50);
//     mm.emplace("charger",50);
    
//     for(auto p:mm){
//         cout << p.first << " "<<p.second<< endl;
//     }// will print laptop 4 times

//     // mm.erase("tv"); // will erase all tv
//     mm.erase(mm.find("laptop")); //will erase tv of given iterator
//     cout << "after erase using iterator"<< endl;

//     for(auto p:mm){
//         cout << p.first << " "<<p.second<< endl;
//     }// will print laptop 3 times
//     return 0;
// }

// set

// int main(){
//     set<int> s;

//     s.insert(1);
//     s.insert(6);
//     s.insert(3);
//     s.insert(7);
//     s.insert(1);
//     s.insert(69);

//     cout << "lower bound = " << *(s.lower_bound(6)) << endl; //6
//     cout << "upper bound = " << *(s.upper_bound(6)) << endl; //6
    
//     for(auto val:s){
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

bool comparator(pair<int,int> p1, pair<int, int> p2){ //assume p1 comes before p2
    if(p1.second < p2.second) return true;
    else return false;

}
bool comparator2(pair<int,int> p1, pair<int, int> p2){ //assume p1 comes before p2
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second); return false;

    if(p1.first < p2.first) return true;
    else return false;
}

// algorithms

int main(){

    int arr[5] = {2,64,1,6,3};
    sort(arr, arr+5);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    cout << "in vectors "<< endl; 
    vector<int> vec = {2,64,1,6,3};
    sort(vec.begin(), vec.end());
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    cout << "for decscending "<< endl; 
    vector<int> vec2 = {2,64,1,6,3};
    sort(vec2.begin(), vec2.end(),greater<int>());
    for(int val : vec2){
        cout << val << " ";
    }
    cout << endl;

    cout << "for pairs" << endl;
    
    vector<pair<int,int>> vec3 = {{3,1},{2,1},{7,1},{5,2}};

    sort(vec3.begin(), vec3.end()); // by default use use p.first to sort
    for(auto p : vec3){
        cout << p.first << " "<< p.second<<endl;
    }
    cout << endl;

    // to sort based for second wee need to define cutom comparator

    cout << "using custom comparator for second element "<< endl;

    sort(vec3.begin(), vec3.end(),comparator); 
    for(auto p : vec3){
        cout << p.first << " "<< p.second<<endl;
    }
    cout << endl;

    return 0;
}