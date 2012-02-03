/** @file arguments.c
 *  Definition of the functions.
 *
 *  Version 1.1 (16/01/11)
 *  Version 1.0 (31/12/11)
 */

#include <stdio.h>      /* For printf() */
#include <stdlib.h>     /* For EXIT_SUCCESS and FAILURE */
#include <getopt.h>     /* For getopt_long() */
#include "arguments.h"

/** Handles all the commandline arguments.
 *
 * This is the main function of this module. It processes
 * an argv[] array of argc elements based on the options
 * specified at the struct option.
 *
 * This special structure is composed of four elements:
 * - Name (char* name)
 *   The name of the option. Note that, for example, the '--verbose' option
 *   is represented by the "verbose" string here.
 * - Has Arg (int has_arg)
 *   Indicates if this option takes an argument or not. Its an integer with
 *   three values: no_argument, required_argument and optional_argument.
 * - Flag (int* flag)
 *   TODO explain this shit
 * - Value (int val)
 *   TODO explain this shit
 *
 * If you want to add another argument, follow these steps:
 * # Add an option on the struct option.
 * # Add the short equivalent (if it exists) on the getopt_long() call.
 * # Add a case on the switch specifying the action of that option.
 *
 */
void args_handle (int argc, char* argv[])
{
	static struct option options[] =
	{
		{"verbose", no_argument, NULL, 'v'},
		{"quiet",   no_argument, NULL, 'q'},
		{"help",    no_argument, NULL, 'h'},
		{"version", no_argument, NULL, 'u'},
		{"random",  no_argument, NULL, 'r'},
		/* The last element must be all zeroes */
		{0, 0, 0, 0}
	};
	/* The index of the current option */
	int option_index;
	/* The character for comparison */
	int c = 0;


	/* We keep checking the arguments untill they run out (c == -1) */
	while (c != -1)
	{
		c = getopt_long (argc, argv, "vqhur", options, &option_index);

		switch (c)
		{
		case 'v':
			/* Call your own verbose option or set your flag. In my
			 * case, i'll just print it */
			printf ("Verbose mode, people!\n");
			break;

		case 'q':
			/* Again, with your choice here.
			 * Note that you will have to deal with conflicts such
			 * as the user activating both verbose and quiet modes
			 * at the same time */
			printf ("Quiet mode activated.\n");
			break;

		case 'h':
			print_help ();
			/* Abort execution */
			break;

		case 'u':
			print_usage ();
			/* Abort execution */
			break;

		case 'r':
			printf ("Random mode unlocked!\n");
			break;

		case '?':
			/* getopt_long() already printed an error message about
			 * unrecognized option, so you'll probably want to
			 * abort the execution now */
			break;

		default:
			/* Do nothing */
			break;
		}
	}

	/* Just in case the user specified more arguments (not options)
	 * than needed, you decide what to do. Here, we just ignore them */
	while (optind < argc)
	{ }

	/* Goodbye, hope you liked it! */
}


void print_help ()
{
	printf ("* Arguments Help\n");
	printf ("* This is an example of a Help text.\n");
	printf ("* If you want to modify the actions taken by\n");
	printf ("* the arguments module, please change the \n");
	printf ("* args_handle() function.\n");
	printf ("\n");
}


void print_usage ()
{
	printf ("* Arguments Usage\n");
	printf ("* This is an example of a Usage text.\n");
	printf ("* Insert what you wish.\n");
	printf ("\n");
}

