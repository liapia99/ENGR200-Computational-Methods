start = 0;
step = 1;
end_value = 8;
n = start:step:end_value;

e = exp(1);

a = n;
b = n.^2;
c = n.^3;
d = 2.^n;
f = e.^n;

plot(n, b, 'b-', n, c, 'r-', n, d, 'g-', n, f, 'm-');
legend('n','n^2', 'n^3', '2^n', 'e^n');
xlabel('n');
ylabel('Value');
title('Plot of Various Programming Algorithms');
grid on;
