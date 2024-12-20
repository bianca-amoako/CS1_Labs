// Dan's collection of doubles class
// Mikhail Nesterenko
// 4/13/2023


#ifndef COLLECTION_HPP_
#define COLLECTION_HPP_


int size(std::vector<int>&); // returns the size of the array
int check(int, std::vector<int>&); // returns index of element containg "number" or -1 if none
void addNumber(double, std::vector<int>&);    // adds number to the collection
void removeNumber(double, std::vector<int>&); // deletes the number from the collection
void output(std::vector<int>&);  // prints the values of the collection

#endif /* COLLECTION_HPP_ */

