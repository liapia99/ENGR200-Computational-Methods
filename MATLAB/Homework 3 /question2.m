start = 1;
step = 0.1;
end_value = 2;
z = start:step:end_value;
x = 2; 

a = x.^3 + (x.^2)*3 + 1; 
b = sin(x).^2; 
c = sin(2*x) + x .* cos(4*x); 
d = x./(x.^2 + 1); 
e = cos(x) ./ (1 + sin(x)); 

j = 1./z;
h = z.^3;
k = z.^4;
l = 5 * z;
i = k + l .* sin(z);
f = j + h/i; 


a
b
c
d
e
f

>> question2

a =

    21


b =

    0.8268


c =

   -1.0478


d =

    0.4000


e =

   -0.2180


f =

  Columns 1 through 8

    1.2945    1.2036    1.1279    1.0638    1.0088    0.9612    0.9195    0.8828

  Columns 9 through 11

    0.8501    0.8209    0.7945

>> 
