# 0X1C. C - MAKEFILES
# 0-MAKEFILE
REQUIREMENTS:
NAME OF THE EXECUTABLE: HOLBERTON
RULES: ALL
THE ALL RULE BUILDS YOUR EXECUTABLE
VARIABLES: NONE
# 1-MAKEFILE
REQUIREMENTS:
NAME OF THE EXECUTABLE: HOLBERTON
RULES: ALL
THE ALL RULE BUILDS YOUR EXECUTABLE
VARIABLES: CC, SRC
CC: THE COMPILER TO BE USED
SRC: THE .C FILES
# 2-MAKEFILE
REQUIREMENTS:
NAME OF THE EXECUTABLE: HOLBERTON
RULES: ALL
THE ALL RULE BUILDS YOUR EXECUTABLE
VARIABLES: CC, SRC, OBJ, NAME
CC: THE COMPILER TO BE USED
SRC: THE .C FILES
OBJ: THE .O FILES
NAME: THE NAME OF THE EXECUTABLE
THE ALL RULE SHOULD RECOMPILE ONLY THE UPDATED SOURCE FILES
YOU ARE NOT ALLOWED TO HAVE A LIST OF ALL THE .O FILES
# 3-MAKEFILE
Requirements:
name of the executable: holberton
rules: all, clean, oclean, fclean, re
all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes the Emacs temporary files, the executable, and the object files
re: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files																	NAME: the name of the executable
RM: the program to delete files
The all rule should recompile only the updated source files
The clean, oclean, fclean, re rules should never fail
You are not allowed to have a list of all the .o files
# 4-Makefile
Requirements:
name of the executable: holberton
rules: all, clean, fclean, oclean, re
all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes the Emacs temporary files, the executable, and the object files
re: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM, CFLAGS
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files																	NAME: the name of the executable
RM: the program to delete files
CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
The all rule should recompile only the updated source files
The clean, oclean, fclean, re rules should never fail
You are not allowed to have a list of all the .o files
# 5-island_perimeter.py
Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:
grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
Requirements:
First line contains #!/usr/bin/python3
You are not allowed to import any module
Module and function must be documented
