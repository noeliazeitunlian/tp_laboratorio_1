/*
 ============================================================================
 Name        : tp_laboratorio_1.c
 Author      : Noelia Zeitunlian

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "BibliotecaCalculos.h"

float CalcularTarjetaDebito(float precio);
float CalcularTarjetaCredito(float precio);
float CalcularPrecioUnitario(float kilometros, float precio);
float CalcularDiferenciaPrecio(float precio1, float precio2);
double CalcularBitcoin(float precio);


int main(void) {
	setbuf(stdout, NULL);

	float kilometrosIngresados;

	float precioLatam;
	float precioAerolineas;

	float costoTarjetaDebitoLatam;
	float costoTarjetaDebitoAerolineas;
	float costoTarjetaDebitoLatamForzada;
	float costoTarjetaDebitoAerolineasForzada;

	float costoTarjetaCreditoLatam;
	float costoTarjetaCreditoAerolineas;
	float costoTarjetaCreditoLatamForzada;
	float costoTarjetaCreditoAerolineasForzada;


	float costoPrecioUnitarioLatam;
	float costoPrecioUnitarioAerolineas;
	float costoPrecioUnitarioLatamForzada;
	float costoPrecioUnitarioAerolineasForzada;

	float costoBitcoinLatam;
	float costoBitcoinAerolineas;
	float costoBitcoinLatamForzada;
	float costoBitcoinAerolineasForzada;



	float kmCargaForzada;
	float precioLatamCargaForzada;
	float precioAerolineasCargaForzada;
	float diferenciaPrecioForzada;

	float diferenciaPrecio;
	int opcion;



	kilometrosIngresados = 0;
	precioLatam = 0;
	precioAerolineas = 0;
	kmCargaForzada =  7090;
	precioLatamCargaForzada = 159339;
	precioAerolineasCargaForzada = 162965;


	do{
		printf("1.Ingresar kilometros: (km=%2.f) \n",kilometrosIngresados);
		printf("2.Ingresar precio de vuelos: (Aerolíneas= $ %.2f, Latam= $ %.2f) \n",precioLatam,precioAerolineas);
		printf("Precio vuelo Aerolineas: \n");
		printf("Precio vuelo Latam: \n");
		printf("3.Calcular todos los costos: \n");
		printf("a.Tarjeta de debito. \n");
		printf("b.Tarjeta de credito. \n");
		printf("c.Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) \n");
		printf("d.Mostrar precio por km:(precio unitario) \n");
		printf("e.Mostrar diferencia de precio: (Latam - Aerolineas) \n");
		printf("4.Informar resultados. \n");
		printf("5.Carga forzada de datos. \n");
		printf("6.Salir. \n");

		scanf("%d",&opcion);


		switch(opcion){

		case 1:
			printf("1.Ingresar kilometros: (km= %.2f) \n",kilometrosIngresados);
			scanf("%f",&kilometrosIngresados);

			if(kilometrosIngresados < 0 || kilometrosIngresados == 0){
				printf("\nError, ingrese kilometros mayores a 0\n");
			}
			break;

		case 2:
			printf("2.Ingresar precio de vuelos: (Aerolineas=%2.f, Latam=%2.f)\n\r",precioAerolineas,precioLatam);
			printf("\nIngrese precio vuelo Aerolineas:\n");
			scanf("%f",&precioAerolineas);
			if(precioAerolineas < 0 || precioAerolineas == 0)
			{
				printf("\nError, ingrese un precio mayor a 0\n");
			}
			else {
				printf("\nIngrese precio vuelo Latam:\n");
				scanf("%f",&precioLatam);
				if(precioLatam < 0 || precioLatam == 0){
							printf("\nError, ingrese un precio mayor a 0\n");
				}
			}
			break;

		case 3:
			if(precioAerolineas == 0 && precioLatam == 0)
						{
								printf("\nError, debe ingresar el precio de los vuelos\n");
						}
						else{

								costoTarjetaDebitoLatam=CalcularTarjetaDebito(precioLatam);
								costoTarjetaDebitoAerolineas=CalcularTarjetaDebito(precioAerolineas);

								costoTarjetaCreditoAerolineas=CalcularTarjetaCredito(precioLatam);
								costoTarjetaCreditoLatam=CalcularTarjetaCredito(precioAerolineas);

								costoBitcoinLatam=CalcularBitcoin(precioLatam);
								costoBitcoinAerolineas=CalcularBitcoin(precioAerolineas);

								costoPrecioUnitarioLatam = CalcularPrecioUnitario(kilometrosIngresados, precioLatam);
								costoPrecioUnitarioAerolineas = CalcularPrecioUnitario(kilometrosIngresados, precioAerolineas);

								diferenciaPrecio = CalcularDiferenciaPrecio(precioLatam, precioAerolineas);
						}

			break;

		case 4:

			printf("\nKMs ingresados: %.2f \n\r",kilometrosIngresados);

			printf("Precio Latam: $ %.2f \n",precioLatam);
			printf("a) Precio con tarjeta de debito: $ %.2f \n",costoTarjetaDebitoLatam);
			printf("b) Precio con tarjeta de credito: $ %.2f \n",costoTarjetaCreditoLatam);
			printf("c) Precio pagando con bitcoin: %lf BTC \n",costoBitcoinLatam);
			printf("d) Mostrar precio unitario: $ %.2f \n\r",costoPrecioUnitarioLatam);


			printf("Precio Aerolineas: $ %.2f \n",precioAerolineas);
			printf("a) Precio con tarjeta de debito: $ %.2f \n",costoTarjetaDebitoAerolineas);
			printf("b) Precio con tarjeta de credito: $ %.2f \n",costoTarjetaCreditoAerolineas);
			printf("c) Precio pagando con bitcoin: %lf BTC \n",costoBitcoinAerolineas);
			printf("d) Mostrar precio unitario: $ %.2f \n\r",costoPrecioUnitarioAerolineas);


			printf("\nLa diferencia de precio es: $ %.2f \n\r",diferenciaPrecio);

			break;

			case 5:
				costoTarjetaDebitoLatamForzada=CalcularTarjetaDebito(precioLatamCargaForzada);
				costoTarjetaDebitoAerolineasForzada=CalcularTarjetaDebito(precioAerolineasCargaForzada);

				costoTarjetaCreditoAerolineasForzada=CalcularTarjetaCredito(precioLatamCargaForzada);
				costoTarjetaCreditoLatamForzada=CalcularTarjetaCredito(precioAerolineasCargaForzada);

				costoBitcoinLatamForzada=CalcularBitcoin(precioLatamCargaForzada);
				costoBitcoinAerolineasForzada=CalcularBitcoin(precioAerolineasCargaForzada);

				costoPrecioUnitarioLatamForzada = CalcularPrecioUnitario(kmCargaForzada, precioLatamCargaForzada);
				costoPrecioUnitarioAerolineasForzada = CalcularPrecioUnitario(kmCargaForzada, precioAerolineasCargaForzada);

				diferenciaPrecioForzada = CalcularDiferenciaPrecio(precioLatamCargaForzada, precioAerolineasCargaForzada);

				printf("KMs ingresados: %.2f \n\r",kmCargaForzada);

				printf("Precio Latam: $ %.2f \n",precioLatamCargaForzada);
				printf("a) Precio con tarjeta de debito: $ %.2f \n",costoTarjetaDebitoLatamForzada);
				printf("b) Precio con tarjeta de credito: $ %.2f \n",costoTarjetaCreditoLatamForzada);
				printf("c) Precio pagando con bitcoin: %lf BTC \n",costoBitcoinLatamForzada);
				printf("d) Mostrar precio unitario: $ %.2f \n\r",costoPrecioUnitarioLatamForzada);


				printf("Precio Aerolineas: $ %.2f \n",precioAerolineasCargaForzada);
				printf("a) Precio con tarjeta de debito: $ %.2f \n",costoTarjetaDebitoAerolineasForzada);
				printf("b) Precio con tarjeta de credito: $ %.2f \n",costoTarjetaCreditoAerolineasForzada);
				printf("c) Precio pagando con bitcoin: %lf BTC \n",costoBitcoinAerolineasForzada);
				printf("d) Mostrar precio unitario: $ %.2f \n",costoPrecioUnitarioAerolineasForzada);

				printf("\n La diferencia de precio es: $ %.2f\n\r",diferenciaPrecioForzada);

		}
	}
	while(opcion != 6 );
	return EXIT_SUCCESS;


}


