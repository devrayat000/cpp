class Student:
    def __init__(self, name: str, credits_earned: int):
        self.name = name
        self.credits_earned = credits_earned
        
    def year(self):
        if self.credits_earned <= 36: return "Freshman"
        elif self.credits_earned <= 72: return "Sophomore"
        elif self.credits_earned <= 108: return "Junior"
        elif self.credits_earned <= 160: return "Senior"
        else: return "Graduate"
        
sam = Student("Sam", 161)

print(f"{sam.name} is a {sam.year()}.")
        
        
