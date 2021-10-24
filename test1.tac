.table
int a
int b
int c
char _s0[] = "Insira um valor: "
int d
char _s1[] = "Resultado: "

.code
_test:
sleq $0, a, b
not $0, $0
print a
print '\n' 
return 0
_main:
mov $1000, 17
mov $999, 0
L0:
mov $1, &_s0
mov $1, $1[$999]
print $1
sub $1000, $1000, 1
add $999, $999, 1
brnz L0, $1000
scani a
sleq $2, a, 0
not $2, $2
mov d, $2
print d
mov b, 5
minus $3, 1
mov c, $3
sub $4, b, c
mul $5, a, $4
mov c, $5
mov $1000, 11
mov $999, 0
L1:
mov $6, &_s1
mov $6, $6[$999]
print $6
sub $1000, $1000, 1
add $999, $999, 1
brnz L1, $1000
print c
print '\n' 
param a
param b
call _test, 2
return b

main:
call _main, 0

