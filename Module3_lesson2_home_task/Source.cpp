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
	printf("������� ����� �������:\t");
	scanf("%d", &n);

	switch (n)
	{

	case 1:

	{
		//1.	�������� ������� f(int& h, int& m, int& s, int sec), ������� ��������� ���������� ������, ��������� � ������ ���, 
		//      � ���������� ��� ����� ���������� (����, ������ � �������)

		int h = 0, m = 0, s = 0, sec = 0, x = 0, y = 0;

		//sec = 1 + rand() % 5000;
		//printf("�������� ���������� ������, ��������� � ������ ��� = %d\n", sec);

		printf("������� ���������� ������, ��������� � ������ ��� = ");
		scanf("%d", &sec);

		h = sec / 3600;

		x = sec - (3600 * h);

		m = x / 60;

		s = x - (60 * m);

		printf("--------------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 3);
		printf("� ������ ��� ������: %d �. %d �. � %d ���.\n", h, m, s);
		SetConsoleTextAttribute(hConsole, 15);

		printf("--------------------------------------------------------\n");

	}
	break;

	case 2:
	{
		// 2.	�������� ������� int f(int x), ������� ��������� ����� �������� (�� ������ ���� ������) � 
		//���������� ����� � �������� �������� ����. ��������, ����������� ����� 7631, ������������ ����� 1367

		int x = 0, f = 0;

		printf("������� ����� �, �� ������ ���� ������ = ");
		scanf("%d", &x);

		while (x)
		{

			f = f * 10 + x % 10;
			x /= 10;
		}

		printf("--------------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 13);
		printf("����� � �������� �������� ���� = %d\n", f);
		SetConsoleTextAttribute(hConsole, 15);

		printf("--------------------------------------------------------\n");
	}

	break;

	case 3:
	{
		//3.	��������� � ����� ��� �����, ������� ��������� �������� ����� ������� � ������ ������. 
		//      ��������, ������ �� ��������� ����������� ����� ����� �������� �����������: 12321, 55555, 45554 � 11611. ��������������: 
		//      ��� �������� �� ������. �������� ������� bool f(int N), ������� ����������, �������� �� ����������� ����� ����� N �����������

		int a = 0, b = 0, c = 0, d = 0, e = 0, N = 0, y = 0;
		printf("������� ����������� ����� ��� ����������� ��������� ��� ��� ���: ");
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
				printf("�������� ���� ����� �������� �����������!\n");
				SetConsoleTextAttribute(hConsole, 15);

				printf("--------------------------------------------------------\n");
			}
			else
			{
				printf("--------------------------------------------------------\n");

				SetConsoleTextAttribute(hConsole, 4);
				printf("�������� ���� ����� �� ���������!\n");
				SetConsoleTextAttribute(hConsole, 15);

				printf("--------------------------------------------------------\n");

			}
		}

		else
		{
			printf("--------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 4);
			printf("����� ������ ���� �����������.\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}



	}

	break;

	case 4:
	{
		//4.	�������, ��� ����� ����� �������� ����������� ������, ���� ��� �����������, ������� 1 (�� �� ���� �����) � ����� ���� ��� �����.
		//��������, 6 � ����������� �����, ��� ��� 6=1+2+3. �������� ������� bool f(int n), ������� ����������, �������� �� �� �������� n 
		//����������� ������. ����������� ��� ������� � ���������, ������� ���������� � �������� ��� ����������� ����� � ��������� �� 1 �� 1000.

		int i = 0, n = 0, sum = 0, j, s, l;

		printf("������� �����:\t");
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
			printf("����� �����������!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}
		else
		{
			printf("--------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 4);
			printf("����� �� �������� �����������!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}

		SetConsoleTextAttribute(hConsole, 11);

		printf("������� ��� ����������� ����� � ��������� �� 1 �� 1000\n");

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
		//5.	�������� ���������, ������� � ������� ������� rand() ������ ������ � �������� �� 2 �� 5. � ���� ��������� ����������� ����� ����� 
		//      ��� ��������� 2, ������ ��� ��������� 3, � �.�. ����������� �������� switch.

		int a = 0;

		a = 2 + rand() % 4;

		printf("������ = %d\n", a);
		switch (a)
		{


		case 2:

		{
			printf("--------------------------------------------------------\n");
			
			SetConsoleTextAttribute(hConsole, 4);
			printf("�������������������!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}

		break;

		case 3:

		{

			printf("--------------------------------------------------------\n");
			
			SetConsoleTextAttribute(hConsole, 14);
			printf("�����������������!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}

		break;

		case 4:

		{
			printf("--------------------------------------------------------\n");
			
			SetConsoleTextAttribute(hConsole, 3);
			printf("������!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}
		break;

		case 5:

		{
			printf("--------------------------------------------------------\n");
			
			SetConsoleTextAttribute(hConsole, 10);
			printf("�������!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");

		}

		break;


		}
	}

	break;

	case 6:
	{
		//����� �� ���� ������� � ����� ����� 15 �����, ����� �� 10 ������� ����� 125 �����, ����� �� 60 ������� ����� 440 �����.
		//�������� ��������� ��������� n �������. ����������, ������� ������� ������� ���� �� ������ ����������, ����� ��������� 
		//���������� ���������� ������� ���� �� ������ n, � ����� ��������� ������������� ������� � ����������. ������� ������: 
		//���������� ������� n. �������� ������ � ��� ����� �����, ������ ������������ ���������� ������� �� 1, �� 10, �� 60 �������. 
		//��������, ��� ����� 129 ��������� ������ ������� 0 1 2 (2 ������ �� 60 ������� � 1 ����� �� 10 �������).

		int n = 0, k1 = 0, k10 = 0, k60 = 0, ostatok = 0, pi = 0;

		printf("������� ����������� �������: \t");
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
		//7.	������ ���������� ������ ��� ������� ��������� �������: 1 ������� - 15 �����, 5 ������� - 70 �����, 10 ������� - 125 �����, 
		//20 ������� - 230 �����, 60 ������� - 440 �����. ���� ��� ������-�� ������� n ���������� ��������� �������� ������������ ������� 
		//���������� ���������, ���������� ������� �� ���������� �������, ������� ���� ������� ����� �������.

		int k1 = 0, k5 = 0, k10 = 0, k20 = 0, k60 = 0, n = 0, ostatok = 0, pi = 0;

		printf("������� ����������� �������: \t");
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
		
		printf("������ ������� ���, ������� ������!\n");
		SetConsoleTextAttribute(hConsole, 15);

		printf("--------------------------------------------------------\n");
	}
	break;
	}

	goto start;
}