#include <stdio.h>

#define MAX_NUM 1000
#define STORE_SIZE  3000

// git test

int main(int argc, char* argv[])
{
    // Initialize the result array (set all to 0 first, then set first element to 1)
    int result[STORE_SIZE] = {0};
    result[0] = 1;
    
    int i, j;
    
    // Begin compute the factorial
    for(j = 1; j <= MAX_NUM; j++)
    {
        // Multiply each digit by the new number
        for(i = 0; i < STORE_SIZE; i++)
        {
            result[i] *= j;
        }
        
        // Process carries for all digits
        for(i = 0; i < STORE_SIZE - 1; i++)
        {
            if(result[i] >= 10)
            {            
                // Add the carry to the next higher digit
                result[i + 1] += result[i] / 10;
                
                // Keep only the units digit
                result[i] = result[i] % 10;
            }
        }
    }
    
    // Find the first non-zero digit from the end
    int start_index = STORE_SIZE - 1;
    while(start_index >= 0 && result[start_index] == 0)
    {
        start_index--;
    }
    
    // Print the result (from most significant to least significant)
    if(start_index < 0)
    {
        printf("0"); // If all digits are zero
    }
    else
    {
        for(i = start_index; i >= 0; i--)
        {
            printf("%d", result[i]);
        }
    }
    printf("\n");
    prinf("Hello World");

    int a = 0;
    prinf(a);

    int b = 10;
    prinf("\n");
    prinf(a + b);

    prinf("Creating a new branch is quick.");

    // pause
    getchar();
    return 0;
}