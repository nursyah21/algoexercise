#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int age, standard;
    string first_name, last_name;

public:
    void set_age(int ages)
    {
        age = ages;
    }
    void set_standard(int standards)
    {
        standard = standards;
    }
    void set_first_name(string first_names)
    {
        first_name = first_names;
    }
    void set_last_name(string last_names)
    {
        last_name = last_names;
    }
    int get_age()
    {
        return age;
    }
    string get_last_name()
    {
        return last_name;
    }
    string get_first_name()
    {
        return first_name;
    }
    int get_standard()
    {
        return standard;
    }
    string to_string()
    {
        stringstream ss;
        char ch = ',';
        ss << age << ch << first_name << ch << last_name << ch << standard;
        return ss.str();
    }
};

int main()
{
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