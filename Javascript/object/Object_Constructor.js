
// ------------------------------------------ example of object constructor in js
function person(first_name, last_name){
    this.first_name = first_name;
    this.last_name = last_name;
}

let person1 = new person('Tanvir', 'Mahmud')
let person2 = new person("Adnan", "Joy")

console.log(person1.first_name, person1.last_name)
console.log(person2.first_name, person2.last_name)