#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct HumenId
{
	string name;
	int day, month, year;
};

int main()
{
	int n = 0;
	cin >> n;

	vector<HumenId> Human;
	string name = "";
	int day, month, year;


	for (int i = 0; i < n; i++) {
		
		name = "";
		day = 0;
		month= 0;
		year = 0;

		cin >> name >> day >> month >> year;

		HumenId humenid = { name, day, month, year };
		Human.push_back(humenid);
	}

	int minValue[3] = { Human[0].year,Human[0].month,Human[0].day };
	int maxValue[3] = { Human[0].year,Human[0].month,Human[0].day };
	string maxVlaueN = Human[0].name;
	string minVlaueN = Human[0].name;

	for (int i = 1; i < n; i++)
	{
		if (minValue[0] < Human[i].year)
		{
			int a = 0;
					
			minValue[a] = Human[i].year;
			minValue[a + 1] = Human[i].month;
			minValue[a + 2] = Human[i].day;

			minVlaueN = Human[i].name;
		}
		else if(minValue[0] == Human[i].year){
			
			if (minValue[1] > Human[i].month)
			{
				int a = 0;

				minValue[a] = Human[i].year;
				minValue[a + 1] = Human[i].month;
				minValue[a + 2] = Human[i].day;

				minVlaueN = Human[i].name;
			}
			else if (minValue[1] == Human[i].month) {
				if (minValue[2] > Human[i].day)
				{
					int a = 0;

					minValue[a] = Human[i].year;
					minValue[a + 1] = Human[i].month;
					minValue[a + 2] = Human[i].day;

					minVlaueN = Human[i].name;
				}
			}
		}

		if (maxValue[0] > Human[i].year)
		{
			int a = 0;

			maxValue[a] = Human[i].year;
			maxValue[a + 1] = Human[i].month;
			maxValue[a + 2] = Human[i].day;

			maxVlaueN = Human[i].name;
		}
		else if (maxValue[0] == Human[i].year) {

			if (maxValue[1] > Human[i].month)
			{
				int a = 0;

				maxValue[a] = Human[i].year;
				maxValue[a + 1] = Human[i].month;
				maxValue[a + 2] = Human[i].day;

				maxVlaueN = Human[i].name;
			}
			else if (maxValue[1] == Human[i].month) {
				if (maxValue[2] > Human[i].day)
				{
					int a = 0;

					maxValue[a] = Human[i].year;
					maxValue[a + 1] = Human[i].month;
					maxValue[a + 2] = Human[i].day;

					maxVlaueN = Human[i].name;
				}
			}
		}
	}

	cout << minVlaueN << "\n" << maxVlaueN;
	return 0;
}