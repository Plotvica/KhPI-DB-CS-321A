function city(){
    
    var select=document.getElementById("city")
    var index = select.selectedIndex
    for(var i = 1; i < document.getElementById("img").childElementCount + 1; i++){
        document.getElementById("img").childNodes[2*i-1].style.display = "none";
    }
    if(index == 0){
        document.getElementById("praga").style.display = "block"
    }
    if(index == 1){
        document.getElementById("ostrava").style.display = "block"
    }
    if(index == 2){
        document.getElementById("brno").style.display = "block"
    }
    if(index == 3){
        document.getElementById("plzen").style.display = "block"
    }
    if(index == 4){
        document.getElementById("liberec").style.display = "block"
    }
    if(index == 5){
        document.getElementById("most").style.display = "block"
    }
    if(index == 6){
        document.getElementById("zlin").style.display = "block"
    }
    if(index == 7){
        document.getElementById("dechin").style.display = "block"
    }

}

function cityname(){
    
    var select=document.getElementById("city")
    var index = select.selectedIndex
    for(var i = 1; i < document.getElementById("text").childElementCount + 1; i++){
        document.getElementById("text").childNodes[2*i-1].style.display = "none";
    }
    //console.log(index)
    
    if(index == 0){
        document.getElementById("praga0").style.display = "block"
    }
    if(index == 1){
        document.getElementById("ostrava0").style.display = "block"
    }
    if(index == 2){
        document.getElementById("plzen0").style.display = "block"
    }
    if(index == 3){
        document.getElementById("liberec0").style.display = "block"
    }
    if(index == 4){
        document.getElementById("most0").style.display = "block"
    }
    if(index == 5){
        document.getElementById("zlin0").style.display = "block"
    }
    if(index == 6){
        document.getElementById("dechin0").style.display = "block"
    }

}

function alerto(){
    var select=document.getElementById("city")
    var index = select.selectedIndex
    
    if(index == 0){
        window.open("Kiev.html")

        //alert("Прага")
    }
    if(index == 1){
        window.open("Kharkiv.html")
        //alert("Острава")
    }
    if(index == 2){
        window.open("Kherson.html")
        //alert("Пльзень")
    }
    if(index == 3){
        window.open("Dnepr.html")
        //alert("Ліберець")
    }
    if(index == 4){
        window.open("Poltava.html")
        //alert("Мост")
    }
    if(index == 5){
        window.open("Krivoirog.html")
        //alert("Злін")
    }
}