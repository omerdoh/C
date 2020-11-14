 /* Author: Nathan Fan, Sifat Jamaly */
 /* Student number: 040989678 */
 /* CST 8234 C Language */
 /* Lab section 022 */
 /* Assignment 1  */
 /* Part A */
 /* Due: 11/13/2020 */
 /* Submitted: 11/13/2020 */
 /* Professor: Natalie Gluzman */
 /* This file provides the struct Area  */
 /**********************************/

typedef struct Area
{
    int areaCode;
    char areaName[20];
} Area;

Area areaBook[5] = {
    {613, "Ottawa"},
    {416, "Toronto"},
    {647, "Toronto"},
    {519, "Windsor"},
    {905, "Niagra Falls"}
};
