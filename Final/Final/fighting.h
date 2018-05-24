#include <iostream>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>
#include <windows.h>

using namespace std;

int fighting()
{
	int end;
	string choice;

	cout << "\nChoose your attack option: \n\n	1. [knife] \n	2. [magicMissle] \n	3. [bowAndArrow]" << endl;

	cout << "\nInput Answer: ";
	cin >> choice;

	if (choice == "knife")
	{
		cout << "\nRolling dice";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		do{
			srand(time(NULL));
			int d20 = rand() % 20 + 1;
			int d4 = rand() % 4 + 1;
			Sleep(500);
			cout << d20 << endl;
			if (d20 < 6)
			{
				Sleep(500);
				cout << "\nAttack missed" << endl;
			}
			else
			{
				Sleep(500);
				cout << "\nYou Hit for " << d4 << " damage!" << endl;
			}
			cin >> end;
		} while (end != 1);


	}
	else if (choice == "magicMissle")
	{
		cout << "\nRolling dice";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		do{
			srand(time(NULL));
			int d20 = rand() % 20 + 1;
			int d4 = rand() % 4 + 1;
			Sleep(500);
			cout << d20 << endl;
			if (d20 < 6)
			{
				Sleep(500);
				cout << "\nAttack missed" << endl;
			}
			else
				Sleep(500);
			{
				int threeD4 = 0;
				for (int i = 0; i < 3; i++)
				{
					d4 = rand() % 4 + 1;
					threeD4 = d4 + threeD4;
					cout << "\nYou Hit for " << threeD4 << " damage!" << endl;
				}
				//cout << "\nYou Hit for " << threeD4 << " damage!" << endl;
			}
			cin >> end;
		} while (end != 1);
	}
	else if (choice == "bowAndArrow")
	{
		cout << "\nRolling dice";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		do{
			srand(time(NULL));
			int d20 = rand() % 20 + 1;
			int d6 = rand() % 6 + 1;
			Sleep(500);
			cout << d20 << endl;
			if (d20 < 6)
			{
				Sleep(500);
				cout << "\nAttack missed" << endl;
			}
			else
			{
				Sleep(500);
				cout << "\nYou Hit for " << d6 << " damage!" << endl;
			}
			cin >> end;
		} while (end != 1);
	}

	/*do{
	srand(time(NULL));
	int d20 = rand() % 20 + 1;
	int d4 = rand() % 4 + 1;
	cout << d20 << endl;
	cin >> end;
	} while (end != 1); */

	system("pause");
	return 0;
}