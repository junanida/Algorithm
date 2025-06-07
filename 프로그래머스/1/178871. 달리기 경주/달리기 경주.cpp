#include <string>
#include <vector>
#include <map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
 	map<string, int> m;
		for (int i = 0; i < players.size(); i++)
			m.insert({ players[i], i });

	for (int i = 0; i < callings.size(); i++)
	{
		string calling = callings[i];
		int rank = m[calling];

		string temp = players[rank - 1];
		players[rank - 1] = players[rank];
		players[rank] = temp;

		m[calling] = rank - 1;
		m[temp] = rank;

	}

	return players;
}