#include"string.h"

int result=0;
char *input;
String Copy;
char isSingleZero(char* input);
int isSumTwoNumbers(char* input);
char isSpecialCharacter( char* input);

char isSpecialCharacter( String copy)
{
  for(int i=0;i<strlen(copy);i++)
    {
      if(copy[i]== ',')
      copy[i]=copy[i+1]; 
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
  String copy=input;
  if(isSpecialCharacter(copy))
  {
    for(int i=0;i<strlen(copy);i++)
      {
        result=result+copy[i];
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
