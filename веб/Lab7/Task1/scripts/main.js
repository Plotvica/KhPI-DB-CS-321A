function Task1() {
    
    let inputs=document.getElementsByTagName("input");
    let selects=document.getElementsByTagName("select");
    let t =document.getElementsByClassName("radiobutton");
    let more=document.getElementsByTagName("textarea");
    let res=`Контактна інформація:
    Ім'я:${inputs[0].value}
    Телефон:${inputs[1].value}
    Пошта:${inputs[2].value}
    Відвідування:${inputs[3].value}
    
    Персональна інформація
    Вік:${selects[0].value}
    Улюблена кухня:${selects[1].value}
    Які страви хотіли б побачити:${more[0].value}
    
    Оцінка установи\n`;
    Array.from(t).forEach(e => {
        if (e.labels!=null&&e.checked) {
            res+=`${e.labels[0].innerText}\n`;
        }
        
    });
    alert(res);
}

function task2() {
    
}