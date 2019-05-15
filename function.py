def computepay(h,r):
    if(h>40):
      return ((h-40)*r*1.5 + 40*r)
    else:
        return h*r

hrs = float(input("Enter Hours:"))
rate = float(input("Enter rate:"))
p = computepay(hrs,rate)
print(p)
