#include <bits/stdc++.h>

using namespace std;

int main()l
{
	srand(time(NULL));
	int correct = 1;
	while (correct <= 10)
	{
		int first = rand() % 20, second = rand() % 20, c = rand() % 4, input, ans;
		char ch;
		printf("[%d/10] ", correct);
		switch (c)
		{
		case 0:
			ch = '+';
			ans = (first + 1) + (second + 1);
			break;
		case 1:
			ch = '-';
			ans = (first + 1) - (second + 1);
			break;
		case 2:
			ch = '*';
			ans = (first + 1) * (second + 1);
			break;
		case 3:
			ch = '/';
			ans = (first + 1) / (second + 1);
			break;
		default:
			break;
		}
		printf("%d %c %d = ", (first + 1), ch, (second + 1));
		scanf("%d", &input);
		if (ans == input)
		{
			printf("\nCorrect!\n\n");
			correct++;
		}
		else printf("\nWrong! Answer is %d.\n\n", ans);
	}
}
