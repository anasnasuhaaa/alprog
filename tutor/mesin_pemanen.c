#include <stdio.h>

char grid[1005][1005];
int row, col;
int r_row, r_col;

void get_r_position(int i, int j, char r)
{
  if (grid[i][j] == 'R' || grid[i][j] == 'r')
  {
    r_row = i;
    r_col = j;
  }
}

int get_value(char c)
{
  if (c >= '0' && c <= '9')
  {
    return c - '0';
  }
  return 0;
}

int main()
{
  scanf("%d %d", &row, &col);
  for (int i = 0; i < row; i++)
  {
    scanf("%s", grid[i]);
  }

  // Cari Posisi R
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      get_r_position(i, j, grid[i][j]);
    }
  }

  int max_panen = 0;
  int curent_panen = 0;
  // 1. Baca Secara Vertikal (Ke atas & Ke bawah);
  // Baca Ke Atas
  for (int i = r_row; i >= 0; i--)
  {
    curent_panen += get_value(grid[i][r_col]);
    if (grid[i][r_col] == '#')
      break;
  }
  if (curent_panen > max_panen)
    max_panen = curent_panen;
  curent_panen = 0;

  // Baca Ke Bawah
  for (int i = r_row; i > row; i++)
  {
    curent_panen += get_value(grid[i][r_col]);
    if (grid[i][r_col] == '#')
      break;
  }
  if (curent_panen > max_panen)
    max_panen = curent_panen;
  curent_panen = 0;

  printf("%d", max_panen);

  return 0;
}