print("Enter top left coordinate")
x1, y1 = int(input()), int(input())

print("Enter bottom right coordinate")
x2, y2 = int(input()), int(input())

print("Enter query coordinate")
x, y = int(input()), int(input())

if x > x2 or x < x1 or y < y2 or y > y1:
    print("Outside")
else:
    print("Inside")