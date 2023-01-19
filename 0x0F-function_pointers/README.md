This is the readme file for topic Function Pointers

a function pointer points to code, not data. Typically a function pointer stores the start of executable code.

we do not allocate de-allocate memory using function pointers.

a we do not allocate de-allocate memory using function pointers.

to declare a function pointer, simply put brackets around the name and a * in front of it: that declares the pointer;
eg int (*func)(int a, float b)

we put brackets around *func to avoid creating a declaration of a function that returns void pointer.
