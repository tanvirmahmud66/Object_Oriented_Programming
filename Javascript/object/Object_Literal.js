
// ------------------------------------------------- example of object literal in js

let person = {
    first_name:"Tanvir Mahmud",
    last_name:"Fahim",
    getFuction: function(){
        return `${this.first_name} ${this.last_name}`
    },
    contact:{
        number:"01701744799",
        email:"tanvirmahmud.cse66@gmail.com"
    }
}

console.log(person.getFuction())
console.log(person.contact.number)
console.log(person.contact.email)