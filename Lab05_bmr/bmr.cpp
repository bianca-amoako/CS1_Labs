//  bmr calc
//  Bianca Amoako
//  2/20/23.

#include <iostream>
using namespace std;

void bmr_woman (double weight, double height, double age);
void bmr_men (double weight, double height, double age);
int const mc_cake = 131;

int main() {
    cout << "Please enter your sex: F for Female  M for Male ";
    char sex;
    cin >> sex;
    
    cout << "Please enter your weight in pounds(lbs) ";
    double weight;
    cin >> weight;
    
    cout << "Please enter your height in inches(in) ";
    double height;
    cin >> height;
    
    cout << "Please enter your age ";
    int age;
    cin >> age;
    
    if (sex == 'F' || sex == 'f') {
        bmr_woman (weight, height, age);
    
    }
    else if (sex == 'M' || sex == 'm')
        bmr_men (weight, height, age);
    

}


void bmr_woman (double weight, double height, double age) {
    double cal_answer;
    cal_answer = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
    cout << cal_answer << " cal per day to function \n";
    int num_cakes = cal_answer / mc_cake;
    cout << num_cakes << " medium cupcakes per day ";
    
}
void bmr_men (double weight, double height, double age) {
    double cal_answer;
    cal_answer = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
    cout << cal_answer << " cal per day to function \n";
    int num_cakes = cal_answer / mc_cake;
    cout << num_cakes << " medium cupcakes per day \n";
}
