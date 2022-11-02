
//task1
class Doctor{
    #namedoc
    #spec
    #cval
    constructor(namedoc, spec, cval){
        this.#namedoc = namedoc;
        this.#spec = spec;
        this.#cval = cval;
    }
    get namedoc(){
        return this.#namedoc
    }
    get spec(){
        return this.#spec
    }
    get cval(){
        return this.#cval
    }
}
class Pacient{
    #kod
    #name 
    #address
    #age
    constructor(kod, name, address, age){
        this.#kod = kod;
        this.#name = name;
        this.#address = address;
        this.#age = age;
    }
    get kod(){
        return this.#kod
    }
    get name(){
        return this.#name
    }
    get address(){
        return this.#address
    }
    get age(){
        return this.#age
    }
}

class R {
    #diagnoz
    #date
    #result
    #doc
    #pac
    constructor(diagnoz, date, result, doc, pac){
        this.#diagnoz = diagnoz;
        this.#date = date;
        this.#result = result;
        this.#doc = doc;
        this.#pac = pac;
    }
    get diagnoz(){
        return this.#diagnoz
    }
    get date(){
        return this.#date
    }
    get result(){
        return this.#result
    }
    get doc(){
        return this.#doc
    }
    get pac(){
        return this.#pac
    }
}
let ob = [
    new Doctor("Den", "School", "BAD"),
    new Doctor("Andrey", "School", "BAD"),
    new Doctor("Piter", "Bac", "Harosh"),
    new Doctor("Djeck", "Bac", "Harosh"),
    new Doctor("Sam", "Mag", "Ahyet")
];
let ob1 = [
    new Pacient(05645, "Oleg", "Kharkov", 25),
    new Pacient(65666, "Evgen", "Zaporozhhhhh", 25),
    new Pacient(15246, "Bob", "Kiev", 25),
    new Pacient(14831, "John", "Kharkov", 18),
    new Pacient(01247, "Paper", "Kharkov", 22)
];
let ob2 = [
    new R("bad", 30, "Dead", ob[0],ob1[0]),
    new R("Pizdec", 30, "Aliluya",ob[1], ob1[1]),
    new R("Pizdec", 30, "Alilluya", ob[2],ob1[2]),
    new R("Pizdec", 12, "Dead", ob[3],ob1[3]),
    new R("Pizdec", 1, "Dead", ob[4], ob1[4]),
];
// console.log("------------------------------")
// for(var i=0; i<ob2.length;i++){
//     console.log("BLANC:", i+1)
//     console.log("Diagnoz: ",ob2[i].diagnoz)
//     console.log("Date: ",ob2[i].date)
//     console.log("Result: ",ob2[i].result)
//     console.log("Doctor: ",ob2[i].doc.namedoc)
//     console.log("Spec: ",ob2[i].doc.spec)
//     console.log("Cval: ",ob2[i].doc.cval)
//     console.log("Kod: ",ob2[i].pac.kod)
//     console.log("Pacient: ",ob2[i].pac.name)
//     console.log("Address: ",ob2[i].pac.address)
//     console.log("Age: ",ob2[i].pac.age)
//     console.log("------------------------------")
// }
//task2
function createlistOb(){
    deletenew()
    deleteavarage()
    deletelistOb()
    if(i==1){
    var div = document.getElementById("div")
    var ul = document.createElement("ul")
    for (let index = 0; index < ob.length; index++) {
        var li= document.createElement("li")
        li.textContent="| Doctor: "+ob[index].namedoc + " | Spec: "+ob[index].spec+" | Cval: "+ ob[index].cval
        ul.appendChild(li)
    }
    div.appendChild(ul)
}
else {
    var div = document.getElementById("div")
    var tabl =document.createElement("table")
    tabl.className="border"

    
    for (let index = 0; index < ob.length; index++) {
        var tr= document.createElement("tr")
        var td= document.createElement("td")
        td.className="border"
        td.textContent="| Doctor: "+ob[index].namedoc + " | Spec: "+ob[index].spec+" | Cval: "+ ob[index].cval
        tr.appendChild(td)
        tabl.appendChild(tr)
    }

    div.appendChild(tabl)
    
}
}

function createlistOb1(){
    deletenew()
    deleteavarage()
    deletelistOb()
    if(i==1){
        var div = document.getElementById("div")
        var ul = document.createElement("ul")
        for (let index = 0; index < ob1.length; index++) {
            var li= document.createElement("li")
            li.textContent="| Kod: "+ob1[index].kod + " | Name: "+ob1[index].name +" | Address: "+ ob1[index].address +" | Age: "+ ob1[index].age
            ul.appendChild(li)
        }
        div.appendChild(ul)
    }
    else{
        var div = document.getElementById("div")
        var tabl =document.createElement("table")
        tabl.className="border"

        for (let index = 0; index < ob1.length; index++) {
            var tr= document.createElement("tr")
            var td= document.createElement("td")
            td.className="border"
            td.textContent="| Kod: "+ob1[index].kod + " | Name: "+ob1[index].name +" | Address: "+ ob1[index].address +" | Age: "+ ob1[index].age
            tr.appendChild(td)
            tabl.appendChild(tr)
        }
        div.appendChild(tabl)
        }
}

function createlistOb2(){
    deletenew()
    deleteavarage()
    deletelistOb()
    if(i==1){
        var div = document.getElementById("div")
        var ul = document.createElement("ul")
        for (let index = 0; index < ob2.length; index++) {
            var allul=document.createElement("ul")
            var allli= document.createElement("li")
            var li1= document.createElement("li")
            var li2= document.createElement("li")
            var li3= document.createElement("li")
            li1.textContent=" | Doctor: "+ ob2[index].doc.namedoc+" | Spec: "+ ob2[index].doc.spec+" | Cval: "+ ob2[index].doc.cval
            li2.textContent="| Diagnoz: "+ob2[index].diagnoz + " | Date: "+ob2[index].date +" | Result: "+ ob2[index].result 
            li3.textContent=" | Kod: "+ ob2[index].pac.kod+" | Pacient: "+ ob2[index].pac.name+" | Address: "+ ob2[index].pac.address+" | Age: "+ ob2[index].pac.age
            ul.appendChild(li1)
            ul.appendChild(li2)
            ul.appendChild(li3)
            allli.appendChild(ul)
            allul.appendChild(allli)
        }
        div.appendChild(allul)
    }
    else {
        var div = document.getElementById("div")
        var tabl =document.createElement("table")
        tabl.className="border"
        for (let index = 0; index < ob2.length; index++) {

            var tr = document.createElement("tr")
            tr.className="border"
            var td1= document.createElement("td")
            var td2= document.createElement("td")
            var td3= document.createElement("td")
            td1.className="border"
            td2.className="border"
            td3.className="border"
            td1.textContent=" | Doctor: "+ ob2[index].doc.namedoc+" | Spec: "+ ob2[index].doc.spec+" | Cval: "+ ob2[index].doc.cval
            td2.textContent="| Diagnoz: "+ob2[index].diagnoz + " | Date: "+ob2[index].date +" | Result: "+ ob2[index].result 
            td3.textContent=" | Kod: "+ ob2[index].pac.kod+" | Pacient: "+ ob2[index].pac.name+" | Address: "+ ob2[index].pac.address+" | Age: "+ ob2[index].pac.age

            tr.appendChild(td1)
            tr.appendChild(td2)
            tr.appendChild(td3)
            tabl.appendChild(tr)
        }
        div.appendChild(tabl)
    }
}

function deletelistOb(){
    const list = document.getElementById("div");
    //console.log(list)
    if (list.hasChildNodes()) {
      list.removeChild(list.childNodes[0]);
    }
}

var i=0


function select0(){
    var select=document.getElementById("vid")
    index = select.selectedIndex
    if(index==1){
        i=1
    }
    if(index==2){
        i=2
    }
}
//task3
function sortingName(){
    ob.sort((a, b) => a.namedoc > b.namedoc ? 1 : -1);
    ob1.sort((a, b) => a.name > b.name ? 1 : -1);
    ob2.sort((a, b) => a.date > b.date ? 1 : -1);
    var i = document.getElementById("button")
    i.addEventListener("dblclick", function(){
        ob.sort((a, b) => a.namedoc < b.namedoc ? 1 : -1);
        ob1.sort((a, b) => a.name < b.name ? 1 : -1);
        ob2.sort((a, b) => a.date < b.date ? 1 : -1);

    })
}

//task4
function fillfirst(){

    var text = document.getElementById("input").value
    var mas=[]
    var c = 0;
    for (let i = 0; i < ob.length; i++) {
        var word = ob[i].namedoc.toString()
        for(var j= 0; j<text.length;j++){

            if(word[j] != text[j]){
                break
            }
            if(j+1 == text.length){
                mas[c] = ob[i]
                c++;
            }
        }
    }
    var div = document.getElementById("divnew")
    var table = document.createElement("table")
    table.className="border"
    for (let index = 0; index < mas.length; index++) {
        var tr= document.createElement("tr")
        var td= document.createElement("td")
        td.className="border"
        td.textContent="| Doctor: "+mas[index].namedoc + " | Spec: "+mas[index].spec+" | Cval: "+ mas[index].cval
        tr.appendChild(td)
        table.appendChild(tr)
    }
    div.appendChild(table)

}
function fillsecond(){
    var text = document.getElementById("input").value
    var mas=[]
    var c = 0;
    for (let i = 0; i < ob1.length; i++) {
        var word = ob1[i].name.toString()
        for(var j= 0; j<text.length;j++){
            if(word[j] != text[j]){
                break
            }
            if(j+1 == text.length){
                mas[c] = ob1[i]
                c++;
            }
        }
    }
    var div = document.getElementById("divnew")
    var table = document.createElement("table")
    table.className = "border"
    for (let index = 0; index < mas.length; index++) {
        var tr= document.createElement("tr")
        var td= document.createElement("td")
        td.className="border"
        td.textContent="| Kod: "+mas[index].kod + " | Name: "+mas[index].name +" | Address: "+ mas[index].address +" | Age: "+ mas[index].age
        tr.appendChild(td)
        table.appendChild(tr)
    }
    div.appendChild(table)

}

function fillthird(){
    var text = document.getElementById("input").value
    var mas=[]
    var c = 0;
    for (let i = 0; i < ob2.length; i++) {
        var word = ob2[i].doc.namedoc.toString()
        for(var j= 0; j<text.length;j++){
            if(word[j] != text[j]){
                break
            }
            if(j+1 == text.length){
                mas[c] = ob2[i]
                c++;
            }
        }
    }
    var div = document.getElementById("divnew")
    var table = document.createElement("table")
    table.className="border"
    for (let index = 0; index < mas.length; index++) {
        var tr = document.createElement("tr")
        tr.className="border"
        var td1= document.createElement("td")
        var td2= document.createElement("td")
        var td3= document.createElement("td")
        td1.className="border"
        td2.className="border"
        td3.className="border"
        td1.textContent=" | Doctor: "+ mas[index].doc.namedoc+" | Spec: "+ mas[index].doc.spec+" | Cval: "+ mas[index].doc.cval
        td2.textContent="| Diagnoz: "+mas[index].diagnoz + " | Date: "+mas[index].date +" | Result: "+ mas[index].result 
        td3.textContent=" | Kod: "+ mas[index].pac.kod+" | Pacient: "+ mas[index].pac.name+" | Address: "+ mas[index].pac.address+" | Age: "+ mas[index].pac.age

        tr.appendChild(td1)
        tr.appendChild(td2)
        tr.appendChild(td3)
        table.appendChild(tr)
    }
    div.appendChild(table)

}

function deletenew(){
    const list = document.getElementById("divnew");
    //console.log(list)
    if (list.hasChildNodes()) {
      list.removeChild(list.childNodes[0]);
    }
}


function printf(){
    var i = document.getElementById("vid")
    index = i.selectedIndex
    //console.log(index)
    if(index==2){
        deletenew()
        var select = document.querySelector('input[name = "sel"]:checked').value
        if(select==1){
            fillfirst()
        }
        if(select==2){
            fillsecond()
        }
        if(select==3){
            fillthird()
        }
    }
}

function toggleBilling0() {
    var select = document.querySelector('input[name = "sel"]:checked').value
    if(select>0){
       document.getElementById("input").disabled=false
       document.getElementById("inputtext").disabled=false
    }
    if(select<=0){
        document.getElementById("input").disabled=true
        document.getElementById("inputtext").disabled=false
    }
}

function add(){
    var i = document.getElementById("vid")
    index = i.selectedIndex
    console.log(index)
    if(index==2){
    var select = document.querySelector('input[name = "sel"]:checked').value

    const inputtext = document.getElementById("inputtext").value;
    if(select==1){
        var space = ' ';
        var  arrayOfStrings = inputtext.split(space);
        //console.log(arrayOfStrings)
        
        ob.push(new Doctor(arrayOfStrings[0],arrayOfStrings[1],arrayOfStrings[2]))

        var div = document.getElementById("div")
        var table = div.firstElementChild

        for (let index = ob.length-1; index < ob.length; index++) {
            var tr= document.createElement("tr")
            var td= document.createElement("td")
            td.className="border"
            td.textContent="| Doctor: "+ob[index].namedoc + " | Spec: "+ob[index].spec+" | Cval: "+ ob[index].cval
            tr.appendChild(td)
            table.appendChild(tr)
        }
        div.appendChild(table)
    }
    if(select==2){
        var space = ' ';
        var  arrayOfStrings = inputtext.split(space);
        //console.log(arrayOfStrings)
        
        ob1.push( new Pacient(arrayOfStrings[0],arrayOfStrings[1],arrayOfStrings[2],arrayOfStrings[3]))
        
        var div = document.getElementById("div")
        var table = div.firstElementChild

        for (let index = ob1.length-1; index < ob1.length; index++) {
            var tr= document.createElement("tr")
            var td= document.createElement("td")
            td.className="border"
            td.textContent="| Kod: "+ob1[index].kod + " | Name: "+ob1[index].name +" | Address: "+ ob1[index].address +" | Age: "+ ob1[index].age
            tr.appendChild(td)
            table.appendChild(tr)
        }
        div.appendChild(table)
    }
    if(select==3){
        var space = ' ';
        var  arrayOfStrings = inputtext.split(space);
        //console.log(arrayOfStrings)
        
        ob2.push(new R(arrayOfStrings[0],arrayOfStrings[1],arrayOfStrings[2],new Doctor(arrayOfStrings[3],arrayOfStrings[4],arrayOfStrings[5]),new Pacient(arrayOfStrings[6],arrayOfStrings[7],arrayOfStrings[8],arrayOfStrings[9]))) 

        var div = document.getElementById("div")
        var table = div.firstElementChild

        for (let index = ob2.length-1; index < ob2.length; index++) {
            var tr = document.createElement("tr")
            tr.className="border"
            var td1= document.createElement("td")
            var td2= document.createElement("td")
            var td3= document.createElement("td")
            td1.className="border"
            td2.className="border"
            td3.className="border"
            td1.textContent=" | Doctor: "+ ob2[index].doc.namedoc+" | Spec: "+ ob2[index].doc.spec+" | Cval: "+ ob2[index].doc.cval
            td2.textContent="| Diagnoz: "+ob2[index].diagnoz + " | Date: "+ob2[index].date +" | Result: "+ ob2[index].result 
            td3.textContent=" | Kod: "+ ob2[index].pac.kod+" | Pacient: "+ ob2[index].pac.name+" | Address: "+ ob2[index].pac.address+" | Age: "+ ob2[index].pac.age

            tr.appendChild(td1)
            tr.appendChild(td2)
            tr.appendChild(td3)
            table.appendChild(tr)
        }
        div.appendChild(table)
    }
}
}

function clear(){
    var select = document.querySelector('input[name = "sel"]:checked').value
    if(select==1){ 
        ob.pop()
        createlistOb()
    }
    if(select==2){

        ob1.pop()
        createlistOb1()
    }
    if(select==3){
        ob2.pop()
        createlistOb2()
    }
}

function choice(){
    var select = document.querySelector('input[name = "sel"]:checked').value
    var div = document.getElementById("div");
    var tr = div.getElementsByTagName("tr")
    for(var i=0;i<tr.length;i++){
        tr[i].addEventListener('click', function(el){
            var cur=document.getElementsByClassName('color')
            if(cur[0]){
                cur[0].className = '';
            }
            this.className='color'
        })
    }
}

function change(){
    const inputtext = document.getElementById("inputtext").value.split(" ");
    var div = document.getElementById("div");
    var tr = div.getElementsByTagName("tr")
    var select = document.querySelector('input[name = "sel"]:checked').value
    if(select==1){ 
        for(var i=0;i<tr.length;i++){
            if(tr[i].className=="color"){
                ob[i]=new Doctor(inputtext[0],inputtext[1],inputtext[2])
            }
        }
        createlistOb()
    }
    if(select==2){ 
        for(var i=0;i<tr.length;i++){
            if(tr[i].className=="color"){
                ob1[i]=new Pacient(inputtext[0],inputtext[1],inputtext[2],inputtext[3])
            }
        }
        createlistOb1()
    }
    if(select==3){ 
        for(var i=0;i<tr.length;i++){
            if(tr[i].className=="color"){
                // console.log(tr[i])
                // console.log(ob2[i])
                ob2[i]=new R(inputtext[0],inputtext[1],inputtext[2],new Doctor(inputtext[3],inputtext[4],inputtext[5]),new Pacient(inputtext[6],inputtext[7],inputtext[8],inputtext[9]))
            }
        }
        createlistOb2()
    }
}

function math(){
    var select = document.querySelector('input[name = "sel"]:checked').value
    if(select==1){ 
        var dop
        deleteavarage()
        var mas="Harosh"
        var c=0
        for (let i = 0; i < ob.length; i++) {
            var word = ob[i].cval.toString()

            for(var j= 0; j<mas.length;j++){
                if(word[j] != mas[j]){
                    break
                }
                if(j+1 == mas.length){
                    c++;
                }
            }
        }
        var div = document.getElementById("mathdiv")
        var table = document.createElement("table")
        table.className="border"
        var tr= document.createElement("tr")
        var td= document.createElement("td")
        td.className="border"
        td.textContent=" Количество кфалификации хорошо: " + c
        tr.appendChild(td)
        table.appendChild(tr)
        div.appendChild(table)
    }
    if(select==2){ 
        deleteavarage()
        var average=0
        var dop
        var j=0
        for (let i = 0; i < ob1.length; i++) {
            dop=0
            
            if(!isNaN(dop+=+ob1[i].age))
            {
                average+=+ob1[i].age
                j++;
            }
        }
        average=average/j
        var div = document.getElementById("mathdiv")
        var table = document.createElement("table")
        table.className="border"
        var tr= document.createElement("tr")
        var td= document.createElement("td")
        td.className="border"
        td.textContent=" Средний возраст: " + average
        tr.appendChild(td)
        table.appendChild(tr)
        div.appendChild(table)
    }
    if(select==3){ 
        deleteavarage()
        var dop
        var average=0
        var j=0
        for (let i = 0; i < ob2.length; i++) {
            dop=0
            if(!isNaN(dop+=+ob1[i].age)){
                average+=ob2[i].date
                j++;
            }
        }
        average=average/j
        var div = document.getElementById("mathdiv")
        var table = document.createElement("table")
        table.className="border"
        var tr= document.createElement("tr")
        var td= document.createElement("td")
        td.className="border"
        td.textContent=" Средний возраст: " + average
        tr.appendChild(td)
        table.appendChild(tr)
        div.appendChild(table)
    }
}

function deleteavarage(){
    const list = document.getElementById("mathdiv");
    //console.log(list)
    if (list.hasChildNodes()) {
        list.removeChild(list.childNodes[0]);
    }
}

// //TASK 7
// class ChildDoctor extends Doctor{
//     #secondname

//     constructor(secondname, doctor0, special0, cvalification0){
//         super(doctor0, special0, cvalification0)
//         this.#secondname=secondname
//     }

//     get secondname(){
//         return this.#secondname
//     }

//     infoCD(){
//         console.log(" Doctor: "+ this.namedoc+" Spec: "+this.spec+ " Cval: "+ this.cval + " Secondname: " + this.#secondname)
//     }

// }
// var objD = [
//     new ChildDoctor("Bob", "God", "God", "God"),
//     new ChildDoctor("Dog", "a", "God", "God"),
//     new ChildDoctor("Cat", "b", "God", "God"),
//     new ChildDoctor("Bird", "c", "Loh", "God"),
//     new ChildDoctor("Pig", "d", "Loh", "God"),
// ]
// console.log("Info about Doctor")
// for(var i=0; i<objD.length;i++){
//     objD[i].infoCD()
// }


// class ChildPacient extends Pacient{
//     #secondn
//     constructor(id0, pacient0, address0, age0, secondn){
//         super(id0,pacient0,address0,age0)
//         this.#secondn = secondn
//     }
//     get secondn(){
//         return this.#secondn
//     }
//     infoCP(){
//         console.log(" Kod: "+ this.kod+" Pacient: "+this.name+ " Address: "+ this.address +" Age: "+this.age + " Secondname: " + this.#secondn)
//     }

// }

// var objP = [
//     new ChildPacient(15264, "Den", "Zaporoshec", 19, "God"),
//     new ChildPacient(15896, "Andrey", "Kiev", 18, "HalfGod"),
//     new ChildPacient(24587, "Evtihiy", "Zaporoshec", 78, "A"),
//     new ChildPacient(96483, "Evlampiy", "DONBASS", 12, "D"),
//     new ChildPacient(48501, "Merssedes", "DONBASS", 1, "S"),
// ]
// console.log("------------------------------")
// console.log("Info about Pacient")
// for(var i=0; i<objP.length;i++){
//     objP[i].infoCP()
// }


// class Math0{
//     #hepotinuse
//     #catet
//     constructor(hepotinuse, catet){
//         this.#hepotinuse=hepotinuse
//         this.#catet=catet
//     }

//     get hepotinuse(){
//         return this.#hepotinuse
//     }
//     get catet(){
//         return this.#catet
//     }
//     set hepotinuse(a){
//         this.#hepotinuse = a
//     }
//     set catet(b){
//         this.#catet = b
//     }
//     P(){
//         return Math.sqrt(this.#hepotinuse * this.#hepotinuse - this.#catet*this.#catet)+(this.#catet + this.#hepotinuse)
//     }
//     S(){
//         return (Math.sqrt(this.#hepotinuse * this.#hepotinuse - this.#catet*this.#catet)*this.#catet)/2
//     }
// }