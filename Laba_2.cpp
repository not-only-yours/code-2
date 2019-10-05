//Потрібно довести або спростувати належність точки координатної площини до заштрихованої площини. (x >= 1 && y >= 1-x || x<=0  && y>= 1-x). 
#include <iostream>
#include <cmath>
using namespace std;
int x, y, vidpovid;                                             //означення 3 змінних
char num;                                                       //означення змінної для повторення виконання коду
unsigned koordynaty(int& x, int& y);                            //означення функціі та значень, які використовуватимуться
unsigned vidpovid_1(int vidpovid);                              //означення функціі та значень, які використовуватимуться


unsigned koordynaty(int& x, int& y)                             //функція перевіряє належність точки до заданого графіку, при належності присвоює змінній vidpovid значення 1 та повертає його
{
	if ((x >= 1 && y >= 1-x && y<=0) || (x<=0  && y>= 1-x ))   
	{
		vidpovid = 0;
		return vidpovid;
	}
	else return 1;
}


int main()
{
	do                                                          //функція повторює своє виконання до неістинності твердження 'while'
	{
		cout << "Input x: ";  cin >> x;                         //вивід у консоль змінної, яку потрібно вводити та ввод цієї змінної
		cout << "Input y: ";  cin >> y;                         //вивід у консоль змінної, яку потрібно вводити та ввод цієї змінної


		vidpovid = koordynaty(x, y);                            //виконання функції 'koordynaty'(знаходиться перед main)
		vidpovid_1(vidpovid);                                   //виконання функції 'vidpovid_1'(знаходиться після main)


		cout << "\nRerun code(y/n): ";  cin >> num;               //зчитування клавіші з клавіатури
	} while (num != 'n' && num != 'N');                         //вихід з виконання коду при натисканні великої або малої клавіші 'n'
	return 0;                                                   //повернення значеннь
}

unsigned vidpovid_1(int vidpovid)                               //перевірка значеня змінної, при 1 число належить площині, у інших випадках - ні
{
	if (vidpovid == 0)
	{
		cout << "Yes, koordynaty chysel (" << x << ";" << y << ")";
	}
	else cout << "No";
	return 0;
}

