/*
Zayam Tariq - 9/25/2017 2nd Period
TakeInData : 
Display to the users questions to take in data and create variables 
*/

#include <iostream>
#include <conio.h>
using namespace std; //* 

void pause()  {  
	cout << "Press any key to continue . . . ";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	int Aidans_Final_WHAP_grade;
	char answer_choice;
	bool answerMatcheds = false;
	double My_GPA;

	cout << "What will aidan's final grade in WHAP be?" << endl;
	cin >> Aidans_Final_WHAP_grade; 
	cout << "as you can see Aidan's grade in WHAP is a  " << Aidans_Final_WHAP_grade << ". I guess that's okay... for A NERD. " << endl;

	cout << "Okay, next question: How hot is justin bieber from a scale from 1 to 4, 1 being the highest 4 being the lowest?" << endl;
		cin >> answer_choice;
		if (answer_choice == '1' || answer_choice == '2' || answer_choice == '3' || answer_choice == '4') {
			cout << "Oh you chose: " << answer_choice << " ,Good choice." << endl;
		}


		cout << "1 being true, 0 being false: My GPA is good, true or false? " << endl;
		cin >> answerMatcheds;
		if (answerMatcheds == 0)
		cout << "oh wow you chose " << answerMatcheds << " You're right, my GPA sucks" << endl;
		if (answerMatcheds == 1)
			cout << "sorry, but you chose " << answerMatcheds << " my GPA is absolute garbo, it is not good whatsoever. the answer is false" << endl;

		cout << "What is my GPA rounded to the nearest tenth of a decimal" << endl;
		cin >> My_GPA;
		cout << "I have a " << My_GPA << " as my GPA? that's better than I expected" << endl; 
		 











	pause(); 
}