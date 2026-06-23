#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char s[5005];
        scanf("%s", s);

        char stack[5005];
        int top = -1;

        int n = strlen(s);
        for (int i = 0; i < n; i++)
        {
            // jika karakter berikutnya sama
            if (top >= 0 && stack[top] == s[i])
            {

                char c = s[i];

                // hapus karakter yang sama dari stack
                top--;

                // lewati semua karakter yang sama
                while (i + 1 < n && s[i + 1] == c)
                {
                    i++;
                }
            }
            else
            {
                stack[++top] = s[i];
            }
        }

        if (top == -1)
        {
            printf("-\n");
        }
        else
        {
            stack[top + 1] = '\0';
            printf("%s\n", stack);
        }
    }

    return 0;
}