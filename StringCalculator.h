int result=0;char isSingleZero(const char* input);
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
  if((input!= NULL) && (input[0] != '\0'))
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
    return 0;
  }
  return result;
}
