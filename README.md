What does the program do?
===================================
The Program is there to run the binary files compiled in WSL with a single click.<br>

DISCLAIMER : The target system should be x86 for the program to work. If you want to compile the program for a x64 machine repalce line 31 with :        cmd = "start wsl "+cmd;<br>


How to compile the program:
===================================

1. Using MinGW Compiler - <br>
	step 1. go to the directory containing the main.cpp in Command Prompt.<br>
		Using Command : cd <file location><br>
	step 2. run the command:<br>
		g++ main.cpp -o cxxtool.exe<br>
<br>
2. Using Microsoft Visual C/C++ Compiler :<br>
	step 1. go to the directory containing the main.cpp in Command Prompt.<br>
		Using Command : cd <file location>
	step 2. open the Developer command prompt:
		 cl /EHsc main.cpp /link /out:cxxtool.exe

Where to place the file:
===================================

1. I preffer to place it in a directory : C:\bin\tools <br>
2. I suggest to add the directory in the user env path.<br>

How to open Binaries compiled on WSL :
===================================

Step 1. Right Click on the binary file.<br>
Step 2. Select Properties.<br>
Step 3. In the Open with row select change.<br>
Step 4. In the popup dialog select : "More Apps"<br>
Step 5. In the popup dialog select : "Look for another app on this PC"<br>
Step 6. In the file selection dialog go the directory contain the file "cxxtool.exe" and select it.<br>
Step 7. Close all the dialog boxes and double click on the binary file.<br>
