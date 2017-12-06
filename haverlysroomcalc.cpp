// Kyle Rooney COP2000 Homework 2 Haverly's Room Calculator
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int squareRoom = 1, rectRoom = 2, roundRoom = 3, userQuit = 4;
	const float piValue = 3.14;
	int menuSelect;
	float roomLength, roomWidth, roomRadius, squareArea, rectArea, roundArea;

	cout << "Haverly's Room Calculator \n";
	cout << "************************* \n";
	cout << "1.  Square Room \n";
	cout << "2.  Rectangle Room \n";
	cout << "3.  Round Room \n";
	cout << "4.  Quit \n\n";
	cout << "Please select one of the options (1-4). > ";
	cin >> menuSelect;

	switch (menuSelect)
	{
		// This will calculate the area of a square room.
	case squareRoom:
		cout << "Square Room \nPlease enter the length of the square room > ";
		cin >> roomLength;
		cout << roomLength << endl;
		squareArea = roomLength * roomLength;
		cout << "Area of Room = " << squareArea;
		cout << " square feet" << endl;
		break;
		// This will calculate the area of a rectangular room.
	case rectRoom:
		cout << "Rectangle Room \nPlease enter the length and width of the rectangle room separated by a space> ";
		cin >> roomLength >> roomWidth;
		cout << roomLength << " by " << roomWidth << endl;
		squareArea = roomLength * roomWidth;
		cout << "Area of Room = " << squareArea;
		cout << " square feet" << endl;
		break;
		// This will calculate the area of a round room.
	case roundRoom:
		cout << "Round Room \nPlease enter the radius of the round room separated by a space> ";
		cin >> roomRadius;
		cout << roomRadius << endl;
		squareArea = piValue * roomRadius * roomRadius;
		cout << "Area of Room = " << squareArea;
		cout << " square feet" << endl;
		break;

	case userQuit:
		cout << "Thank you for using Haverly's Room Calculator. . . \n";

	default: cout << "Invalid menu item entered . . . Program exiting . . .";

	}
	system("pause");
	return 0;
}