Task 7 README
Question 0: copy over n bytes of info to fill over memory pointed to by s with constant bytes b
char *_memset(char *s, char b, unsigned int n);

for (i = 0; i <= n; i++)
{
    s[i] = b; 
    
}
return (s);

Question 1: override dest info with source for specfied number of occurences

char *_memcpy(char *dest, char *src, unsigned int n)
for (i = 0; i <= n; i++)
{
    dest[i] = src[i];
}
return (dest);


Question 2: using a do while loop, it executes the inside conditon depending on the boolen condition at the end

do {
     if (s[i] = c)
     {
        return (s);
     }
     
} while (*s++);

Question 3: I did not get this answer right, there is two loops and a condition between as we want to use all letters in first word 

unsigned int _strspn(char *s, char *accept)
{
    int z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
	    if (s[x] != 32)
        {
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
        }
        else
            return (z);
	}
}

Question 6: print out the array of chracters, positioned as chess board
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}


Question 7: we want to sum the diagonals of a square matrix
void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[(size + 1) * i];
		d2 += a[(size - 1) * (i + 1)];
	}

