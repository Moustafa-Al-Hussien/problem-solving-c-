#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>>adj;
vector<bool>visited;
void dfs(int n)
{
	visited[n] = true;
	cout << n << " ";
	for (int neighboor : adj[n])
	{
		if (!visited[neighboor])
		{
			dfs(neighboor);
		}
	}
}
int main()
{
	int nodes, eadges;
	cin >> nodes >> eadges;
	adj.assign(nodes + 1, {});
	visited.assign(nodes + 1, false);
	for (int i = 0;i < eadges;i++)
	{
		int from, to;
		cin >> from >> to;
		adj[from].push_back(to);
		adj[to].push_back(from);
	}
	dfs(1);
}