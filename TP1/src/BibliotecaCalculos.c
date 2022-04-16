/*
 * BibliotecaCalculos.c
 *

 */
	/// @fn float CalcularTarjetaCredito(float)
	/// @brief recibe un numero flotante (precio) y le incrementa el 25%
	///
	/// @param precio
	/// @return precio final
	float CalcularTarjetaCredito(float precio){
	 float costo;

	 costo = precio + (precio*0.25);

	 return costo;
 }

/// @fn float CalcularTarjetaDebito(float)
/// @brief recibe un numero flotante (precio) y le descuenta el 10%
///
/// @param precio
/// @return precio final
 float CalcularTarjetaDebito(float precio){
 	 float costo;

 	 costo = precio - (precio*0.10);

 	 return costo;
  }

/// @fn float CalcularPrecioUnitario(float, float)
/// @brief recibe dos numeros flotantes y calcula el precio de un kilometro
///
/// @param kilometros
/// @param precio
/// @return precio unitario de kilometro
 float CalcularPrecioUnitario(float kilometros, float precio){
	 float costo;

	 costo = precio / kilometros;

	 return costo;
 }

/// @fn float CalcularDiferenciaPrecio(float, float)
/// @brief recibe dos numeros flotantes y calcula la diferencia entre ambos
///
/// @param precio1
/// @param precio2
/// @return diferencia de precio
 float CalcularDiferenciaPrecio(float precio1, float precio2){
	 float diferencia;

	 diferencia = precio1 - precio2;

	 return diferencia;
 }

 /// @fn double CalcularBitcoin(float)
 /// @brief recibe un numero flotante y calcula su valor sobre la variable BitcoinEnPesos.
 ///
 /// @param precio
 /// @return precio en bitcoin
 double CalcularBitcoin(float precio){

	double BitcoinEnPesos;
	float costo;

	BitcoinEnPesos = 4606954.55;

	costo = precio/BitcoinEnPesos;

	return costo;
 }


