
//  string that is 80 spaces ,.!?:
//  Bianca Amoako
//  3/13/23.

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

void punct_space(string& user_str, string& punct);
void word_space(string& user_str);
const double line_length = 80;

int main() {
    cout << "Input a string: ";
    string user_string;
    
    getline(cin, user_string);
    cout << user_string << " " << user_string.size() << endl;
    string key_punct = ",.!?:";
    

    punct_space(user_string, key_punct);
    word_space(user_string);
}

void punct_space(string& user_str, string& punct){
    double position = user_str.find_first_of(punct);
    while (position != user_str.size()-1 && position != string::npos){
        user_str.insert(position+1, "  ");
        position = user_str.find_first_of(punct, position+1);
    }
    cout << user_str << " " << user_str.size() << endl;
}

void word_space(string& user_str){
    srand(int(time(nullptr)));
    double rand_word = rand() % user_str.size();
    //cout << rand_word << endl;
    double position = user_str.find_first_of(" ", rand_word);
    //cout << position << endl;
    while(user_str.size() < line_length && position != user_str.size()-1 && position != string::npos){
        user_str.insert(position+1, "  ");
        rand_word = rand() % user_str.size();
        //cout << rand_word << endl;
        position = user_str.find_first_of(" ", rand_word);
    }
    cout << user_str << " " << user_str.size() << endl;
 }
     
 
