#include <stdio.h>
#include <string.h>
void substring(char *string, int i_start, int len, char *result)
{
  strncpy(result, string + i_start, len);
}
int main()
{
  char st[100] = "Anas Ganteng Banget";
  // Anas Ganteng: dari index 0 sebanyak 12 karakter
  char res[100];
  char res2[100];
  strncpy(res2, st + 0, 12);
  substring(st, 0, 12, res);
  res2[12] = '\0';
  printf("%s", st);
  printf("\n");
  printf("%s", res);
  printf("\n");
  printf("%s", res2);
}