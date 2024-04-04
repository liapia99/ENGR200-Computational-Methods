% Question 2

start = 1;
step = 0.1;
end_value = 2;
z = start:step:end_value;
x = 2; 

a = x.^3 + (x.^2)*3 + 1; 
b = sin(x).^2; 
c = sin(2*x) + x .* cos(4*x); 
d = x./(x.^2 + 1); 
e = cos(x) ./ (1 + sin(x)); 
f = sum(1./z + ((z.^3) ./ (z.^4 + (5 * z) .* sin(z))));

a
b
c
d
e
f

