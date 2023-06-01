#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Subject
{
    private:
        string name;
        int credit;
        float grade;

    public:
        Subject(string name, int credit, int grade);
        
        void setName(string name);
        string getName();
        void setCredit(int credit);
        int getCredit();
        void setGrade(int credit);
        int getGrade();

        void display();
};

class Semester
{
    private:
        string name;
        vector<Subject> subjects;

    public:
        Semester(string name);

        void addOneSubject(Subject sub);

        void setName(string name);
        string getName();

        void display();

};

/* ----- grade ----- */

Subject::Subject(string name, int credit, int point)
{
    setName(name);
    setCredit(credit);
    setGrade(point);
}

void Subject::setName(string name)
{
    this->name = name;
}

string Subject::getName()
{
    return this->name;
}

void Subject::setCredit(int credit)
{
    this->credit = credit;
}

int Subject::getCredit()
{
    return this->credit;
}

void Subject::setGrade(int point)
{
    this->grade = point;
}

int Subject::getGrade()
{
    return this->grade;
}

void Subject::display()
{
    cout << "Subject: " << this->getName() << endl;
    cout << "\tCredit: " << this->getCredit() << "\tPoint: " << this->getGrade() << endl;
}

/* ----- Semester ----- */
void Semester::addOneSubject(Subject sub)
{
    subjects.push_back(sub);
}

Semester::Semester(string name)
{
    setName(name);
}

void Semester::setName(string name)
{
    this->name = name;
}

string Semester::getName()
{
    return this->name;
}

void Semester::display()
{
    cout << "----- Semester " << this->getName() << " -----" << endl;

    for (int i = 0; i < subjects.size(); i++)
    {
        subjects[i].display();
    }
    
}

int main()
{
    Subject sub1("Giai tich 1A", 3, 10.00);
    Subject sub2("Vi tich phan 1A", 3, 9.50);
    Subject sub3("Triet hoc Mac - Lenin", 2, 7.30);

    Semester semester("1");

    semester.addOneSubject(sub1);
    semester.addOneSubject(sub2);
    semester.addOneSubject(sub3);

    semester.display();

    return 0;
}