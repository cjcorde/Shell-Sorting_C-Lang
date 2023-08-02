# Shell-Sorting_C-Lang

This repository, **Shell-Sorting_C-Lang**, contains the C programming language implementation of the Shell Sort algorithm. Shell Sort is an efficient sorting algorithm that extends the Insertion Sort method to sort elements in an array. The algorithm works by comparing and swapping elements that are distant from each other and progressively reduces the interval between elements until the entire array is sorted.

## File: CSHELL-SORTING.c

The `CSHELL-SORTING.c` file is the main source code file that includes the implementation of the Shell Sort algorithm. It contains the `shell_sort()` function, which takes an array of integers and its size as inputs and sorts the array in ascending order using the Shell Sort algorithm. During the sorting process, the function prints each interval, moved elements, and swapped elements for better visualization.

## Getting Started

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/yourusername/Shell-Sorting_C-Lang.git
   ```

2. Compile the `CSHELL-SORTING.c` file using a C compiler:

   ```bash
   gcc -o shell_sort CSHELL-SORTING.c
   ```

3. Run the compiled executable:

   ```bash
   ./shell_sort
   ```

## How to Use

1. After running the program, you will be prompted to enter the number of values you want to sort using Shell Sort.

2. Enter the specified number of integers, separated by spaces.

3. The program will then sort the array using the Shell Sort algorithm and display the intermediate steps for each interval.

4. Finally, the program will present the sorted array.

5. If you want to sort another array, the program allows you to do so until you decide to exit.

## Note

- This program is meant for educational purposes only and is designed to demonstrate the implementation of the Shell Sort algorithm in C. It is not intended for real-world production use or large-scale applications.

## Contributions

Contributions to this repository, **Shell-Sorting_C-Lang**, are welcome! If you find any bugs, have suggestions for improvements, or want to add more features, feel free to open an issue or submit a pull request.
