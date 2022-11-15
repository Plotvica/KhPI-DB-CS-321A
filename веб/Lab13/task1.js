
class Book {
    #author
    #title
    #introduce
    #price
    constructor(author, title, introduce, price){
        this.#author = author;
        this.#title = title;
        this.#introduce = introduce;
        this.#price = price;
    }
    get author(){
        return this.#author
    }
    get title(){
        return this.#title
    }
    get introduce(){
        return this.#introduce
    }
    get price(){
        return this.#price
    }
}

class Reader{
    #name 
    #address
    #telephone
    constructor( name, address, telephone){
        this.#name = name;
        this.#address = address;
        this.#telephone = telephone;
    }
    get name(){
        return this.#name
    }
    get address(){
        return this.#address
    }
    get telephone(){
        return this.#telephone
    }
}

class R {
    #book
    #reader
    #datefirst
    #datelast
    #date
    constructor(reader, book, datefirst, datelast, date){
        this.#reader = reader;
        this.#book = book;
        this.#datefirst = datefirst;
        this.#datelast = datelast;
        this.#date = date;
    }
    get Obj1(){
        return this.#reader
    }
    get Obj2(){
        return this.#book
    }
    get datefirst(){
        return this.#datefirst
    }
    get datelast(){
        return this.#datelast
    }
    get date(){
        return this.#date
    }
}
 




function changeInfo(){ 
 
    var divEl = document.getElementById("divTask2"); 
    if(divEl.hasChildNodes() ==  true){ 
        console.log(11); 
        divEl.removeChild(divEl.childNodes[0]); 
    } 
    var index = document.getElementById("select_task_2").selectedIndex; 
   
    if(index == 0){ 
        //document.getElementById("label_inp_text").innerText = "Введить(через пробіл): номер, дату, наявність блок."; 
       createTableFirst1(); 
    } 
    if(index == 1){ 
        //document.getElementById("label_inp_text").innerText = "Введить(через пробіл): номер, район, кількість номерів"; 
        createTableSecond1(); 
    } 
    if(index == 2){ 
        //document.getElementById("label_inp_text").innerText = "Введить(через пробіл): інфо. про телефон, ATC, вартість, сплачено чи ні"; 
        createTableThird1(); 
    } 
    
} 
 
var xhttp; 
var textInf; 
xhttp = new XMLHttpRequest(); 
 
 
function createTableFirst1(){ 
 
xhttp.open("GET","text1", true); 
xhttp.send(); 
 
var mas = []; 
    xhttp.onreadystatechange = function() { 
            if (xhttp.status == 200 && xhttp.readyState == 4) { 
                var text = xhttp.responseText.split(","); 
 
                    for(var i = 0; i < 5; i++){ 
 
                        mas.push(new Book(text[i], text[i+5], text[i+10],text[i+15])) 
 
                    } 
                    var divEl = document.getElementById("divTask2"); 
                    var table = document.createElement("table"); 
                 
                    for(var i = 0; i < mas.length; i++){ 
                        var tr = document.createElement("tr"); 
                        var td = document.createElement("td"); 
                        //"Телефон: " + mas[i].Cod + " | Дата: " + mas[i].data + " | Наявність блок.: " 
                        td.textContent="| Book: "+mas[i].author + " | Title: "+mas[i].title+" | Introduce: "+ mas[i].introduce+" | Price: "+ mas[i].price;
                        tr.appendChild(td); 
                        table.appendChild(tr); 
                    } 
                 
                    divEl.appendChild(table);   
            }    
    }; 
} 
 
function createTableSecond1(){ 
 
    xhttp.open("GET","text1", true); 
    xhttp.send(); 
    var mas = []; 
 
    xhttp.onreadystatechange = function() { 
        if (xhttp.status == 200 && xhttp.readyState == 4) { 
             
                var text = xhttp.responseText.split(","); 
 
                for(var i = 0; i < 5; i++){ 
 
                    mas.push(new Reader(text[i+20], text[i+25], text[i+30])) 
 
                } 
                var divEl = document.getElementById("divTask2"); 
                var table = document.createElement("table"); 
             
                for(var i = 0; i < mas.length; i++){ 
                    var tr = document.createElement("tr"); 
                    var td = document.createElement("td");
                    //"Номер: " + mas[i].number + " | Район: " + mas[i].area + " | Кількість номерів: " 
                    td.textContent="| Name: "+mas[i].name +" | Address: "+ mas[i].address +" | Telephone: "+ mas[i].telephone
                    tr.appendChild(td); 
                    table.appendChild(tr); 
                } 
                divEl.appendChild(table);   
        }    
    }; 
} 
 
 
function createTableThird1(){ 
 
    xhttp.open("GET","text1", true); 
    xhttp.send(); 
    var mas = []; 
     
    xhttp.onreadystatechange = function() { 
        if (xhttp.status == 200 && xhttp.readyState == 4) { 
                 
                var text = xhttp.responseText.split(","); 
 
                for(var i = 0; i < 5; i++){ 
                  //  mas.push(new Order( new Warehouse(text[i], text[i+5], text[i+10],text[i+15]), new Provider(text[i+20], text[i+25], text[i+30],  text[i+35]), text[i+40], text[i+45])); 
                     // mas.push(new R( new Book(text[i], text[i+5], text[i+10],text[i+15]), new Reader(text[i+20], text[i+25], text[i+30]), text[i+35], text[i+40], text[i+45])); 
                      mas.push(new R(new Book(text[i],text[i+5],text[i+10],text[i+15]), new Reader(text[i+20],text[i+25],text[i+30]), text[i+35], text[i+40], text[i+45])); 
                } 
                var divEl = document.getElementById("divTask2"); 
                var table = document.createElement("table"); 
             
                for(var i = 0; i < mas.length; i++){ 
                    var tr = document.createElement("tr"); 
                  
                    var td1 = document.createElement("td"); 
                   //td1.textContent = "| Cod: " + mas[i].Obj1.Cod+ "| Name: " + mas[i].Obj1.Name + "| Amount: " + mas[i].Obj1.Amount + "| Price: " + mas[i].Obj1.Price + ' |';
                   td1.textContent = "| Book: " + mas[i].Obj1.author + " | Title: " + mas[i].Obj1.title + " | Introduce: " + mas[i].Obj1.introduce + " | Price: " + mas[i].Obj1.price + ' |';
                    var td2 = document.createElement("td"); 
                    td2.textContent = "| Name: " + mas[i].Obj2.name + " | Address: "+ mas[i].Obj2.address +" | Telephone: "+ mas[i].Obj2.telephone
             
                    var td3 = document.createElement("td"); 
                    td3.textContent = "|Date first: " + mas[i].datefirst+ "|Date last: " + mas[i].datelast + "|Date: " + mas[i].date + ' |';
             
                     tr.appendChild(td1); 
                     tr.appendChild(td2); 
                     tr.appendChild(td3); 
                     table.appendChild(tr); 
                } 
                 
                divEl.appendChild(table);  
        }    
    }; 
}