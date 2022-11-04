print("Enter numbers: ")

arr = [int(input()) for i in range(5)]
    
sum1 = 0
zero_count = 0

for i, x in enumerate(arr):
    sum1 += x
    if x == 0:
        zero_count += 1
        arr[i] = 1
        
print("Sum of main array is", sum1)

sum2 = 0
for x in arr:
    sum2 += x
    
print("Number of zeroes is", zero_count)
print("Sum of modified array is", sum2)