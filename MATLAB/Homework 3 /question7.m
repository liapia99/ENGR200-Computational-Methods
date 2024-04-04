% Question 7

x = -2:0.1:2;
y = x.^4 -1;

a = [1 0 0 0 -1];
c = [1 0 0 -1];
z = polyval(c,a)

plot(y,x)


