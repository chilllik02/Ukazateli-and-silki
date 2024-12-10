#include <locale.h>
#include <iostream>
using namespace std;

void swap(int &a, int &b);

void create_array();
void zadom(const int(&)[10]);

int main()
{
    setlocale(LC_ALL, "ru");
    /*int a;
    int b;

    cout << "Введите значение а: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;

    swap(a, b);

    cout << a << "\t" << b << endl;

    create_array();*/

    const int n = 10;

    int array2[n] = { 1,2,3,4,5,6,7,8,9,10 };

    int* pa = array2;
    int* pla = array2 + n-1;

    int temp = *pa;
    *pa = *pla;
    *pla = temp;

    for (int i : array2)
    {
        cout << i << "\t";
    }

}
void swap(int &a, int &b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;

}

void create_array()
{
    const int size_arr = 10;
    int array[size_arr];
    int k;

    for (int i = 0; i < size_arr; i++)
    {
        cout << "Введите значение для индекса " << i << " : ";
        cin >> k;
        array[i] = k;
    }

    zadom(array);

    
}

void zadom(const int (&array)[10])
{
    for (int i = 9; i >= 0; i--)
    {
        cout << array[i] << endl;
    }
}


