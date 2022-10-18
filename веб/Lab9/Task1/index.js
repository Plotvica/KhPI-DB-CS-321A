document.getElementById("adapt").onclick=()=>{
    let res;
    let data=document.getElementById("data").value.split(" ");
    if (data.length>7) {
        res= data.slice(0,7).join(" ")+"...";
    }else{
        res=data.join(" ");
    }

    document.getElementById("result").innerHTML=res;
    
}