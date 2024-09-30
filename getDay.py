def getDay(n: int):
    days = ["Lunes","Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"]
    print(days[ (n%7) -1])

t = int(input())
for _ in range(t):
    n = int(input())
    getDay(n)
