def print_rainbow(txt,background=""):
  res = ""
  if background =="":
    b  = "1"
  elif background == "-b": 
    b = "7"
  x = ["37","33","31","35","34","32"] 
  z = 0
  for i in range(len(txt)):
    res += "\033["+b+";"+x[z]+"m"+txt[i]+"\033[0m".strip()
    z += 1
    if i == len(txt)-1:
      res+= " "
    if z == len(x):
      z = 0
  return res

def animate_rainbow(txt,background=""):
    ress = []
    txt += " "
    import time
    import random
    if background =="":
        b = "1" 
    elif background == "-b": 
        b = "7" 
    z = random.randint(0,7)
    x = ["37","33","31","35","34","32"] 
    for j in range(30):
    
        res = ""
        for i in range(len(txt)):
            res += "\033["+b+";"+x[z]+"m"+txt[i]+"\033[0m".strip()
            z += 1
            if i == len(txt)-1:
                res+= " " 
            if z == len(x):
                z = 0 
        if z != len(x)-1:
            z += 1
        else:
            z = 0 
        #print(res,end="\r")
        ress.append(res)
        #time.sleep(0.1)
    return ress

