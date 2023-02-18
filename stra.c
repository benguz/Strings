#include stddef.h
#include string.h

/**/
int main(void) {

}

/**/
size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

/**/
char Str_copy(char dest[], const char pcSrc[]) {
   size_t i = 0;
   
   assert(pcSrc != NULL);
   assert(dest != NULL);
   
   while (src[i] != '\0') {
      dest[i] = pcSrc[i];
      i++;
   }
   dest[i] = '\0';

   return dest;
}

/**/
char Str_concat(char dest[], const char pcSrc[]) {
   size_t destLength = Str_getLength(dest);
   size_t i;

   assert(pcSrc != NULL);
   assert(dest != NULL);

   while (src[i] != '\0') {
      dest[destLength + i] = src[i];
      i++;
   }
   dest[destLength + i] = '\0';

   return dest;
}

/**/
int Str_compare(char s1[], char s2[]) {
   size_t i;
   
   assert(s1 != NULL);
   assert(s2 != NULL);

   while (s1[i] != '\0' && s2[i] != '\0') {
      if (s1[i] > s2[i]) {
         return 1;
      }
      else if (s1[i] < s2[i]) {
         return -1;
      }
      i++;
   }
   return 0;
}

/**/
char Str_search(const char haystack, const char needle) {
   size_t i;
   /*       These functions return a pointer to the beginning of the located substring, or NULL if the substring is not found.*/
   /* how is this possible w/o pointers?? */
}