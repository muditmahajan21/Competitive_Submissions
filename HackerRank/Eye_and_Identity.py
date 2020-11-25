import numpy

n,m = map(int, input().split(' '))

numpy.set_printoptions(sign=' ')

print(numpy.eye(n,m))
