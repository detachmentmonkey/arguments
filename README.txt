================================================================================
                               arguments README
================================================================================

This is a simple module that handles command-line arguments using the GNU
getopt_long() function.
It was made as a wrap-up that could easily be edited to suit every project's
needs.

--------------------------------------------------------------------------------
What it Does
--------------------------------------------------------------------------------

It gives complete control about the command-line arguments passed to your
program. There is support to both long and short options.

--------------------------------------------------------------------------------
How to Use
--------------------------------------------------------------------------------

1) Copy arguments.c and arguments.h to your project source folder.

2) Edit arguments.c and arguments.h to suit your needs.

  2.1) To add support to a new argument, edit args_handle() function
       defining what argument will you add, what are it's long and
       short options and what function will it call.
  2.2) By default, it comes with two pre-defined functions, print_help()
       and print_usage(). Edit them according to your project.

3) ???
  
4) PROFIT!!!
  
--------------------------------------------------------------------------------
Example
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
About
--------------------------------------------------------------------------------

These modules were coded by Alexandre Dantas <alex.dantas92@gmail.com>.
Any questions, requests, bugs, comments and messages, etc. e-mail me.

These files are not licensed in any way, so you can do whatever you
want with them.
But if you use it i only ask you to kindly tell me so i can now :)

Oh, and check my other projects!
Please visit my blog: alexdantasblog.wordpress.com

================================================================================
================================================================================

