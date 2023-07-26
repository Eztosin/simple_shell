This is a project that challenged all that we have learnt about the
C-programming language. It is a combined project carried out by
Daniel Herbert and Oluwatosin Ajayi. This shell project is a test
of our learning and it imitates the Ken Thompson shell.

-A UNIX command line interpreter.

Usage: simple_shell
Our shell handles the following:

Displays a prompt and wait for the user to type a command. (A command
line always ends with a new line.)
The prompt is displayed again each time a command has been executed.

If an executable cannot be found, an error message is printed and
the prompt is displayed again.
All errors were handled
Handled the “end of file” condition (Ctrl+D)


-Handled special characters : ", ', `, \, *, &, # and be able to move
 the cursor


-Handles command lines with arguments

-Handles the PATH

-Implement the exit built-in, that exits the shell
Usage: exit
You don’t have to handle any argument to the built-in exit.

-Implement the env built-in, that prints the current environment.