
//task1
class Tovar{
    #tovname
    #amount
    #costoftov
    constructor(tovname, amount, costoftov){
        this.#tovname = tovname;
        this.#amount = amount;
        this.#costoftov = costoftov;
    }
    get tovname(){
        return this.#tovname
    }
    get amount(){
        return this.#amount
    }
    get costoftov(){
        return this.#costoftov
    }
}
class Company{
    #kod
    #name 
    #address
    #phonenum
    constructor(kod, name, address, phonenum){
        this.#kod = kod;
        this.#name = name;
        this.#address = address;
        this.#phonenum = phonenum;
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
    get phonenum(){
        return this.#phonenum
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
    new Tovar("Candys", 3405, 100),
    new Tovar("Cookies", 543, 30),
    new Tovar("Cakes", 3, 15),
    new Tovar("Chocolate bars", 5, 5),
    new Tovar("Cola", 10, 20)
];
let ob1 = [
    new Company(05645, "Roshen", "Kiev", "45-54-65"),
    new Company(65666, "AVC", "Odesa", "34-13-41"),
    new Company(15246, "KFC", "Omeryca", "13-41-55"),
    new Company(14831, "Chocolate BABI TANI", "selo Valuiki", "12-34-44"),
    new Company(01247, "Coca-Cola", "Lviv", "22-81-47")
];
let ob2 = [
    new R("Candys", 30, "Roshen", ob[0],ob1[0]),
    new R("Cookies", 30, "AVC",ob[1], ob1[1]),
    new R("Cakes", 30, "KFC", ob[2],ob1[2]),
    new R("Chocolate bars", 12, "Chocolate BABI TANI", ob[3],ob1[3]),
    new R("Cola", 1, "Coca-Cola", ob[4], ob1[4]),
];
console.log("------------------------------")
for(var i=0; i<ob2.length;i++){
    console.log("BLANC:", i+1)
    console.log("Diagnoz: ",ob2[i].diagnoz)
    console.log("Date: ",ob2[i].date)
    console.log("Result: ",ob2[i].result)
    console.log("Tovar: ",ob2[i].doc.tovname)
    console.log("amount: ",ob2[i].doc.amount)
    console.log("costoftov: ",ob2[i].doc.costoftov)
    console.log("Kod: ",ob2[i].pac.kod)
    console.log("Company: ",ob2[i].pac.name)
    console.log("Address: ",ob2[i].pac.address)
    console.log("phonenum: ",ob2[i].pac.phonenum)
    console.log("------------------------------")
}
//task2
function createlistOb(){
    deletenew()
    deleteavarphonenum()
    deletelistOb()
    if(i==1){
    var div = document.getElementById("div")
    var ul = document.createElement("ul")
    for (let index = 0; index < ob.length; index++) {
        var li= document.createElement("li")
        li.textContent="| Product: "+ob[index].tovname + " | Amount: "+ob[index].amount+" | Cost: "+ ob[index].costoftov
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
        td.textContent="| Product: "+ob[index].tovname + " | Amount: "+ob[index].amount+" | Cost: "+ ob[index].costoftov
        tr.appendChild(td)
        tabl.appendChild(tr)
    }

    div.appendChild(tabl)
    
}
}

function createlistOb1(){
    deletenew()
    deleteavarphonenum()
    deletelistOb()
    if(i==1){
        var div = document.getElementById("div")
        var ul = document.createElement("ul")
        for (let index = 0; index < ob1.length; index++) {
            var li= document.createElement("li")
            li.textContent="| Kod: "+ob1[index].kod + " | Company: "+ob1[index].name +" | Address: "+ ob1[index].address +" | Phone: "+ ob1[index].phonenum
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
            td.textContent="| Kod: "+ob1[index].kod + " | Company: "+ob1[index].name +" | Address: "+ ob1[index].address +" | Phone: "+ ob1[index].phonenum
            tr.appendChild(td)
            tabl.appendChild(tr)
        }
        div.appendChild(tabl)
        }
}

function createlistOb2(){
    deletenew()
    deleteavarphonenum()
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
            li1.textContent=" | Product: "+ ob2[index].doc.tovname+" | Amount: "+ ob2[index].doc.amount+" | Cost: "+ ob2[index].doc.costoftov
            li2.textContent="| Product: "+ob2[index].diagnoz + " | Date: "+ob2[index].date +" | Company: "+ ob2[index].result 
            li3.textContent=" | Kod: "+ ob2[index].pac.kod+" | Company: "+ ob2[index].pac.name+" | Address: "+ ob2[index].pac.address+" | Phone: "+ ob2[index].pac.phonenum
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
            td1.textContent=" | Product: "+ ob2[index].doc.tovname+" | Amount: "+ ob2[index].doc.amount+" | Cost: "+ ob2[index].doc.costoftov
            td2.textContent="| Product: "+ob2[index].diagnoz + " | Date: "+ob2[index].date +" | Company: "+ ob2[index].result 
            td3.textContent=" | Kod: "+ ob2[index].pac.kod+" | Company: "+ ob2[index].pac.name+" | Address: "+ ob2[index].pac.address+" | Phone: "+ ob2[index].pac.phonenum

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
    ob.sort((a, b) => a.tovname > b.tovname ? 1 : -1);
    ob1.sort((a, b) => a.name > b.name ? 1 : -1);
    ob2.sort((a, b) => a.date > b.date ? 1 : -1);
    var i = document.getElementById("button")
    i.addEventListener("dblclick", function(){
        ob.sort((a, b) => a.tovname < b.tovname ? 1 : -1);
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
        var word = ob[i].tovname.toString()
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
        td.textContent="| Product: "+mas[index].tovname + " | Amount: "+mas[index].amount+" | Cost: "+ mas[index].costoftov
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
        td.textContent="| Kod: "+mas[index].kod + " | Company: "+mas[index].name +" | Address: "+ mas[index].address +" | Phone: "+ mas[index].phonenum
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
        var word = ob2[i].doc.tovname.toString()
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
        td1.textContent=" | Product: "+ mas[index].doc.tovname+" | Amount: "+ mas[index].doc.amount+" | Cost: "+ mas[index].doc.costoftov
        td2.textContent="| Product: "+mas[index].diagnoz + " | Date: "+mas[index].date +" | Company: "+ mas[index].result 
        td3.textContent=" | Kod: "+ mas[index].pac.kod+" | Company: "+ mas[index].pac.name+" | Address: "+ mas[index].pac.address+" | Phone: "+ mas[index].pac.phonenum

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
        
        ob.push(new Tovar(arrayOfStrings[0],arrayOfStrings[1],arrayOfStrings[2]))

        var div = document.getElementById("div")
        var table = div.firstElementChild

        for (let index = ob.length-1; index < ob.length; index++) {
            var tr= document.createElement("tr")
            var td= document.createElement("td")
            td.className="border"
            td.textContent="| Product: "+ob[index].tovname + " | Amount: "+ob[index].amount+" | Cost: "+ ob[index].costoftov
            tr.appendChild(td)
            table.appendChild(tr)
        }
        div.appendChild(table)
    }
    if(select==2){
        var space = ' ';
        var  arrayOfStrings = inputtext.split(space);
        //console.log(arrayOfStrings)
        
        ob1.push( new Company(arrayOfStrings[0],arrayOfStrings[1],arrayOfStrings[2],arrayOfStrings[3]))
        
        var div = document.getElementById("div")
        var table = div.firstElementChild

        for (let index = ob1.length-1; index < ob1.length; index++) {
            var tr= document.createElement("tr")
            var td= document.createElement("td")
            td.className="border"
            td.textContent="| Kod: "+ob1[index].kod + " | Company: "+ob1[index].name +" | Address: "+ ob1[index].address +" | Phone: "+ ob1[index].phonenum
            tr.appendChild(td)
            table.appendChild(tr)
        }
        div.appendChild(table)
    }
    if(select==3){
        var space = ' ';
        var  arrayOfStrings = inputtext.split(space);
        //console.log(arrayOfStrings)
        
        ob2.push(new R(arrayOfStrings[0],arrayOfStrings[1],arrayOfStrings[2],new Tovar(arrayOfStrings[3],arrayOfStrings[4],arrayOfStrings[5]),new Company(arrayOfStrings[6],arrayOfStrings[7],arrayOfStrings[8],arrayOfStrings[9]))) 

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
            td1.textContent=" | Product: "+ ob2[index].doc.tovname+" | Amount: "+ ob2[index].doc.amount+" | Cost: "+ ob2[index].doc.costoftov
            td2.textContent="| Product: "+ob2[index].diagnoz + " | Date: "+ob2[index].date +" | Company: "+ ob2[index].result 
            td3.textContent=" | Kod: "+ ob2[index].pac.kod+" | Company: "+ ob2[index].pac.name+" | Address: "+ ob2[index].pac.address+" | Phone: "+ ob2[index].pac.phonenum

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
                ob[i]=new Tovar(inputtext[0],inputtext[1],inputtext[2])
            }
        }
        createlistOb()
    }
    if(select==2){ 
        for(var i=0;i<tr.length;i++){
            if(tr[i].className=="color"){
                ob1[i]=new Company(inputtext[0],inputtext[1],inputtext[2],inputtext[3])
            }
        }
        createlistOb1()
    }
    if(select==3){ 
        for(var i=0;i<tr.length;i++){
            if(tr[i].className=="color"){
                // console.log(tr[i])
                // console.log(ob2[i])
                ob2[i]=new R(inputtext[0],inputtext[1],inputtext[2],new Tovar(inputtext[3],inputtext[4],inputtext[5]),new Company(inputtext[6],inputtext[7],inputtext[8],inputtext[9]))
            }
        }
        createlistOb2()
    }
}

function math(){
    var select = document.querySelector('input[name = "sel"]:checked').value
    if(select==2){ 
        var dop
        deleteavarphonenum()
        var mas="Harosh"
        var c=0
        for (let i = 0; i < ob.length; i++) {
            var word = ob[i].costoftov.toString()

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
        td.textContent=" Количество заказчиков: " + ob.length
        tr.appendChild(td)
        table.appendChild(tr)
        div.appendChild(table)
    }
    if(select==1){ 
        deleteavarphonenum()
        var averphonenum=0
        var dop
        var j=0
        for (let i = 0; i < ob.length; i++) {
            dop=0
            
            if(!isNaN(dop+=+ob[i].costoftov))
            {
                averphonenum+=+ob[i].costoftov
                j++;
            }
        }
        averphonenum=averphonenum/j
        var div = document.getElementById("mathdiv")
        var table = document.createElement("table")
        table.className="border"
        var tr= document.createElement("tr")
        var td= document.createElement("td")
        td.className="border"
        td.textContent=" Средняя цена: " + averphonenum
        tr.appendChild(td)
        table.appendChild(tr)
        div.appendChild(table)
    }
    if(select==3){ 
        deleteavarphonenum()
        var dop
        var averphonenum=0
        var j=0
        for (let i = 0; i < ob2.length; i++) {
            dop=0
            if(!isNaN(dop+=+ob[i].costoftov)){
                averphonenum+=ob[i].costoftov
                j++;
            }
        }
        averphonenum=averphonenum/j
        var div = document.getElementById("mathdiv")
        var table = document.createElement("table")
        table.className="border"
        var tr= document.createElement("tr")
        var td= document.createElement("td")
        td.className="border"
        td.textContent=" Средняя цена: " + averphonenum
        tr.appendChild(td)
        table.appendChild(tr)
        div.appendChild(table)
    }
}

function deleteavarphonenum(){
    const list = document.getElementById("mathdiv");
    //console.log(list)
    if (list.hasChildNodes()) {
        list.removeChild(list.childNodes[0]);
    }
}

// //TASK 7
// class ChildTovar extends Tovar{
//     #secondname

//     constructor(secondname, Tovar0, amountial0, costoftovification0){
//         super(Tovar0, amountial0, costoftovification0)
//         this.#secondname=secondname
//     }

//     get secondname(){
//         return this.#secondname
//     }

//     infoCD(){
//         console.log(" Tovar: "+ this.tovname+" amount: "+this.amount+ " costoftov: "+ this.costoftov + " Secondname: " + this.#secondname)
//     }

// }
// var objD = [
//     new ChildTovar("Bob", "God", "God", "God"),
//     new ChildTovar("Dog", "a", "God", "God"),
//     new ChildTovar("Cat", "b", "God", "God"),
//     new ChildTovar("Bird", "c", "Loh", "God"),
//     new ChildTovar("Pig", "d", "Loh", "God"),
// ]
// console.log("Info about Tovar")
// for(var i=0; i<objD.length;i++){
//     objD[i].infoCD()
// }


// class ChildCompany extends Company{
//     #secondn
//     constructor(id0, Company0, address0, phonenum0, secondn){
//         super(id0,Company0,address0,phonenum0)
//         this.#secondn = secondn
//     }
//     get secondn(){
//         return this.#secondn
//     }
//     infoCP(){
//         console.log(" Kod: "+ this.kod+" Company: "+this.name+ " Address: "+ this.address +" phonenum: "+this.phonenum + " Secondname: " + this.#secondn)
//     }

// }

// var objP = [
//     new ChildCompany(15264, "Den", "Zaporoshec", 19, "God"),
//     new ChildCompany(15896, "Andrey", "Kiev", 18, "HalfGod"),
//     new ChildCompany(24587, "Evtihiy", "Zaporoshec", 78, "A"),
//     new ChildCompany(96483, "Evlampiy", "DONBASS", 12, "D"),
//     new ChildCompany(48501, "Merssedes", "DONBASS", 1, "S"),
// ]
// console.log("------------------------------")
// console.log("Info about Company")
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