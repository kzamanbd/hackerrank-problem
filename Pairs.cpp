#include <bits/stdc++.h>
using namespace std;

class People
{
public:
    string name;
    int val;

    People(string name, int val)
    {
        this->name = name;
        this->val = val;
    }
};

class PeopleCompare
{
public:
    bool operator()(People p1, People p2)
    {
        if (p1.name.compare(p2.name) == 0)
        {
            return p1.val < p2.val;
        }
        else if (p1.name.compare(p2.name) < 0)
        {
            return false;
        }
        return true;
    }
};

int main()
{

    int testCase;
    cin >> testCase;
    priority_queue<People, vector<People>, PeopleCompare> pq;
    while (testCase--)
    {
        string name;
        int val;
        cin >> name >> val;
        People peo(name, val);
        pq.push(peo);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().val << endl;
        pq.pop();
    }
    return 0;
}