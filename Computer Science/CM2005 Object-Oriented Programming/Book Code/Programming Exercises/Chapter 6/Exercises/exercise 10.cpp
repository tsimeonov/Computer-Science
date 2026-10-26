/*
Question: Why do you need to include function prototypes in a program that contains user-defined functions

Answer: The C++ compiler reads code from top to bottom. A function prototype tells the compiler the function's name, the return type, and the parameters before it is called, preventing "undeclared identifier" errors when the function definitions is placed below.
*/