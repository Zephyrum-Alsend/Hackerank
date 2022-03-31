#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public:
        virtual void getdata() {
            
        }
        virtual void putdata() {
            
        }
};

class Professor : public Person {
    int publications, cur_id, age;
    string name;
    
    public:
        Professor() {
            static int id = 0;
            cur_id = ++id;
        }
        void getdata() {
            cin >> name >> age >> publications;
        }
        void putdata() {
            cout << name << ' ' << age << ' ' << publications << ' ' << cur_id << endl;
        }
};

class Student : public Person {
    int cur_id, age, total;
    vector<int> marks;
    string name;
    
    public:
        Student() {
            static int id = 0;
            cur_id = ++id;
            total = 0;
        }
        void getdata() {
            cin >> name >> age;
            
            int temp;
            //Edit this conditional to change the size of marks
            for (int i = 0; i < 6; i++) {
                cin >> temp;
                total += temp;
                marks.push_back(temp);
            }
        }
        void putdata() {
            cout << name << ' ' << age << ' ' << total << ' ' << cur_id << endl;
        }
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
