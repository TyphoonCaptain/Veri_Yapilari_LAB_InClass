#include <cstdio>
#include <iostream>
using namespace std;

void Yazdir() {
    int n;
    cout << "Enter the n: ";
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        cout << i << " ";
    }
    cout << endl;
    //Complexity is T(n): n + 4
}

void Topla()
{
    int n, tmp = 0, i = 0;
    cout << "Enter the number of consecutive positive integers (starting from 1): ";
    cin >> n;
    while (i != n)
    {
        i++;
        tmp += i;
    }
    cout << "The summer is: " << tmp << endl;
    //Complexity is T(n): 2n + 4
}
void Toplawdo() {
    int n, tmp = 0, i = 0;
    cout << "Enter the number of consecutive positive integers (starting from 1): ";
    cin >> n;
    do
    {
        i++;
        tmp += i;
    } while (i == n);
    cout << "The summer is: " << tmp << endl;
    //Complexity is T(n): 2n + 4
}
void Natural_Number() {
    cout << "The Natural Numbers Are: ";
    for (int i = 0; i <= 50; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    //Complexity is T(n): n + 2
}

void Calculate() {
    int n = 5;
    int tmp = 0;
    for (int i = 1; i <= n; i++)
    {
        tmp = tmp + i;
    }
    cout << "The sum of numbers from 1 to " << n << ": " << tmp << endl;
    //Complexity is T(n): n + 3
}

void Factorial() {
    int select, x = 1;
    cout << "Input a Number: ";
    cin >> select;
    for (int i = 1; i <= select; i++)
    {
        x = x * i;
    }
    cout << "The Factorial of " << select << " is: " << x << endl;
    //Complexity is T(n): n + 4
}

void Fibonacci() {
    int choose, number1 = 0, number2 = 1, nextTerm = 0;
    cout << "Enter the number of terms series: ";
    cin >> choose;
    cout << "Fibonacci Series: ";

    for (int i = 1; i <= choose; ++i) {
        if (i == 1) {
            cout << number1 << " ";
            continue;
        }
        if (i == 2) {
            cout << number2;
            continue;
        }
        nextTerm = number1 + number2;
        number1 = number2;
        number2 = nextTerm;

        cout << " " << nextTerm;
    }
    //Complexity is T(n): 
}

int main()
{
    Yazdir();
    //Topla();
    //Toplawdo();
    //Natural_Number();
    //Calculate();
    //Factorial();
    //Fibonacci();
    return 0;
}


