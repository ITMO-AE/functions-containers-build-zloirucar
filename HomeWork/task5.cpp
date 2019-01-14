#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Reverse(vector<int>& v){
    reverse( v.begin(), v.end() );
}

int main()
{
    vector<int>* first = new vector<int>;
    for (int i = 0; i < 5; i++){
        first->push_back(i);
    }

    for (int i = 0; i < 5; i++){
        cout << first->at(i);
    }
    cout << endl;
    Reverse (*first);
    for (int i = 0; i < 5; i++){
        cout << first->at(i);
    }
    cout << endl;


    return 0;
}
