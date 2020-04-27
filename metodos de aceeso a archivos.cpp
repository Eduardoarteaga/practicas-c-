

int bucar_linea(char *file, char *texto){
	FILE *fp;
	bool encontrado=true;
	int numlinea=1;
	
	int err=fopen_s(&fp,file,"r");
	if(err!=0){
		return -1;
	}
	char linea[22];
	do{
		fgets(linea, 22, fp);
		if(!feof(fp)){
			break;
		}if (strstr(linea, texto)!=NULL){
			encontrado=true;
			break;
		}
		numlinea++;
	}while(1);
	fclose(fp);
	return (encontrado==true)?numlinea:-1;
}
void censurar_linea(char *ruta_archivo, "r+"){
	FILE *fp;
	bool encontrado=false;
	char asterisco[22]="";
	memser(&asteriscos, ´*´, 20);
	int err=fopen_s(&fp, ruta_archivos, "r+");
	if(err!=0){
		return;
	}
	fseek (fp, sizeof(asteriscos)*num_linea, 0);
	fputs(asteriscos, fp);
	fclose(fp);
}
int main(){
	char ruta[]="C:\\Users\\janito\\Documents\\listado.prn";
		nombre[]="ALFONSO";
	int numlinea=buscar_linea(ruta,nombre);
	printf("%s encontrado en la linea: %d", nombre, numlinea);
}
