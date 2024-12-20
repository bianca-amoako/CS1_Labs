
//  main.cpp
//  Lab10_DansCollection
//  Created by Bianca Amoako on 4/9/23

#include <iostream>
using namespace std;

void add_num(double *&coll, int &size, double num);
void remove_num(double *&coll, int &size, double num);
bool check(double *&coll, int size, double num);
void print(double *coll, int size);

int main() {
    int size = 1;
    double *collection = new double[size];
    char operation;
    double number;
    cout << "Dan, enter an operation [a/r/q] and a number ";
    cin >> operation >> number;
    while(operation == 'a' | operation == 'r' | operation == 'q'){
        if(operation == 'a'){
            add_num(collection, size, number);
            cout << "Dan, enter an operation [a/r/q] and a number ";
            cin >> operation >> number;
        }
        else if(operation == 'r'){
            remove_num(collection, size, number);
            cout << "Dan, enter an operation [a/r/q] and a number ";
            cin >> operation >> number;
        }
        else if(operation == 'q'){
            cout << "collection closed " << endl;
            break;
        }
    }
}

void add_num(double *&coll, int &size, double num){
    int i;
    if(check(coll, size, num) == true){
        cout << "duplicate " << endl;
        print(coll, size);
    }
    else if(check(coll, size, num) == false){
    cout << "your numebers are: ";
        for(i = 0; i < size; i++){
            coll[size-1] = num;
            cout << coll[i] << " ";
        }
        size++;
        cout << endl;
    }
}

void remove_num(double *&coll, int &size, double num){
    int i;
    //double *ncoll = new double[size];
    if(check(coll, size, num) == true){
        cout << "your numbers are: ";
        for(i = 0; i < size -1; i++){
            if(coll[i] == num)
                continue;
            else{
                coll[i-1] = num;
                cout << coll[i] << " ";
            }
        }
        size--;
        cout << endl;
    }
    else if(check(coll, size, num) == false){
        cout << "not found " << endl;
        print(coll, size);
    }
}

bool check(double *&coll, int size, double num){
    int i = 0;
    while(i < size -1){
        i++;
        if(coll[i] == num){
            return true;
        }
    } return false;
}
void print(double *coll, int size){
    int i;
    cout << "your numbers are: ";
    for(i = 0; i < size -1; i++){
        cout << coll[i] << " ";
    }
    cout << endl;
}

