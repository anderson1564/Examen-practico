#define BUFFER_SIZE 128

std::string ejecutar(char * cmd)
{
        FILE * pipe = popen(cmd, "r");

        if(pipe == NULL){
            fprintf(stderr,"Error creando el proceso para ejecutar el comando %s\n",cmd);
            exit(1);
        }

        char buffer[BUFFER_SIZE];
        std::string result;

        while(!feof(pipe)) {
                if(fgets(buffer, BUFFER_SIZE, pipe) != NULL)
                        result += buffer;
        }

        pclose(pipe);

        return result;
}
