#include<stdlib.h>
#include<stdio.h>


int check_for_separators(char *str, char *separators)
{
    int i;
    int j;
    int count;

    i = 0;
    if (str[0] == '\0' || separators[0] == '\0')
        return (0);
    while (separators[i] != '\0')
    {
        j = 0;
        while(str[j] != '\0')
        {
            if(str[j] == separators[i])
            count ++;
            j++;
        }
        i++;
    }
    return (count);
}
/*int check_possiblties(char *str, char *separators)
{
    int i;

    i = 0;
    while (str[i] != )
}*/
int *the_indexof_separators(char *src, char *sep)
{
    int i;
    int j;
    int k;
    int *indesses ;

    k = 0;
    i = 0;
	j = 0;
    if (src[0] == '\0' || sep[0] == '\0')
        return (0);
    while(src[i]  != '\0')
    {
        j =0;
        while(sep[j] != '\0')
        {
            if(src[i] == sep[j])
            {
                *indesses = i;
				 indesses++;
                k++;
            }
            j++;
        }
        i++;
    }
    return(indesses - k - 1);
}

int main(void)
{
    char arr[] = "please.tell.me.the.indesses.of.the.dots.";
    char arr2[] = ".";
    int * ptr = the_indexof_separators(arr,arr2);
    for(int i = 0;i<6;i++)
    printf("%d",ptr[i]);
}


/*char **ft_split(char *str, char *charset)
{

    
    
    we will check if there any separator if so we calculate how many of them
    are there in our string then check for the first and the last separator
    then we allocate a memory "which will be an array of strings contain the size of how many strings should we allocate"
    then we want the indesses of those separators and just copy those strings from the original string to the array of strings we have made
}*/
