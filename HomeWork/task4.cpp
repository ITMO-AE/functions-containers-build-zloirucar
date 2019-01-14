/*
#include <iostream>
#include <vector>

using namespace std;

void copier(vector <int>* first_p, vector<int>* second){
    auto first = *first_p;
    for (int i = 0; i < first.size(); i++){
        second->push_back(first[i]);
    }
    first_p->clear();
}


int main()
{
    vector<int> first;
    for (int i = 0; i < 5; i++){
        first.push_back(i);
    }
    vector<int> second;
    for (int i = 0; i < 5; i++){
        second.push_back(i);
    }

    copier(&first,&second);
    for (int i = 0; i < second.size(); i++){
        cout << second[i];
    }
    cout << endl;
    for (int i = 0; i < first.size(); i++){
        cout << first[i];
    }

    return 0;
}
*/
