#include <iostream>	
#include <string>
#include <map>


using namespace std;



map<char, int> BuildCharMap(const string &string) {
	map<char, int> ReturnedMap;
	for (auto& i : string)
	{
		ReturnedMap[i]++;
	}
	for (auto&i : ReturnedMap)
	{
		cout << "\n";
		cout << i.first;
		cout << i.second;
		cout << "\n";
	}
	return ReturnedMap;
}



int main() {

	int n = 1; // amount of iterations default  n = 1

	for (int i = 0; i < n; i++)
	{
		string first_word, second_word;
		cin >> first_word >> second_word;

		if (BuildCharMap(first_word)==BuildCharMap(second_word))
		{
			cout << "\n";
			cout << "TRUE";
		}
		else
		{
			cout << "\n";
			cout << "FALSE";
		}


	}

}
