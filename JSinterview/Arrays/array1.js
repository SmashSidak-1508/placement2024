console.log("Array 1");
let marks_12 = [91,84,63,96, false , "absent"];
console.log(marks_12.length);
console.log(marks_12[7]);
console.log(typeof marks_12);
for(i=1;i<marks_12.length;i++){
    console.log(marks_12[i]);
}

let num = [1,2,3,34,4];
let b = num.toString();
let c = num.join(" and ");
num.pop();
// pop and push changes the original array
num.push(4);
num.push(5);
num.push(55);
console.log(num);
num.pop();
num.shift();
console.log("shifted: ",num," length:", num.length);
console.log(b);
console.log(c);
num.unshift(44);
console.log("unshifted:",num," length:",num.length)