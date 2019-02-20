/*
    In the Standard C library, the function puts( ) prints a char array to the
    console (so you can say puts("hello")). Write a C program that uses puts( )
    but does not include <stdio.h> or otherwise declare the function. Compile
    this program with your C compiler. (Some C++ compilers are not distinct
    from their C compilers; in this case you may need to discover a command-line
    flag that forces a C compilation.) Now compile it with the C++ compiler and
    note the difference.
*/

//this example illustrates how a c program linker does not throw an error
//if a function is not declared pre runtime. i did not include the header file
//but it (in this case correctly) assumes a function exists with the correct signature

//tl:dr compiles with c does not with c++ because it cannot find the function
// w/o inclusion of header

int main(){
    puts("herro");
}
