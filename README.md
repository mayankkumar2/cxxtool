What does the program do?
===================================
The Program is there to run the binary files compiled in WSL with a single click.

How to compile the program:
===================================

1. Using MinGW Compiler - 
	step 1. go to the directory containing the main.cpp in Command Prompt.
		Using Command : cd <file location>
	step 2. run the command:
		g++ main.cpp -o cxxtool.exe

2. Using Microsoft Visual C/C++ Compiler :
	step 1. go to the directory containing the main.cpp in Command Prompt.
		Using Command : cd <file location>
	step 2. open the Developer command prompt:
		 cl /EHsc main.cpp /link /out:cxxtool.exe

Where to place the file:
===================================

1. I preffer to place it in a directory : C:\bin\tools
2. I suggest to add the directory in the user env path.

How to open Binaries compiled on WSL :
===================================

Step 1. Right Click on the binary file.
Step 2. Select Properties.
Step 3. In the Open with row select change.
Step 4. In the popup dialog select : "More Apps"
Step 5. In the popup dialog select : "Look for another app on this PC"
Step 6. In the file selection dialog go the directory contain the file "cxxtool.exe" and select it.
Step 7. Close all the dialog boxes and double click on the binary file.
