#https://www.hackerrank.com/challenges/python-tuples/problem
#tuples @_shraddha_

if __name__ == '__main__':
    n = int(input())
    integer_list = map(int, input().split())
    t=tuple(integer_list)
print(hash(t))