#include <iostream>
#include <string>
#include <stack>
using namespace std;
 
// Реализация стека на C++ с использованием `std::stack`
int main()
{
    string a;
    stack<char> s;
    cin >> a;
    int i = 0;
    int d = 0;
    //cout << "Введите ваше любимое число и нажмите Enter: ";
    for(const char c: a) {
        i++;
        if (c == '[' || c == '(' || c == '{') {
            if (s.empty()) { d = i; }
            s.push(c);
        } else if (c == '}' || c == ')' || c == ']') { 
            {
            if (s.empty()) {
                cout << to_string(i);
                return 0;
            } else {
                if (c == ']') { if (s.top() == '[') {
                    s.pop();} else { cout << to_string(i); return 0; }
                } else if (c == '}') { if (s.top() == '{') {
                    s.pop();} else { cout << to_string(i); return 0; }
                } else if (c == ')') { if (s.top() == '(') {
                    s.pop();} else { cout << to_string(i); return 0; }
                }
            }
            }
        }
    }
    if (s.empty()) {
        cout << "Success" << endl;
    } else {cout << to_string(d);}

 
    // возвращает общее количество элементов в stack
    //cout << "The stack size is " << s.size() << endl;
    return 0;
}
