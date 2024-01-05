class Person{
    constructor(name){
        this.name=name
    }
    toString(){
        return (`Name of Person: ${this.name}`)
    }
}

class Student extends Person{
    constructor(name,id){
        super(name)
        this.id=id
    }
    toString(){
        return (`Name: ${super.toString()}, ID: ${this.id}`)
    }
}

let std1 = new Student("Tanvir Mahmud", 27)
console.log(std1.toString())