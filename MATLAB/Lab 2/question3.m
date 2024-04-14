%Julia Piascik
%ENGR 200 - Computational Methods 
%Lab 5

%part a 
a = integral(@myfun1, 0, 2*pi);
a

%part b
b = myfun2(-3,4);
b

%part c
c = myfun2(5,-7);
c

%part d - 3D plot of user-defined function myfun2
[x,y] = meshgrid(-pi:pi,-pi:pi);
z = myfun2(x,y);

surf(z)
xlabel('X');
ylabel('Y');
zlabel('Z');
title('Question 4');
grid off, axis equal
colormap(autumn)
