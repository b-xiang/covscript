import darwin
const var a=10
const var lambda=[](x,y)->x+y
const var b=a<0?lambda("A","B"):"C"
var c=a>0?lambda("A","B"):"C"
switch system.in.input()
	case "Hello"+"!"
		system.out.println("Hello!")
	end
	case (2*(3+2))^2
		system.out.println("100")
	end
	case -1
		system.out.println("-1")
	end
	case {0,1,2}[2]
		system.out.println("2")
	end
	case {to_integer(3.14),2}.at(0)
		system.out.println("3")
	end
	case {darwin.pixel(' ',darwin.white,darwin.black),"Darwin"}.at(1)
		system.out.println("Darwin")
	end
	case "x"+(to_string(math.constant.pi)).cut(5)
		system.out.println("x3.14")
	end
	case a
		system.out.println(b+c)
	end
end
