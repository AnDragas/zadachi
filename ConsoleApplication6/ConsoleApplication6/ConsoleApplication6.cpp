#include <iostream>
#include <cmath>

using namespace std;

double simpleIteration(double x0, double epsilon)
{
    double x = x0;
    double x_prev = 0;
    double diff = 0;
    int k = 0;

    do {

        x_prev = x;
        x = cos(x_prev);

        diff = fabs(x - x_prev);
        k++;

    } while (diff >= epsilon);

    cout << "Решение нелинейного уравнения методом простой итерации: " << x << endl;
    cout << "Количество итераций: " << k << endl;

    return x;
}

bool checkData(double x0, double epsilon)
{
    if (epsilon <= 0) {
        cout << "Ошибка: погрешность должна быть положительным числом!" << endl;
        return false;
    }

    return true;
}

int main()
{
    double x0, epsilon;

    cout << "Введите начальное приближение для метода простой итерации: ";
    cin >> x0;

    cout << "Введите погрешность: ";
    cin >> epsilon;

    if (checkData(x0, epsilon)) {
        simpleIteration(x0, epsilon);
    }
    return 0;
}
