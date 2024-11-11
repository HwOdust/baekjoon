#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int colorpaper[128][128] = { 0 }, n, i, j, white = 0, blue = 0;

void make_paper(int x, int y, int w)
{
	int i, j, c = 0, ww = 0, b = 0;
	for (i = x; i < x+w; i++)
	{
		for (j = y; j < y+w; j++)
		{
			if (colorpaper[i][j] == 0)ww++;
			if (colorpaper[i][j] == 1)b++;
		}
	}
	if (ww==w*w)
	{
		white++;
	}
	else if (b == w * w)
	{
		blue++;
	}
	else
	{
		make_paper(x, y, w / 2);
		make_paper(x + w / 2, y, w / 2);
		make_paper(x, y + w / 2, w / 2);
		make_paper(x + w / 2, y + w / 2, w / 2);
	}
}

int main()
{
	int x, y, w;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &colorpaper[i][j]);
		}
	}
	make_paper(0, 0, n);

	printf("%d\n%d", white,blue);

	return 0;
}
