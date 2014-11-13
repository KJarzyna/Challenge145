#include <iostream>
#include "GenerateTree.h"
#include <cstdlib>
#include <ctime>

int main()
{
	GenerateTree tree;
	srand( time (NULL) );

	tree.AskForInput();
	tree.DrawTree();


	system("PAUSE");
	return 0;
}