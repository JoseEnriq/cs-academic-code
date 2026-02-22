#include "Data.h"
#include <string.h>

using namespace std;

string converterMes(string M) // converter o mes de numero para extenso
{	
	if(M=="01")
		return "janeiro";
		
	else if(M=="02")
		return "fevereiro";
		
	else if(M=="03")
		return "março";
		
	else if(M=="04")
		return "abril";
	
	else if(M=="05")
		return "maio";
	
	else if(M=="06")
		return "junho";
	
	else if(M=="07")
		return "julho";
	
	else if(M=="08")
		return "agosto";
	
	else if(M=="09")
		return "setembro";
	
	else if(M=="10")
		return "outubro";
	
	else if(M=="11")
		return "novembro";
		
	else
		return "dezembro";
	
}

int StringParaInteiro(string D) // string para inteiro para poder saber o dia da semana
{
	int tam= D.length();
	
	if(tam==2)
	{
		if(D=="01")
			return 1;
		
		if(D=="02")
			return 2;
		
		if(D=="03")
			return 3;
			
		if(D=="04")
			return 4;
			
		if(D=="05")
			return 5;
			
		if(D=="06")
			return 6;
			
		if(D=="07")
			return 7;
			
		if(D=="08")
			return 8;
			
		if(D=="09")
			return 9;
			
		if(D=="10")
			return 10;
			
		if(D=="11")
			return 11;
			
		if(D=="12")
			return 12;
			
		if(D=="13")
			return 13;
			
		if(D=="14")
			return 14;
			
		if(D=="15")
			return 15;
			
		if(D=="16")
			return 16;
			
		if(D=="17")
			return 17;
			
		if(D=="18")
			return 18;
			
		if(D=="19")
			return 19;
			
		if(D=="20")
			return 20;
			
		if(D=="21")
			return 21;
			
		if(D=="22")
			return 22;
			
		if(D=="23")
			return 23;
			
		if(D=="24")
			return 24;
			
		if(D=="25")
			return 25;
			
		if(D=="26")
			return 26;	
		
		if(D=="27")
			return 27;
		
		if(D=="28")
			return 28;
			
		if(D=="29")
			return 29;
		
		if(D=="30")
			return 30;
		
		if(D=="31")
			return 31;
	}
	
	else
	{
		if(D=="2000")
			return 2000;
		
		if(D=="2001")
			return 2001;
			
		if(D=="2002")
			return 2002;
			
		if(D=="2003")
			return 2003;
			
		if(D=="2004")
			return 2004;
			
		if(D=="2005")
			return 2005;
			
		if(D=="2006")
			return 2006;
			
		if(D=="2007")
			return 2007;
			
		if(D=="2008")
			return 2008;
			
		if(D=="2009")
			return 2009;
			
		if(D=="2010")
			return 2010;
			
		if(D=="2011")
			return 2011;
			
		if(D=="2012")
			return 2012;
			
		if(D=="2013")
			return 2013;
			
		if(D=="2014")
			return 2014;
			
		if(D=="2015")
			return 2015;
			
		if(D=="2016")
			return 2016;
			
		if(D=="2017")
			return 2017;
			
		if(D=="2018")
			return 2018;
			
		if(D=="2019")
			return 2019;
			
		if(D=="2020")
			return 2020;
			
		if(D=="2021")
			return 2021;	
		
	}
}

string DiaDaSemana(int D, int M, int A) // dia da semana
{
	int num;
	                                                     
      num= D+ ((153 * (M + 12 * ((14 - M) / 12) - 3) + 2) / 5) 
        + (365 * (A + 4800 - ((14 - M) / 12)))              
        + ((A + 4800 - ((14 - M) / 12)) / 4)                
        - ((A + 4800 - ((14 - M) / 12)) / 100)              
        + ((A + 4800 - ((14 - M) / 12)) / 400)              
        - 32045;
        
    if(num%7==0)
    	return "Segunda-Feira";
    if(num%7==1)
    	return "Terça-Feira";
    if(num%7==2)
    	return "Quarta-Feira";
    if(num%7==3)
    	return "Quinta-Feira";
    if(num%7==4)
    	return "Sexta-Feira";
    if(num%7==5)
    	return "Sábado";
    if(num%7==6)
    	return "Domingo";
    	
}

string mesParaNumero(string mes)
{
	if(mes=="janeiro")
		return "01";
	if(mes=="fevereiro")
		return "02";
	if(mes=="marco")
		return "03";
	if(mes=="abril")
		return "04";
	if(mes=="maio")
		return "05";
	if(mes=="junho")
		return "06";
	if(mes=="julho")
		return "07";
	if(mes=="agosto")
		return "08";
	if(mes=="setembro")
		return "09";
	if(mes=="outubro")
		return "10";
	if(mes=="novembro")
		return "11";
	if(mes=="dezembro")
		return "12";
}

void Data::setDia() 
{
	cin >> dia;
}
string Data::getDia()
{
	return dia;
}

void Data::setMes()
{
	cin >>  mes;
}
string Data::getMes()
{
	return mes;
}

void Data::setAno()
{
	cin >> ano;
}
string Data::getAno()
{
	return ano;
}

void Data::setFormato()
{
	cin >> formato;
}
int Data::getFormato()
{
	return formato;
}

void Data::setConversaoNum(int formOrigi, int formDef) // conversao do inicial de 1 até 4
{
	// 1 e 3
	if(formOrigi==1 || formOrigi==3)
	{
		if(formDef==1)
		{
			conversaoNum= dia + "/" + mes + "/" + "20" + ano;
		}
		
		else if(formDef==2)
		{
			if(formOrigi==1)
				conversaoNum= mes + "/" + dia + "/" + ano;
			
			else
				conversaoNum= mes+ "/" + dia + "/" + "20" + ano;
		}
		
		else if(formDef==3)
		{
			conversaoNum= dia + "/" + mes + "/" + ano[2] +ano[3];
		}
		
		else if(formDef==4)
		{
			if(formOrigi==1)
				conversaoNum= mes + "/" + dia + "/" +  ano[2]+ ano[3];
			
			else
				conversaoNum= mes + "/" + dia + "/" + ano;
		}
		
		else if(formDef==5)
		{
			if(formOrigi==1)
				conversaoNum= dia + " de " + converterMes(mes) + " de " + ano;
			
			else
				conversaoNum= dia + " de " +  converterMes(mes) + " de " + "20" + ano;
		}
		
		else // formato 6
		{
			int diaInt, mesInt, anoInt;
			string diasem;
					
			diaInt= StringParaInteiro(dia);
			mesInt= StringParaInteiro(mes);
			
			if(formOrigi==1)
			{
				anoInt= StringParaInteiro(ano);
					
				diasem= DiaDaSemana(diaInt,mesInt,anoInt);
				
				conversaoNum= diasem + ", " + dia + " de " + converterMes(mes) + " de " + ano;
			}
			
			else
			{
				ano= "20" + ano;
				
				anoInt= StringParaInteiro(ano);
				
				diasem= DiaDaSemana(diaInt,mesInt,anoInt);
				
				conversaoNum= diasem + ", " + dia + " de " + converterMes(mes) + " de " + ano;
			}
				
		}
	}
	
	
	//2 e 4
	if(formOrigi==2 || formOrigi==4)
	{	
		
		if(formDef==1)
		{
			if(formOrigi==2)
				conversaoNum= dia + "/" + mes + "/" + ano;
				
			else
				conversaoNum= dia + "/" + mes + "/" + "20" + ano[0] + ano[1];
		}
		
		else if(formDef==2)
		{
			conversaoNum= mes + "/" + dia + "/" + "20" + ano[0] + ano[1];
 		}
 		
 		else if(formDef==3)
 		{
 			if(formOrigi==2)
 				conversaoNum= dia + "/" + mes + "/" + ano[2] + ano[3];
			
			else
				conversaoNum= dia + "/" + mes + "/" + ano;
				
		 }
		 
		 else if(formDef==4)
		 {
		 	conversaoNum= mes + "/" + dia + "/" + ano[2] + ano[3];
		 }
		 
		 else if(formDef==5)
		 {
		 	if(formOrigi==2)
		 		conversaoNum= dia + " de " + converterMes(mes) + " de " + ano;
		 	
		 	else
		 		conversaoNum= dia + " de " + converterMes(mes) + " de 20" + ano;
		 }
		 
		 else //formato 6 
		 {
		 	int diaInt, mesInt, anoInt;
			string diasem;
		
			diaInt= StringParaInteiro(dia);
			mesInt= StringParaInteiro(mes);
		 	
		 	if(formOrigi==2)
		 	{
				anoInt= StringParaInteiro(ano);
				
				diasem= DiaDaSemana(diaInt,mesInt,anoInt);
				
				conversaoNum= diasem + ", " + dia + " de " + converterMes(mes) + " de " + ano;	
			}
			
			else
			{
				ano= "20" + ano;
					
				anoInt= StringParaInteiro(ano);
				
				diasem= DiaDaSemana(diaInt,mesInt,anoInt);
				
				conversaoNum= diasem + ", " + dia + " de " + converterMes(mes) + " de " + ano;
			}
		 }
		
	}
}

string Data::getConversaoNum()
{
	return conversaoNum;
}

void Data::setConversaoTexto(int formOrigi, int formDef) // conversão de 5 e 6
{
	if(formDef==1)
		conversaoTexto= dia + "/" + mesParaNumero(mes) + "/" + ano;
	
	if(formDef==2)
		conversaoTexto= mesParaNumero(mes) + "/" + dia + "/" + ano;
	
	if(formDef==3)
		conversaoTexto= dia + "/" + mesParaNumero(mes) + "/" + ano[2] + ano[3];
		
	if(formDef==4)
		conversaoTexto= mesParaNumero(mes) + "/" + dia + "/" + ano[2] + ano[3];
	
	if(formDef==5) // indo de 6 pra 5 
		conversaoTexto= dia + " de " + mes + " de " + ano;
	
	if(formDef==6) // indo de 5 pra 6
	{
		dia= "0" + dia;
		string mesdef= mes;
		mes= mesParaNumero(mes);
		
		int diaInt, mesInt, anoInt;
		string diasem;
					
		diaInt= StringParaInteiro(dia);
		mesInt= StringParaInteiro(mes);
		anoInt= StringParaInteiro(ano);
		
		diasem= DiaDaSemana(diaInt,mesInt,anoInt);
		
		conversaoTexto= diasem + ", " + dia + " de " + mesdef + " de " +  ano;
	}

}

string Data::getConversaoTexto()
{
	return conversaoTexto;
}

Data::Data()
{
	dia=mes=ano=conversaoNum=conversaoTexto= "0";
	formato=0;
}

