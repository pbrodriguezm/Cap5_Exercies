function add() { 
  var x,y;
  return ( function() 
          {
            var z=2; x=1; y=5;
            alert(x+y+z)
          })() 
}

/*se utilizan 3 subfunciones anidadas la primera llamada add cre variables x, y, globales para  toda esa funcion dentro de add se llama a funcion() 
la cual utiliza las variables globales y crea una variable local llamada z donde se utiliza para ser operada una suma en la ultima subfuncion alerta.
*/
