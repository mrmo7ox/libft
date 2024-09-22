@echo off
echo [+] Compiling %1 is Started
gcc -Wall -Werror -Wextra %1
echo [+] Compiling is  done
echo [+] trying to run the program
echo ===================[program output]=====================
a.exe