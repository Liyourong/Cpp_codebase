#include "leeselection.h"

void print(string a)
{
    cout << a;
}

void print(int num)
{
    cout << num;
}

void printt(int num)
{
    cout << "\t" << num;
}

void printt(string a)
{
    cout << "\t" << a;
}

void printl(string a)
{
    cout << a << endl;
}

void printl(int num)
{
    cout << num << endl;
}

void printlt(string a)
{
    cout << "\t" << a << endl;
}

void printlt(int num)
{
    cout << num << endl;
}

int random(int lower, int upper)
{
    return (rand() % (upper - lower) + lower);
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int in(string greeting)
{
    print(greeting);
    int input = 0;
    cin >> input;
    return input;
}

string ins(string greeting)
{
    print(greeting);
    string input = "das";
    cin >> input;
    return input;
}
