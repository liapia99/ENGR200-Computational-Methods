%Julia Piascik
%ENGR 200 - Computational Methods 
%Lab 5

%part a - Create matricies in the form of Ax = b
sys1 = [1 4; -3 1];
sys1b = [34; 2];

sys2 = [2 -2; -1 1; 3 4];
sys2b = [4;3;2];

sys1
sys1b

sys2
sys2b

%part b - Solve for x
x = sys1\sys1b
x2 = sys2\sys2b

%part c - Find the rank
k1 = rank(sys1)
k2 = rank(sys2)

%part d - Find the Inverse
m1 = inv(sys1)

%part e - Calculate the determinant
d1 = det(sys1)


