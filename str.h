/* Use the #ifndef...#define...#endif construct to protect your str.h file 
against accidental multiple inclusion into the same .c file.*/

#ifndef STRA_INCLUDED
#define STRA_INCLUDED
size_t Str_getLength(const char pcSrc[]);
/*do this for every func, then repeat for strp */
#endif