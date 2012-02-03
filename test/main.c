/* A simple test for the arguments module
 */

#include <stdio.h>
#include "../arguments.h"

int main (int argc, char* argv[])
{
	args_handle (argc, argv);

	printf ("Test ended successfuly!\n");

	return 0;
}

