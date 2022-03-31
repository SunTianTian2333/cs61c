.globl factorial

.data
n: .word 3

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    # YOUR CODE HERE
    addi sp,sp,-4
    sw ra,0(sp)
    
    addi t1, x0,1  # t1 is the value of n!
    add t2,a0,x0
loop:
    beq a0,x0 return0
    jal ra multi
    addi a0,a0,-1
    addi t2,a0,0
    j loop
return0:
    lw ra,0(sp)
    addi sp,sp,4
    addi a0,t1,0 # pass the value to a0 from t1
    RET

# subroutine to implement multiply
multi:
    addi sp, sp,-8
    sw  t2,0(sp)
    sw  s1,4(sp)
    addi s1,x0,0
loop1:
    beq t2 x0 return1
    add s1,t1,s1
    addi t2,t2,-1
    j loop1
return1:
    add t1,s1,x0
    lw t2,0(sp)
    lw s1,4(sp)
    addi sp,sp,8
    RET
    





    
    