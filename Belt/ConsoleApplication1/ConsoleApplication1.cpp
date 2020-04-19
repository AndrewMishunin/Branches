#include <iostream>
#include <vector>
#include <string>

using namespace std;
/*
int main()
{
	int day_of_month = 0;

	const vector<int> days_of_month = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	vector<vector<string>> affairs(days_of_month[day_of_month]);

	int count_of_commands;

	cin >> count_of_commands;

	for (int i = 0; i < count_of_commands; i++)
	{
		string command;

		cin >> command;

		if (command == "ADD")
		{
			int day;
			string task;
			cin >> day >> task;
			affairs[day - 1].push_back(task);

			continue;
		}

		if (command == "NEXT")
		{
			vector<vector<string>> buff = affairs;
			if (++day_of_month > 11)
				day_of_month = 0;

			affairs.resize(days_of_month[day_of_month]);

			if (affairs.size() < buff.size())
			{
				for (int i = affairs.size(); i < buff.size(); i++)
				{
					affairs[affairs.size() - 1].insert(end(affairs[affairs.size() - 1]), begin(buff[i]), end(buff[i]));
				}
			}

			continue;
		}

		if (command == "DUMP")
		{
			int day;
			cin >> day;
			cout << affairs[day - 1].size() << " ";
			for (auto s : affairs[day - 1])
				cout << s << " ";
			cout << endl;

			continue;
		}
	}
}
int newmain() {

	int n;
	cin >> n;
	double temp = 0;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		temp += v[i];
	}
	temp = temp / n;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i] > temp)
		{
			j++;
		}
	}
	cout << j << endl;
	for (int i = 0; i < n; i++)
	{
		if (v[i] > temp) {

			cout << v[i] << " ";

		}
	}

}
void MoveStrings(vector<string> source, vector<string> destination) {
	for (auto word : source)
	{
		destination.push_back(word);
	}
	source.clear();
}
void reverse(vector<int>& v) {
	int size = v.size();
	int temp;
	for (int i = 0; i < size / 2; i++)
	{
		temp = v[i]; // буфер
		v[i] = v[size - i - 1]; // запись в первую €чейку
		v[size - i - 1] = temp; // запись в последнюю €чейку
	}
}
vector<int> reversed(const vector<int>& v) {
	vector<int> vcopy;
	int size = v.size();
	int temp;
	for (int i = 0; i < size; i++)
	{
		vcopy.push_back(v[size - 1 - i]);
	}
	return vcopy;
}
*/
int main() {
	return 0;
}