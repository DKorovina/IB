//Шифр Мирабо
#include <iostream>
#include <string>
#include <clocale>
#include <Windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n = 6, m = -64;
    char a[6][6];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            char z = (char)m;
            a[i][j] = z;
            m++;
            
        }
    a[5][2] = '.';
    a[5][3] = ',';
    a[5][4] = '!';
    a[5][5] = ' ';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << '\t';
            
        }
        cout << endl;
    }
    string m2;
    cout << "Введите строку\n";
    getline(cin, m2);
    int k = 0, l = 0;
    cout << "Шифр:\n";
    for (; k < m2.size(); k++) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (a[i][j]  == m2[k])
                {
                    cout << i + 1 << '.' << j + 1 << " ";
                }
    }
    int num;
    cout << "\nВведите количество букв для дешифрования (с учетом пробелов)\n";
    cin >> num;
    double* arr = new double[num];
    cout << "Введите строку\n";
    for (int p = 0; p < num; p++)
        cin >> arr[p];
    int el = 0;
    cout << "Дешифр:\n";
    while (el < num)
    {
        double b = (arr[el] * 10 + 0.5) / 10.0;
        int i = (int)b;
        int j = (b - i) * 10;
        cout << a[i-1][j-1];
        el = el + 1;
    }
    return 0;
}