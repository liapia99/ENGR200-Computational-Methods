x = -2:0.2:2;

a = x.^4;
b = x.^2; 
y = a + b - 1; 

roots = [1 0 1 0 -1];
z = [-2 -1 0 1 2];
p = polyval(roots,z)
roots

plot(x,y)

>> question6

p =

    19     1    -1     1    19


roots =

     1     0     1     0    -1
