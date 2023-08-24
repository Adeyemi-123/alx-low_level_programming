#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * main - Main Entrance
 * @argc: size of arguments
 * @argv: conyainer of members
 * Return: void
 */

int main(int argc, char *argv[])
{
	int cents, num_coins, total_coins, num_current_coins, i;
	int coin_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = sizeof(coin_values) / sizeof(coin_values[0]);
	total_coins = 0;

	for (i = 0; i < num_coins; i++)
	{
		num_current_coins = cents / coin_values[i];
		total_coins += num_current_coins;
		cents -= num_current_coins * coin_values[i];
	}

	printf("%d\n", total_coins);

	return (0);
}
