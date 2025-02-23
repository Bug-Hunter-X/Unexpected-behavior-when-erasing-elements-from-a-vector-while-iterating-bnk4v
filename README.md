# C++ Vector Iterator Invalidation Bug
This repository demonstrates a common error in C++ when working with vectors: iterator invalidation.  The `bug.cpp` file contains code that attempts to remove elements from a vector while iterating, leading to unpredictable behavior and potential crashes.  The `bugSolution.cpp` file shows the corrected approach.

## The Bug
The bug lies in the second loop.  When `vec.erase(vec.begin() + i)` is executed, it invalidates all iterators pointing to elements beyond the removed element. Thus, the next iteration accesses invalid memory, leading to undefined behavior (usually a crash).

## The Solution
The solution uses an iterator-based approach to safely remove elements from a vector.  Iterators are updated accordingly, preventing invalidation and crashes.  Alternatively, using `std::remove` can be more efficient.