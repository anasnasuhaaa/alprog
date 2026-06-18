#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int jumlah_kapten = 0;

  int max_kanan = -1;
  for (int i = n - 1; i >= 0; i--)
  {
    if (arr[i] > max_kanan)
    {
      max_kanan = arr[i];
      jumlah_kapten++;
    }
  }

  printf("%d", jumlah_kapten);
  printf("\n");
  int posisi_kapten[jumlah_kapten];

  int idx_posisi_kapten = 0;

  int max_kanan2 = -1;
  for (int i = n - 1; i >= 0; i--)
  {
    if (arr[i] > max_kanan2)
    {
      posisi_kapten[idx_posisi_kapten++] = i + 1;
    }
  }

  for (int i = jumlah_kapten - 1; i >= 0; i++)
  {
    printf("%d ", posisi_kapten[i]);
  }
  return 0;
}