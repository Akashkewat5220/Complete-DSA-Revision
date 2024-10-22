#include <bits/stdc++.h>
using namespace std ;

int main()
{
    // vector<int>vec ;

    // vec.push_back(10);
    // vec.push_back(11);
    // vec.push_back(12);
    // vec.push_back(13);
    // vec.emplace_back(14) ;

    // // vec.pop_back() ;
    // // vec.insert(vec.begin() + 2, 100) ;
    // // cout<<*(vec.end()-1)<<endl ;

    // // vector iterators
    // vector<int>:: iterator it ;
    // for(it = vec.begin() ; it != vec.end() ; it++)
    // {
    //     cout<<*it<<" " ;
    // }

    // cout<<endl ;

    // for(int v : vec)
    // {
    //     cout<<v<<" " ;
    // }

    // LIST IN CONTAINERS
    // list<int>l = {1,2,3} ;
    // l.push_back(55) ;
    // l.push_front(55) ;


    // for(auto v : l)
    // {
    //     cout<<v<<" " ;
    // }


    // DEQUE DOBLE ENDED QUEUE
    // deque<int>d = {1,2,3} ;

    // for(auto v : d)
    // {
    //     cout<<v<<" " ;
    // }

    // cout<<endl ;

    // cout<<d[1] ;


    // PAIRS
    // pair<int, string>p = {100, "Akash"};

    // cout<<p.first<<endl ;
    // cout<<p.second<<endl ;

    // pair<int, pair<char, int>>p1 = {1, {'a', 2}};

    // cout<<p1.first<<endl ;
    // cout<<p1.second.first<<endl ;

    // vector<pair<int, int>>vec = {{1,2}, {2,3}, {4,4}} ;
    // vec.push_back({2, 4}) ;  //needed to as a pair in push_back
    // vec.emplace_back(5,6) ; //not needed to send as a pair

    // for(auto p : vec)
    // {
    //     cout<<p.first<<" "<<p.second<<endl ;
    // }



    // STACK
    // stack<int>s ;

    // s.push(1) ;
    // s.push(2) ;
    // s.push(3) ;

    // while(!s.empty()) 
    // {
    //     cout<<s.top()<<" " ;
    //     s.pop() ;
    // }



    // QUEUE
    // queue<int>q ;

    // q.push(1) ;
    // q.push(1) ;
    // q.push(1) ;

    // cout<<q.front()<<endl ;
    // cout<<q.back()<<endl ;



    // PRIORITY QUEUE
    // priority_queue<int, vector<int>, greater<int>>p ;

    // p.push(1) ;
    // p.push(2) ;
    // p.push(3) ;

    // while(!p.empty()) 
    // {
    //     cout<<p.top()<<" " ;
    //     p.pop() ;
    // }



    // MAP
    // map<string, int>m ;

    // m["tv"] = 20 ;
    // m["tvv"] = 30 ;
    // m["tvvv"] = 40 ;

    // m.emplace("tvvvv", 50) ;

    // for(auto p : m)
    // {
    //     cout<<p.first<<" "<<p.second<<endl  ;
    // }



    // SET
    multiset<int>s ;
    s.insert(1) ;
    s.insert(2) ;
    s.insert(3) ;
    s.insert(3) ;

    for(auto p : s)
    {
        cout<<p << " " ;
    }
    cout<<endl ;
    cout<<s.size() ;

}