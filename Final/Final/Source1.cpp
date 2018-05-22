/* Final Project: 
Date Began:  05/10/2018				Date End:
<ShawnD Herrick and Jimmy Thai> 's Source File
*/

#include <iostream>
using namespace std;
void shop1(int totalGold, int gI1, int gI2, int gI3);
int main(int totalGold, int gI1, int gI2, int gI3)
{
	if (gI1 > 3 && gI2 > 3 && gI3 > 3)
	{
		totalGold = 100;
		gI1 = 00;
		gI2 = 00;
		gI3 = 00;
	}
	int goONo;
	int i1 = gI1;
	int i2 = gI2;
	int i3 = gI3;
	int userGold = totalGold;
	int inventory[] = { i1, i2, i3 };
	cout << "Current Inventory :" << endl;	//Shows Current Inventory
	cout << "Gold:  " << userGold << endl;
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
		shop1(totalGold, gI1, gI2, gI3);
	}
	//system ("pause");
	return 0;
}
void shop1(int totalGold, int gI1, int gI2, int gI3)
{
	int i1 = gI1;
	int i2 = gI2;
	int i3 = gI3;
	int inventory[] = { i1, i2, i3 };		//Calls variables
	int userGold = totalGold;
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
		cout << "Gold:  " << userGold << endl;
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
				if (userGold >= rope)					//Checks for correct amount of gold
				{
					if (inventory[0] == 00)			//Checks inventory and subtracts gold if there is room for the item
					{
						inventory[0] = ropeID;
						userGold = userGold - rope;
					}
					else if (inventory[0] != 00 && inventory[1] == 00)
					{
						inventory[1] = ropeID;
						userGold = userGold - rope;
					}
					else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
					{
						inventory[2] = ropeID;
						userGold = userGold - rope;
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
				if (userGold >= potion)					//Checks to see if player has enough gold
				{
					if (inventory[0] == 00)			//Checks inventory for space and subtracts gold if there is room for the item
					{
						inventory[0] = potionID;
						userGold = userGold - potion;
					}
					else if (inventory[0] != 00 && inventory[1] == 00)
					{
						inventory[1] = potionID;
						userGold = userGold - potion;
					}
					else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
					{
						inventory[2] = potionID;
						userGold = userGold - potion;
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
				if (userGold >= sword)
				{
					if (inventory[0] == 00)
					{
						inventory[0] = swordID;
						userGold = userGold - sword;
					}
					else if (inventory[0] != 00 && inventory[1] == 00)
					{
						inventory[1] = swordID;
						userGold = userGold - sword;
					}
					else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
					{
						inventory[2] = swordID;
						userGold = userGold - sword;
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
	gI1 = inventory[0];
	gI2 = inventory[1];
	gI3 = inventory[2];
	totalGold = userGold;
	main(totalGold, gI1, gI2, gI3);
}





/*

															  
cout << "			   .-									    _,-." << endl;
cout << "	    ______/C_________________________________,.-'v/^^ ,/" << endl;
cout <<	"	 ,n#|##|#}{------------------------------ - - - ___-^   " << endl;
cout <<	"	,,,```````|/,-,,,^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^       " << endl;
cout <<	"		     c/,                                            " << endl;

*/