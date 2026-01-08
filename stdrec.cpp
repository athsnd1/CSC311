#include<iostream>
#include<vector>
using namespace std;

struct Student {
    std::string name;
    int score;
    std::string grade;
};

std::string getGrade(Student std){
    
        if(std.score > 70 && std.score < 100){
            return std.grade = "A";
        }else if(std.score >60 && std.score <69){
            return std.grade = "B";
        }else if(std.score > 50 && std.score <59){
            return std.grade = "C";
        }else if(std.score >45 && std.score <49){
            return std.grade = "D";
        }else if(std.score >40 && std.score <44){
            return std.grade = "E";
        }else if(std.score < 40){
            return std.grade = "F";
        }

        return "invalid";
}

vector<Student> getStudents(int numStd){
    vector<Student> students(numStd);
    for(int i = 0;i<numStd;i++){
        struct Student student;
        cout<<"Enter the name of student "<< i + 1<<": ";
        cin>>student.name;
        cout<<"Enter the score of student "<<i + 1<<": ";
        cin>>student.score;
        student.grade = getGrade(student);
        students.push_back(student);
    }
    return students;
}

double avgScore(std::vector<Student> students){
    int total = 0;
    for(Student std : students){
        total += std.score;
    }
    double avg = total / (students.size());
    return avg;
}

void displayStd(std::vector<Student> students){
    cout<<"Name   "<<"Score   "<<"Grade"<<"\n";
    std::cin.ignore(1000, '\n');
    for(Student std : students){
        cout <<std.name<<"   "<< std.score<<"   "<<std.grade<<"\n";
    }
    cout<<"Average score: "<<avgScore(students);
}

int main(){
    int numStd;
    cout << "Enter number of students: ";
    cin >> numStd;
    while(true){
        if(numStd <= 50){
            break;
        }
        if(numStd > 50){
            cout<<"Number of students must not be greater than 50";
            cout<<"Enter number of students again: ";
            cin >> numStd;
        }
        }
    
    std::vector<Student> students = getStudents(numStd);
    displayStd(students);
}
