<h3><b>1. Power of a Number Using Fast Exponentiation</b></h3>
 Aim:
The aim of this program is to compute the value of a number raised to a given power efficiently using the Fast Exponentiation (Exponentiation by Squaring) technique.

Pseudocode:

START
1. Read base value x and exponent n
2. Initialize:
      m = n
      z = x
      pow = 1
3. While m > 0:
      While m is even:
           m = m / 2
           z = z * z
      m = m - 1
      pow = pow * z
4. Print pow as the result
END

Variables Used:

Variable	Data Type	Description
x	Integer	Base number
n	Integer	Exponent
m	Integer	Copy of exponent used for calculation
z	Integer	Stores intermediate squared values
pow	Integer	Stores final power result

Logical Reasoning:

Instead of multiplying the base x repeatedly n times, the program reduces the number of operations using exponentiation by squaring.

When the exponent is even, the base is squared and the exponent is halved.

When the exponent becomes odd, the current base is multiplied with the result and the exponent is reduced.

This approach significantly improves efficiency compared to the naïve method.

Time Complexity:

O(log n)
The exponent is reduced by half in each major step, making the algorithm very efficient.

Space Complexity:

O(1)
Only a constant amount of extra memory is used.


<h3><b>2. Polynomial Evaluation Using Horner’s Rule</b></h3>

Aim:
The aim of this program is to evaluate a polynomial for a given value of x using Horner’s Rule implemented with recursion, which reduces the number of multiplications and improves efficiency.

Pseudocode:

START
1. Define function hornerRule(a, n, x, i)
2. If i == n - 1:
       Return a[i]
3. Else:
       Return a[i] + x * hornerRule(a, n, x, i + 1)

4. In main():
       Initialize polynomial coefficients array a[]
       Set value of x and n
       Call hornerRule(a, n, x, 0)
       Print result
END

Variables Used:

Variable	Data Type	Description
a[]	Integer Array	Stores coefficients of the polynomial
n	Integer	Number of terms in the polynomial
x	Integer	Value at which polynomial is evaluated
i	Integer	Index used for recursion
result	Integer	Stores the evaluated polynomial value

Logical Reasoning:

Horner’s Rule rewrites the polynomial to minimize computations.

Instead of calculating powers of x separately, the polynomial is evaluated in a nested form.

Recursion is used to process coefficients one by one.

Each recursive call evaluates a smaller part of the polynomial.

This approach is more efficient than the direct polynomial evaluation method.

Time Complexity:

O(n)
Each coefficient is processed exactly once.

Space Complexity:

O(n)
Due to recursive function calls stored in the call stack.


<h3><b>3. Permutation Generator Using Recursion</b></h3>

Aim:
The aim of this program is to generate all possible permutations of a given set of characters using recursion and backtracking.

Pseudocode:

START
1. Define function pg(a, k, n)
2. If k == n:
       Print the array a
       Return
3. Else:
       For i from k to n:
           Swap a[k] with a[i]
           Call pg(a, k + 1, n)
           Swap back a[k] with a[i]   // Backtracking
4. In main():
       Initialize character array
       Call pg(a, 0, n)
END

Variables Used:

Variable	Data Type	Description
a[]	Character Array	Stores characters for permutation
k	Integer	Current index being fixed
n	Integer	Last index of array
i	Integer	Loop counter

Logical Reasoning:

The algorithm fixes one character at a time and recursively permutes the remaining characters.

Swapping allows different characters to appear at the current position.

After each recursive call, the swap is reversed (backtracking) to restore the original order.

This ensures that all unique permutations are generated without losing previous states.

Time Complexity:

O(n!)
Since all possible permutations of n elements are generated.

Space Complexity:

O(n)
Due to recursive function calls stored in the call stack.


<h3><b>4. Tower of Hanoi Using Recursion</b></h3>

Aim:
The aim of this program is to solve the Tower of Hanoi problem using recursion and display the sequence of moves required to transfer all disks from the source peg to the destination peg following the problem rules.

Pseudocode:

START
1. Define function ToH(n, f, u, t)
2. If n == 1:
       Print move disk from f to t
3. Else:
       ToH(n-1, f, t, u)
       Print move disk from f to t
       ToH(n-1, u, f, t)
4. In main():
       Initialize number of disks and peg numbers
       Call ToH(n, f, u, t)
END

Variables Used:

Variable	Data Type	Description
n	Integer	Number of disks
f	Integer	Source peg
u	Integer	Auxiliary peg
t	Integer	Destination peg
Logical Reasoning:

The problem is solved by breaking it into smaller subproblems.

First, move n-1 disks from source to auxiliary peg.

Then move the largest disk directly to the destination peg.

Finally, move the n-1 disks from auxiliary peg to destination peg.

Recursion ensures that the same logic is applied repeatedly until the base case is reached.

Time Complexity:

O(2ⁿ)
The number of moves required grows exponentially with the number of disks.

Space Complexity:

O(n)
Due to recursive function calls stored in the call stack.


<h3><b>5. Linear Search with Time Analysis</b></h3>
Aim:
The aim of this program is to implement the Linear Search algorithm and analyze its time performance by executing the search multiple times and calculating the average execution time.

Pseudocode:

START
1. Read number of elements n
2. Dynamically allocate array of size n
3. Fill array with random values
4. Set key value to search
5. Repeat linear search RUNS times:
       Call linearSearch(arr, n, key)
6. Measure total execution time
7. Calculate average time per search
8. Display results
END

Variables Used:

Variable	Data Type	Description
n	Integer	Number of elements in array
arr[]	Integer Array	Stores randomly generated values
key	Integer	Element to be searched
i	Integer	Loop counter
RUNS	Constant Integer	Number of repeated searches
index	Integer	Stores search result
start	Time Point	Start time of execution
stop	Time Point	End time of execution
totalTime	Long Integer	Total execution time
averageTime	Double	Average time per search

Logical Reasoning:

Linear Search checks each element sequentially until the key is found or the array ends.

The array is filled with random values to simulate realistic data.

The key is set to a value not present in the array to simulate the worst-case scenario.

The search is executed multiple times to obtain reliable timing results.

Average execution time gives a more accurate performance measure.

Time Complexity:

Best Case: O(1) (element found at first position)

Average Case: O(n)

Worst Case: O(n) (element not found)

Space Complexity:

O(n)
Dynamic memory is used to store the array.

<img width="588" height="455" alt="linearSearch" src="https://github.com/user-attachments/assets/29b92036-2457-42ed-9d4b-4a57244028cb" />

<h3><b>6. Bubble Sort with Time Analysis</b></h3>

Aim:
The aim of this program is to implement the Bubble Sort algorithm and analyze its time performance by executing the sorting process multiple times and calculating the average execution time.

Pseudocode:

START
1. Read number of elements n
2. Dynamically allocate array of size n
3. Fill array with random values
4. Repeat Bubble Sort for RUNS times:
       Compare adjacent elements
       Swap if elements are in wrong order
5. Measure total execution time
6. Calculate average time per run
7. Display results
END

Variables Used:

Variable	Data Type	Description
n	Integer	Number of elements in array
arr[]	Integer Array	Stores randomly generated values
i, j	Integer	Loop counters
RUNS	Constant Integer	Number of repeated executions
start	Time Point	Start time of execution
stop	Time Point	End time of execution
totalTime	Long Integer	Total execution time
averageTime	Double	Average time per run

Logical Reasoning:

Bubble Sort repeatedly compares adjacent elements.

If two adjacent elements are in the wrong order, they are swapped.

After each pass, the largest unsorted element moves to its correct position.

The algorithm is executed multiple times to obtain consistent timing results.

Average execution time gives a better estimate of algorithm performance.

Time Complexity:

Best Case: O(n) (already sorted array)

Average Case: O(n²)

Worst Case: O(n²)

Space Complexity:

O(1)
Bubble Sort is an in-place sorting algorithm and requires constant extra space.

<img width="567" height="455" alt="bubbleSort" src="https://github.com/user-attachments/assets/89193908-d453-422f-8764-667879fad558" />


<h3><b>7. Insertion Sort with Best & Worst Case Analysis</b></h3>

Aim:
The aim of this program is to implement the Insertion Sort algorithm and analyze its best-case and worst-case execution time by measuring average runtime over multiple executions.

Pseudocode:

START
1. Define insertionSort(arr, n)
2. For i = 1 to n-1:
       key = arr[i]
       j = i - 1
       While j >= 0 and arr[j] > key:
           arr[j + 1] = arr[j]
           j = j - 1
       arr[j + 1] = key

3. Read number of elements n
4. For RUNS times (Best Case):
       Create sorted array
       Measure time of insertionSort
5. For RUNS times (Worst Case):
       Create reverse sorted array
       Measure time of insertionSort
6. Calculate and display average times
END

Variables Used:

Variable	Data Type	Description
n	Integer	Number of elements
arr[]	Integer Array	Array to be sorted
i, j	Integer	Loop counters
key	Integer	Element to be inserted
RUNS	Constant Integer	Number of executions
bestTime	Long Long	Total best-case execution time
worstTime	Long Long	Total worst-case execution time
start	Time Point	Start time
stop	Time Point	End time

Logical Reasoning:

In best case, the array is already sorted, so no shifting is required.

In worst case, the array is reverse sorted, requiring maximum shifts.

Insertion Sort builds the sorted array one element at a time.

Repeating the sort multiple times gives a more accurate performance analysis.

Average time helps reduce measurement fluctuations.

Time Complexity:

Best Case: O(n)

Average Case: O(n²)

Worst Case: O(n²)

Space Complexity:

O(1)
Insertion Sort is an in-place sorting algorithm.

<img width="567" height="455" alt="insertionSort" src="https://github.com/user-attachments/assets/a93482a2-4f69-4ef8-a0f6-a7367de0b370" />


<h3><b>8. First Duplicate Element in an Array</b></h3>

Aim:
The aim of this program is to find the first duplicate element in an array and display its value along with its index using a recursive approach.

Pseudocode:

START
1. Define function findFirstDuplicate(arr, n, i, j)

2. If i == n-1:
       Print "No duplicate found"
       Return

3. If j == n:
       Call findFirstDuplicate(arr, n, i+1, i+2)
       Return

4. If arr[i] == arr[j]:
       Print duplicate value and its index
       Return

5. Call findFirstDuplicate(arr, n, i, j+1)

6. In main():
       Initialize array and size
       Call findFirstDuplicate(arr, n, 0, 1)
END

Variables Used:

Variable	Data Type	Description
arr[]	Integer Array	Stores array elements
n	Integer	Size of the array
i	Integer	Index of first element being compared
j	Integer	Index of second element being compared

Logical Reasoning:

The algorithm compares each element with the elements that come after it.

Recursion replaces nested loops.

When a duplicate is found, the function prints the value and index and stops further execution.

If all elements are checked and no duplicates exist, a message is displayed.

This ensures the first occurring duplicate is identified.

Time Complexity:

O(n²)
Each element is compared with remaining elements.

Space Complexity:

O(n)
Due to recursive function calls stored in the call stack.


<h3><b>9. Find Missing Number in a Sorted Array</b></h3>

Aim:
The aim of this program is to find the missing number in a sorted array of consecutive integers using a recursive approach.

Pseudocode:

START
1. Define function findMissing(arr, start, end, first)

2. If start > end:
       Return -1

3. If arr[start] != first + start:
       Return first + start

4. Else:
       Call findMissing(arr, start + 1, end, first)

5. In main():
       Initialize sorted array
       Call findMissing function
       Display missing number
END

Variables Used:

Variable	Data Type	Description
arr[]	Integer Array	Stores sorted array elements
start	Integer	Starting index
end	Integer	Ending index
first	Integer	First element of the array
n	Integer	Size of the array
missing	Integer	Stores missing number

Logical Reasoning:

In a sorted array of consecutive numbers, each element should satisfy
arr[i] = first + i

The function checks this condition recursively.

If a mismatch is found, the missing number is calculated and returned.

Recursion continues until the missing value is identified.

This method avoids unnecessary comparisons.

Time Complexity:

O(n)
Each element is checked once.

Space Complexity:

O(n)
Due to recursive function calls.


<h3><b>10. Ball Bounce Count Using Velocity Reduction</b></h3>

Aim:
The aim of this program is to calculate the number of bounces of a ball until its velocity becomes less than 1, given an initial velocity and a fixed velocity reduction factor.

Pseudocode:

START
1. Initialize reduction factor f = 0.575
2. Initialize bounce counter b = 0
3. Read initial velocity v
4. While v * f >= 1:
       v = v * f
       Increment b
5. Print total number of bounces
END

Variables Used:

Variable	Data Type	Description
v	Double	Initial velocity of the ball
f	Double	Velocity reduction factor after each bounce
b	Integer	Counts number of bounces
t	Double	Unused variable (can be removed)

Logical Reasoning:

Each bounce reduces the ball’s velocity by a fixed factor (0.575).

The velocity is repeatedly multiplied by this factor.

The loop continues as long as the velocity remains greater than or equal to 1.

Each successful reduction represents one bounce.

The loop stops when the velocity becomes too small to count as a bounce.

Time Complexity:

O(b)
Where b is the number of bounces until the velocity drops below 1.

Space Complexity:

O(1)
Only a constant amount of memory is used.


<h3><b>11. Selection Sort with Time Analysis</b></h3>
Aim:
The aim of this program is to implement the Selection Sort algorithm and analyze the time taken to sort a randomly generated array of integers.

Pseudocode:

START
1. Read number of elements n
2. Generate array of n random elements
3. For i = 0 to n-2:
       Set minIndex = i
       For j = i+1 to n-1:
           If arr[j] < arr[minIndex]:
               minIndex = j
       Swap arr[i] with arr[minIndex]
4. Measure execution time
5. Display time taken
END

Variables Used:

Variable	Data Type	Description
n	Integer	Number of elements in array
arr[]	Integer Array	Stores randomly generated values
i, j	Integer	Loop counters
minIndex	Integer	Index of minimum element
start	Time Point	Start time of execution
stop	Time Point	End time of execution
duration	Time	Time taken for sorting

Logical Reasoning:

Selection Sort repeatedly selects the smallest element from the unsorted part of the array.

The selected minimum element is swapped with the first unsorted position.

This process continues until the entire array is sorted.

The execution time is measured to analyze the algorithm’s performance.

Time Complexity:

Best Case: O(n²)

Average Case: O(n²)

Worst Case: O(n²)

Space Complexity:

O(1)
Selection Sort is an in-place sorting algorithm.

<img width="576" height="455" alt="selectionSort" src="https://github.com/user-attachments/assets/0a80a8fd-5306-4950-a7be-ebdd2447323a" />


<h3><b>12. Binary Search with Best & Worst Case Time Analysis</b></h3>

Aim:
The aim of this program is to implement the Binary Search algorithm using recursion and analyze its best-case and worst-case execution time by performing multiple search operations.

Pseudocode:

START
1. Define binarySearch(arr, key, low, high)

2. If low > high:
       Return -1

3. Calculate mid = low + (high - low) / 2

4. If arr[mid] == key:
       Return mid
   Else if arr[mid] > key:
       Call binarySearch(arr, key, low, mid - 1)
   Else:
       Call binarySearch(arr, key, mid + 1, high)

5. In main():
       Read number of elements n
       Generate sorted array
       Repeat search RUNS times for:
           - Best case (key at middle)
           - Worst case (key not present)
       Measure and display time
END

Variables Used:

Variable	Data Type	Description
n	Integer	Number of elements
arr[]	Integer Array	Stores sorted array elements
key	Integer	Element to be searched
low	Integer	Lower index
high	Integer	Higher index
mid	Integer	Middle index
RUNS	Constant Integer	Number of executions
bestKey	Integer	Key for best-case search
worstKey	Integer	Key for worst-case search
bestTime	Long Long	Total best-case time
avgTime	Long Long	Total worst-case time

Logical Reasoning:

Binary Search works on sorted arrays.

The array is repeatedly divided into two halves.

In the best case, the key is found at the middle in the first comparison.

In the worst case, the key is not present and recursion continues until the range becomes invalid.

Multiple runs are used to obtain accurate average timing results.

Time Complexity:

Best Case: O(1)

Average Case: O(log n)

Worst Case: O(log n)

Space Complexity:

O(log n)
Due to recursive function calls.

<img width="567" height="455" alt="binarySearch" src="https://github.com/user-attachments/assets/b90d0c60-f2ca-4875-aaf1-21aeb6026f7b" />


<h3><b>13. Quick Sort with Average and Worst Case Time Analysis</b></h3>

Aim:
The aim of this program is to implement the Quick Sort algorithm using recursion and analyze its average and worst-case execution time by running the sort multiple times on different input cases.

Pseudocode:

START

1. Define Partition(a, m, p)
      v = a[m]
      i = m
      j = p
      Repeat:
          Increase i until a[i] > v
          Decrease j until a[j] <= v
          If i < j:
              Swap a[i], a[j]
      Until i > j
      Place pivot in correct position
      Return j

2. Define Quick(a, low, high)
      If low < high:
          j = Partition(a, low, high + 1)
          Quick(a, low, j - 1)
          Quick(a, j + 1, high)

3. In main:
      Read number of elements n
      For RUNS times:
           Generate random array
           Measure Quick sort time (average case)

      For RUNS times:
           Generate sorted array
           Measure Quick sort time (worst case)

4. Print average and worst-case time

END

Variables Used:

Variable	Data Type	Description
a[]	Integer Array	Stores array elements
n	Integer	Number of elements
m	Integer	Pivot starting index
p	Integer	Ending index for partition
i, j	Integer	Partition pointers
low	Integer	Starting index of subarray
high	Integer	Ending index of subarray
RUNS	Constant Integer	Number of executions
totalBest	Long Long	Total average-case time
totalWorst	Long Long	Total worst-case time
start	Time Point	Start time
stop	Time Point	End time

Logical Reasoning:

Quick Sort works by selecting a pivot element and partitioning the array.

Elements smaller than the pivot move to the left.

Elements larger than the pivot move to the right.

The process is applied recursively to the left and right subarrays.

Random arrays simulate the average case.

Sorted arrays simulate the worst case for this pivot selection method.

Multiple runs provide more accurate timing results.

Time Complexity:

Best Case: O(n log n)

Average Case: O(n log n)

Worst Case: O(n²)
(Occurs when the array is already sorted and pivot selection is poor.)

Space Complexity:

Average Case: O(log n) (recursive call stack)

Worst Case: O(n)

<img width="567" height="455" alt="quickSort" src="https://github.com/user-attachments/assets/858c3a03-209e-4438-9174-4d5b9ab43e19" />

<h3><b>14. Merge Sort with Average Case Time Analysis</b></h3>

Aim:
The aim of this program is to implement the Merge Sort algorithm using recursion and analyze its average-case execution time by running the sorting process multiple times on randomly generated data.

Pseudocode:

START

1. Define merge(arr, low, mid, high)
      Create two temporary arrays:
          L[] for left subarray
          R[] for right subarray
      Copy elements into L[] and R[]
      Compare elements from L[] and R[]
      Place smaller element back into arr[]
      Copy any remaining elements

2. Define mergeSort(arr, low, high)
      If low < high:
          mid = (low + high) / 2
          mergeSort(arr, low, mid)
          mergeSort(arr, mid + 1, high)
          merge(arr, low, mid, high)

3. In main:
      Read number of elements n
      Generate random array
      Repeat mergeSort for RUNS times
      Measure total time
      Calculate and display average time

END


Variables Used:

Variable	Data Type	Description
arr[]	Integer Array	Stores array elements
n	Integer	Number of elements
low	Integer	Starting index
mid	Integer	Middle index
high	Integer	Ending index
L[]	Integer Array	Left subarray
R[]	Integer Array	Right subarray
i, j, k	Integer	Index counters
RUNS	Constant Integer	Number of executions
start	Time Point	Start time
stop	Time Point	End time
bestTime	Long Long	Total execution time

Logical Reasoning:

Merge Sort follows the divide and conquer approach.

The array is repeatedly divided into two halves.

Each half is sorted recursively.

The sorted halves are then merged into a single sorted array.

Random input simulates the average case.

Multiple runs ensure more accurate timing results.

Time Complexity:

Best Case: O(n log n)

Average Case: O(n log n)

Worst Case: O(n log n)

Space Complexity:

O(n)
Extra space is required for temporary subarrays during merging.

<img width="571" height="455" alt="mergeSort" src="https://github.com/user-attachments/assets/a3c7fa0e-0878-4cf1-b43d-7f2dde8a2666" />

