#include "SolutionTwentyTwo.h"
using namespace std;

long long solutionTwentyTwo()
{
	long long total = 0;
	vector <string> words;

	//Extract all the words
	if (extractWords("Project-Euler/022/names.txt", &words, ','))
	{
		for (int i = 0; i != words.size(); i++)
		{
			//Remove the " at the start and end of the words
			words[i] = words[i].substr(1, words[i].size() - 2);
		}
	}

	//Sort the vector alphabetically
	sort(words.begin(), words.end(), sortAlphabetical);

	//Add up the scores for each word
	for (int i = 0; i != words.size(); i++)
	{
		total += (i + 1)*wordScore(words[i]);
	}

	return total;
}
