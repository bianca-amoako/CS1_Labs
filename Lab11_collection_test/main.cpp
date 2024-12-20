//  main.cpp
//  Lab11_CollectionTest
//  Created by Bianca Amoako on 4/17/23.

#include <iostream>
#include "collection.hpp"
using namespace std;
Collection::Collection(){
    size_ = 0;
    col_ = new double [size_];
} // void constructor

int Collection::check(double number){
    int i = 0;
    while(i < size_-1){
        if(col_[i] == number){
            return i;
        }
        i++;
    } return -1;
}

void Collection::addNumber(double number){
    if (check(number) == -1){
        size_++;
        col_[size_-1] = number;
    }
}

void Collection::removeNumber(double number){
    int i;
    double *ncol_ = new double[size_];
    for(i = 0; i < size_; i++){
        ncol_[i] = col_[i];
        if(col_[i] == number)
            ncol_[i] = col_[i+1];
    }
    size_--;
    delete [] col_;
    col_ = ncol_;
}
void Collection::output() const{
    int i;
    for(i = 0; i < size_ -1; i++){
        cout << col_[i] << " ";
    }
}
// big three
Collection::Collection(const Collection& ncol){
    size_= ncol.size_;
    col_ = new double[size_];
    int i;
    for(i = 0; i < size_; i++)
        col_[i] = ncol.col_[i];
} // copy constructor

const Collection& Collection::operator = (const Collection& rhs){
    if(this != &rhs){
        size_ = rhs.size_;
        delete [] col_;
        col_ = new double [size_];
        int i;
        for(i = 0; i < size_; i++)
            col_[i] = rhs.col_[i];
    }
    return *this;
} // overloaded assignment

Collection::~Collection(){
    delete [] col_;
} // destructor

