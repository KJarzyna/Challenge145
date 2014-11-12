#include <sstream>
#include <iostream>
#include <vector>

using namespace std;

class GenerateTree
{
public:
	void AskForInput();
	void DrawTree();

private:
	char leaves_symbol;
	char trunk_symbol;
	unsigned int base;
	unsigned int height;
	string input;

	vector<string> tree;
	vector<string> leaves;
	string trunk;

	void MakeTrunk();
	void DrawTrunk();
	void MakeLeaves();
	void DrawLeaves();

	void HowBigTree();
};