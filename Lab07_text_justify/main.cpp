//  lab7_textJustify
//  Bianca Amoako
//  3/18/23

#include <iostream>
#include <fstream>
#include <string>

using std::string;
using std::ifstream; using std::ofstream;
using std::cin; using std::cout; using std::endl;
using std::getline;

void punct_space(string& user_str, string& punct);
void word_space(string& user_str);
const int line_length = 80;

int main() {
    string unjust_txt = "/Users/biancaamoako/Desktop/CS1_LABS/lab7_textJustify/lab7_textJustify/unjustified.txt";
    string just_txt = "/Users/biancaamoako/Desktop/CS1_LABS/lab7_textJustify/lab7_textJustify/justified.txt";
    
    //declaring file STREAM
    ifstream fin;  //input stream
    ofstream fout;  //output stream
    
    //opening the files
    fin.open(unjust_txt); //opening the unjust file
    if (fin.fail()) {
        cout << "file opening failed. " << endl;
        exit(1);
    }
    fout.open(just_txt); //opening the just file
    if (fout.fail()){
        cout << "output file opening failed. " << endl;
        exit(1);
    }
    string key_punct = ",.!?:";
    
    //reading the file
    string line;
    while(getline(fin, line)){
        cout << line << endl;
        punct_space(line, key_punct);
        fout << line << endl;
    }
    
    //closing file STREAMS
    fin.close();
    fout.close();
}
void punct_space(string& user_str, string& punct){
    double position = user_str.find_first_of(punct);
    while (position != user_str.size()-1 && position != string::npos && user_str.size() < line_length){
        user_str.insert(position+1, "  ");
        position = user_str.find_first_of(punct, position+1);
    }
    word_space(user_str);
}

void word_space(string& user_str){
    ofstream fout;
    cout << " in the function though" << endl;
    cout << user_str.size() << endl;
    double position = user_str.find_first_of(" ");
    while(user_str.size() < line_length && position != user_str.size()-1 && position != string::npos){
        cout << "in dis LOOP" << endl;
        user_str.insert(position+1, "  ");
        position = user_str.find_first_of(" ", (rand() % user_str.size()));
        fout << user_str << endl;
    }
}

