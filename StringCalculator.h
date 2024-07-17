#include"string.h"

int result=0;
char* input;
char isSingleZero(char* input);
int isSumTwoNumbers(char* input);
char isSpecialCharacter( char* input);

char isSpecialCharacter( char* input)
{
  for(int i=0;i<strlen(input);i++)
    {
      if(input[i]== ',')
      input[i]=input[i+1]; 
    }
  return 1;
}

char isEmptyString( char* input)
{
  if((input== NULL)|| (input[0] == '\0'))
  {
    return 1;
  }
  return isSingleZero(input);
}

char isSingleZero( char* input)
{
  if((input[0] == '0'))
  {
    return 1;
  }
  return isSumTwoNumbers(input);
}

int isSumTwoNumbers( char* input)
{ 
  if(isSpecialCharacter(input))
  {
    for(int i=0;i<strlen(input);i++)
      {
        result=result+input[i];
      }
    return result;
  }
return 0;
}

int add( char* input)
{
  if(isEmptyString(input))
  {
    return result;
  }
  return -1;
}
