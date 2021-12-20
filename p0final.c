GNU bash, version 4.4.20(1)-release (x86_64-pc-linux-gnu)
gcc -g p0final.c
 gdb ./a.out
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./a.out...done.
(gdb) 
(gdb) b main
Breakpoint 1 at 0x63e: file p0final.c, line 4.
(gdb) r
Starting program: /home/runner/pps-test1-Kush-1/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p0final.c:4
4     printf("my name is kushal\n");
 gcc -fgcc -g p0final.c
gcc: error: unrecognized command line option ‘-fgcc’; did you mean ‘-fdce’?
 gcc -g p0final.c
 gdb ./a.out
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./a.out...done.
(gdb) 
(gdb) b main
Breakpoint 1 at 0x63e: file p0final.c, line 4.
(gdb) r
Starting program: /home/runner/pps-test1-Kush-1/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p0final.c:4
4     printf("my name is kushal\n");
(gdb) n
my name is kushal
5     printf("subash\n");
(gdb) n
subash
6     printf("manoj\n");
(gdb) n
manoj
7     printf("venky\n");
(gdb) n
venky
8     printf("dhoni\n");
(gdb) n
dhoni
9     return 0;
(gdb) s
10  }
(gdb) p
The history is empty.
(gdb) l
5     printf("subash\n");
6     printf("manoj\n");
7     printf("venky\n");
8     printf("dhoni\n");
9     return 0;
