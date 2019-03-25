.data 
numA .asciiz "Introduzca el valor de A:" 
numB .asciiz "Introduzca el valor de B"
numC .asciiz "Introduzca el valor de C"
numD .asciiz "Introduzca el valor de D"
resultado .asciiz "El resultado es :"



.globl main
.text
main:

li $v0 , 4
la $a0 , numA
syscall

li $v0 , 5
syscall

move $t0,$v0

li $v0 , 4
la $a0 , numB
syscall

li $v0 , 5
syscall

move $t1,$v0

li $v0 , 4
la $a0 , numC
syscall


li $v0 , 5
syscall

move $t2,$v0

li $v0 , 4
la $a0 , numD
syscall

li $v0 , 5
syscall

move $t3,$v0

add $t4,$t1,$t2

li $v0, 4 
la $a0, resultado
syscall

li $v0,1           
move $a0, $t4      
syscall 

sub $t5,$t2,$t3

li $v0, 4 
la $a0, resultado
syscall

li $v0,1            
move $a0, $t5     
syscall

add $t6,$t0,$t1
add $t6,$t2,$t3

li $v0, 4 
la $a0, resultado
syscall

li $v0,1            
move $a0, $t6     
syscall

mul $t7,$t0,$t0