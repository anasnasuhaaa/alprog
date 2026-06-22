#include <stdio.h>
#define MAX 2005

char grid[MAX][MAX];
int row, col;

int get_value(char s)
{
  if (s >= '0' && s <= '9')
    return s - '0';
  return 0;
}

int main()
{
  scanf("%d %d", &row, &col);
  for (int i = 0; i < row; i++)
  {
    scanf("%s", &grid[i]);
  }

  int max_panen = 0;

  // 1. Cek Secara Horizontal
  for (int i = 0; i < row; i++)
  {
    int current_panen = 0;
    // Dari Kiri -> Kanan
    for (int j = 0; j < col; j++)
    {
      current_panen += get_value(grid[i][j]);
      if (grid[i][j] == '#')
        break;
    }
    if (current_panen > max_panen)
      max_panen = current_panen;
    current_panen = 0;

    // Dari Kanan -> Kiri
    for (int j = col - 1; j >= 0; j--)
    {
      current_panen += get_value(grid[i][j]);
      if (grid[i][j] == '#')
        break;
    }
    if (current_panen > max_panen)
      max_panen = current_panen;
    current_panen = 0;
  }

  // 2. Cek Secara Vertikal
  for (int i = 0; i < col; i++)
  {
    int current_panen = 0;
    // Dari Atas -> Bawah
    for (int j = 0; j < row; j++)
    {
      current_panen += get_value(grid[j][i]);
      if (grid[j][i] == '#')
        break;
    }
    if (current_panen > max_panen)
      max_panen = current_panen;
    current_panen = 0;

    // Dari Bawah -> Atas
    for (int j = row - 1; j >= 0; j--)
    {
      current_panen += get_value(grid[j][i]);
      if (grid[j][i] == '#')
        break;
    }
    if (current_panen > max_panen)
      max_panen = current_panen;
    current_panen = 0;
  }

  printf("%d", max_panen);

  return 0;
}