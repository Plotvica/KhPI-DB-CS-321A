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
    get reader(){
        return this.#reader
    }
    get book(){
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
        divEl.removeChild(divEl.childNodes[0]);
    }
    var index = document.getElementById("select_task_2").selectedIndex;
  
    if(index == 0){
        //document.getElementById("label_inp_text").innerText = "Введить(через пробіл): номер, дату, наявність блок.";
       createTableFirst();
    }
    if(index == 1){
        //document.getElementById("label_inp_text").innerText = "Введить(через пробіл): номер, район, кількість номерів";
        createTableSecond();
    }
    if(index == 2){
        //document.getElementById("label_inp_text").innerText = "Введить(через пробіл): інфо. про телефон, ATC, вартість, сплачено чи ні";
        createTableThird();
    }
   
}

var xhttp;
var textInf;
xhttp = new XMLHttpRequest();


function createTableFirst(){

xhttp.open("GET","textx4.xml", true);
xhttp.send();

var mas = [];
    xhttp.onreadystatechange = function() {
            if (xhttp.status == 200 && xhttp.readyState == 4) {

                    textInf = xhttp.responseXML;
                    
                    var book = textInf.getElementsByTagName("book");

                    for(var i = 0; i < 5; i++){

                        mas.push(new Book(book[i].getAttribute("author") ,book[i].getAttribute("title"), book[i].getAttribute("introduce"),book[i].getAttribute("price"), book[i].firstChild.textContent))

                    }
                    var divEl = document.getElementById("divTask2");
                    var table = document.createElement("table");
                
                    for(var i = 0; i < mas.length; i++){
                        var tr = document.createElement("tr");
                        var td = document.createElement("td");
                        td.textContent="| Name: "+mas[i].name +" | Address: "+ mas[i].address +" | Telephone: "+ mas[i].telephone
                  
                        tr.appendChild(td);
                        table.appendChild(tr);
                    }
                
                    divEl.appendChild(table);  
            }   
    };
}

function createTableSecond(){

    xhttp.open("GET","textx4.xml", true);
    xhttp.send();
    var mas = [];

    xhttp.onreadystatechange = function() {
        if (xhttp.status == 200 && xhttp.readyState == 4) {

                textInf = xhttp.responseXML
                var reader = textInf.getElementsByTagName("reader");

                for(var i = 0; i < 5; i++){

                    mas.push(new Reader(reader[i].getAttribute("author") , reader[i].getAttribute("title"), reader[i].getAttribute("introduce"),reader[i].getAttribute("price"), reader[i].firstChild.textContent))

                }
                var divEl = document.getElementById("divTask2");
                var table = document.createElement("table");
            
                for(var i = 0; i < mas.length; i++){
                    var tr = document.createElement("tr");
                    var td = document.createElement("td");
                    td.textContent="| Name: "+mas[i].name +" | Address: "+ mas[i].address +" | Telephone: "+ mas[i].telephone
                    tr.appendChild(td);
                    table.appendChild(tr);
                }
            
                divEl.appendChild(table);  
        }   
    };
}


function createTableThird(){

    xhttp.open("GET","textx4.xml", true);
    xhttp.send();
    var mas = [];
    
    xhttp.onreadystatechange = function() {
        if (xhttp.status == 200 && xhttp.readyState == 4) {

            textInf = xhttp.responseXML
            var book = textInf.getElementsByTagName("book");
            var reader = textInf.getElementsByTagName("reader");
            var r = textInf.getElementsByTagName("r");

                for(var i = 0; i < 5; i++){

                    mas.push(new R(new Book(book[i].getAttribute("author") ,book[i].getAttribute("title"), book[i].getAttribute("introduce"),book[i].getAttribute("price") , book[i].firstChild.textContent), new Reader(reader[i].getAttribute("name") , reader[i].getAttribute("address"), reader[i].getAttribute("telephone"), reader[i].firstChild.textContent), r[i].getAttribute("datefirst"), r[i].getAttribute("datelast"),r[i].getAttribute("date"), r[i].firstChild.textContent));
                }
                var divEl = document.getElementById("divTask2");
                var table = document.createElement("table");
            
                for(var i = 0; i < mas.length; i++){
                    var tr = document.createElement("tr");
                    var td1 = document.createElement("td"); 
                    td1.textContent = "| Author: " + mas[i].Obj1.author+ "| Title: " + mas[i].Obj1.title + "| Introduce: " + mas[i].Obj1.introduce + "| Price: " + mas[i].Obj1.price + ' |';
                    var td2 = document.createElement("td"); 
                    td.textContent="| Name: "+mas[i].Obj2.name +" | Address: "+ mas[i].Obj2.address +" | Telephone: "+ mas[i].Obj2.telephone
                    var td3 = document.createElement("td"); 
                    td3.textContent = "| First date: " + mas[i].datefirst+ "| Last date: " + mas[i].datelast + "| Date: " + mas[i].date + ' |';

                     tr.appendChild(td1);
                     tr.appendChild(td2);
                     tr.appendChild(td3);
                     table.appendChild(tr);
                }
                
                divEl.appendChild(table); 
        }   
    };
}


