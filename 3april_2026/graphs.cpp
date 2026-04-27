#include <iostream>
#include <unordered_map>
#include <vector>

std::unordered_map<int, std::vector<int>> buildGraph(std::vector<std::vector<int>> &edges);
int main()
{

    return 0;
}
std::unordered_map<int, std::vector<int>> buildGraph(std::vector<std::vector<int>> &edges)
{
    std::unordered_map<int, std::vector<int>> graph;
    for (std::vector edge : edges)
    {
        int x = edge[0], y = edge[1];
        graph[x].push_back(y);
    }
    return graph;
}