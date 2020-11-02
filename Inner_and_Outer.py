

import numpy

a = list(map(int, input().split()))
b = list(map(int, input().split()))

a = numpy.array(a)
b = numpy.array(b)

print(numpy.inner(a, b))
print(numpy.outer(a, b))
