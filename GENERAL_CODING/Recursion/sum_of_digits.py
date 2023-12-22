# Given a number, N. Find the sum of all the digits of N
# Example
# Input:
# N = 12
# Output:
# 3
# Explanation:
# Sum of 12's digits: 1+2=3


def digit_sum(n, current_sum=0):
    current_sum = current_sum + n % 10
    if n // 10 == 0:
        return current_sum

    return digit_sum(n // 10, current_sum)


print(digit_sum(1507))
