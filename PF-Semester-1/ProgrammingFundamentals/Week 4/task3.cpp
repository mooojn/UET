#include<iostream>

using namespace std;

void howManyStickers(int a);

main()
{
	cout << "Enter the side length of the Rubik's Cube: ";
	int lenght;
	cin >> lenght;
	howManyStickers(lenght);

}

void howManyStickers(int a)
{
	int stickers;
	stickers= a * a * 6;
	cout << "Number of stickers needed: " << stickers;

}