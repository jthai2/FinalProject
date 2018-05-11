/* Final Project: 
Date Began:  05/10/2018				Date End:
<ShawnD Herrick and Jimmy Thai> 's Source File
*/

#include <iostream>
using namespace std;
void shop1(int gold, int i1, int i2, int i3);
int main(int gold, int i1, int i2, int i3)
{
	int goONo;
	int inventory[] = { i1, i2, i3 };
	for (int x = 0; x < 3; x++)
	{
		switch (inventory[x])
		{
		case 00:
			cout << "EMPTY" << endl;
			break;
		case 01:
			cout << "Rope -- 25g" << endl;
			break;
		case 02:
			cout << "Potion -- 15g" << endl;
			break;
		case 03:
			cout << "Sword -- 75g" << endl;
			break;
		default:
			break;
		}
	}
	cout << "GO TO SHOP?" << endl;
	cin >> goONo;
	if (goONo == 1)
	{
		shop1(gold, i1, i2, i3);
	}

	//system ("pause");
	return 0;
}
void shop1(int gold, int i1, int i2, int i3)
{
	int inventory[] = { i1, i2, i3 };		//Calls variables
	gold = 100;
	int itemBuy = 0;
	int rope = 25;
	int ropeID = 01;
	int potion = 15;
	int potionID = 02;
	int sword = 75;
	int swordID = 03;
	do{
		cout << "+=-------SHOP-------=+" << endl;	//Displays Shop
		cout << "| 1 --- Rope --- 25g |" << endl;
		cout << "| 2 -- Potion -- 15g |" << endl;
		cout << "| 3 --- Sword -- 75g |" << endl;
		cout << "+=------------------=+" << endl;
		cout << "Current Inventory :" << endl;	//Shows Current Inventory
		cout << "Gold:  " << gold << endl;
		for (int x = 0; x < 3; x++)
		{
			switch (inventory[x])
			{
			case 00:
				cout << "EMPTY" << endl;
				break;
			case 01:
				cout << "Rope -- 25g" << endl;
				break;
			case 02:
				cout << "Potion -- 15g" << endl;
				break;
			case 03:
				cout << "Sword -- 75g" << endl;
				break;
			default:
				break;
			}
		}
		cout << "What would you like to buy? (-1 to exit) \n>";
		while (!(cin >> itemBuy))					//User Input
		{
			cout << "ERROR!! INVALID INPUT PLEASE TRY AGAIN\n>" << endl;
			cin.clear();
			cin.ignore(100000, '\n');
		}
		if (itemBuy == 3 || itemBuy == 2 || itemBuy == 1)
		{
			switch (itemBuy)
			{
			case 1:									//If input is equal to 1 (Rope)
				if (gold >= rope)					//Checks for correct amount of gold
				{
					if (inventory[0] == 00)			//Checks inventory and subtracts gold if there is room for the item
					{
						inventory[0] = ropeID;
						gold = gold - rope;
					}
					else if (inventory[0] != 00 && inventory[1] == 00)
					{
						inventory[1] = ropeID;
						gold = gold - rope;
					}
					else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
					{
						inventory[2] = ropeID;
						gold = gold - rope;
					}
					else
					{
						cout << "You do not have enough space" << endl;
					}
				}
				else
				{
					cout << "You do not have enough gold." << endl;
				}
				break;
			case 2:									//If Input is equal to 2 (Potion)
				if (gold >= potion)					//Checks to see if player has enough gold
				{
					if (inventory[0] == 00)			//Checks inventory for space and subtracts gold if there is room for the item
					{
						inventory[0] = potionID;
						gold = gold - potion;
					}
					else if (inventory[0] != 00 && inventory[1] == 00)
					{
						inventory[1] = potionID;
						gold = gold - potion;
					}
					else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
					{
						inventory[2] = potionID;
						gold = gold - potion;
					}
					else
					{
						cout << "You do not have enough space" << endl;
					}
				}
				else
				{
					cout << "You do not have enough gold." << endl;
				}
				break;
			case 3:									//If input is equal to 3
				if (gold >= sword)
				{
					if (inventory[0] == 00)
					{
						inventory[0] = swordID;
						gold = gold - sword;
					}
					else if (inventory[0] != 00 && inventory[1] == 00)
					{
						inventory[1] = swordID;
						gold = gold - sword;
					}
					else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
					{
						inventory[2] = swordID;
						gold = gold - sword;
					}
					else
					{
						cout << "You do not have enough space" << endl;
					}
				}
				else
				{
					cout << "You do not have enough gold." << endl;
				}
				break;
			default:
				break;
			}
		}
		else if (itemBuy <= -2 || itemBuy >= 4 || itemBuy == 0)
		{
			cout << "ERROR!! INVALID INPUT PLEASE TRY AGAIN!!" << endl;
		}
	} while (itemBuy != -1);
	cout << "YAYA" << endl;
	main(gold, i1, i2, i3);
}