#include <iostream>
using namespace std;

int n = 0;
int top = -1;
int order;
int ordered[20];
string glasses[20];
string cocktail[20];



void welcome() {
	cout << "\033[0;95m  (`\\ .-\') /`\033[0m\033[0;93m   (\'-.\033[0m                                  \033[0;92m_   .-\')\033[0m\033[0;36m       (\'-.   \n\033[0m";
	cout << "\033[0;95m   `.( OO ),\'\033[0m\033[0;93m _(  OO)\033[0m                                 \033[0;92m( \'.( OO )_\033[0m\033[0;36m   _(  OO) \n\033[0m";
	cout << "\033[0;95m,--./  .--.\033[0m\033[0;93m  (,------.\033[0m\033[0;96m ,--.\033[0m\033[0;97m       .-----.\033[0m\033[0;91m  .-\'),-----.\033[0m\033[0;92m ,--.   ,--.)\033[0m\033[0;36m(,------. \n\033[0m";
	cout << "\033[0;95m|      |  |\033[0m\033[0;93m   |  .---\'\033[0m\033[0;96m |  |.-\')\033[0m\033[0;97m  \'  .--./\033[0m\033[0;91m ( OO\'  .-.  \'\033[0m\033[0;92m|   `.\'   |\033[0m\033[0;36m  |  .---\' \n\033[0m";
	cout << "\033[0;95m|  |   |  |,\033[0m\033[0;93m  |  |\033[0m\033[0;96m     |  | OO )\033[0m\033[0;97m |  |(\'-.\033[0m\033[0;91m /   |  | |  |\033[0m\033[0;92m|         |\033[0m\033[0;36m  |  |     \n\033[0m";
	cout << "\033[0;95m|  |.\'.|  |_)\033[0m\033[0;93m(|  \'--.\033[0m\033[0;96m  |  |`-\' |\033[0m\033[0;97m/_) |OO  )\033[0m\033[0;91m\\_) |  | |  |\033[0m\033[0;92m|  |\'.\'|  |\033[0m\033[0;36m (|  \'--.  \n\033[0m";
	cout << "\033[0;95m|         |\033[0m\033[0;93m   |  .--\'\033[0m\033[0;96m (|  \'---.\'\033[0m\033[0;97m||  |`-\'|\033[0m\033[0;91m   \\ |  | |  |\033[0m\033[0;92m|  |   |  |\033[0m\033[0;36m  |  .--\'  \n\033[0m";
	cout << "\033[0;95m|   ,\'.   |\033[0m\033[0;93m   |  `---.\033[0m\033[0;96m |      |\033[0m\033[0;97m(_\'  \'--\'\\\033[0m\033[0;91m    `\'  \'-\'  \'\033[0m\033[0;92m|  |   |  |\033[0m\033[0;36m  |  `---. \n\033[0m";
	cout << "\033[0;95m\'--\'   \'--\'\033[0m\033[0;93m   `------\'\033[0m\033[0;96m `------\'\033[0m\033[0;97m   `-----\'\033[0m\033[0;91m      `-----\'\033[0m\033[0;92m `--\'   `--\'\033[0m\033[0;36m  `------\' \n\n\n\n\n\033[0m";

	cout << "\033[0;96m승호(홀서빙) : 어서오세용 ♡예담예담♡ 칵테일 바입니당~ 몇 분이신가용~? \n\n \033[0m";
	cin >> n;
	cout << "\n\n\n";
}

void menu() {
	cout << "  =메뉴판=\n\n";
	cout << "1. Soju\n";
	cout << "2. HighBall\n";
	cout << "3. Whiskey\n";
	cout << "4. TomCollins\n";
	cout << "5. DryMartini\n";
	cout << "6. Margarita\n";
	cout << "7. Pilsner\n";
	cout << "8. IrishCoffee\n";
	cout << "9. PousseCafe\n";
	cout << "10. Cognac\n";
	cout << "11. Punch\n";
	cout << "12. Liqueur\n";
	cout << "13. WhiteWine\n";
	cout << "14. RedWine\n";
	cout << "15. SherryWine\n";
	cout << "16. Parfait\n";
	cout << "17. ScotchWhiskey\n";
	cout << "18. Champagne\n\n\n";
}


void push(int arr[20], int data) {
	++top;
	arr[top] = data;
}

int pop(int arr[20]) {
	top--;
	return arr[top + 1];
}


void loading1() {
	int a = 0;

	cout << "\n\n(설거지 중 . . )\n";

	for (int i = 0; i < 30000; i++) {
		for (int j = 0; j < 30000; j++) {
			a++;
		}
	}
}

void loading2() {
	int a = 0;

	cout << "\n\n(만드는 중 . . )\n";

	for (int i = 0; i < 30000; i++) {
		for (int j = 0; j < 30000; j++) {
			a++;
		}
	}
}


void ordering() {

	for (int i = 0; i < n; i++) {

		// 주문이 들어와!
		cout << "\n\n\033[0;96m승호(홀서빙) : 원하는 칵테일을 주문해 주세용\033[0m\n\n";
		cin >> order;
		for (int j = 0; j < 20; j++) {
			if (order == ordered[j]) {
				cout << "\033[0;93m\n\n" << cocktail[order] << "은(는) 설거지 중입니다 잠시만 기다려 주세용\033[0m\n\n";
				pop(ordered);
				loading1();
			}

			else {
				// 주문이 들어온 술에 맞는 컵을 스택에 담아!
				for (int k = 1; k < 21; k++) {
					if (order == k) {
						push(ordered, order);
						loading2();
						cout << "\n\n\033[0;95m예담(조주사) : " << cocktail[k] << "이(가) 나왔습니다!\033[0m" << "\n\n";

					}
				}
				break;
			}
		}

	}

	cout << "\n\033[0;96m승호(홀서빙) : 안녕히 가세용\033[0m\n\n";

}



int main() {
	glasses[1] = "Shot Glass";
	glasses[2] = "Highball Glass";
	glasses[3] = "Old Fashioned Glass";
	glasses[4] = "Collins Glass";
	glasses[5] = "Martini Glass";
	glasses[6] = "Margartia Glass";
	glasses[7] = "Pilsner Glass";
	glasses[8] = "Irish Coffe Glass";
	glasses[9] = "Pousse";
	glasses[10] = "Brandy Snifter";
	glasses[11] = "Punch Cup";
	glasses[12] = "Cordial Glass";
	glasses[13] = "White Wine Glass";
	glasses[14] = "Red Wine Glass";
	glasses[15] = "Sherry Glass";
	glasses[16] = "Parfait Glass";
	glasses[17] = "Sour Glass";
	glasses[18] = "Champagne Flute";

	cocktail[1] = "Soju";
	cocktail[2] = "HighBall";
	cocktail[3] = "Whiskey";
	cocktail[4] = "TomCollins";
	cocktail[5] = "DryMartini";
	cocktail[6] = "Margarita";
	cocktail[7] = "Pilsner";
	cocktail[8] = "IrishCoffee";
	cocktail[9] = "PousseCafe";
	cocktail[10] = "Cognac";
	cocktail[11] = "Punch";
	cocktail[12] = "Liqueur";
	cocktail[13] = "WhiteWine";
	cocktail[14] = "RedWine";
	cocktail[15] = "SherryWine";
	cocktail[16] = "Parfait";
	cocktail[17] = "ScotchWhiskey";
	cocktail[18] = "Champagne";


	welcome();
	menu();
	ordering();

}