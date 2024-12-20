
//  main.cpp
//  bigthree_prac
//  Created by Bianca Amoako on 4/19/23.

#include <iostream>
using namespace std;

class myClass{
public:
    myClass(){
        cout << "Default" << endl;
    }  // default constructor
    myClass(int size){
        size_ = size;
        p_ = new int[size_];
    };
    ~myClass(){  //destructor
        cout << "Inside DESTRUCTOR " << endl;
        delete [] p_;
    }
    myClass(const myClass& rhs){  // copy constructor
        cout << "Inside COPY CONSTRUCTOR " << endl;
        size_ = rhs.size_;
        p_ = new int[size_];
        for(int i = 0; i < size_; ++i)
            p_[i] = rhs.p_[i];
    }
    myClass& operator = (const myClass& rhs){  //overload assignment op
        cout << "Inside OVERLOAD ASSIGNMENT " << endl;
        if(this != &rhs){
            size_ = rhs.size_;
            delete [] p_;
            p_ = new int [size_];
            for(int i = 0; i < size_; ++i)
                p_[i] = rhs.p_[i];
        }
        return *this;
    }
    
private:
    int *p_;
    int size_;
    
};

void func(myClass var){
    cout << "STANDALONE FUNCTION" << endl;
}
int main() {
    myClass obj(8), obj2(3), ob;
    obj = obj2;
    func(obj);
    
}
