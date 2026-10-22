//problem 1
#include <stdio.h>

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = a;
    printf("The value at adress %u is %d\n",ptr+2,*(ptr+2));
    printf(" \n");
    
    return 0;
}

//problem 2
#include <stdio.h>

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i+1);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("The value of 5 X %d = %d\n", i+1 ,arr[i]);
        
    }
    
    return 0;
}

//problem 3
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i+1);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d X %d = %d\n",n,i+1 ,arr[i]);
        
    }
    
    return 0;
}

//problem 4
#include <stdio.h>
int count(int a[],int n)
{
    int no_of_positive = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            no_of_positive++;
        }
    }
    return no_of_positive;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, -6, -7, 8, 9, 10};
    int *ptr = a;
    printf("The number of postitive integer is %d\n", count(a,10));
    printf(" \n");

    return 0;
}

//problem 5
#include <stdio.h>
int count(int a[],int n)
{
    int no_of_positive = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            no_of_positive++;
        }
    }
    return no_of_positive;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, -6, -7, 8, 9, 10};
    int *ptr = a;
    printf("The number of postitive integer is %d\n", count(a,10));
    printf(" \n");

    return 0;
}

//problem 6

int main() {
    int arr[3][10];
    int mul[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j+1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d\n",arr[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}

//problem 7
#include <stdio.h>

int main() {
    
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int arr[3][10];
    int mul[] = {n1,n2,n3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j+1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d\n",arr[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
//problem 8

#include <stdio.h>

int main() {
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)

    {
        for (int j = 0; j < 3; j++)

        {
          
        for (int k = 0; k < 4; k++)
        {
           printf("%u ",&arr[i][j][k]);
           
        }
        
    }
}
    
    return 0;
}
