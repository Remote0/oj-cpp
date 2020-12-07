/*************************************************************************
*File Name   : 218-higjt-sort.cpp
*Author      : Zsl
*mail        : zsl_hfut@163.com
*Created Time: Sat 05 Dec 2020 05:27:03 PM CST
*************************************************************************/
#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    multimap<int,int> people; 
    int hight;
    
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> hight;
        people.insert({hight, i});
    }
    for(auto iter : people) {
        if(n == 0){
            cout << " ";
        }else{
            n = 0;
        }
        cout << iter.second;
    }

    return 0;
}

