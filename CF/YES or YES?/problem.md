# A. YES or YES?
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There is a string 𝑠 of length 3, consisting of uppercase and lowercase English letters. Check if it is equal to "YES" (without quotes), where each letter can be in any case. For example, "yES", "Yes", "yes" are all allowable.

## Input
The first line of the input contains an integer 𝑡(1≤ 𝑡 ≤ 10^3) - the number of testcases.

The description of each test consists of one line containing one string 𝑠 consisting of three characters. Each character of 𝑠 is either an uppercase or lowercase English letter.

## Output
For each test case, output "YES" (without quotes) if 𝑠 satisfies the condition, and "NO" (without quotes) otherwise.

You can output "YES" and "NO" in any case (for example, strings "yES", "yes" and "Yes" will be recognized as a positive response).

### Example
#### input

    10
    YES
    yES
    yes
    Yes
    YeS
    Noo
    orZ
    yEz
    Yas
    XES

####  output

    YES
    YES
    YES
    YES
    YES
    NO
    NO
    NO
    NO
    NO
## Note
The first five test cases contain the strings "YES", "yES", "yes", "Yes", "YeS". All of these are equal to "YES", where each character is either uppercase or lowercase.