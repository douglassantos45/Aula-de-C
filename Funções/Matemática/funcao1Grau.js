
const funcao1Grau = (a, b, x, y) =>{
    
    if(a != 0) {
        if(typeof x == 'undefined') x = 1;
        if(typeof y == 'undefined') y = 1;

        var X = (a*x + b);
        
        if(y != 0) {
            var Y = b / a+(y * -1);
        } else {
            var Y = b / (a* -1);
        }
        
        var arr = parseFloat(Y.toFixed(2));

        //console.log("Valor da função(x) = " + X);
        //console.log("Valor Y = " + arr);

        console.log(`Pontos X e Y (${X}, ${arr}) no Gráfico`);

    } else {
        console.log("Não é uma função do 1 Grau!");
    }
}


funcao1Grau(3, -1);