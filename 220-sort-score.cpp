/*************************************************************************
*File Name   : 220-sort-score.cpp
*Author      : Zsl
*mail        : zsl_hfut@163.com
*Created Time: Sat 05 Dec 2020 05:46:46 PM CST
*************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Student{
public:
    Student(istream & is){
        is >> name >> chinese >> math >> english >> science;
        sum = chinese + math + english + science;
    }
    string name;
    int chinese;
    int math;
    int english;
    int science;
    int sum;
};

void print_rank(const vector<Student> &students) {
    int num = 4;
    for(auto student: students){
        cout << student.name;
        if(--num){
            cout << " ";
        }else{
            break;
        }
    }
    cout << endl;
}

int main() {
    vector<Student> students;
    int n;

    cin >> n;
    for(int i = 0; i < n; ++i) {
        students.emplace_back(Student{cin});
    }
    
    sort(begin(students), end(students), [](Student st1, Student st2){return st1.chinese != st2.chinese ? st1.chinese > st2.chinese : st1.name < st2.name;});
    print_rank(students);
    sort(begin(students), end(students), [](Student st1, Student st2){return st1.math != st2.math ? st1.math > st2.math : st1.name < st2.name;});
    print_rank(students);
    sort(begin(students), end(students), [](Student st1, Student st2){return st1.english != st2.english ? st1.english > st2.english : st1.name < st2.name ;});
    print_rank(students);
    sort(begin(students), end(students), [](Student st1, Student st2){return st1.science != st2.science ? st1.science > st2.science : st1.name < st2.name;});
    print_rank(students);
    sort(begin(students), end(students), [](Student st1, Student st2){return st1.sum != st2.sum? st1.sum > st2.sum : st1.name < st2.name;});
    print_rank(students);

    return 0;
}

