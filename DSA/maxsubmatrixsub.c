#include <stdio.h>
#include <limits.h>

// Kadane's Algorithm for 1D array
int max_subarraysum(int array[], int length, int *ans_start, int *ans_end)
{
    int sum = 0, max = INT_MIN, start = 0;
    *ans_start = -1;
    *ans_end = -1;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];

        if (sum > max)
        {
            max = sum;
            *ans_start = start;
            *ans_end = i;
        }

        if (sum < 0)
        {
            sum = 0;
            start = i + 1;
        }
    }

    return max;
}

// Function to find max sum submatrix using 2D Kadane's algorithm
void max_submatrixsum(int array[][5], int rows, int cols)
{
    int max_sum = INT_MIN;
    int max_left = 0, max_right = 0, max_top = 0, max_bottom = 0;
    int temp[rows];

    for (int left = 0; left < cols; left++)
    {
        // Reset the temp array to 0 for each new left column
        for (int i = 0; i < rows; i++)
            temp[i] = 0;

        for (int right = left; right < cols; right++)
        {
            // Add current column to each row in temp
            for (int row = 0; row < rows; row++)
                temp[row] += array[row][right];

            // Apply Kadane’s algorithm on temp[]
            int ans_start = 0, ans_end = 0;
            int current_sum = max_subarraysum(temp, rows, &ans_start, &ans_end);

            if (current_sum > max_sum)
            {
                max_sum = current_sum;
                max_left = left;
                max_right = right;
                max_top = ans_start;
                max_bottom = ans_end;
            }
        }
    }

    // Output results
    printf("MAX SUBMATRIX SUM = %d\n", max_sum);
    printf("Indexes: LEFT = %d, RIGHT = %d, TOP = %d, BOTTOM = %d\n\n", max_left, max_right, max_top, max_bottom);

    printf("MAX SUBMATRIX IS:\n");
    for (int i = max_top; i <= max_bottom; i++)
    {
        for (int j = max_left; j <= max_right; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int kadane2d()
{
    int rows = 4;
    int cols = 5;
    int array[4][5] = {
        {1, 2, -1, -4, -20},
        {-8, -3, 4, 8, 1},
        {3, 8, 10, 1, 3},
        {-4, -1, 1, 7, -6}
    };

    max_submatrixsum(array, rows, cols);

    return 0;
}
