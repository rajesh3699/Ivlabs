hrs = input('Enter Hours:')
h = float(hrs)
rate = input('Enter rate:')
r = float(rate)
if(h>40):
 print((h-40)*1.5*r + (40*r))
else:
 print(h*r)
