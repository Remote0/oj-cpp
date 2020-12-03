/*************************************************************************
*File Name: 213-SplitScore.cpp
*Author: Zsl
*mail: zsl_hfut@163.com
*Created Time: Thu 03 Dec 2020 09:15:25 PM CST
*************************************************************************/
#include <iostream>
#include <vector>


using namespace std;

template <typename T>
void print_vector(vector<T> objs) {
    for(auto obj : objs) {
        cout << obj << endl;
    }
}

/*快速排序从大到小*/
template <typename T>
int quick_sort(vector<T> &objs,int start ,int end) {
    int i = start;
    int j = end;
    if(start >= end) return 0;
    while (i < j){
        /*从右往左找大的*/
        while (j > i && objs[j] <= objs[i]){
            --j;
        }
        /*找到大的交换*/
        swap(objs[j], objs[i]);
        /*从左往右找小的*/
        while (j > i && objs[i] >= objs[j]){
            ++i;
        }
        /*找到小的交换*/
        swap(objs[j], objs[i]);
    }
    quick_sort(objs, start, i - 1);
    quick_sort(objs, i + 1 , end);

    return 0;
}

int main() {
    int N;
    int score;
    vector<int> B(6,0);
    vector<int> scores;
    
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> score;
        if (100 == score) {
            ++B[0];
        }else if (90 <= score) {
            ++B[1];
        }else if (80 <= score) {
            ++B[2];
        }else if (70 <= score) {
            ++B[3];
        }else if (60 <= score) {
            ++B[4];
        }else{
            ++B[5];
        }
        scores.push_back(score);
    }

    quick_sort(scores, 0, scores.size() - 1);

    print_vector(scores);
    /*OJ格式要求*/
    for(auto data : B){
        if(N != 0){
            N = 0;
        }else{
            cout << " ";
        }
        cout << data;
    }

    return 0;
}

