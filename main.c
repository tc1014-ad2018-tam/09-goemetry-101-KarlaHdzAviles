/*Este programa nos ayuda a calcular el area,perimetro y volumen de diferentes figuras geometricas
 *
 *
 *
 * Autor:Karla Alexandra Hernandez Aviles
 * Fecha: 13/09/2018
 * Correo: A01411843@itesm.mx
 * */

#include <stdio.h>

//FUNCIONES
int CalcPSquare(double k) {
    double result;
    result = (k * 4);
    return result;
}
    int CalcPtriangle (double a, double b, double c) {
        double result;
        result = (a + b + c);
        return result;

}

int CalcPRectangle(double b, double h) {
    double result;
    result = (b + b + h + h);
    return result;
}

int CalcSTriangle(double b, double h){
    double result;
    result = ((b * h)/ 2);
    return result;
}

int CalcSSquare(double k){
    double result;
    result = (k*k);
    return result;
}

int CalcSRectangle(double b, double h){
    double result;
    result = (b * h);
    return result;
}

int CalcVolTriangle(double b, double h, double k) {
    double result;
    result = ((((b * h)/ 2) * k)/3);
    return result;
}

int CalcVolCube(double k) {
    double result;
    result = (k*k*k);
    return result;
}
int CalcVolRecangle(double b, double h, double k) {
    double result;
    result = ((b * h)* k);
    return result;
}

int main() {
    //definicion variables
    int  option;
    int shape;
    float result;
    float sizeA;
    float sizeB;
    float sizeC;
    do{
        printf("what would you like to calculate?\n "
               "1. Perimeter.\n "
               "2. Surface.\n "
               "3. Volume.\n "
               "4. Exit.\n");
        scanf("%i", &option);


        if (option == 1) {      //CalcPerimeter
            printf("what shape is it?\n 1. Triangle\n "
                   "2. Square\n "
                   "3.Rectangle\n");
            scanf("%i", &shape);

            if (shape == 1){

                printf("give the size of the sides:\n");
                scanf("%f %f %f", &sizeA, &sizeB, &sizeC);
                result = CalcPtriangle(sizeA, sizeB, sizeC);
            }

            else if (shape == 2){
                printf("give the size of one side:\n");
                scanf("%f", &sizeA);
                result = CalcPSquare(sizeA);
            }

            else if (shape == 3){
                printf("give the size of base and height:\n");
                scanf("%f %f", &sizeA, &sizeB);
                result = CalcPRectangle(sizeA, sizeB);
            }

            printf("the Perimeter is: %f", result);
        }
        else if (option == 2) {     //CalcArea
            printf("what shape is it?\n "
                   "1. Triangle\n "
                   "2. Square\n "
                   "3.Rectangle\n");
            scanf("%i", &shape);

            if (shape == 1){
                printf("give the size of base and height:\n");
                scanf("%f %f", &sizeA, &sizeB);
                result = CalcSTriangle(sizeA, sizeB);
            }

            else if (shape == 2){
                printf("give the size of a side:\n");
                scanf("%f", &sizeA);
                result = CalcSSquare(sizeA);
            }

            else if (shape == 3){
                printf("give the size of base and height:\n");
                scanf("%f %f", &sizeA, &sizeB);
                result = CalcSRectangle(sizeA, sizeB);
            }

            printf("the Surface is: %d", result);
        }
        else if (option == 3) {     //VOLUME
            printf("what shape is it?\n 1. triangular Prism\n "
                   "2. Cube\n "
                   "3.Rectanglar Prism\n");
            scanf("%i", &shape);

            if (shape == 1){
                printf("give the base and height of the base, of the prism and the height of the prism:\n");
                scanf("%f %f %f", &sizeA, &sizeB, &sizeC);
                result = CalcVolTriangle(sizeA, sizeB, sizeC);
            }

            else if (shape == 2){
                printf("give the size of a side:\n");
                scanf("%f", &sizeA);
                result = CalcVolCube(sizeA);
            }

            else if (shape == 3){
                printf("give the base and height of the base, of the prism and the height of the prism::\n");
                scanf("%f %f %f", &sizeA, &sizeB, &sizeC);
                result = CalcVolRecangle(sizeA, sizeB, sizeC);
            }

            printf("the Volume is: %f", result);
        }

    }while (option!=4);

    printf("Thanks!");

    return 0;
}