fun main() {
    
    println("Hello, world!!!")
    var a = 1
    var s1 = "A square is ${a*a}"
    println(s1)
    print("Sum of to numbers: ")
    println(sum(2, 5))
    
    var name: String = "Sujal Yadav"
    var num: Int = 50;
    println(name)
    println(num)
    println("Enter your name: ")
    var name2 = readLine()
    println("Enter ypur age: ")
    var age: Int = Integer.valueOf(readLine())
    println("Your name is ${name2} and your age is ${age}")
   	
    
}

fun sum(a: Int, b: Int): Int{
    return a + b
}

