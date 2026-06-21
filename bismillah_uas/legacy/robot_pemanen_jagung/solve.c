#include <stdio.h>

int main()
{
  int row, col;
  if (scanf("%d %d", &row, &col) != 2) return 0;
  
  int arr[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  int left = 0;
  int top = 0;
  int right = col - 1;
  int botom = row - 1;
  
  int count_kantong = 0, count_step = 0;
  // Ukuran jpk aman sampai 10000 / 10 = 1000 kantong
  int jpk[1005], idx_jpk = 0, get_jpk = 0;

  while (top <= botom && left <= right)
  {
    // 1. Baca Dari Kiri -> Kanan
    for (int i = left; i <= right; i++)
    {
      get_jpk += arr[top][i];
      count_step++;
      
      if (count_step == 10)
      {
        jpk[idx_jpk++] = get_jpk;
        get_jpk = 0;
        count_kantong++;
        count_step = 0;
      }
    }
    top++;

    // 2. Baca Dari Atas ke Bawah
    for (int i = top; i <= botom; i++)
    {
      get_jpk += arr[i][right];
      count_step++;
      
      if (count_step == 10)
      {
        jpk[idx_jpk++] = get_jpk;
        get_jpk = 0;
        count_kantong++;
        count_step = 0;
      }
    }
    right--;

    // 3. Kanan Ke Kiri
    if (top <= botom)
    {
      for (int i = right; i >= left; i--)
      {
        get_jpk += arr[botom][i];
        count_step++;
        
        if (count_step == 10)
        {
          jpk[idx_jpk++] = get_jpk;
          get_jpk = 0;
          count_kantong++;
          count_step = 0;
        }
      }
    }
    botom--;

    // 4. Bawah Ke Atas
    if (left <= right)
    {
      for (int i = botom; i >= top; i--)
      {
        get_jpk += arr[i][left];
        count_step++;
        
        if (count_step == 10)
        {
          jpk[idx_jpk++] = get_jpk;
          get_jpk = 0;
          count_kantong++;
          count_step = 0;
        }
      }
    }
    left++;
  }

  if (count_step > 0)
  {
    jpk[idx_jpk++] = get_jpk;
    count_kantong++;
  }

  printf("%d\n", count_kantong);
  for (int i = 0; i < count_kantong; i++)
  {
    printf("%d", jpk[i]);
    if (i < count_kantong - 1)
    {
      printf(" ");
    }
  }
  printf("\n");

  return 0;
}