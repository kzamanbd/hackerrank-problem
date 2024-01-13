#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

class StudentCompare
{
public:
    bool operator()(Student s1, Student s2)
    {
        if (s1.marks == s2.marks)
        {
            return s1.roll > s2.roll;
        }
        return s1.marks < s2.marks;
    }
};

int main()
{

    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, StudentCompare> pq;

    for (int i = 0; i < n; i++)
    {
        Student obj;
        cin >> obj.name >> obj.roll >> obj.marks;
        pq.push(obj);
    }

    int query;
    cin >> query;

    for (int i = 0; i < query; i++)
    {
        int action;
        cin >> action;
        if (action == 0)
        {
            Student sObj;
            cin >> sObj.name >> sObj.roll >> sObj.marks;
            pq.push(sObj);
            if (pq.empty())
            {
                cout << "Empty";
            }
            else
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks;
            }
        }
        else if (action == 1)
        {
            if (pq.empty())
            {
                cout << "Empty";
            }
            else
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks;
            }
        }

        else if (action == 2)
        {
            if (pq.empty())
            {
                cout << "Empty";
            }
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty";
                }
                else
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks;
                }
            }
        }

        cout << endl;
    }
    return 0;
}