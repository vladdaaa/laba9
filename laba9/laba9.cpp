// laba9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Объект – автомобиль в автосалоне. Известна марка автомобиля, тип коробки передач (механика или автомат),
//объем двигателя, величина дорожного просвета, тип привода (передний, задний, 4WD), стоимость.
//Выдать список автомобилей со стоимостью меньше заданной суммы.  

#include <iostream>
#include <clocale>

using namespace std;

const int max_kol = 30;
struct avto
{
	char marka[30];//marka
	char korobka[30];// mex ili avtomat
	float valume;
	int prosvet;
	char privod[30];//peredniy zadniy 4wd
	int cena;

};
int main()
{
	setlocale(LC_ALL, "ru");
	system("chcp 1251");//установить кодовую страницу, соответ. Win-кодировке 
	
	avto arravto[max_kol];// массив машин
	int kol, mins;
	cout << "Введите количество машин"<<" ";
	cin >> kol;
	cout << endl;
	
	cout << "Введите характеристики машины";
	cout << endl;
	//считываем характеристики машин
	for (int i = 0; i < kol; i++) {

		cout << endl;
		
		cout << "Марка машины:" << " ";
		cin >> arravto[i].marka;

		cout << "Тип коробки передач:" << " ";
		cin >> arravto[i].korobka;

		cout << "Объем двигателя:" << " ";
		cin >> arravto[i].valume;

		cout << "Величина дорожного просвета:" << " ";
		cin >> arravto[i].prosvet;

		cout << "Тип привода:" << " ";
		cin >> arravto[i].privod;

		cout << "Стоимость машины:" << " ";
		cin >> arravto[i].cena;

		cout << endl;
	}
	cout << "Введите сумму:" << " ";
	cin >> mins;
	cout << endl;
	//выводим машин с ценой, меньше введенной
	for (int i = 0; i < kol; i++)
	{
		if (arravto[i].cena < mins)
		{
			cout << endl;
			 

			cout << "Марка машины:" << arravto[i].marka << "\n";
			cout << "Тип коробки передач:" << arravto[i]. korobka  << endl;
			cout << "Объем двигателя:" << arravto[i].valume  << endl;
			cout << "Величина дорожного просвета:" << arravto[i].prosvet  << endl;
			cout << "Тип привода:" << arravto[i].privod << endl;
			cout << "Стоимость машины:" << arravto[i].cena  << endl;
			break;
		
		}
		else {//если не нашлось машины меньшей стоимости
			cout << "ничего не найдено";
			break;
		}
	}

}

