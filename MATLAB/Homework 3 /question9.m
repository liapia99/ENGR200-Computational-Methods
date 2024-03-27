x = -3:0.2:3;
y = x.^2 + 7.*x - 3;

plot(x,y,'r*');
xlabel('X');
ylabel('Y');
title('Question 9 Graph');
grid on, axis equal
