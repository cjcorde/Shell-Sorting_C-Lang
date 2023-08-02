#include <stdio.h>
#include <ctype.h>

void shell_sort(int arr[], int n) {
    int i, j, interval;
    int moves = 0;
    int swaps = 0;

    int h = 1;
    while (h <= n / 3) {
        h = h * 3 + 1;
    }
    for (interval = h; interval > 0; interval = (interval - 1) / 3) {
        printf("\nInterval: %d\n", interval);
        for (i = interval; i < n; i++) {
            int temp = arr[i];
            for (j = i; j >= interval && arr[j - interval] > temp; j -= interval) {
                arr[j] = arr[j - interval];

                printf("Moved %d to position %d\n", arr[j - interval], j);
                swaps++;
            }
            arr[j] = temp;

            if (j != i) {
                printf("Swapped %d with %d\n", arr[j], arr[i]);
                swaps++;
            } else {
                printf("%d and %d didn't swap\n", arr[j], arr[i]);
            }
        }

        printf("\nArray after iteration: [ ");
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("]\n");
    }
}

int main() {
    int num_values, i;
    char datatype, response;
    
    printf("\nThis code prompts the user to enter the number of values they want to sort using shell sort, it only accept Integers.");
    printf("\n\nHow many values do you want to sort using Shell Sort? ");
    scanf("%d", &num_values);
    
    int arr[num_values];

    printf("\nEnter %d integers (Separated by space): \n", num_values);
    for (i = 0; i < num_values; i++) {
        scanf("%d", &arr[i]); 
    }
  
    printf("\nSorting array using Shell Sort:\n");
    shell_sort(arr, num_values);
  
    printf("\nFinal sorted array: [ ");
    for (i = 0; i < num_values; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    while (1) {
        printf("\nDo you want to sort another array? (Y/N): ");
        scanf(" %c", &response);
        
        if (toupper(response) == 'Y') {
            while ((response = getchar()) != '\n' && response != EOF);
            printf("\nHow many values do you want to sort using Shell Sort? ");
            scanf("%d", &num_values);
            
            int *new_arr = (int*) malloc(num_values * sizeof(int));
            
            printf("\nEnter %d integers (Separated by space): \n", num_values);
            for (i = 0; i < num_values; i++) {
                scanf("%d", &new_arr[i]); 
            }
            printf("\nSorting array using Shell Sort:\n");
            shell_sort(new_arr, num_values);
            
            printf("\nFinal sorted array: [ ");
            for (i = 0; i < num_values; i++) {
                printf("%d ", new_arr[i]);
            }
            printf("]\n");
            free(new_arr);
        }
        else if (toupper(response) == 'N') {
            printf("\nThank you for using our program!\n");
            break;
        }
        else {
            printf("\nInvalid input. Please enter 'Y' or 'N'.\n");
        }
    }

    return 0;
}
