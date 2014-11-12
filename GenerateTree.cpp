#include "GenerateTree.h"
#include <typeinfo>

void GenerateTree::AskForInput()
{
	cout << "Please insert input text (an integer and two characters, all space-delimited): " << endl;
	cin >> base >> trunk_symbol >> leaves_symbol;

	//Ask for input data (u int, char, char)
}

void GenerateTree::MakeTrunk()
{
	for (int n=0;n<9;n++)
	{
		trunk.push_back(' '); //Fill string "trunk" with 10 spaces
	}
	for (int n=0;n<3;n++)
	{
		trunk.push_back(trunk_symbol); //Fill string trunk with 3 trunk symbols
	}

}

void GenerateTree::DrawTrunk()
{
	cout << trunk << endl;

	//Draw tree's trunk
}

void GenerateTree::HowBigTree()
{
	height=1;
	int temp=base;

	while (temp>1)
	{
		temp -= 2;
		height += 1;
	}

	leaves.resize(height);

	//Check how many levels leaves must have
}
void GenerateTree::MakeLeaves()
{
	
	HowBigTree();

	int numberOfWhiteSpaces=10;
	int numberOfLeaves=1;
	int level = height-1;

	while(numberOfLeaves<base+2)
	{
		for(int n=0; n<numberOfWhiteSpaces; n++)
		{
			leaves[level].push_back(' ');
		}

		for(int n=0; n<numberOfLeaves; n++)
		{
			leaves[level].push_back(leaves_symbol);
		}

		level--;
		numberOfWhiteSpaces --;
		numberOfLeaves += 2;
	}

	//Fill each level of leaves with appropriate number of spaces and leaves
}

void GenerateTree::DrawLeaves()
{
	for(int n=height-1; n>-1 ; n--)
	{
		cout << leaves[n] << endl;
	}

	//Draw tree's leaves
}

void GenerateTree::DrawTree()
{
	
		MakeLeaves();
		DrawLeaves();
		MakeTrunk();
		DrawTrunk();

		//Draw tree
}
