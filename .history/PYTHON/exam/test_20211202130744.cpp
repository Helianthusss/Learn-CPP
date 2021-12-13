import numpy as np
def apc4(a,b,ic,h):
	w=[ic]
	t=a
	n=int((b-a)/h)
	for I in range(3):
        k1 = f(t, w[-1])
	    k2 = f(t+h/2, w[-1] + hk1/2)
	    k3 = f(t+h/2, w[-1] + hk2/2)
	    k4 = f(t+h, w[-1] + hk3)
	wi = w[-1]+h/6(k1+2*k2+2*k3+k4)
	w.append(wi)
	t = t + h
	for I in range(3, n+1):
	    wp = w[-1] + h/24*(55*f(t, w[-1]) - 59*f(t-h, w[-2]) + 37*f(t-2*h, w[-3]-9*f(t-3*h), w[-4]))
	    wc = w[-1] + h/24*(9*f(t+h, wp) + 19*f(t, w[-1]) – 5*f(t-h, w[-2]+f(t-2*h, w[-3]))
	t = t + h
	w.append(wc)
	for I in range(n+1): print(I, a + h*I, w[i])
	(a)
	def f(t,y): return -5y + 6np.exp(t)
	apc4(0, 1, 2, 0.1)
	print()
	(b)
	def f(t,y): return -10y + 10t + t
	apc4(0, 1, np.e, 0.1)
	print()
	(c)
	def f(t,y): return -15(y + t(-3) + 3/(t*4)
	apc4(1, 3, 0, 0.25)
	print()
	(d)
	def f(t,y): return -20y + 20cos(t) – sin(t)
	apc4(0, 2, 0, 0.25)
	print()