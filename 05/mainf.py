import fileinput
inpt = "FBFBBFFRLR"
lst = []
def Calc(inputed):
    i = 0
    rtn = []
    for x in inputed:
        dzl = i+1
        if(x == "F"):
            inptd = inputed[i]
        else: 
            inptd = inputed[i]
    i += 1
    print("end")

def GetID(row, column) -> int:
    return row * 8 + column

while 1 > 2:
    calculated = Calc(inpt)
    row = calculated[0] 
    column = calculated[1]
    identified = GetID(row, column)
    lst.append(identified)
print("ARRAY ELEMENTS: " + lst.count)