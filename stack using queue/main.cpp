#include <iostream>
#include <stack>
#include <vector>

using namespace std;

stack<int> s1, s2;

void enqueue(int data)
{
    s1.push(data);
}

void dequeue()
{
    if (s1.empty() && s2.empty())
    {
        printf("Nothing to delete \n");
    }
    else
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
    }
}

void print()
{
    vector<int> v1;
    while (!s1.empty())
    {
        s2.push(s1.top());
        v1.push_back(s1.top());
        s1.pop();
    }
    while (!s2.empty())
    {
        cout << s2.top() << endl;
        s2.pop();
    }
    for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
    {
        s2.push((*i));
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    print();
    dequeue();
    cout << endl;
    print();
}
