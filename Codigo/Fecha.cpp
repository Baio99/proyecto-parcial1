/***********************************************************************
 * Module:  Fecha.cpp
 * Author:  ismae
 * Modified: mi�rcoles, 6 de enero de 2021 17:50:01
 * Purpose: Implementation of the class Fecha
 ***********************************************************************/

#include "Fecha.h"

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getDia()
// Purpose:    Implementation of Fecha::getDia()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getDia(void)
{
   return dia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setDia(int newDia)
// Purpose:    Implementation of Fecha::setDia()
// Parameters:
// - newDia
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setDia(int newDia)
{
   dia = newDia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getMes()
// Purpose:    Implementation of Fecha::getMes()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getMes(void)
{
   return mes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setMes(int newMes)
// Purpose:    Implementation of Fecha::setMes()
// Parameters:
// - newMes
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setMes(int newMes)
{
   mes = newMes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getAno()
// Purpose:    Implementation of Fecha::getAno()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getAno(void)
{
   return ano;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setAno(int newAno)
// Purpose:    Implementation of Fecha::setAno()
// Parameters:
// - newAno
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setAno(int newAno)
{
   ano = newAno;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getHora()
// Purpose:    Implementation of Fecha::getHora()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getHora(void)
{
   return hora;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setHora(int newHora)
// Purpose:    Implementation of Fecha::setHora()
// Parameters:
// - newHora
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setHora(int newHora)
{
   hora = newHora;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getMinutos()
// Purpose:    Implementation of Fecha::getMinutos()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getMinutos(void)
{
   return minutos;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setMinutos(int newMinutos)
// Purpose:    Implementation of Fecha::setMinutos()
// Parameters:
// - newMinutos
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setMinutos(int newMinutos)
{
   minutos = newMinutos;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getSegundos()
// Purpose:    Implementation of Fecha::getSegundos()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getSegundos(void)
{
   return segundos;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setSegundos(int newSegundos)
// Purpose:    Implementation of Fecha::setSegundos()
// Parameters:
// - newSegundos
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setSegundos(int newSegundos)
{
   segundos = newSegundos;
}