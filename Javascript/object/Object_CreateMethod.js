let Programmer = {
    name:"Tanvir Mahmud Fahim",
    lang:["c++","python","javascript","java"],
    experience: false,
    display: function(){
        console.log("Name: ",this.name)
        console.log("Languages: ",this.lang)
        console.log("Experiences: ", this.experience)
    }
}

let p1 = Object.create(Programmer)
p1.name = "Adnan Joy"
p1.experience = true
p1.display()

let p2 = Object.create(Programmer)
p2.display()