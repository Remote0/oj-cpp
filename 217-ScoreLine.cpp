/*************************************************************************
*File Name: 217-ScoreLine.cpp
*Author: Zsl
*mail: zsl_hfut@163.com
*Created Time: Thu 03 Dec 2020 10:12:47 PM CST
*************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    int score;
    vector<int> scores;

    cin >> n;
    for(int i = 0; i <n; ++i){
        cin >> score;
        scores.push_back(score);
    }
    sort( begin(scores), end(scores));
    /*找到分数线*/
    score = scores[n >> 1];
    auto iter = find( begin(scores), end(scores), score);
    cout << score << " " << end(scores) - iter << endl;


    return 0;
}

