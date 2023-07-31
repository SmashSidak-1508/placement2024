console.log("map-filter-reduce");
let arr = [45,23,21];
// console.log(arr);

let a = arr.map((value,index,array)=>{
    // console.log(value,index);
    // return value * index;

});
// console.log(a);
// console.log(arr);

// Filter method
let arr2 = [45,23,21,0,3,5];
let res_arr = arr2.filter((value,array)=>{
    return value<10;

})
// console.log(res_arr);
let arr3 = [1,2,3,5,2,1]
let new_arr3 = arr3.reduce((h1,h2)=>{
    return h1+h2;

})
console.log(new_arr3);

// practice 1
// let arr4 = [1,2,3,4,5,6];
// let a1 = prompt("enter the number");
// a1 = Number.parseInt(a1);
// arr4.push(a);
// console.log(arr4);

let arr5 = [10,20,45,34,67,55,12];
let n2 = arr5.filter((value)=>{
    return value%10==0
})
console.log(n2);

let s = [1,2,3,4,5,40,90];
let s1 = s.map((value)=>{
    return value*value;
})
console.log(s1);

let arr7 = [1,2,3,4,5,6,7];
let s11 = arr7.reduce((value1,value2)=>{
    return value1 * value2;
}) 
console.log(s11);

