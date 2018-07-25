program RCT_SERVICIO{
	version RCT_VERS{
		int OBTENER_ID(string nombre)=1;
		long BINDATE(void) = 2;
		string OBTENER_RESPUESTA(string mensaje)=3;
	}=1;
}=0x23451111;
