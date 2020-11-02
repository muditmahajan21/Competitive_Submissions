#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
    int age = 0;
    string first_name;
    string last_name;   
    int standard = 0;

    public:

    void set_age(int tempAge)
    {
        age = tempAge;
    }

    void set_standard(int tempStandard)
    {
        standard = tempStandard;
    }

    void set_first_name(string tempFirst)
    {
        first_name = tempFirst;
    }

    void set_last_name(string tempLast)
    {
        last_name = tempLast;
    }

    int get_age()
    {
        return age;
    }

    int get_standard()
    {
        return standard;
    }

    string get_first_name()
    {
        return first_name;
    }

    string get_last_name()
    {
        return last_name;
    }

    string to_string()
    {
        string result = std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
        return result;
    }
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

