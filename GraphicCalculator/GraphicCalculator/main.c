#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include "graph.h"
#include "passwd.h"

void clearScreen()
{
	getchar();
	getchar();
	system("cls");
}

int main()
{
	char passwd[30];
	do
	{
		printf("Please set your password: ______\b\b\b\b\b\b");
		scanf("%s", passwd);
	} while (setPassword(passwd));

	puts("\nPassword set successfully. Press any key to continue.");
	clearScreen();

	int wrongTimes = 0;
	while (1)
	{
		printf("Password (-1 to exit): ______\b\b\b\b\b\b");
		scanf("%s", passwd);
		if (!strcmp(passwd, "-1"))
		{
			break;
		}
		if (!checkPassword(passwd))
		{
			puts("Wrong Password!\n");
			wrongTimes++;
			if (wrongTimes == 3)
			{
				puts("You've tried too many times!");
				break;
			}
			continue;
		}
		int graph, prop;
		printf("\nYou want to calculate Rectangle[1], Triangle[2] or Circle[3]? _\b");
		scanf("%d", &graph);
		printf("You want to calculate the girth[1] or the area[2]? _\b");
		scanf("%d", &prop);

		//Rectangle 
		if (graph == 1)
		{
			Rect_st rect;
			printf("Width = ");
			scanf("%lf", &rect.width);
			printf("Height = ");
			scanf("%lf", &rect.height);

			if (prop == 1)
			{
				printf("The girth of the rectangle is %lf\n", getRectGirth(&rect));
			}
			else
			{
				printf("The area of the rectangle is %lf\n", getRectArea(&rect));
			}
		}
		//Triangle
		else if (graph == 2)
		{
			Triangle_st triangle;
			printf("Side1 = ");
			scanf("%lf", &triangle.side1);
			printf("Side2 = ");
			scanf("%lf", &triangle.side2);
			printf("Side3 = ");
			scanf("%lf", &triangle.side3);

			if (prop == 1)
			{
				printf("The girth of the triangle is %lf\n", getTriangleGirth(&triangle));
			}
			else
			{
				printf("The area of the triangle is %lf\n", getTriangleArea(&triangle));
			}
		}
		//Circle
		else
		{
			Circle_st circle;
			printf("Radius = ");
			scanf("%lf", &circle.radius);

			if (prop == 1)
			{
				printf("The girth of the circle is %lf\n", getCircleGirth(&circle));
			}
			else
			{
				printf("The area of the circle is %lf\n", getCircleArea(&circle));
			}
		}
		puts("\nCalculation finished. Press any key to continue.");
		clearScreen();
	}

	return EXIT_SUCCESS;
}