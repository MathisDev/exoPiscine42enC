
#include <unistd.h>

int	ligne(int n, int **grille, int i)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (grille[i][j] == n)
			return (0);
		j++;
	}
	return (1);
}

int	colonne(int n, int **grille, int j)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grille[i][j] == n)
			return (0);
		i++;
	}
	return (1);
}

int	ft_sudoku(int **grille, int p)
{
	int	i;
	int	j;
	int	k;

	k = 1;
	i = p / 4;
	j = p % 4;
	if (p == 16)
		return (0);
	if (grille[i][j] != 0)
		return (ft_sudoku(grille, p + 1));
	while (k <= 4)
		if (ligne(k, grille, i) && colonne(k, grille, j))
			grille[i][j] = k;
	k++;
}
