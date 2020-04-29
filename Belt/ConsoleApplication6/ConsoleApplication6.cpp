// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{	


	srand(time(NULL));
	setlocale(LC_ALL,"Russian");
	mt19937 gen{ random_device()()};
	gen.seed(time(NULL));
	uniform_int_distribution<int> letters(65, 90);
	uniform_int_distribution<int> chars(48,57);
    map<int, string> m;
	int a;
	ofstream out;
	for (int i = 0; i < 1000; i++)
	{

		
		for (int j = 0; j < 20; j++)
		{
			if (j != 0 and j % 5 == 0)
			{
				m[i] += "-";
			}

			if (rand()%2)
			{
				m[i] += static_cast<char>(chars(gen));
			}
			else {
				m[i] += static_cast<char>(letters(gen));
			}
		}
		a = rand() % 10 - 5;
		if (a==0)
		{
			a = a + 1;
		}
		
		if (a>=0)
		{
			ofstream out;
			out.open("D:\\Branches\\Test\\Codes.txt", ios::app);
			out << i + 1 <<"	"<<": "<< m[i] << "	" << "  |  " <<"+ " << a << " חוכוםûץ באככמג ג ֱ׀ׁ" << "\n";
			out.close();
		}
		else {
			ofstream out;
			out.open("D:\\Branches\\Test\\Codes.txt", ios::app);
			out << i + 1 << "	"<< ": "<< m[i] << "	" << "  |  " <<"- " <<-a << " חוכוםûץ באככמג ג ֱ׀ׁ" << "\n";
			out.close();
		}
		
	}

	
	
	return 0;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
