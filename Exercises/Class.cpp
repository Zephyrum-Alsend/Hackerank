#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    public:
        int get_age() {
            return m_iAge;
        }
        void set_age(int age) {
            m_iAge = age;
            return;
        }
        
        int get_standard() {
            return m_iStandard;
        }
        void set_standard(int standard) {
            m_iStandard = standard;
            return;
        }
        
        string get_first_name() {
            return m_strFirstName;
        }
        void set_first_name(string first_name) {
            m_strFirstName = first_name;
            return;
        }
        
        string get_last_name() {
            return m_strLastName;
        }
        void set_last_name(string last_name) {
            m_strLastName = last_name;
            return;
        }
        
        string to_string() {
            stringstream ss;
            ss << m_iAge << "," << m_strFirstName << "," << m_strLastName << "," << m_iStandard;
            return ss.str();
        }
        
    private:
        int m_iAge, m_iStandard;
        string m_strFirstName, m_strLastName;
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
