#include <iostream>
using namespace std;

void showChoices();
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main()
{
	float x, y;
	int choice;
	do
	{
		showChoices();
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Sum " << add(x,y) <<endl;
			break;
		case 2:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Difference " << subtract(x,y) <<endl;
			break;
		case 3:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Product " << multiply(x,y) <<endl;
			break;
		case 4:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Quotient " << divide(x,y) <<endl;
			break;
		case 5:
			break;
		default:
			cout << "Invalid input" << endl;
		}
	}while (choice != 5);

	return 0;
}

void showChoices()
{
	cout << "MENU" << endl;
	cout << "1: Add " << endl;
	cout << "2: Subtract" << endl;
	cout << "3: Multiply " << endl;
	cout << "4: Divide " << endl;
	cout << "5: Exit " << endl;
	cout << "Enter your choice :";
}

float add(float a, float b)
{
	return a+b;
}

float subtract(float a, float b)
{
	return a-b;
}

float multiply(float a, float b)
{
	return a*b;
}

float divide(float a, float b)
{
	return a/b;
}