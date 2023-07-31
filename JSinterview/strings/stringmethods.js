let name = "sidak";
console.log(name.length);
console.log(name.toUpperCase());
console.log(name.toLowerCase());
console.log(name.slice(2,4));
//  4 index is not included
console.log(name.slice(2));
//  2nd to end
let n = "sidak bhai"
console.log(n.replace("bhai","pro"));
let n1 = "sidak";
let n2 = "    preet   ";
let n3 = n1.concat(" is a friend of ",n2, " ok");
console.log(n3);
let n4 = n2.trim();
console.log(n4);

let n5 = n4.startsWith("p");
console.log(n5);


// problem 4 
let str2 = "please give rs 1000";
let amount = Number.parseInt(str2.slice("please give rs".length));
console.log(amount);
