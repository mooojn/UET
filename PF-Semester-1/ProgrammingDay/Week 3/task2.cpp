#include<iostream>

using namespace std;

main()
{
	int min;
	cout << "Number of Minutes: ";
	cin >> min;

	int fps;
	cout << "Frames per Second: ";
	cin >> fps;
	
	int total_fps;
	total_fps = min * 60 * fps;
	cout << "Total Number of Frames: " << total_fps;
}