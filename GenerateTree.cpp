#include "GenerateTree.h"
#include <typeinfo>

void GenerateTree::AskForInput()
{
	cout << "Please insert input text (an integer and two characters, all space-delimited): " << endl;
	while((base % 2 != 1) && (base > 21 || base < 3))
	{
		cin >> base >> trunk_symbol >> leaves_symbol;
	}
	//Ask for input data (u int, char, char)
}

void GenerateTree::DrawTrunk()
{
	for (int n=0;n<height-2;n++)
	{
		trunk.push_back(' '); //Fill string with spaces
	}
	for (int n=0;n<3;n++)
	{
		trunk.push_back(trunk_symbol); //Fill string trunk with 3 trunk symbols
	}

	cout << trunk << endl;
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
void GenerateTree::DrawLeaves()
{
	unsigned int numberOfWhiteSpaces=height-1;
	unsigned int numberOfLeaves=1;

	unsigned int numberOfBaubles = 0;
	unsigned int bauble_pos = 0;

	int level = height-1;

	while(numberOfLeaves<base+2)
	{
		
		for(int n=0; n<numberOfLeaves; n++) //Add leaves
		{
			leaves[level].push_back(leaves_symbol);
		}

		numberOfBaubles = numberOfLeaves/2;
		for (int n=0;n<numberOfBaubles;n++) //Replace some leaves with baubles
		{
			bauble_pos = rand() % numberOfLeaves;
			leaves[level].replace(bauble_pos,1,"o");
		}
		

		for(int n=0; n<numberOfWhiteSpaces; n++) //Add white spaces
		{
			leaves[level].insert(leaves[level].begin(),' ');
		}

		level--;
		numberOfWhiteSpaces --;
		numberOfLeaves += 2;
	}

		for(int n=height-1; n>-1 ; n--)
	{
		cout << leaves[n] << endl;
	}

	//Fill each level of leaves with appropriate number of spaces and leaves
}

void GenerateTree::DrawTree()
{
		HowBigTree();
		while(1)
		{
			system("cls");

			for(int n=0;n<leaves.size();n++)
			{
				leaves[n].clear();
				trunk.clear();
			}

			DrawLeaves();
			DrawTrunk();
			Sleep(100);
		}

		//Draw tree
}

