#include <iostream>
#include <vector>
#include <limits>

using namespace std;

struct Person
{
    string f_name;
    string l_name;
    int age;
};

vector<Person> createPersonList(int list_size)
{
    vector<Person> list;
    for (int i = 0; i < list_size; i++)
    {
        Person person;
        person.age = i;
        list.push_back(person);
    }
    return list;
}

void printPersonListSize(const vector<Person> &p_list)
{
    cout << "Size " << p_list.size() << endl;
}


int main()
{
    printPersonListSize(createPersonList(40'000'000));
    return 0;
}