start = 1;
step = 0.1;
end_value = 2;
x = start:step:end_value;

a = x.^3 + (x.^2)*3 + 1; 
b = sin(x).^2; 
c = sin(2*x) + x .* cos(4*x); 
d = x./(x.^2 + 1); 
e = cos(x) ./ (1 + sin(x)); 
f = 1./x + x.^3./x.^4 + 5*x .* sin(x); 

a
b
c
d
e
f
