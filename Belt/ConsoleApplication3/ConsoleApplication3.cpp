#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;


void PrintMap(const map<int,string>& m) {
	for (auto item : m)
	{
		cout << item.first << " " << item.second << endl;
	}
}


void Swap(int &x,int&y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
	cout << "This is meaning of x : " << x<< endl;
	cout << "This is meaning of y : " << y;
}

int main()
{
	/*vector<string> words = { "anabolek","all","axe attacks","boolek","boolean","lolek","vector" };
	map<char, vector<string>> groupped_words;
	for (auto &word : words)
	{
		groupped_words[word[0]].push_back(word);
	}
	auto start = steady_clock::now();
	for (const  auto &item : groupped_words)
	{
		cout << item.first << endl;
		for (const auto &word : item.second)
		{
			cout << word << " ";
		}
		cout << endl;
	}
	auto end = steady_clock::now();
	cout << endl;
	cout << duration_cast<milliseconds>(end-start).count();
	cout << endl;*/

	int x, y;
	
	cin >> x >> y;
	auto start = steady_clock().now();
	Swap(x, y);
	auto end = steady_clock().now();
	cout << endl;
	cout << duration_cast<nanoseconds>(end - start).count();
	cout << endl;
	cout << x + y;
	cout << endl;
	cout << x + y + 1;
	cout << endl;
	system("pause");
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
