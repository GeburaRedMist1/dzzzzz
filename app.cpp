#include <iostream>
using namespace std;

int aс(int b, int c) {
    while (c) {
        int d = b % c;
        b = c;
        c = d;
    }
    return b;
}

class e {
    int a, b;
public:
    void c() {
        cout << "Введите числитель: ";
        cin >> a;
        cout << "Введите знаменатель: ";
        cin >> b;
        if (b == 0) {
            b = 1;
            cout << "Знаменатель не может быть 0, установлен 1\n";
        }
    }
    void d() {
        cout << a << "/" << b << endl;
    }
    e f(e g) {
        e h;
        h.a = a * g.b + g.a * b;
        h.b = b * g.b;
        int i = aс(h.a, h.b);
        h.a /= i;
        h.b /= i;
        return h;
    }
    e g(e h) {
        e i;
        i.a = a * h.b - h.a * b;
        i.b = b * h.b;
        int j = aс(i.a, i.b);
        i.a /= j;
        i.b /= j;
        return i;
    }
    e h(e i) {
        e j;
        j.a = a * i.a;
        j.b = b * i.b;
        int k = aс(j.a, j.b);
        j.a /= k;
        j.b /= k;
        return j;
    }
    e i(e j) {
        e k;
        k.a = a * j.b;
        k.b = b * j.a;
        if (k.b == 0) {
            k.b = 1;
            cout << "Деление на 0, знаменатель установлен 1\n";
        }
        int l = aс(k.a, k.b);
        k.a /= l;
        k.b /= l;
        return k;
    }
};

int main() {
    setlocale(0, "");
    e a, b, c;
    cout << "Ввод первого дробя:\n";
    a.c();
    cout << "Ввод второго дробя:\n";
    b.c();
    cout << "Первая дробь: ";
    a.d();
    cout << "Вторая дробь: ";
    b.d();
    cout << "Сложение: ";
    c = a.f(b);
    c.d();
    cout << "Вычитание: ";
    c = a.g(b);
    c.d();
    cout << "Умножение: ";
    c = a.h(b);
    c.d();
    cout << "Деление: ";
    c = a.i(b);
    c.d();
    return 0;
}
