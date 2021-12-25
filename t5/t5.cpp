#include <iostream>
#include <string>
using namespace std;
int main()
{
    string rom[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    int num[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    int number;
    string result;
    cout << "Enter the number (0 < n < 4000) : \n";
    cin >> number;
    while (number < 1 || number > 3999 || cin.get() != '\n')
    {
        cin.clear();
        cin.ignore(INT_MAX - 1, '\n');
        cout << "Error! Enter again : \n";
        cin >> number;
    }
    for (int i = 0; number; i++)
    {
        if (number - num[i] >= 0)
        {
            result = result + rom[i];
            number -= num[i];
            i--;
        }
    }
    cout << result;
    return 0;
}