/**
 * ask.c
 *
 * Computer Science 50
 * Problem Set 1
 *
 * Asks for name and greets!
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("What's your name?\n");
    string s = GetString();
    printf("Hello, %s\n!", s);
}
