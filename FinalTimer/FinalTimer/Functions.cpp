#include "stdafx.h"
#include <string>
#include <iostream>
#include <chrono>
#include <Windows.h>
using namespace std;

void * Timer (int sec, bool Start)
{
	//bool *Begin;

	while (Start == true)
	{
		string Begin;
		Sleep(sec * 1000);
		cout << "Ding Times up" << endl;
		cout << "Would the MeatBag Like to go again? : Y or N" << endl;
		cin >> Begin;
			if (Begin == "Y" || Begin == "Y") {
				
			}
			else {
				cout << "Well have fun dying an early death then MeatBag " << endl;
				Start = false;
			}

	}
	return 0;
}
void start()
{
	string Name;
	string Yes;
	bool begin;
	cout << "Hello And Welcome To the Program MeatBag, My name is HK-57 " << endl;
	cout << "Its my job to Keep You Alive and moving every 15 minutes" << endl;
	cout << "what is your designation meatbag: " << endl;
	cin >> Name;
	cout << "Ah so you are MeatBag " << Name << endl;
	cout << "would you like the early prevention to begin: Y or N" << endl;
	cin >> Yes;
	if (Yes == "Y" || Yes == "Y") {
		
		Timer(900,&begin);
	}
	else {
		cout << "Well have fun dying an early death then MeatBag " << Name << endl;
	}
	
	cout << "Now that you ";



	cout << "Goodbye" << endl;
}