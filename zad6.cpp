//Христо и Ивелина
#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

template <typename T>
string T_to_string(const T a_value){
    ostringstream out;
    out << a_value;
    return out.str();
}

class Student{

    private:
        string name;
        int age;
        double grade;
    public:
        Student(string name, int age, double grade){

            this -> name = name;
            this -> age = age;
            this -> grade = grade;

        }
        string GetName() { return name; }
        int GetAge() { return age; }
        double GetGrade() { return grade; }
        string ToString(){ return name + " is " + T_to_string(age) + " years old. " + ((grade >= 5.50) ? "Excellent student\n" : (grade >= 4) ? "Average student\n" : "Poor student\n"); }

};

class School{

    private:
        vector<Student> students;

    public:
        School(){ }
        void Create(string studentName, int studentAge, double studentGrade){

            Student newStudent(studentName, studentAge, studentGrade);
            students.push_back(newStudent);

        }

        string Show(string studentName){

            for(int i = 0; i < students.size(); i++)
                if(students[i].GetName() == studentName)
                    return students[i].ToString();

            return "";

        }

        vector<Student> AlphabeticalOrder(){

            vector<Student> copy = students;

            for(int i = 0; i < copy.size() - 1; i++)
                for(int j = i + 1; j < copy.size(); j++)
                    if(copy[i].GetName() > copy[j].GetName()) swap(copy[i], copy[j]);

            return copy;

        }

        vector<Student> GradesDescending(){

            vector<Student> copy = students;

            for(int i = 0; i < copy.size() - 1; i++)
                for(int j = i + 1; j < copy.size(); j++)
                    if(copy[i].GetGrade() < copy[j].GetGrade()) swap(copy[i], copy[j]);

            return copy;

        }

        vector<Student> AgeAlphabeticalOrder(int age){

            vector<Student> copy;

            for(int i = 0; i < students.size(); i++)
                if(students[i].GetAge() == age) copy.push_back(students[i]);

            for(int i = 0; i < copy.size() - 1; i++)
                for(int j = i + 1; j < copy.size(); j++)
                    if(copy[i].GetName() > copy[j].GetName()) swap(copy[i], copy[j]);

            return copy;

        }

        vector<Student> StudentsWithGreaterGradeThan(double grade){

            vector<Student> copy;

            for(int i = 0; i < students.size(); i++)
                if(students[i].GetGrade() > grade) copy.push_back(students[i]);

            return copy;

        }

        vector<Student> StudentsWithWorstGradeThan(double grade){

            vector<Student> copy;

            for(int i = 0; i < students.size(); i++)
                if(students[i].GetGrade() < grade) copy.push_back(students[i]);

            return copy;

        }

        double AverageGradeInSchool(){

            double average = 0;

            for(int i = 0; i < students.size(); i++)
                average += students[i].GetGrade();

            return average / students.size();

        }

        double AverageGradeInSchoolWithAge(int age){

            double average = 0;

            for(int i = 0; i < students.size(); i++)
                average += students[i].GetAge() == age ? students[i].GetGrade() : 0;

            return average / students.size();

        }

};

int main(){

    School mySchool;

    while(true){

        string command; cin >> command;

        if(command == "Exit") break;
        if(command == "Show"){

            string name; cin >> name;
            cout << mySchool.Show(name);

        }
        if(command == "Create"){

            string name; cin >> name;
            int age; cin >> age;
            double grade; cin >> grade;

            mySchool.Create(name, age, grade);

        }

    }

}
