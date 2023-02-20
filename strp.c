#include stddef.h
#include str.h

/**/
size_t Str_getLength(const char *pcSrc)
{
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);
}

char *strcpy(char *dest, const char *src) {

   const char *pcInit; /* I'm not sure that I need to define these vars, but definining them is clarifying?*/
   const char *pcFin;
   assert(src != NULL);
   assert(dest != NULL);

   pcInit = src;
   pcFin = dest;
   while (*pcInit != '\0') {
      *pcFin = *pcInit;
      pcInit++;
      pcFin++;
   }
   pcFin++;
   *pcFin  = '\0';
}

char Str_concat(char *dest, const char *src) {
   size_t destLength = Str_getLength(dest);
   size_t i;

   assert(src != NULL);
   assert(dest != NULL);

   dest = dest + destLength;
   while (*src != '\0') {
      *dest = *src;
      dest++;
      src++;
   }
   dest++;
   *dest = '\0';

   return dest;
}
