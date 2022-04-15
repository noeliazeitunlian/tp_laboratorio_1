/*
 * BibliotecaCalculos.c
 *
 	 	 DESARROLLO DE FUNCIONES Y DOCUMENTACION.
 */

 float CalcularTarjetaCredito(float precio){
	 float costo;

	 costo = precio + (precio*0.25);

	 return costo;
 }


 float CalcularTarjetaDebito(float precio){
 	 float costo;

 	 costo = precio - (precio*0.10);

 	 return costo;
  }


 float CalcularPrecioUnitario(float kilometros, float precio){
	 float costo;

	 costo = precio / kilometros;

	 return costo;
 }


 float CalcularDiferenciaPrecio(float precio1, float precio2){
	 float diferencia;

	 diferencia = precio1 - precio2;

	 return diferencia;
 }

 double CalcularBitcoin(float precio){

	double BitcoinEnPesos;
	float costo;

	BitcoinEnPesos = 4606954.55;

	costo = precio/BitcoinEnPesos;

	return costo;
 }


