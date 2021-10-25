.table
int a
int c
char _s0[] = "Este programa testa operações aritméticas e relacionais."
char _s1[] = "Insira um valor: "
char _s2[] = "Multiplicado por 2: "
char _s3[] = "Dividido por 2: "
char _s4[] = "Somando 2: "
char _s5[] = "Subtraindo 2: "
char _s6[] = "Negativo: "
char _s7[] = "Maior que 10?: "
char _s8[] = "Menor que 10?: "
char _s9[] = "Igual a 10?: "

.code
_main:
mov $1000, 59
mov $999, 0
L0:
mov $0, &_s0
mov $0, $0[$999]
print $0
sub $1000, $1000, 1
add $999, $999, 1
brnz L0, $1000
print '\n' 
mov $1000, 17
mov $999, 0
L1:
mov $1, &_s1
mov $1, $1[$999]
print $1
sub $1000, $1000, 1
add $999, $999, 1
brnz L1, $1000
scani a
mov $1000, 20
mov $999, 0
L2:
mov $2, &_s2
mov $2, $2[$999]
print $2
sub $1000, $1000, 1
add $999, $999, 1
brnz L2, $1000
mul $3, a, 2
mov c, $3
print c
print '\n' 
mov $1000, 16
mov $999, 0
L3:
mov $4, &_s3
mov $4, $4[$999]
print $4
sub $1000, $1000, 1
add $999, $999, 1
brnz L3, $1000
div $5, a, 2
mov c, $5
print c
print '\n' 
mov $1000, 11
mov $999, 0
L4:
mov $6, &_s4
mov $6, $6[$999]
print $6
sub $1000, $1000, 1
add $999, $999, 1
brnz L4, $1000
add $7, a, 2
mov c, $7
print c
print '\n' 
mov $1000, 14
mov $999, 0
L5:
mov $8, &_s5
mov $8, $8[$999]
print $8
sub $1000, $1000, 1
add $999, $999, 1
brnz L5, $1000
sub $9, a, 2
mov c, $9
print c
print '\n' 
mov $1000, 10
mov $999, 0
L6:
mov $10, &_s6
mov $10, $10[$999]
print $10
sub $1000, $1000, 1
add $999, $999, 1
brnz L6, $1000
minus $11, a
mov c, $11
print c
print '\n' 
mov $1000, 15
mov $999, 0
L7:
mov $12, &_s7
mov $12, $12[$999]
print $12
sub $1000, $1000, 1
add $999, $999, 1
brnz L7, $1000
sleq $13, a, 10
not $13, $13
mov c, $13
print c
print '\n' 
mov $1000, 15
mov $999, 0
L8:
mov $14, &_s8
mov $14, $14[$999]
print $14
sub $1000, $1000, 1
add $999, $999, 1
brnz L8, $1000
slt $15, a, 10
mov c, $15
print c
print '\n' 
mov $1000, 13
mov $999, 0
L9:
mov $16, &_s9
mov $16, $16[$999]
print $16
sub $1000, $1000, 1
add $999, $999, 1
brnz L9, $1000
seq $17, a, 10
mov c, $17
print c
print '\n' 
return 0

main:
call _main, 0

