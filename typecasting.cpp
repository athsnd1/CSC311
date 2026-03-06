#include<iostream>
#include<string>
using namespace std;

int main(){
    std::string str = "500";
    int value = std::stoi(str); //string to integer
    int val2 = std::stod(str);//string to double
    int val3 = std::stof(str);//string to float
    
    int val4 = 54;
    std::string number = std::to_string(val4);
    
    //to upper and lower case (for ints):
    std::string val = "attah";
    std::cout<<"Uppercase: "<<std::toupper(value)<<" Lower case:"<<std::tolower(value)<<endl;
    return 0;
}