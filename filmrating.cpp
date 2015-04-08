//This program is going to allow users
//to input movie ratings from two different websites
//and then it will calucate an average on a 10 point
//scale system. 

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Get the name of the movie
	string film;
	cout << "What is the name of the movie?\n";
	getline(cin, film);
	
	// Get rating from metacritic
	int metacritic = 0;
	cout << "What is the metascore for " << film << "?\n";
	cin >> metacritic;
		
	// Get rating from rotten
	int tomatoes = 0;
	cout << "What is the tomatometer for " << film << "?\n";
	cin >> tomatoes;
		
	// calculate the average
	double avg = (metacritic + tomatoes) / 2.0;

	// Rescale the average
	double newrating = avg / 10;

	// Display result of calculation
	cout << "The average score of " << film << " is " << newrating;
	
	int exit = 0;
	cout <<"\n";
	cout <<"\n";
	cout <<"\n";
	cout <<"Type to quit.";
	cin >> exit;
	cout <<"bbye :)";
	return 0;
}