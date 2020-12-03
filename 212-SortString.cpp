/*************************************************************************
*File Name: 212-SortString.cpp
*Author: Zsl
*mail: zsl_hfut@163.com
*Created Time: Thu 03 Dec 2020 05:47:29 PM CST
*************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
void print_vector(vector<T> objs) {
    for(auto obj : objs) {
        cout << obj << endl;
    }
}

/*快速排序*/
template <typename T>
int quick_sort(vector<T> &objs,int start ,int end) {
    int i = start;
    int j = end;
    if(start >= end) return 0;
    while (i < j){
        /*从右往左找小的*/
        while (j > i && objs[j] >= objs[i]){
            --j;
        }
        /*找到小的交换*/
        swap(objs[j], objs[i]);
        /*从左往右找大的*/
        while (j > i && objs[j] >= objs[i]){
            ++i;
        }
        /*找到大的交换*/
        swap(objs[j], objs[i]);
    }
    quick_sort(objs, start, i - 1);
    quick_sort(objs, i + 1 , end);

    return 0;
}


int main() {
    vector<string> names;
    string name;

    for(int i = 0; i < 10; ++i) {
        cin >> name;
        names.push_back(name);
    }
    
    quick_sort(names, 0, 9);
    
    print_vector(names);

    return 0;
}

