/* Big O describes the computational complexity of an algorithm
computational complexity is composed of two parts, the first being time complexity which measures
the amount of time the algorithm needs to run relative to input size and
space complexity which is the amount of memory used by the algorithm relative to input size

Time complexity: as the input size grows, how much longer does the algorithm take to complete?
-describe bow the number of operations changes as the input changes
Space complexity: as the input size grows, how much more memory does the algorithm use?

O(1): best complexity possible, means that the algorithm always
      uses the same amount of resources rgardless of input

O(log n): extremely fast, common time complexity is O(n * log n), at each step we
          are reducing our search space by 50% which gives the logarithmic time complexity

functions in order:
constant -> logarithmic -> linear ->  n log n  -> quadratic -> cubic -> exponential
   1     ->    log n    ->    n   ->  n log n  ->     n^2   ->  n^3  ->     2^n

Ideally want data structure operations to run in constant or logarithmic time
Want algorithms to run in linear or n log n time

algorithms with exponential running times are infeasible for all but
the smallest sized inputs.

a data structure is a way of organizing and accesing data
an algorithim is a procedure for preforming a task in a finite amount of time
*/