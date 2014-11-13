#include <sstream>
#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

class GenerateTree
{
public:
	void AskForInput();
	void DrawTree();

private:
	char leaves_symbol, trunk_symbol;
	unsigned int base, height;

	vector<string> tree;
	vector<string> leaves;
	string trunk;

	void DrawTrunk();
	void DrawLeaves();

	void HowBigTree();
};