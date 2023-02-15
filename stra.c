#include stddef.h

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

char Str_copy(char dest, const char src) {
    /* wait the code is straight up in MAN????*/
}