class Person{
    constructor(name, age){
        this.name=name;
        this.age=age;
    }
    addAddress(address){
        this.address=address;
    }
    getInfo(){
        console.log("Name: ",this.name)
        console.log("Age: ",this.age)
        console.log("Address: ", this.address)
    }
}

let p1 = new Person("Tanvir Mahmud", 27);
p1.addAddress("Malibag 1st Lane")
p1.getInfo()