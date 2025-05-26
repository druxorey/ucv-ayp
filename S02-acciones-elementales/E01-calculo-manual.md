
# E01 - Cálculo Manual

1. `i = (i + 2) * r;`
	```c++
	i = (1 + 2) * 2.0;
	i = 3 * 2.0;
	i = 6.0;
	i = 6; // entero, ya que `i` es un entero
	```

2. `b = i / (2 + j) <= 5 * j / 3;`
	```c++
	b = 1 / (2 + 2) <= 5 * 2 / 3;
	b = 1 / 4 <= 10 / 3;
	b = 0 <= 3;
	b = true; // ya que `b` es un booleano
	```

3. `i = 11 / 2;`
	```c++
	i = 11 / 2;
	i = 5; // entero, ya que la división entre enteros descarta la parte decimal
	```

4. `r = 11 / (float)2;`
	```c++
	r = 11 / (float)2;
	r = 11 / 2.0;
	r = 5.5; // la división entre un entero y un float da un resultado float
	```

5. `b = b && i + j >= j * 5 % 3;`
	```c++
	b = true && (1 + 2 >= 2 * 5 % 3);
	b = true && (3 >= 10 % 3);
	b = true && (3 >= 1);
	b = true;
	```
