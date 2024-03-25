start = 1;
step = 0.02;
end_value = 3;
x = start:step:end_value;

y = sin((x.*cos(x))./(x.^2 + 3*x + 1))
