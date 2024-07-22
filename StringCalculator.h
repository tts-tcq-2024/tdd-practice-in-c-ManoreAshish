#include"string.h"

int i=0;
int result=0;
char *input;
char *copy;
char isSingleZero(char* input);
int isSumTwoNumbers(char* input);
char isSpecialCharacter( char* copy);
int AddCopyString (char* copy);



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
{ int i=0;
  char *copy= NULL;
  copy = (char*) malloc(strlen(input)+1);
  for (i = 0; input[i] != '\0'; i++) 
   {
            copy[i] = input[i];
   }
    copy[i] = '\0';
  if(isSpecialCharacter(copy))
  {
    return 1;
  }
return 0;
}

char isSpecialCharacter( char* copy)
{
  for(int i=0;copy[i]!='\0';i++)
    {
      if(copy[i]== ',')
      { 
      copy[i]=copy[i+1]; 
      copy[i+1]=0;
      }
    }
  return AddCopyString(copy);
}

int AddCopyString (char* copy)
{
  for(int i=0;copy[i]!='\0';i++)
  {
   result=result+ (copy[i]-'0');
  }
  return 1;
}

int add( char* input)
{
  if(isEmptyString(input))
  {
    return result;
  }
  return -1;
}
