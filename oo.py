class Complex:
    def __init__(self, a: float, b: float):
        self.a = a
        self.b = b
        
    def __gt__(self, other: 'Complex') -> bool:
        m1 = self.a**2 + self.b**2
        m2 = other.a**2 + other.b**2
        return m1 > m2
    
    def __ge__(self, other: 'Complex') -> bool:
        m1 = self.a**2 + self.b**2
        m2 = other.a**2 + other.b**2
        return m1 >= m2
    
    def __lt__(self, other: 'Complex') -> bool:
        return not self.__ge__(self, other)
    
    def __le__(self, other: 'Complex') -> bool:
        return not self.__gt__(self, other)

    def __str__(self):
        return f"{self.a}+i{self.b}"
        
x = Complex(-7, 3)
y = Complex(3, 4)

print(x > y)
