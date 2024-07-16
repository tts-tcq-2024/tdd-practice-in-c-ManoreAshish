char isSingleZero(const char* input);
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
  return 0;
}

int add(const char* input)
{
  if(isEmptyString(input) && isSingleZero (input))
  {
    return 0;
  }
  return -1;
}
