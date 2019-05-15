largest = None
smallest = None
while True:
    num = input("Enter a number: ")
    try:
        n = int(num)
        if (smallest==None): smallest = n  
        if (n<smallest): smallest = n  
        if (n>largest): largest = n
    
    except:
      if num == "done" : break 
      print("Invalid input")
   
            
       
    
   

print("Maximum is", largest)
print("Minimum is", smallest)
