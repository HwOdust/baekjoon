#include<stdio.h>
#include<string.h>

void hello(char *save[6][4])
{
	if (save[1][1] == '.' && save[3][1] == '.' && save[2][1] == '.')printf("0"); 
	else if (save[1][0] == '.' && save[1][1] && save[3][1] == '.' && save[3][2] == '.')printf("2");
	else if (save[1][0] == '.' && save[1][1] == '.' && save[3][0] == '.' && save[3][1] == '.')printf("3");
	else if (save[0][1] == '.' && save[1][1] == '.' && save[3][0] == '.' && save[3][1] == '.' && save[4][0] == '.' && save[4][1] == '.')printf("4");
	else if (save[1][1] == '.' && save[1][2] == '.' && save[3][0] =='.' && save[3][1] == '.')printf("5");
	else if (save[1][1] == '.' && save[1][2] == '.' && save[3][1] == '.')printf("6");
	else printf("8");
	
}


int main()
{
	int i,j; 
	char* first[6][4] = { 0 };
	char* second[6][4] = { 0 };
	char* third[6][4] = { 0 };
	char* fourth[6][4] = { 0 };

	int arr[4];
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)scanf(" %c", &first[i][j]);
		for (int k = 0; k < 3; k++)scanf(" %c", &second[i][k]);
		for (int y = 0; y < 3; y++)scanf(" %c", &third[i][y]);
		for (int x = 0; x < 3; x++)scanf(" %c", &fourth[i][x]);
	}

	hello(first);
	hello(second);
	printf(":");
	hello(third);
	hello(fourth);

	return 0;
}
//1,7,9 <-- 불가능
// 
//*5 8 11이 비어 있다면 0  
//*4 5 11 12가 비어 있다면 2 
//*4 5 10 11이 비어 있다면 3
//2 5 10 11 13 14가 비어 있다면 4
//*5 6 10 11이 비어 있다면 5
//*5 6 11이 비어 있다면 6
//5 11이 비어 있다면 8

//2 4 5 6 8 10 11 12 13 14