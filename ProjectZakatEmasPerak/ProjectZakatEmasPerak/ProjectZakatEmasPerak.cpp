#include <iostream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

int main()
{
retry:
	int gram, g;
	int choice, c;
	float total;
	int ask;
	int country, a;
	int country1, b;
	float rate = 0.25;
	float goldrate, r = 239.80;

	cout << "============================================" << endl;
	cout << "       Welcome to Daniel Zakat System       " << endl;
	cout << "============================================" << endl;
	cout << "1.Gold                                      " << endl;
	cout << "2.Silver                                    " << endl;
	cout << "                                            " << endl;
	cout << "                                            " << endl;
	cout << "                                            " << endl;
	cout << " Note:This system only usable in 2021/2022  " << endl;
	cout << "============================================" << endl;
	cout << "Please enter you choice:  "; cin >> c;
	system("cls");
	if (c == 1) {
		cout << "============================================" << endl;
		cout << "   Welcome to Daniel Zakat System(Gold)     " << endl;
		cout << "============================================" << endl;
		cout << "1.Perak     7.Johor             13.WP Labuan" << endl;
		cout << "2.Kedah     8.Terengganu        14.Sabah    " << endl;
		cout << "3.Pahang    9.Sarawak           15.Perlis   " << endl;
		cout << "4.P.Pinang  10.Melaka                       " << endl;
		cout << "5.Selangor  11.Putrajaya                    " << endl;
		cout << "6.Kelantan  12.Negeri Sembilan              " << endl;
		cout << "============================================" << endl;
		cout << "Please enter your choice:  "; cin >> a;
		cout << "Please enter your weight(g): "; cin >> g;
		system("cls");

		if (a == 1) {
			total = (g - 500) * r * rate;

		}
		else if (a == 2) {
			total = (g - 170) * r * rate;
		}
		else if (a == 3) {
			total = (g - 500) * r * rate;
		}
		else if (a == 4) {
			total = (g - 165) * r * rate;
		}
		else if (a == 5) {
			total = (g - 800) * r * rate;
		}
		else if (a == 6) {
			total = (g)*r * rate;
		}
		else if (a == 7) {
			total = (g - 850) * r * rate;
		}
		else if (a == 8) {
			total = (g - 850) * r * rate;
		}
		else if (a == 9) {
			total = (g - 90) * r * rate;
		}
		else if (a == 10) {
			total = (g - 180) * r * rate;
		}
		else if (a == 11) {
			total = (g - 850) * r * rate;
		}
		else if (a == 12) {
			total = (g - 200) * r * rate;
		}
		else if (a == 13) {
			total = (g - 800) * r * rate;
		}
		else if (a == 14) {
			total = (g - 152) * r * rate;
		}
		else if (a == 15) {
			total = (g - 85) * r * rate;
		}




	}
	else if (c == 2) {
		cout << "============================================" << endl;
		cout << "   Welcome to Daniel Zakat System(Silver)   " << endl;
		cout << "============================================" << endl;
		cout << "1.Perak     7.Johor             13.WP Labuan" << endl;
		cout << "2.Kedah     8.Terengganu        14.Sabah    " << endl;
		cout << "3.Pahang    9.Sarawak           15.Perlis   " << endl;
		cout << "4.P.Pinang  10.Melaka                       " << endl;
		cout << "5.Selangor  11.Putrajaya                    " << endl;
		cout << "6.Kelantan  12.Negeri Sembilan              " << endl;
		cout << "============================================" << endl;
		cout << "Please enter you choice:  "; cin >> b;
		cout << "Please enter your weight(g): "; cin >> g;
		system("cls");
		if (b <= 15) {
			total = (g - 595) * r * rate;

		}

	}
	else {
		return 0;
	}

	if (total > 0) {
		cout << "=================================================" << endl;
		cout << "           Thanks For using our system           " << endl;
		cout << "=================================================" << endl;
		cout << "Dan  (ingatlah) orang-orang   yang menyimpan emas" << endl;
		cout << "dan perak serta tidak membelanjakannya pada jalan" << endl;
		cout << "Allah,  maka  kabarkanlah  kepada  mereka dengan " << endl;
		cout << "(balasan) azab seksa yang tidak terperi  sakitnya" << endl;
		cout << "                    (Surah At - Taubah : Ayat 34)" << endl;
		cout << "                                                 " << endl;
		cout << "The price that you need to pay is:RM" << total     << endl;
		cout << "=================================================" << endl;

	}
	else if (total < 0) {
		cout << "=================================================" << endl;
		cout << "          Thanks For using our system            " << endl;
		cout << "=================================================" << endl;
		cout << "Dan  (ingatlah) orang-orang   yang menyimpan emas" << endl;
		cout << "dan perak serta tidak membelanjakannya pada jalan" << endl;
		cout << "Allah,  maka  kabarkanlah  kepada  mereka dengan " << endl;
		cout << "(balasan) azab seksa yang tidak terperi  sakitnya" << endl;
		cout << "                    (Surah At - Taubah : Ayat 34)" << endl;
		cout << "                                                 " << endl;
		cout << "Note:You don't need to pay                       " << endl;
		cout << "=================================================" << endl;
	}
	cout << "Do you want to continue(1(yes)/0(no)) ? :  "; cin >> ask;
	if (ask == 1) { system("cls"); goto retry; }
	else { return 0; }
}


//this project made by MhdDnl(23/6/2020)