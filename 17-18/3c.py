a, b = int(input()), int(input())

big, small = (a, b) if a > b else (b, a)

while small != 0:
    big, small = small, big % small
    
print(f"GCD is {big}")
