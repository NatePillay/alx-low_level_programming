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

