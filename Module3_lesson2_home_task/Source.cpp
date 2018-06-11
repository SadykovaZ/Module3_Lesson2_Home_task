#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL));

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int n = 0;

start:
	printf("Введите номер задания:\t");
	scanf("%d", &n);

	switch (n)
	{

	case 1:

	{
		//1.	Напишите функцию f(int& h, int& m, int& s, int sec), которая принимает количество секунд, прошедших с начала дня, 
		//      и возвращает три целых переменных (часы, минуты и секунды)

		int h = 0, m = 0, s = 0, sec = 0, x = 0, y = 0;

		//sec = 1 + rand() % 5000;
		//printf("Известно количество секунд, прошедших с начала дня = %d\n", sec);

		printf("Введите количество секунд, прошедших с начала дня = ");
		scanf("%d", &sec);

		h = sec / 3600;

		x = sec - (3600 * h);

		m = x / 60;

		s = x - (60 * m);

		printf("--------------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 3);
		printf("С начала дня прошло: %d ч. %d м. и %d сек.\n", h, m, s);
		SetConsoleTextAttribute(hConsole, 15);

		printf("--------------------------------------------------------\n");

	}
	break;

	case 2:
	{
		// 2.	Напишите функцию int f(int x), которая принимает целое значение (не больше пяти знаков) и 
		//возвращает число с обратным порядком цифр. Например, принимается число 7631, возвращается число 1367

		int x = 0, f = 0;

		printf("Введите число х, не больше пяти знаков = ");
		scanf("%d", &x);

		while (x)
		{

			f = f * 10 + x % 10;
			x /= 10;
		}

		printf("--------------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 13);
		printf("Число с обратным порядком цифр = %d\n", f);
		SetConsoleTextAttribute(hConsole, 15);

		printf("--------------------------------------------------------\n");
	}

	break;

	case 3:
	{
		//3.	Палиндром – число или текст, который одинаково читается слева направо и справа налево. 
		//      Например, каждое из следующих пятизначных целых чисел является палиндромом: 12321, 55555, 45554 и 11611. Текст–палиндром: 
		//      Ешь немытого ты меньше. Напишите функцию bool f(int N), которая определяет, является ли пятизначное целое число N палиндромом

		int a = 0, b = 0, c = 0, d = 0, e = 0, N = 0, y = 0;
		printf("Введите пятизначное число для определения палиндром оно или нет: ");
		scanf("%d", &N);

		if (N >= 10000 && N < 100000)
		{
			a = N % 10000;
			b = N % 1000;
			c = N % 100;
			d = N % 10;
			e = N - a;
			a -= b;
			b -= c;
			c -= d;

			y = d * 10000 + c * 100 + b * 1 + a / 100 + e / 10000;

			if (N == y)
			{
				printf("--------------------------------------------------------\n");

				SetConsoleTextAttribute(hConsole, 2);
				printf("Введённое вами число является палиндромом!\n");
				SetConsoleTextAttribute(hConsole, 15);

				printf("--------------------------------------------------------\n");
			}
			else
			{
				printf("--------------------------------------------------------\n");

				SetConsoleTextAttribute(hConsole, 4);
				printf("Введённое вами число не палиндром!\n");
				SetConsoleTextAttribute(hConsole, 15);

				printf("--------------------------------------------------------\n");

			}
		}

		else
		{
			printf("--------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 4);
			printf("Число должно быть пятизначным.\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}



	}

	break;

	case 4:
	{
		//4.	Говорят, что целое число является совершенным числом, если его сомножители, включая 1 (но не само число) в сумме дают это число.
		//Например, 6 – совершенное число, так как 6=1+2+3. Напишите функцию bool f(int n), которая определяет, является ли ее параметр n 
		//совершенным числом. Используйте эту функцию в программе, которая определяет и печатает все совершенные числа в диапазоне от 1 до 1000.

		int i = 0, n = 0, sum = 0, j, s, l;

		printf("Введите число:\t");
		scanf("%d", &n);

		for (i = 1; i < n; i++)
		{
			if (n%i == 0)
			{
				sum = sum + i;
			}

		}
		if (n == sum)
		{
			printf("--------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 2);
			printf("Число совершенное!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}
		else
		{
			printf("--------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 4);
			printf("Число НЕ является совершенным!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}

		SetConsoleTextAttribute(hConsole, 11);

		printf("Вывести все совершенные числа в диапазоне от 1 до 1000\n");

		SetConsoleTextAttribute(hConsole, 15);

		for (i = 2; i <= 1000; i++)
		{
			s = 0;
			for (j = 1; j < i; j++)

				if (i%j == 0)
				{
					s += j;
				}
			if (s == i)
			{
				printf("--------------------------------------------------------\n");

				SetConsoleTextAttribute(hConsole, 5);
				printf("\t%d\n", i);
				SetConsoleTextAttribute(hConsole, 15);

				printf("--------------------------------------------------------\n");
			}
		}


	}

	break;

	case 5:
	{
		//5.	Напишите программу, которая с помощью функции rand() ставит оценки в пределах от 2 до 5. В файл протокола направляйте слово “Неуд” 
		//      при появлении 2, «Удовл» при появлении 3, и т.д. Используйте оператор switch.

		int a = 0;

		a = 2 + rand() % 4;

		printf("Оценка = %d\n", a);
		switch (a)
		{


		case 2:

		{
			printf("--------------------------------------------------------\n");
			
			SetConsoleTextAttribute(hConsole, 4);
			printf("Неудовлетворительно!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}

		break;

		case 3:

		{

			printf("--------------------------------------------------------\n");
			
			SetConsoleTextAttribute(hConsole, 14);
			printf("Удовлетворительно!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}

		break;

		case 4:

		{
			printf("--------------------------------------------------------\n");
			
			SetConsoleTextAttribute(hConsole, 3);
			printf("Хорошо!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}
		break;

		case 5:

		{
			printf("--------------------------------------------------------\n");
			
			SetConsoleTextAttribute(hConsole, 10);
			printf("Отлично!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");

		}

		break;


		}
	}

	break;

	case 6:
	{
		//Билет на одну поездку в метро стоит 15 тенге, билет на 10 поездок стоит 125 тенге, билет на 60 поездок стоит 440 тенге.
		//Пассажир планирует совершить n поездок. Определите, сколько билетов каждого вида он должен приобрести, чтобы суммарное 
		//количество оплаченных поездок было не меньше n, а общая стоимость приобретенных билетов – минимальна. Входные данные: 
		//количество поездок n. Выходные данные – три целых числа, равные необходимому количеству билетов на 1, на 10, на 60 поездок. 
		//Например, при вводе 129 программа должна вывести 0 1 2 (2 билета на 60 поездок и 1 билет на 10 поездок).

		int n = 0, k1 = 0, k10 = 0, k60 = 0, ostatok = 0, pi = 0;

		printf("Введите колличество поездок: \t");
		scanf("%d", &n);

		if (n >= 60)
		{
			k60 = n / 60;
			ostatok = n % 60;

			if (ostatok >= 10)
			{
				k10 = ostatok / 10;
				ostatok = ostatok % 10;

				if (ostatok >= 1)
				{
					k1 = ostatok / 1;

				}
			}
			else
			{
				k10 = 0;
				k1 = ostatok;
			}

			pi = (k10 * 125) + (k1 * 15);

			if (pi >= 440)
			{
				k60++;
				printf("--------------------------------------------------------\n");
				
				SetConsoleTextAttribute(hConsole, 13);
				printf("0, 0, %d\n", k60);
				SetConsoleTextAttribute(hConsole, 15);
				
				printf("--------------------------------------------------------\n");
				goto start;
			}
			else
			{
				if (k1 * 15 >= 125)
				{
					k10++;
					printf("--------------------------------------------------------\n");
					
					SetConsoleTextAttribute(hConsole, 13);
					printf("0, %d, %d\n", k10, k60);
					SetConsoleTextAttribute(hConsole, 15);
					
					printf("--------------------------------------------------------\n");
					goto start;
				}
				else
				{
					printf("--------------------------------------------------------\n");
					
					SetConsoleTextAttribute(hConsole, 13);
					printf("%d, %d, %d\n", k1, k10, k60);
					SetConsoleTextAttribute(hConsole, 15);
					
					printf("--------------------------------------------------------\n");
					goto start;
				}
			}

		}
		else if (n < 60)
		{
			k60 = 0;
			k10 = n / 10;
			k1 = n % 10;
			pi = (k10 * 125) + (k1 * 15);
			if (pi >= 440)
			{
				k60++;
				printf("--------------------------------------------------------\n");
				
				SetConsoleTextAttribute(hConsole, 13);
				printf("0, 0, %d\n", k60);
				SetConsoleTextAttribute(hConsole, 15);
				
				printf("--------------------------------------------------------\n");
				goto start;
			}
			else
			{
				if (k1 * 15 >= 125)
				{
					k10++;
					printf("--------------------------------------------------------\n");
					
					SetConsoleTextAttribute(hConsole, 13);
					printf("0, %d, %d\n", k10, k60);
					SetConsoleTextAttribute(hConsole, 15);
					
					printf("--------------------------------------------------------\n");
					goto start;
				}
				else
				{
					printf("--------------------------------------------------------\n");
					
					SetConsoleTextAttribute(hConsole, 13);
					printf("%d, %d, %d\n", k1, k10, k60);
					SetConsoleTextAttribute(hConsole, 15);
					
					printf("--------------------------------------------------------\n");
					goto start;
				}
			}
		}
		else if (n < 10)
		{
			k60 = 0;
			k10 = 0;
			k1 = n;
			if (k1 * 15 >= 125)
			{
				k10++;
				k1 = 0;
				printf("--------------------------------------------------------\n");
				
				SetConsoleTextAttribute(hConsole, 13);
				printf("%d, %d, %d\n", k1, k10, k60);
				SetConsoleTextAttribute(hConsole, 15);
				
				printf("--------------------------------------------------------\n");
				goto start;
			}
		}
	}

	break;

	case 7:

	{
		//7.	Решите предыдущую задачу при наличии следующих билетов: 1 поездка - 15 тенге, 5 поездок - 70 тенге, 10 поездок - 125 тенге, 
		//20 поездок - 230 тенге, 60 поездок - 440 тенге. Если для какого-то данного n существует несколько способов приобретения билетов 
		//одинаковой стоимости, необходимо вывести ту комбинацию билетов, которая дает большее число поездок.

		int k1 = 0, k5 = 0, k10 = 0, k20 = 0, k60 = 0, n = 0, ostatok = 0, pi = 0;

		printf("Введите колличество поездок: \t");
		scanf("%d", &n);

		if (n >= 60)
		{
			k60 = n / 60;
			ostatok = n % 60;
		}
		else
		{
			k60 = 0;
		}
		if (ostatok >= 20)
		{
			k20 = ostatok / 20;
			ostatok = ostatok % 20;
		}
		else
		{
			k20 = 0;
		}
		if (ostatok >= 10)
		{
			k10 = ostatok / 10;
			ostatok = ostatok % 10;
		}
		else
		{
			k10 = 0;
		}
		if (ostatok >= 5)
		{
			k5 = ostatok / 5;
			ostatok = ostatok % 5;
		}
		else
		{
			k5 = 0;
		}
		if (ostatok >= 1)
		{
			k1 = ostatok / 1;
		}
		else
		{
			k1 = 0;
		}
		pi = (k20 * 230) + (k10 * 125) + (k5 * 70) + (k1 * 15);
		if (pi >= 440)
		{
			k60++;
			k20 = 0;
			k10 = 0;
			k5 = 0;
			k1 = 0;
			printf("--------------------------------------------------------\n");
			
			SetConsoleTextAttribute(hConsole, 13);
			printf("%d, %d, %d, %d, %d\n", k1, k5, k10, k20, k60);
			SetConsoleTextAttribute(hConsole, 15);
			
			printf("--------------------------------------------------------\n");
			goto start;
		}
		else
		{
			pi = (k10 * 125) + (k5 * 70) + (k1 * 15);
			if (pi >= 230)
			{
				k20++;
				k10 = 0;
				k5 = 0;
				k1 = 0;
				printf("--------------------------------------------------------\n");
				
				SetConsoleTextAttribute(hConsole, 13);
				printf("%d, %d, %d, %d, %d\n", k1, k5, k10, k20, k60); 
				SetConsoleTextAttribute(hConsole, 15);
				
				printf("--------------------------------------------------------\n");
				goto start;
			}
			else
			{
				pi = (k5 * 70) + (k1 * 15);
				if (pi >= 125)
				{
					k10++;
					k5 = 0;
					k1 = 0;
					printf("--------------------------------------------------------\n");
					
					SetConsoleTextAttribute(hConsole, 13);
					printf("%d, %d, %d, %d, %d\n", k1, k5, k10, k20, k60); 
					SetConsoleTextAttribute(hConsole, 15);
					
					printf("--------------------------------------------------------\n");
					goto start;
				}
				else
				{
					if (k1 * 15 >= 70)
					{
						k5++;
						k1 = 0;
						printf("--------------------------------------------------------\n");
						
						SetConsoleTextAttribute(hConsole, 13);
						printf("%d, %d, %d, %d, %d\n", k1, k5, k10, k20, k60);
						SetConsoleTextAttribute(hConsole, 15);
						
						printf("--------------------------------------------------------\n");
						goto start;
					}
					else
					{
						printf("--------------------------------------------------------\n");
						
						SetConsoleTextAttribute(hConsole, 13);
						printf("%d, %d, %d, %d, %d\n", k1, k5, k10, k20, k60);
						SetConsoleTextAttribute(hConsole, 15);
						
						printf("--------------------------------------------------------\n");
						goto start;
					}
				}
			}
		}


	}

	break;
	default:
	{
		printf("--------------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 4);
		
		printf("Такого задания нет, введите другое!\n");
		SetConsoleTextAttribute(hConsole, 15);

		printf("--------------------------------------------------------\n");
	}
	break;
	}

	goto start;
}