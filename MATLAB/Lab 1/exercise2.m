%using plot command for multiple plots 
x = 0:pi/30:2*pi;
y = sin(x);
z = cos(x);

plot(x, y, '--r')
hold on 
plot(x, z, 'b*')
xlabel('x')
ylabel('y')
title('Plot of sin(x) and cos(x)')
legend('sin(x)', 'cos(x)')


%using plot command for single plot
x = 0:pi/30:2*pi;
y = sin(x);
z = cos(x);


data = [y; z];


plot(x, data, '--')
xlabel('x')
ylabel('y')
title('Plot of sin(x) and cos(x)')
legend('sin(x)', 'cos(x)')
hold on 

%using ezplot command to plot
syms x; % define x as a symbolic variable
n = 1;
y = 3 * cos(n * x);

ezplot(y, [0, 2*pi]) 
xlabel('x')
ylabel('y')
title('Plot Part 3 of Ex.3')
legend('f(x)')
hold on
