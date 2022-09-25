import random

# Start
rand = [round(random.random() * 400 + 100) for _ in range(10)]

rand.sort(reverse=True)
print(rand)