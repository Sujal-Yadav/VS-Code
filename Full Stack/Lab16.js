//Question - 1
// const num1 = 20;
// const num2 = 12;
// const sum = num1 + num2;
// console.log("The sum of " + num1 + " and " + num2 + " is: " + sum);

// Question - 2
// const arr = [2, 3, 5, 6, 7];
// var sum1 = 0;
// for(let i = 0; i < arr.length; i++){
//     sum1 += arr[i];
// }
// console.log("Sum is: " + sum1);
// console.log("Average is: " + sum1/arr.length);

// Question - 3
// var sum2 = 0;
// function node(a = 1, b = 2){
//     sum2 = a + b;
//     return sum2;
// }
// console.log("Sum is: " + node());
// console.log("Sum is: " + node(5));
// console.log("Sum is: " + node(10, 2));

//Question - 4
// var sum3 = 0;
// let func = (a, b , c) => Math.max(a,b,c);
// console.log("Max is: " + func(5, 4, 2));

// Question - 5


//Question - 6
// function mean6(...theArgs) {
//     let total = 0;
//     var count = 0;
//     for (const arg of theArgs) {
//     total += arg;
//     count += 1;
//     }
//     return total/count;
// }
// console.log(mean6(1, 2, 3));

//Question - 7
// function mean7(x, y, z) {
//     let t1 = x+y+z;
//         return (t1)/3;
// }

// const numbers = [1, 2, 3];
// console.log(mean7(...numbers));

//Question - 8
// let {a,b, ...rest1} = {name: 'Arun', position: 'First', rollno: '24'};
// console.log(rest1);

//Question - 9
// class polygon{

//     constructor(sides, length){
//         this.lenght = length;
//         this.sides = sides;

//     }

// }

// class rhombus extends polygon{
//     constructor(sides){
//        super(sides);
//     }
//     show(sides){
//         let peri = 2 * sides;
//         console.log("Perimeter of Polygon is: " + peri);
//     }
// }
// class hexagon extends polygon{

//     constructor(sides){
//         super(sides);
//     }
//     show(sides){
//         let peri = sides * 2;
//         console.log("Perimeter of Polygon is: " + peri);
//     }
// }


// let fig = new rhombus(4);
// let fig1 = new hexagon(6);
// fig.show(4);
// fig1.show(6);


// Area function
 export function names(name) {

	console.log("Name entered by you is: " + name);
}




// function f1() {
//     const num1 = 20;
//     const num2 = 21;
//     console.log('The sum of numbers ', num1, ' and ', num2, ' is: ', num1 + num2);
// }
// function f2() {
//     const nums = [23, 543, 5, 23, 94, 64, 35, 24, 84, 44, 23];
//     var sum = 0;
//     for (let i = 0; i < nums.length; i++) {
//         sum += nums[i]
//     }
//     const mean = sum / nums.length
//     console.log(mean)
// }
// function f3() {
//     function q3(p1 = 10, p2 = 10) {
//         return p1 * p2;
//     }
//     console.log(q3());
//     console.log(q3(100))
//     console.log(q3(1000, 1000))
// }
// function f4() {
//     q4 = (p1, p2, p3) => p1 + p2 + p3
//     console.log(q4(2, 5, 12))
// }
// function f5() {
//     class polygon {

//         constructor(sides, length) {
//             this.lenght = length;
//             this.sides = sides;

//         }

//     }
//     class rhombus extends polygon {
//         constructor(sides) {
//             super(sides);
//         }
//         show(sides) {
//             let peri = 2 * sides;
//             console.log("Perimeter of Polygon is: " + peri);
//         }
//     }
//     class hexagon extends polygon {

//         constructor(sides) {
//             super(sides);
//         }
//         show(sides) {
//             let peri = sides * 2;
//             console.log("Perimeter of Polygon is: " + peri);
//         }
//     }


//     let fig = new rhombus(4);
//     let fig1 = new hexagon(6);
//     fig.show(4);
//     fig1.show(6);

// }
// function f6() {
//     function mean6(...theArgs) {
//         let total = 0;
//         var count = 0;
//         for (const arg of theArgs) {
//             total += arg;
//             count += 1;
//         }
//         return total / count;
//     }
//     console.log(mean6(1, 2, 3));
// }
// function f7() {
//     function mean7(x, y, z) {
//         let t1 = x + y + z;
//         return (t1) / 3;
//     }

//     const numbers = [1, 2, 3];

//     console.log(mean7(...numbers));
// }
// function f8() {
//     let { a, b, ...rest1 } = { name: 'Arun', position: 'First', rollno: '24' };
//     console.log(rest1);
// }
// function f9() {
//     let text = "My name is " + name + ", I am " + age + ".";
// }