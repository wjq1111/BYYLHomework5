Start!
1:
/*
    I'm level 1 test.
*/
before read '{' 5
-----


after read '{' 5

-----


before read '{' 12

-----
a s b ch chh chhh 

after read '{' 12

a s b ch chh chhh 
-----
a s b ch chh chhh 

before read '{' 18

a s b ch chh chhh 
-----
a s b ch chh chhh a 

after read '{' 18

a s b ch chh chhh 
a s b ch chh chhh a 
-----
a s b ch chh chhh a 

before read '{' 23

a s b ch chh chhh 
a s b ch chh chhh a 
-----
a s b ch chh chhh a b 

after read '{' 23

a s b ch chh chhh 
a s b ch chh chhh a 
a s b ch chh chhh a b 
-----
a s b ch chh chhh a b 

before read '{' 27

a s b ch chh chhh 
a s b ch chh chhh a 
a s b ch chh chhh a b 
-----
a s b ch chh chhh a b aa j 

after read '{' 27

a s b ch chh chhh 
a s b ch chh chhh a 
a s b ch chh chhh a b 
a s b ch chh chhh a b aa j 
-----
a s b ch chh chhh a b aa j 

before read '}' 29

a s b ch chh chhh 
a s b ch chh chhh a 
a s b ch chh chhh a b 
a s b ch chh chhh a b aa j 
-----
a s b ch chh chhh a b aa j bb 

after read '}' 29

a s b ch chh chhh 
a s b ch chh chhh a 
a s b ch chh chhh a b 
-----
a s b ch chh chhh a b aa 

before read '{' 32

a s b ch chh chhh 
a s b ch chh chhh a 
a s b ch chh chhh a b 
-----
a s b ch chh chhh a b aa vv asdasd 

after read '{' 32

a s b ch chh chhh 
a s b ch chh chhh a 
a s b ch chh chhh a b 
a s b ch chh chhh a b aa vv asdasd 
-----
a s b ch chh chhh a b aa vv asdasd 

before read '}' 34

a s b ch chh chhh 
a s b ch chh chhh a 
a s b ch chh chhh a b 
a s b ch chh chhh a b aa vv asdasd 
-----
a s b ch chh chhh a b aa vv asdasd yy 

after read '}' 34

a s b ch chh chhh 
a s b ch chh chhh a 
a s b ch chh chhh a b 
-----
a s b ch chh chhh a b aa vv 

before read '}' 35

a s b ch chh chhh 
a s b ch chh chhh a 
a s b ch chh chhh a b 
-----
a s b ch chh chhh a b aa vv 

after read '}' 35

a s b ch chh chhh 
a s b ch chh chhh a 
-----
a s b ch chh chhh a b 

before read '}' 36

a s b ch chh chhh 
a s b ch chh chhh a 
-----
a s b ch chh chhh a b 

after read '}' 36

a s b ch chh chhh 
-----
a s b ch chh chhh a 

before read '}' 37

a s b ch chh chhh 
-----
a s b ch chh chhh a 

after read '}' 37

-----
a s b ch chh chhh 

before read '}' 38

-----
a s b ch chh chhh 

after read '}' 38
-----


39:
// No more compilation error.
序号	0	节点类型	程序开始					child:	1 7 10 13 20 27 29 
序号	1	节点类型	声明语句					child:	2 3 4 6 
序号	2	节点类型	数据类型		int			child:	
序号	3	节点类型	变量名	a				child:	
序号	4	节点类型	变量名	s				child:	5 
序号	5	节点类型	常量		int10	2		child:	
序号	6	节点类型	变量名	b				child:	
序号	7	节点类型	赋值语句					child:	8 
序号	8	节点类型	变量名	a				child:	9 
序号	9	节点类型	常量		int10	10		child:	
序号	10	节点类型	赋值语句					child:	11 
序号	11	节点类型	变量名	s				child:	12 
序号	12	节点类型	常量		int10	0		child:	
序号	13	节点类型	赋值语句					child:	14 16 18 
序号	14	节点类型	变量名	a				child:	15 
序号	15	节点类型	常量		int8	10		child:	
序号	16	节点类型	变量名	s				child:	17 
序号	17	节点类型	常量		int16	52		child:	
序号	18	节点类型	变量名	b				child:	19 
序号	19	节点类型	常量		int10	9		child:	
序号	20	节点类型	声明语句					child:	21 22 23 25 
序号	21	节点类型	数据类型		char		child:	
序号	22	节点类型	变量名	ch				child:	
序号	23	节点类型	变量名	chh				child:	24 
序号	24	节点类型	常量		字符		'b'		child:	
序号	25	节点类型	变量名	chhh				child:	26 
序号	26	节点类型	常量		字符		'c'		child:	
序号	27	节点类型	Scanf语句				child:	28 
序号	28	节点类型	变量名	&ch				child:	
序号	29	节点类型	While语句				child:	30 48 51 54 57 60 
序号	30	节点类型	运算		操作符	||		child:	31 38 
序号	31	节点类型	运算		操作符	&&		child:	32 35 
序号	32	节点类型	运算		操作符	>		child:	33 34 
序号	33	节点类型	变量名	a				child:	
序号	34	节点类型	常量		int10	0		child:	
序号	35	节点类型	运算		操作符	<=		child:	36 37 
序号	36	节点类型	变量名	a				child:	
序号	37	节点类型	常量		int10	10		child:	
序号	38	节点类型	运算		操作符	&&		child:	39 44 
序号	39	节点类型	运算		操作符	==		child:	40 43 
序号	40	节点类型	运算		操作符	%		child:	41 42 
序号	41	节点类型	变量名	a				child:	
序号	42	节点类型	常量		int10	100		child:	
序号	43	节点类型	常量		int10	10		child:	
序号	44	节点类型	运算		操作符	==		child:	45 47 
序号	45	节点类型	运算		操作符	!		child:	46 
序号	46	节点类型	变量名	a				child:	
序号	47	节点类型	常量		int10	10		child:	
序号	48	节点类型	运算		操作符	-=		child:	49 50 
序号	49	节点类型	变量名	a				child:	
序号	50	节点类型	常量		int10	1		child:	
序号	51	节点类型	声明语句					child:	52 53 
序号	52	节点类型	数据类型		int			child:	
序号	53	节点类型	变量名	a				child:	
序号	54	节点类型	赋值语句					child:	55 
序号	55	节点类型	变量名	a				child:	56 
序号	56	节点类型	常量		int10	10		child:	
序号	57	节点类型	运算		操作符	+=		child:	58 59 
序号	58	节点类型	变量名	s				child:	
序号	59	节点类型	变量名	a				child:	
序号	60	节点类型	If语句					child:	61 66 69 72 75 
序号	61	节点类型	运算		操作符	<		child:	62 64 
序号	62	节点类型	运算		操作符	-		child:	63 
序号	63	节点类型	变量名	s				child:	
序号	64	节点类型	运算		操作符	-		child:	65 
序号	65	节点类型	常量		int10	10		child:	
序号	66	节点类型	Prinf语句				child:	67 
序号	67	节点类型	常量		字符串	"result is: %d\n"		child:	68 
序号	68	节点类型	变量名	s				child:	
序号	69	节点类型	声明语句					child:	70 71 
序号	70	节点类型	数据类型		int			child:	
序号	71	节点类型	变量名	b				child:	
序号	72	节点类型	赋值语句					child:	73 
序号	73	节点类型	变量名	b				child:	74 
序号	74	节点类型	常量		int10	10		child:	
序号	75	节点类型	For语句					child:	76 79 82 84 87 90 102 105 
序号	76	节点类型	赋值语句					child:	77 
序号	77	节点类型	变量名	i				child:	78 
序号	78	节点类型	常量		int10	0		child:	
序号	79	节点类型	运算		操作符	<		child:	80 81 
序号	80	节点类型	变量名	i				child:	
序号	81	节点类型	变量名	b				child:	
序号	82	节点类型	运算		操作符	++		child:	83 
序号	83	节点类型	变量名	i				child:	
序号	84	节点类型	声明语句					child:	85 86 
序号	85	节点类型	数据类型		int			child:	
序号	86	节点类型	变量名	aa				child:	
序号	87	节点类型	Prinf语句				child:	88 
序号	88	节点类型	常量		字符串	"Have fun: %d\n"		child:	89 
序号	89	节点类型	变量名	i				child:	
序号	90	节点类型	For语句					child:	91 94 97 99 
序号	91	节点类型	声明语句					child:	92 93 
序号	92	节点类型	数据类型		int			child:	
序号	93	节点类型	变量名	j				child:	
序号	94	节点类型	运算		操作符	<		child:	95 96 
序号	95	节点类型	变量名	j				child:	
序号	96	节点类型	变量名	b				child:	
序号	97	节点类型	运算		操作符	++		child:	98 
序号	98	节点类型	变量名	j				child:	
序号	99	节点类型	声明语句					child:	100 101 
序号	100	节点类型	数据类型		int			child:	
序号	101	节点类型	变量名	bb				child:	
序号	102	节点类型	声明语句					child:	103 104 
序号	103	节点类型	数据类型		int			child:	
序号	104	节点类型	变量名	vv				child:	
序号	105	节点类型	For语句					child:	106 109 112 114 
序号	106	节点类型	声明语句					child:	107 108 
序号	107	节点类型	数据类型		int			child:	
序号	108	节点类型	变量名	asdasd				child:	
序号	109	节点类型	运算		操作符	<		child:	110 111 
序号	110	节点类型	变量名	asd				child:	
序号	111	节点类型	常量		int10	0		child:	
序号	112	节点类型	运算		操作符	++		child:	113 
序号	113	节点类型	变量名	k				child:	
序号	114	节点类型	声明语句					child:	115 116 
序号	115	节点类型	数据类型		int			child:	
序号	116	节点类型	变量名	yy				child:	
Finish!
