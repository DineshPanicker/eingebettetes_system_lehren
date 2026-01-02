// Diese Frage wurde während eines Vorstellungsgesprächs bei Texas Instruments Bangalore gestellt.
// Es ist mein aufrichtiger Versuch, diese Fragen neu zu formulieren und zu beantworten.
#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[256];
    int age;
    double average;
}Student;

void *mem_cpy(void *dest, void *src, int n);

int main()
{
    char src[] = "copy this";
    char dest[100];

    char *dest_ptr = memcpy(dest, src, strlen(src)+1);

    printf("src: %s\n",src);
    printf("dest %s\n",dest);

    printf("dest_ptr: %p\n",dest_ptr);
    printf("    dest: %p\n",dest);

    double src_array[5]={1.1,2.2,3.3,4.4,5.5};
    double dest_array[5];

    memcpy(dest_array, src_array, sizeof(src_array));

    for(int i=0;i<5;i++)
        printf("dest_array[%d] = %f\n",i,dest_array[i]);
        
    return 0;
}

void *mem_cpy(void *dest, void *src, int n)
{
    if(dest == NULL)
        return NULL;

    char *char_dest = (char *)dest;
    char *char_src = (char *)src;

    for(int i = 0;i<n;i++)
    {
        char_dest[i]=char_src[i];
    }
    return dest;
}