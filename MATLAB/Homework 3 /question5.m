% Question 5

start = 1;
step = 0.02;
end_value = 3;
x = start:step:end_value;

a = x.^2 + 3 * x + 1; 
b = x.* cos(x);

y = sin(b/a)

