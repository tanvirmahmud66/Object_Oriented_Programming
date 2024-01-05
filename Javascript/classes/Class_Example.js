class Vehicle{ // class
    constructor(name, brand, cc){ //constructor
        this.name = name;
        this.brand = brand;
        this.cc = cc;
    }
    getDetails(){ //member function
        console.log("Name: ",this.name)
        console.log("Brand: ",this.brand)
        console.log("CC: ",this.cc)
    }
}

// traditinal way to create an object in javascript

let bike = new Vehicle("Fz v2","Yemaha","150")
bike.getDetails()

let car = new Vehicle("BMW R6","BMW","12000")
car.getDetails()
