/*
    จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

    Test case:
        Enter N :
            6
        Enter value[0] :
            19
        Enter value[1] :
            18
        Enter value[2] :
            27
        Enter value[3] :
            15
        Enter value[4] :
            4
        Enter value[5] :
            2
    Output:
        Index:  0  1  2  3  4  5
        Array:  19  #  #  #  2
*/
#include <stdio.h>
int main() {
    int Num[ 100 ] ;
    int n = 0 , i = 0 ;

//array size
    printf( "Test case:\n" ) ;
    printf( "\tEnter N : \n\t    " ) ;
    scanf( "%d", &n ) ;

//scan
    for( i = 0 ; i < n ; i++ ) {
        printf( "\tEnter value[%d] : \n\t    ", i ) ;
        scanf( "%d", &Num[ i ] ) ;
    }//end for loop

//display index  0 to n--
    printf( "Output:\n" ) ;
    printf( "\tIndex: " ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "%d ", i ) ;
    }//end for loop

//Prime number display Array
    printf( "\n\tArray: " ) ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( Num[ i ] == 2 || Num[i] == 3 || Num[ i ] == 5 || Num[ i ] == 7 || Num[ i ] == 11 || Num[ i ] == 13 )
        {
            printf( "%d ", Num[ i ] ) ;
        }//end if loop
        else if ( Num[ i ] % 2 != 0 & Num[ i ] % 3 != 0 & Num[ i ] % 5 != 0 & Num[ i ] % 7 != 0 & Num[ i ] % 11 != 0 & Num[ i ] % 13 != 0 & Num[ i ] % 17 != 0 )
        {
            printf( "%d ", Num[ i ] ) ;
        }//end else if loop
        else
        {
            printf( "# " ) ; // ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน
        }//end else loop
    }//end for loop
    return 0 ;
}//end main function