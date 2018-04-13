#ifndef SORT_ARRAY_H
#define SORT_ARRAY_H

#include <vector>
#include <cmath>
#include <algorithm>

extern "C" std::string SortArray(std::string& param)
{
	std::vector<int> test;
	std::string tmp = "";
	for ( const auto &item : param )
	{

		if ((item != ' ') && (item != '\n'))
		{
			tmp += item;
		}
		else
		{
			int length = tmp.length();
			int result = 0;
			for(int i = length-1; i >= 0; i--)
			{

				int numTmp = tmp[i] - '0';
				int myPow = std::pow(10, length - i - 1);
				result += numTmp * myPow;

			}
			test.push_back(result);

			result = 0;
			tmp = "";
		}
	}
	if (tmp != "")
	{
		int length = tmp.length();
		int result = 0;
		for(int i = length-1; i >= 0; i--)
		{

			int numTmp = tmp[i] - '0';
			int myPow = std::pow(10, length - i - 1);
			result += numTmp * myPow;

		}
		test.push_back(result);

	}
	std::sort(test.begin(), test.end(), [](int a, int b) {
		return a < b;
	});

	std::string output = "";
	bool isFirst = true;
	for ( const auto &item : test )
	{

		if (isFirst)
		{
			output += std::to_string(item);
			isFirst = false;
		}
		else
		{
			output += " ";
			output += std::to_string(item);
		}

	}
	return output;
}

#endif // SORT_ARRAY_H
