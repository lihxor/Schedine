import openpyxl
import sys
wb = openpyxl.load_workbook(".\Squadre.xlsx")
ws = wb.active
s = []
offload = 3; i = 0; n = 0
payload = ""

#Definizione della classe Squadra con i vari dati attribuiti  v, n, p, g, pt
class Squadra:
    def __init__(self, nome, pg):
        self.nome = nome
        self.pg = pg
        '''
        self.v = v
        self.n = n
        self.p = p
        self.g = g
        self.pt = pt
        '''


try:
    s.append(input("Inserire squadra 1 della serie A:\n"))
except EOFError as e:
    print("Nessun valore inserito\n")
    sys.exit()
try:
    s.append(input("Inserire squadra 2 della serie A:\n"))
except EOFError as e:
    print("Nessun valore inserito\n")
    sys.exit()

p1 = Squadra("Juventus", 10)
p2 = Squadra("Milan", 10)

while i < 21  :
    i = offload + 1
    if(str(ws.cell(i,1).value) == s[0] and n == 0):
        print("1")
        s1 = Squadra(str(ws.cell(i,2).value), str(ws.cell(i,3).value), str(ws.cell(i,4).value), str(ws.cell(i,5).value), str(ws.cell(i,6).value), str(ws.cell(i,7).value), str(ws.cell(i,8).value))
    if(str(ws.cell(i,1).value) == s[1] and n == 1):
        print("2")
        s1 = Squadra(str(ws.cell(i,2).value), str(ws.cell(i,3).value), str(ws.cell(i,4).value), str(ws.cell(i,5).value), str(ws.cell(i,6).value), str(ws.cell(i,7).value), str(ws.cell(i,8).value))
