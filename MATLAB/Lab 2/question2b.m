%Julia Piascik
%ENGR 200 - Computational Methods 
%Lab 5

%part b - Creating a graph with two functions
t = 0:0.5:10;
f = 3*(t.^2) + (2*t) - 0.5;
g = (2*t).*(cos(t));

plot(t,f,'bo');
hold on 
plot(t,g,'r*');
xlabel('t = time');
ylabel('f(t) and g(t)');
title('Question 2b Graph');
grid on
