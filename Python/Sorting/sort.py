n = int(input())
numbers = []

for i in range(n):
    number = int(input())
    numbers.append(number)

for i in sorted(numbers):
    print(i)
