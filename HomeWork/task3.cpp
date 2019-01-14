/*
#include <iostream>
#include <vector>

using namespace std;

bool isPalindrom (string in){
    int sl = in.length();
        for (int i = 0; i < sl/2; i++){
         if(in[i] != in[sl-(i+1)]) return false;
        }
    return true;
}


vector<string> PalindromFilter (vector<string> word,int minLength){
    auto vl = word.size();
    vector<string> out;
    for (int i = 0; i < vl; i++){
        if (isPalindrom(word[i]) && word[i].length() >= minLength){
            out.push_back(word[i]);
        }
    }
    return out;
}


int main()
{
    vector<string> words;
    vector<string> words_after_filter;
    words.push_back("AbbA");
    words.push_back("AbcbA");
    words.push_back("AbccbA");
    words.push_back("AberertrdsbA");
    cout << "До проверки: " << endl;
    for (int i = 0; i < words.size(); i++){
        cout << words[i] << endl;
    }
    words_after_filter = PalindromFilter(words,4);
    cout << "После проверки: " << endl;
    for (int i = 0; i < words.size(); i++){
        cout << words_after_filter[i] << endl;
    }

    return 0;
}*/
