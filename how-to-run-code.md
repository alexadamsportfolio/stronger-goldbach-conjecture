Assuming that the C++ compiler has been installed and configured on your machine, fprimes.cpp can be compiled into an executable of the same name with

```g++ -o fprimes fprimes.cpp```

Prior to running the executable, an integer parameter $n$ must be chosen, such that the conjecture outlined in the-math-behind-it.md is tested on even integers up to $2*n$. For example, if the parameter is taken to be 5000, then the executable would be run with the command

```fprimes 5000```

This will output two sections of output; the first returns the smallest $n$ such that $(a+n)$ and $(a-n)$ are prime, where $a$ is half of every even integer up to $n$. The second half of the output sorts and eliminates duplicates from the first half of the output, returning all unique values of $n$ such that $(a+n)$ and $(a-n)$ are prime for some $a < n$. Below is an example output:

IMAGE PLACEHOLDER
