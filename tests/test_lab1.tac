.table
int i_s0
int i_s2
int NIL[100] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
int NIL_size = 0

.code
_fib:
// if
seq $0, #0, 1
brz L0, $0
return 1
jump L1
L0:
// if
seq $1, #0, 2
brz L2, $1
return 1
jump L3
L2:
sub $2, #0, 1
param $2
call _fib, 1
pop $3
sub $4, #0, 2
param $4
call _fib, 1
pop $5
add $6, $3, $5
return $6
L3:
L1:
_main:
mov i_s2, 0
// in
scanf $665
fltoint $665, $665
mov i_s2, $665
// if
sleq $7, i_s2, 0
not $7, $7
brz L4, $7
param i_s2
call _fib, 1
pop $8
// out
print $8
L4:
return

main:
call _main, 0

