#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int k;
    int a, b;
    int c;
    char oper;
    cout << "Hello! for start write 1 and after ever operation write 1, for finish write 0 \n";
    cin >> k;
    while (k != 0) {
        cout << "choose type of operation(+, -, *, /, %, ?, !, ^) \n";
        cin >> oper;
        switch (oper)
        {
        case '+':
            cout << "write 2 numbers\n";
            cin >> a >> b;
            c = a + b;
            cout << c;
            break;
        case '-':
            cout << "write 2 numbers\n";
            cin >> a >> b;
            c = a - b;
            cout << c;
            break;
        case '*':
            cout << "write 2 numbers \n";
            cin >> a >> b;
            c = a * b;
            cout << c;
            break;
        case '/':
            cout << "write 2 numbers \n";
            cin >> a >> b;
            c = a / b;
            cout << c;
            break;
        case '%':
            cout << "write 2 numbers \n";
            cin >> a >> b;
            c = a % b;
            cout << c;
            break;
        case '?':
            cout << "write 1 numbers \n";
            cin >> a;
            double sqrt(a);
            cout << a;
            break;
        case'!':
            cout << "write 1 numbers \n";
            cin >> a;
            c = 1;
            for (int i = 1; i < a + 1; i++) {
                c *= i;
            }
            cout << c;
            break;
        case '^':
            cout << "write 2 number \n";
            cin >> a >> b;
            pow (a, b);
            cout << a;
            break;
        }
        cin >> k;
    }
}
