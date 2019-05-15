text = "X-DSPAM-Confidence:    0.8475";
pos=text.find('0.8475')
data=text[pos:]
d=float(data)
print(d)
