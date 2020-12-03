/*************************************************************************
*File Name: 215-Top3.cpp
*Author: Zsl
*mail: zsl_hfut@163.com
*Created Time: Thu 03 Dec 2020 09:53:38 PM CST
*************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class Student {
public:
    Student(const string &student_name, int student_score):
            name(student_name),
            sum_score(student_score)
    {};
    string name;
    int sum_score;
};

bool compare_sumscore(const Student &student1, const Student &student2) {
    return student1.sum_score > student2.sum_score;
}



int main() {
    int N;
    vector<Student> students;
    int score;
    string name;
    
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> name;
        int sum = 0;
        for(int j = 0; j < 4; ++j){
            cin >> score;
            sum += score;
        }
        students.emplace_back(Student{name, sum});
    }
    sort(begin(students), end(students), compare_sumscore);
    for(int i = 0; i < 3; ++i){
        cout << students[i].name << endl;
    }

    return 0;
}

