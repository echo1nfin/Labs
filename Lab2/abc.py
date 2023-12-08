# n = 9
# for i in range(n//2 + 1, n+1):
#     for j in range(0, n//2+n//2+1):
#         if i > j and i + j >= n:
#             print('*', end = '')
#         else:
#             print(' ', end = '')
#     print()
n = 9
space = n//2 
stars = 1
for i in range(n//2 + 1):
    print(' ' * space + '*' * stars)
    stars += 2
    space -= 1
