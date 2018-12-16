# arrangements_c
Порождение размещений с повторениями при n > k и k > n и без повторений (generating arrangemets with (n>k and k>n) 
and without repetitions)

Пример (без повторений): есть два стула и три человека. Сколькими способами можно рассадить их?
Ответ:
1 2 
2 1 
1 3 
3 1 
2 3 
3 2 
Ответ: 6 (3!/(3-2)!)

C повторением. Есть кодовый замок с дмумя колесиками, на каждом колесике 3 цифры - 1,2,3. Сколькими способами можно
перебрать все варианты?
1 1 
1 2 
2 1 
1 3 
3 1 
2 2 
2 3 
3 2 
3 3
Ответ: 9 (3^2)

Или. Есть замок с 3 колесиками и 2 цифрами на каждом колесике - 1,2. Сколькими способами можно перебрать все варианты?
1 1 1 
1 1 2 
1 2 1 
2 1 1 
1 2 2 
2 1 2 
2 2 1 
2 2 2
Ответ: 8 (2^3)
