#include "Figures.h"
#include "windows.h"

int main()
{
    SetConsoleOutputCP(1251);
    Half_Piramide h(2.5, { 1, 2, 1.5, 3, 1, 4, 2, 3, 3 });
    cout << "Усеченая пирамида:" << endl;
    cout << "Обьем: " << h.volume() << endl << "Полная площадь фигуры: " << h.full_square() << endl;
    Piramide pir(2.5, { 1, 2, 1.5, 3, 3, 3 });
    cout << "Пирамида" << endl;
    cout << "Обьем: " << pir.volume() << endl << "Полная площадь фигуры: " << pir.full_square() << endl;
    Prisma pr(2.5, { 1, 2, 1.5, 3 });
    cout << "Призма" << endl;
    cout << "Обьем: " << pr.volume() << endl << "Полная площадь фигуры: " << pr.full_square() << endl;
}

