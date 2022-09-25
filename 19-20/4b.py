class Patient:
    name: str
    blood_sugar_level: float
    
    def diagnosis(self):
        if self.blood_sugar_level < 7.8:
            return "Normal"
        elif self.blood_sugar_level < 11.0:
            return "Prediabetic"
        else: return "Diabetic"
        
pat1 = Patient()
pat1.name = "Sam"
pat1.blood_sugar_level = 11.2

print(f'{pat1.name} is {pat1.diagnosis()}')
    
