I would like to thank the article https://www.geeksforgeeks.org/cpp/cpp-program-to-print-prime-numbers-from-1-to-n/, from which I borrowed a prime number generating algorithm that I did not feel the need to recreate from scratch.

Assuming that the C++ compiler has been installed and configured on your machine, fprimes.cpp can be compiled into an executable of the same name with

```g++ -o fprimes fprimes.cpp```

Prior to running the executable, an integer parameter $n$ must be chosen, such that the conjecture outlined in the-math-behind-it.md is tested on even integers up to $2n$. For example, if the parameter is taken to be 5000, then the executable would be run with the command

```fprimes 5000```

This will output two sections of output; the first returns the smallest $n$ such that $(a+n)$ and $(a-n)$ are prime, where $a$ is half of every even integer up to $n$. The second half of the output sorts and eliminates duplicates from the first half of the output, returning all unique values of $n$ such that $(a+n)$ and $(a-n)$ are prime for some $a \le n$. Below is an example output for the second half:

<img width="1919" height="1019" alt="Screenshot 2025-09-13 082243" src="https://github.com/user-attachments/assets/1074916c-e816-486b-b708-f88618ef1e7a" />
