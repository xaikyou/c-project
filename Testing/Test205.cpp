#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Student;

class Course
{
private:
    string name;
    vector<Student *> students;
public:
    Course(string name)
    {
        setName(name);
    }

    Course()
    {
        setName("NA");
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }

    void attachCourse(Student* s)
    {
        this->students.push_back(s);
    }

    void displayStudents(); // the codes is underneath

    void display()
    {
        cout << "Course's name: " << this->getName() << endl;
    }
};

class Student
{
private:
    string name;
    string major;
    vector<Course *> course; 
public:
    Student(string name, string major)
    {
        setName(name);
        setMajor(major);
    }

    Student(string name)
    {
        Student(name, "NA");
    }

    Student()
    {
        Student("NA", "NA");
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void setMajor(string major)
    {
        this->major = major;
    }
    string getMajor()
    {
        return this->major;
    }

    void displayCourses()
    {
        cout << "Course "<< this->getName() << " has enrolled: \n";
        for (int i = 0; i < this->course.size(); i++)
        {
            course[i]->display();
        }
    }

    void enroll(Course* c)
    {
        this->course.push_back(c);
        cout << "Enroll for course " << c->getName() << " succesfully by " << this->getName() << endl;
        c->attachCourse(this);
    }

    void display()
    {
        cout << "Student: \n";
        cout << "\tname  : " << this->getName() << endl;
        cout << "\tmajor : " << this->getMajor() << endl;
    }
};

void Course::displayStudents()
{
    cout << "Students has enrolled for "<< this->getName() <<" course: \n";
    for (int i = 0; i < this->students.size(); i++)
    {
        students[i]->display();
    }
}

int main()
{
    system("cls");
    Student stu1("A","1");
    Student stu2("B","1");
    stu1.display();

    Course c1("a1");
    Course c2("a2");
    c1.display();

    stu1.enroll(&c1);
    stu1.enroll(&c2);
    stu2.enroll(&c1);
    stu2.enroll(&c1);

    stu1.displayCourses();

    c1.displayStudents();

    return 0;
}