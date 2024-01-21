#include <iostream>
#include<iomanip>
using namespace std;

struct product
{
	
	char name[15];       //  Наименование товара
	double price;        //  Стоимость товара
	int quantity;        //  Количество
	void input_product()
	{
		cout<<"Наименование товара: " << name<< endl << "Стоимость - " << price<<" тыс.руб" << endl << "Количество =  " << quantity<<" шт" << endl;
	}
	

}*myProduct ;



int main()
{
	setlocale(LC_ALL, "RU");
	system("chcp 1251 > nul");
	double cost = 0;
	myProduct = (struct product*)malloc(sizeof(struct product));
	cout << "Введите наименование товара" << endl;
	cin >> myProduct->name;
	cout << "Укажите стоимость товара в т.руб" << endl;
	cin >> myProduct->price;
	cout << "Укажите количество товара" << endl;
	cin >> myProduct->quantity;
	myProduct->input_product();
	cost = myProduct->quantity * myProduct->price;     // Подсчет стоимости через указатель
	cout << fixed <<setw(10) << setprecision(2);       // Выводимна экран (в формате 10 знакомест, 2 знака после запятой)
	cout << cost;                                      // Вывод на экран стоимости 
	




}

//Напишите программу для хранения информации о стоимости товаров 
//в структуре(наименование, цена — действительное число, количество — целое число).
//Адрес структуры присвойте указателю.Запросите ввод значений полей с клавиатуры.
//Вычислите через указатель стоимость всех товаров(цена* количество) и 
//выведите на экран(в формате 10 знакомест, 2 знака после запятой).