#include "construccion.h"

using namespace std;

void volver_menu(){
    
    cout << endl;
    cout << "        " << "╔══════════════════════════════╗" << endl;
    cout << "        " << "║Oprima 0 para volver al menu: ║" << endl;
    cout << "        " << "╚══════════════════════════════╝" << endl;

    string numero = "1";
    cin >> numero;

    while (numero != "0")
    {
        cout << "            " << "╔══════════════════════════╗" << endl;
        cout << "            " << "║ ----CARACTER INVALIDO----║" << endl;
        cout << "            " << "╚══════════════════════════╝" << endl;

        cout << endl;
        cout << "          " << "╔══════════════════════════════╗" << endl;
        cout << "          " << "║Oprima 0 para volver al menu: ║" << endl;
        cout << "          " << "╚══════════════════════════════╝" << endl;

        cin >> numero;
    }
}

void generar_primer_menu(){
    
    cout << "╔═════════════╗" << endl;
    cout << "║ Preparacion:║ " << endl;
    cout << "╚═════════════╝" << endl;

    cout << "\t" << "╔════════════════════════════════════════╗" << endl;
    cout << "\t" << "║ 1)- Construir edificio por nombre.     ║" << endl;
    cout << "\t" << "║                                        ║" << endl;
    cout << "\t" << "║ 2)- Listar edificios construidos.      ║" << endl;
    cout << "\t" << "║                                        ║" << endl;
    cout << "\t" << "║ 3)- Listar todos los edificios.        ║" << endl;
    cout << "\t" << "║                                        ║" << endl;
    cout << "\t" << "║ 4)- Demoler edificio por coordenada.   ║" << endl;
    cout << "\t" << "║                                        ║" << endl;
    cout << "\t" << "║ 5)- Mostrar mapa.                      ║" << endl;
    cout << "\t" << "║                                        ║" << endl;
    cout << "\t" << "║ 6)- Consultar coordenada.              ║" << endl;
    cout << "\t" << "║                                        ║" << endl;
    cout << "\t" << "║ 7)- Mostrar inventario.                ║" << endl;
    cout << "\t" << "║                                        ║" << endl;
    cout << "\t" << "║ 8)- Recolectar recursos producidos.    ║" << endl;
    cout << "\t" << "║                                        ║" << endl;
    cout << "\t" << "║ 9)- Lluvia de recursos.                ║" << endl;
    cout << "\t" << "║                                        ║" << endl;
    cout << "\t" << "║ 10)- Guardar y salir.                  ║" << endl;
    cout << "\t" << "╚════════════════════════════════════════╝" << endl;
}

void cargar_inventario(Jugador &jugador_1, Jugador &jugador_2){

    ifstream archivo_materiales(PATH_MATERIALES);

    if(!archivo_materiales.fail()){

        int materiales_jugador_1;
        int materiales_jugador_2;
        string nombre_materiales;
        Inventario inventario_1;
        Inventario inventario_2;

        while((archivo_materiales >> nombre_materiales)){
            
            (archivo_materiales >> materiales_jugador_1);
            (archivo_materiales >> materiales_jugador_2);
            
            inventario_1.agregar_material(nombre_materiales, materiales_jugador_1);
            inventario_2.agregar_material(nombre_materiales, materiales_jugador_2);
        }

        jugador_1.obtener_invnetario(inventario_1);
        jugador_2.obtener_invnetario(inventario_2);


    }
    else{
        cout << "Error al leer el archivo " << PATH_MATERIALES << endl;
    }

    
    
    archivo_materiales.close();
}

void cargar_mapa(Jugador &jugador_1, Jugador &jugador_2){

    ifstream archivo_mapa(PATH_MAPA);

    if(!archivo_mapa.fail()){

        Mapa mapa_1;
        Mapa mapa_2;

        int cant_filas;
        int cant_columnas;

        (archivo_mapa >> cant_filas);
        (archivo_mapa >> cant_columnas);

        mapa_1.obtener_filas_columnas(cant_filas, cant_columnas);
        mapa_1.crear_mapa();
        mapa_2.obtener_filas_columnas(cant_filas, cant_columnas);
        mapa_2.crear_mapa();
        int coordenada_x;
        int cooredenada_y;
        char representacion;

        for(int i = 0; i < cant_filas; i++){
            for(int j = 0; j < cant_columnas; j++){
                (archivo_mapa >> representacion);
                mapa_1.asignar_casillero(i, j, representacion);
                mapa_2.asignar_casillero(i, j, representacion);
            }
        }

        jugador_1.obtener_mapa(mapa_1);
        jugador_2.obtener_mapa(mapa_2);

    }
    else{
        cout << "Error al leer el archivo " << PATH_MAPA << endl;
    }

}

void cargar_jugador(Jugador &jugador_1, Jugador &jugador_2){

    cargar_inventario(jugador_1, jugador_2);
    cargar_mapa(jugador_1, jugador_2);

}


void empezar_programa(){
    
    Jugador jugador_1;
    Jugador jugador_2;

    cargar_jugador(jugador_1, jugador_2);
    generar_opciones(jugador_1, jugador_2);

    jugador_1.limpiar_inventario();
    jugador_2.limpiar_inventario();
    jugador_1.limpiar_mapa();
    jugador_2.limpiar_mapa();

}


void generar_opciones(Jugador jugador_1, Jugador jugador_2){

    int opcion = 0;

    cout << "Menu del primer jugador: " << endl;
    while(opcion != OPCION_5){
        //system(CLR_SCREEN);
       // generar_menu();
        cin >> opcion;
       // system(CLR_SCREEN);
        cout << endl;
        switch( opcion ){
            case OPCION_1:
                jugador_1.devolver_invnetario().mostrar_inventario();
                jugador_1.devolver_mapa().mostrar_mapa();
                break;
            case OPCION_2:
                cout << "Error." << endl;
                break;
            case OPCION_3:
                cout << "Error." << endl;
                break;
            case OPCION_4:
                cout << "Error." << endl;
                break;
            case OPCION_5:
                break;
            default:
                cout << "             "     << "╔══════════════════════════╗" << endl;
                cout << "             "     << "║ ----CARACTER INVALIDO----║" << endl;
                cout << "             "     << "╚══════════════════════════╝" << endl;
        }
        if(opcion != OPCION_5){
            volver_menu();
        }
    }

    system(CLR_SCREEN);

    opcion = 0;
    cout << "Menu del juador 2 " << endl;

    while (opcion != OPCION_5){
       // system(CLR_SCREEN);
       // generar_menu();
        cin >> opcion;
       // system(CLR_SCREEN);
        cout << endl;
        switch( opcion ){
            case OPCION_1:
                jugador_2.devolver_invnetario().mostrar_inventario();
                jugador_2.devolver_mapa().mostrar_mapa();
                break;
            case OPCION_2:
                cout << "Error." << endl;
                break;
            case OPCION_3:
                cout << "Error." << endl;
                break;
            case OPCION_4:
                cout << "Error." << endl;
                break;
            case OPCION_5:
                break;
            default:
                cout << "             "     << "╔══════════════════════════╗" << endl;
                cout << "             "     << "║ ----CARACTER INVALIDO----║" << endl;
                cout << "             "     << "╚══════════════════════════╝" << endl;
        }
        if(opcion != OPCION_5){
            volver_menu();
        }

        
    }

    cout << "Acaba de comenzar el juego." << endl;
}


