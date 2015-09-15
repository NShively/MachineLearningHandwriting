#include <vector>
#include <cstdlib>

using namespace std;

class Node
{
	vector<Edge> neighbors;
	int state;

};

class Edge
{
	Node * start;
	double Prob;
	Node * end;

};

class Graph
{
public:
	vector<Node> Nodes;
	bool success;

};