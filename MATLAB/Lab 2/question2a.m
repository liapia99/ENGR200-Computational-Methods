%Julia Piascik
%ENGR 200 - Computational Methods 
%Lab 5

% part a - Drawing a curve using surf function

[x,y] = meshgrid(-5:5,-5:5);
z = -(x./5).^2 - (y./2).^2-16;

surf(z)
xlabel('X');
ylabel('Y');
zlabel('Z');
title('Question 2 Surface Graph');
grid off, axis equal
colormap(spring)
