#include"string.h"

int result=0;
char isSingleZero(const char* input);
int isSumTwoNumbers(const char* input);
char isSpecialCharacter(const char* input);

char isSpecialCharacter(const char* input)
{
  for(int i=0;i<strlen(input);i++)
    {
      if(input[i]== ',')
      input[i]=input[i+1];
      return 1;
    }
}

char isEmptyString(const char* input)
{
  if((input== NULL)|| (input[0] == '\0'))
  {
    return 1;
  }
  return isSingleZero(input);
}

char isSingleZero(const char* input)
{
  if((input[0] == '0'))
  {
    return 1;
  }
  return isSumTwoNumbers(input);
}

int isSumTwoNumbers(const char* input)
{ 
  if(isSpecialCharacter(const char* input)
  {
    result=input[0]+input[1];
    return result;
  }
return 0;
}

int add(const char* input)
{
  if(isEmptyString(input))
  {
    return result;
  }
  return -1;
}
