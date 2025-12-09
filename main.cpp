#include <iostream>
#include "nb_tree.h"
#include "ab_tree.h"
#include "test.h"
using namespace std;


int main(int argc, char** argv)
{
	if (argc > 1)
	{
		return test(argv[1]);
	}

	return 0;
}