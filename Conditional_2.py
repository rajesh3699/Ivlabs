score = float(input("Enter Score: "))
if(score<=1 and score>=0):
    if(score>=0.9 and score<1):
      print('A')
    elif(score>=0.8 and score<0.9):
      print('B')
    elif(score>=0.7 and score<0.8):
      print('C')
    elif(score>=0.6 and score<0.7):
      print('D')
    else:
      print('F')
else:
    print("error ")
   
