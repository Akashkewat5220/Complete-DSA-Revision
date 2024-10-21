#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std ;

int main()
{
    // char str[] = {'a', 'b', 'c', '\n'};
    // char str[100] ;
    // cout<<"enter the array :"<<endl ;
    // cin.getline(str, 100, '.') ;

    // cout<<str<<endl ;

    string str = "hey its me" ;
    reverse(str.begin(), str.end()) ;
    cout<<str ;
    return 0 ;
}