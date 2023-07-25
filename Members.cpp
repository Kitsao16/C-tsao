// C++ program to demonstrate a
// structure for multiple members details
#include <iostream>
#include <vector>
#include <string>
#include <int>

using namespace std;
 
// Structure Of members 
struct member {
    string name;
    string rollno;
    string ranking;

 
    // Subjects Enrolled(Array)
    vector<string> subjects;
 
    // Marks in each subject(Array)
    vector<int> marks;
 
    // members's CGPA
    float cgpa;
};
 
template <typename vectorType> 
void printv(const vector<vectorType>& vector)
{
    cout << "[ ";
    // Iterating over all elements of vector
    for (auto elem : vector) {
        cout << elem << " ";
    }
    cout << "]";
    cout << endl;
}
 
// Function to print a members
void printMember(member* pointer)
{
    cout << "Member Details:" << endl;
    cout << endl;
    cout << "Name: " << pointer->name << endl;
    cout << "Rollno: " << pointer->rollno << endl;
    cout << "ranking: " << pointer->ranking << endl;
    cout << "Subjects: ";
    printv(pointer->subjects);
    cout << "Marks: ";
    printv(pointer->marks);
    cout << "CGPA " << pointer->cgpa << endl;
}
 
// Driver Code
int main()
{
    // Array of Members
    member arrayMembers[10];
 
    // Member 1
    arrayMembers[0].name = "Nick Kitsao";
    arrayMembers[0].rollno = "RU001";
    arrayMembers[0].ranking = "Chief Data-Scientist"
    arrayMembers[0].subjects
        = { "Data analytics", "Back-end Engineering", "Model Simulation", 
    "Model Optimization" };
    arrayMembers[0].marks = { 89, 78, 86, 90 };
    arrayMembers[0].cgpa = 8.918;
 
    // Member 2
    arrayMembers[1].name = "Regan Einstein";
    arrayMembers[1].rollno = "RU002";
    arrayMembers[1].ranking = "Project Manager & Computer Vision Engineer";

    arrayMembers[1].subjects
        = { "Data analytics", "Back-end Engineering", "Model Simulation", 
    "Model Optimization" };
    arrayMembers[1].marks = { 89, 80, 89, 80 };
    arrayMembers[1].cgpa = 8.45;
 
    // Member 3
    arrayMembers[2].name = "Elon Tsao";
    arrayMembers[2].rollno = "Electronics system manipulation expert";
    arrayMembers[2].subjects
        = { "Data analytics", "Back-end Engineering", "Model Simulation", 
    "Model Optimization" };
    arrayMembers[2].marks = { 99, 00, 99, 90 };
    arrayMembers[2].cgpa = 9.47;
 
    // Loop to print all members
    for (int i = 0; i < 3; i++) {
        // Function call
        printMember(&arrayMembers[i]);
    }
 
    return 0;
}