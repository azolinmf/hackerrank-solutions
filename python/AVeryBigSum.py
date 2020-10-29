# https://www.hackerrank.com/challenges/a-very-big-sum/problem

def aVeryBigSum(ar):
    sum = 0
    for index in range(len(ar)):
        sum+=ar[index]
    return sum
