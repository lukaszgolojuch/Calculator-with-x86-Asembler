.686
.model flat

public _adding ;adding two numbers function
public _descend ;descending two numbers function
public _multiply ;multiplying two numbers function
public _power ;power of number function
public _divide ;dividing two numbers function


.code
_adding PROC
	push ebp ; zapisanie zawartosci EBP na stosie
	mov ebp, esp ; kopiowanie zawartosci ESP do EBP

	mov eax, [ebp+8] ;first number
	add eax, [ebp+12] ;add second number to first one

	pop ebp
	ret
_adding ENDP

_descend PROC
	push ebp ; zapisanie zawartosci EBP na stosie
	mov ebp, esp ; kopiowanie zawartosci ESP do EBP

	mov eax, [ebp+8]  ;first number
	sub eax, [ebp+12] ;descend second number from the first one

	pop ebp
	ret
_descend ENDP

_multiply PROC
	push ebp ; zapisanie zawartosci EBP na stosie
	mov ebp, esp ; kopiowanie zawartosci ESP do EBP

	mov eax, [ebp+8] ;first number
	imul eax, [ebp+12] ;multiply first number, second number times

	pop ebp
	ret
_multiply ENDP

_divide PROC
	push ebp ; zapisanie zawartosci EBP na stosie
	mov ebp, esp ; kopiowanie zawartosci ESP do EBP

	mov eax,[ebp+8] ;first number
	cdq
    mov ebx,[ebp+12] ;divide first number by second one

	idiv ebx

	pop ebp
	ret
_divide ENDP

_power PROC
	push ebp
	mov ebp, esp 

	mov eax, 1 ;set eax to one for n^0
	mov ebx, [ebp+8] ;set ebx as n
	mov edx, [ebp+12] ;set how many times we should multiply

again:
	imul eax, ebx ;multiply eax and ebx
	dec edx ;decrement counter
	cmp edx, 0 ;make 0 and counter comparision
	jnz again ;jump if comp not 0, and again...


	pop ebp
	ret
_power ENDP
END