/*************************************************************************
*File Name   : 380-presidential-election.cpp
*Author      : Zsl
*mail        : zsl_hfut@163.com
*Created Time: Sat 05 Dec 2020 03:31:07 PM CST
*************************************************************************/
#include <iostream>
#include <string>

using namespace std;


int main() {
    int n;
    string vote;
    string max_vote;
    int max_index = 0;

    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> vote;

        if(max_vote.size() > vote.size()) continue;
        if(max_vote.size() == vote.size() && (max_vote > vote)) continue;
        max_vote = vote;
        max_index = i;
    }
    
    cout << max_index << endl;
    cout << max_vote << endl;

    return 0;
}

