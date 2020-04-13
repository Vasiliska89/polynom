// polyList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "list.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    int deg, coeff;
    list* l1 = NULL;
    list* l2 = NULL;
    std::cout << "��� ����� ������ 2 ����������.\n";
    std::cout << "���������� �������� �������� � ������� *�������* *�����������*\n";
    std::cout << "��������, ���� ������ �������:\n";
    std::cout << "10 15\n";
    std::cout << "� ���������� ��������� �������� 15�^10.\n";
    std::cout << "���� ������������� �������� \"0 0\".\n";
    std::cout << "����� ����� ����� ����������� �� �� �������.\n";
    std::cout << "������ ��������� - ������ ����� �� �������� ����������.\n\n";

    std::cout << "������ ���������:\n";

    while (true) {
        std::cin >> deg >> coeff;
        if (deg != 0 || coeff != 0) tail(l1, deg, coeff);
        else break;
    }
    std::cout << "������ ���������:\n";
    while (true) {
        std::cin >> deg >> coeff;
        if (deg != 0 || coeff != 0) tail(l2, deg, coeff);
        else break;
    }
    std::cout << "\n\n������:\n\n";
    show(l1);
    std::cout << "\n\n������:\n\n";
    show(l2);
    equal(l1, l2) ? std::cout << "\n\n���������� �����.\n" : std::cout << "\n\n���������� �������.\n";
    _getch();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
