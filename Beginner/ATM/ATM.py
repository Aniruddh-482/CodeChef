w, t = input().split()              

w = int(w)
t = float(t)

if (w % 5 == 0 and t > (w+.5)):
    t = t - w - 0.5     
    print('%.2f' % t)
else:
    print('%.2f' % t)

