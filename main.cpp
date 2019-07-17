/*
___________________Pre-Coding Installation_________________
    Installing Compiler-
        -https://isocpp.org/get-started
        -GCC is the best one to use
    
    Configuring Environment Variable
        -Add bin path to "Path" variable {Ex: C:\MinGW\bin}
            *This will allow the kernel to locate the gcc file (Which allows user to use CLI)
            *Will ultimately be the same as going to "cd C:\MinGW\bin" then running "gcc"

___________________Pre-Coding Installation_________________
    Compiling the code-
        -gcc [file name] -o [desired output file name]
            *-o = output
        
        -g++ is the same as gcc, but treats all files as c++
        -gcc compiles to proper output file
*/

#include <stdio.h>
 
int main() {
    printf("Hello, world!\n");
    return 0;
}