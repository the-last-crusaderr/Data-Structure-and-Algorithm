

def line(pt,mj=""):
    tick = "-"*pt
    if mj:
        tick+= mj
    print(tick)




def interval(n):
    if n>0:
        interval(n-1)
        line(n)
        interval(n-1)


mj = int(input("Major Tick:"))
ct = int(input("Central Tick:"))
inches = int(input("How many inches should be in the scale:"))

print("-"*mj,0)

for i in range(1,inches+1):
    interval(ct)
    print("----",i)
