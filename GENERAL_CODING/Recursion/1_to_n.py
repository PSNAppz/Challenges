# Print 1 to n without using loop
# You are given an integer N. Print numbers from 1 to N without the help of loops.


def recursive_print(n, current=1):
    print(current)
    if current == n:
        return
    return recursive_print(n, current + 1)


recursive_print(10)
