//Calculadora do Cocera

#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{
	int A;
	while (A=10)
  {
	int a,A;
	cout << "## DIGITE O QUE DESEJA ##" << endl << endl;
	cout << "1 - Conversor de Unidades" << endl;
	cout << "2 - Calculadora Estatistica" << endl;
	cout << "3 - Calculadora de Medidas" << endl;
	cout << "4 - Sair" << endl;
	cin >> a;
	cout << endl;
	 if (a==1)
	 {
	  while (A=10)
	  {
		int b;
		cout << " Digite o que deseja" << endl << endl;
		cout << "1 - Converter Metros para Milhas" << endl;
		cout << "2 - Converter Metros para Polegadas" << endl;
		cout << "3 - Converter Celsius para Kelvin" << endl;
		cout << "4 - Converter Farenheit para Celsius" << endl;
		cout << "5 - Converter Kelvin para Farenheit" << endl;
		cout << "6 - Converter Metros por Segundo para Quilometros por hora" << endl;
		cout << "7 - Converter atm para Pa" << endl;
		cout << "8 - Converter Watt para hp" << endl;
		cout << "9 - Sair deste menu" << endl;
		cin >> b;
		cout << endl;
		if (b==9)
		{
			break;
		}
		if (b==1)
		{
			int A;
			while (A=10)
			{
			 double c,d,e,f,g;
			 cout << "Quer de 1- Metros para Milhas; 2 - Milhas para metros ou 0 - Sair?" << endl;
			 cin >> e;
			 if (e==0)
			 { 
			   break;
			 }
			 if (e==1)
			 {
			   cout << "Digite a quantidade de Metros = ";
			   cin >> c ;
			   cout << endl;
			   d = 1609.34 * c ;
			   cout << endl << "Serao " << d << " milhas";
			   cout << endl;
		     }
		     if (e==2)
		     {
		       cout << "Digite a quantidade de Milhas = ";
			   cin >> f ;
			   g = f / 1609.34 ;
			   cout << endl << "Serao " << g << " metros";
			   cout << endl;
			 }
		    }
		}
		if (b==2)
		{
			int A;
			while (A=10)
			{
			 double h,i,j,k,l ;
			 cout << "Quer de 1- Metros para polegadas 2 - polegadas para metros ou 0 - Sair?" << endl;
			 cin >> h;
			 if (h==0)
			 { 
			   break;
			 }
			 if (h==1)
			 {
			   cout << "Digite a quantidade de Metros = ";
			   cin >> i ;
			   j = i * 39.3701 ;
			   cout << endl << "Serao " << j << " polegadas";
			   cout << endl;
		     }
		     if (h==2)
		     {
		       cout << "Digite a quantidade de Polegadas = ";
			   cin >> k ;
			   l = k / 39.3701 ;
			   cout << endl << "Serao " << l << " metros";
			   cout << endl;
			 }
		    }
		}
		if (b==3)
		{
			int A;
			while (A=10)
			{
			 double m,n,o,p,q;
			 cout << "Quer de 1- Celsius para Kelvin; 2 - Kelvin para Celsius ou 0 - Sair?" << endl;
			 cin >> m;
			 if (m==0)
			 { 
			   break;
			 }
			 if (m==1)
			 {
			   cout << "Digite a temperatura em Celsius = ";
			   cin >> n ;
			   o = 273 + n ;
			   cout << endl << "Serao " << o << " graus Kelvin";
			   cout << endl;
		     }
		     if (m==2)
		     {
		       cout << "Digite a temperatura em Kelvin = ";
			   cin >> p ;
			   q = p - 273 ;
			   cout << endl << "Serao " << q << " graus Celsius";
			   cout << endl;
			 }
		    }
		}
		if (b==4)
		{
			int A;
			while (A=10)
			{
			 double r,s,t,u,v;
			 cout << "Quer de 1- Farenheit para Celsius 2 - Celsius para Farenheit ou 0 - Sair?" << endl;
			 cin >> r;
			 if (r==0)
			 { 
			   break;
			 }
			 if (r==1)
			 {
			   cout << "Digite a temperatura em Farenheit = ";
			   cin >> s ;
			   t = (0.5 * s) - 32 ;
			   cout << endl << "Serao " << t << " graus Celsius";
			   cout << endl;
		     }
		     if (r==2)
		     {
		       cout << "Digite a temperatura em Celsius = ";
			   cin >> u ;
			   v = (u * 1.8 ) + 32 ;
			   cout << endl << "Serao " << v << " graus Farenheit";
			   cout << endl;
			 }
		    }
		}
		if (b==5)
		{
			int A;
			while (A=10)
			{
			 double a,b,c,d,e;
			 cout << "Quer de 1- Kelvin para Farenheit; 2 - Farenheit para Kelvin ou 0 - Sair?" << endl;
			 cin >> a;
			 if (a==0)
			 { 
			   break;
			 }
			 if (a==1)
			 {
			   cout << "Digite a temperatura em Kelvin = ";
			   cin >> b ;
			   c = (0.5 * b) - 273 ;
			   cout << endl << "Serao " << c << " Farenheit graus ";
			   cout << endl;
		     }
		     if (a==2)
		     {
		       cout << "Digite a temperatura em Farenheit = ";
			   cin >> d ;
			   e = (d * 1.8 ) + 273 ;
			   cout << endl << "Serao " << e << " graus Kelvin";
			   cout << endl;
			 }
		    }
		}
		if (b==6)
		{
			int A;
			while (A=10)
			{
			 double a,b,c,d,e;
			 cout << "Quer de 1-m/s para km/h; 2 - km/h para m/s ou 0 - Sair?" << endl;
			 cin >> a;
			 if (a==0)
			 { 
			   break;
			 }
			 if (a==1)
			 {
			   cout << "Digite a velocidade em m/s = ";
			   cin >> b ;
			   c = b * 3.6 ;
			   cout << endl << "Serao " << c << " km/h ";
			   cout << endl;
		     }
		     if (a==2)
		     {
		       cout << "Digite a velocidade em km/h = ";
			   cin >> d ;
			   e = d / 3.6 ;
			   cout << endl << "Serao " << e << " m/s ";
			   cout << endl;
			 }
		    }
		}
		if (b==7)
		{
			int A;
			while (A=10)
			{
			 double a,b,c,d,e;
			 cout << "Quer de 1- atm para Pa  2 - Pa para atm ou 0 - Sair?" << endl;
			 cin >> a;
			 if (a==0)
			 { 
			   break;
			 }
			 if (a==1)
			 {
			   cout << "Digite a pressao em atm = ";
			   cin >> b ;
			   c = b * 101325 ;
			   cout << endl << "Serao " << c << " Pa";
			   cout << endl;
		     }
		     if (a==2)
		     {
		       cout << "Digite a pressao em Pa = ";
			   cin >> d ;
			   e = d / 101325  ;
			   cout << endl << "Serao " << e << " atm";
			   cout << endl;
			 }
		    }
		}
		if (b==8)
		{
			int A;
			while (A=10)
			{
			 double a,b,c,d,e;
			 cout << "Quer de 1- Watt para hp  2 - hp para Watt ou 0 - Sair?" << endl;
			 cin >> a;
			 if (a==0)
			 { 
			   break;
			 }
			 if (a==1)
			 {
			   cout << "Digite a potência em Watt = ";
			   cin >> b ;
			   c = 0.001341 * b ;
			   cout << endl << "Serao " << c << " hp ";
			   cout << endl;
		     }
		     if (a==2)
		     {
		       cout << "Digite a potencia em hp = ";
			   cin >> d ;
			   e = d / 0.001341  ;
			   cout << endl << "Serao " << e << " Watt";
			   cout << endl;
			 }
		    }
		
	  }
     }
     }
     if (a==2)
     {
   	  while (A=10)
   	  {
   	   int b;
   	   cout << "O QUE QUER CALCULAR?" << endl << endl;
   	   cout << "1 - Media" << endl;
   	   cout << "2 - Media ponderada" << endl;
   	   cout << "3 - Variancia" << endl;
   	   cout << "4 - Desvio Padrao" << endl;
   	   cout << "5 - Desvio Padrao Corrigido" << endl;
   	   cout << "6 - Coeficiente de Variaçao" << endl;
   	   cout << "7 - Mediana de Distribuiçao de Frequencias" << endl;
   	   cout << "8 - Moda de Distribuiçao de Frequencias" << endl;
   	   cout << "9 - Curtose" << endl;
   	   cout << "10 - Percentil" << endl;
   	   cout << "11 - Ordem do percentil" << endl;
   	   cout << "12 - Coeficiente de Pearson" << endl;
   	   cout << "13 - Sair" << endl;
       cin >> b;
       cout << endl << endl;
       if (b==13)
        {
        	break;
		}
	   if (b==6)
	   {
	   	    int i,a;
	   	    cout << "Digite a quantidade de numeros a serem utilizados" << endl << endl;
			cin >> i;
			float v[i],s=0,x,d,y=0,cv;
			cout << "Agora digite os numeros" << endl;
			for (a=0; a<i ; a=a+1)
			 {
			   cin >> v[a];
			   s = s + v[a];
			 }
			 x = s/i;
			 for (a=0; a<i; a=a+1)
			 {
			 	y = y + (pow ((v[a]- x ),2));
			 }
			 d = sqrt (y/(i-1));
			 cv = (100 * d)/x;
			 cout << "Seu coeficiente de variacao e " << cv << endl;
	   }
	   if (b==1)
        {
        	int i,a;
        	cout << "Digite a quantidade de numeros a serem utilizados na media" << endl << endl;
			cin >> i;
			float v[i],s=0,x;
			cout << "Agora digite os numeros" << endl;
			for (a=0; a<i ; a=a+1)
			 {
			   cin >> v[a];
			   s = s + v[a];
			 }
			 x = s/i;
			 cout << "Sua media e = " << x << endl;
		}
	   if (b==4)
	   {
	   	    int i,a;
	   	    cout << "Digite a quantidade de numeros a serem utilizados" << endl << endl;
			cin >> i;
			float v[i],s=0,x,d,y=0;
			cout << "Agora digite os numeros" << endl;
			for (a=0; a<i ; a=a+1)
			 {
			   cin >> v[a];
			   s = s + v[a];
			 }
			 x = s/i;
			 for (a=0; a<i; a=a+1)
			 {
			 	y = y + (pow ((v[a]- x ),2));
			 }
			 d = sqrt (y/i);
			 cout << "Seu desvio padrao e = " << d << endl;
	   }
	   if (b==5)
	   {
	   	    int i,a;
	   	    cout << "Digite a quantidade de numeros a serem utilizados" << endl << endl;
			cin >> i;
			float v[i],s=0,x,d,y=0;
			cout << "Agora digite os numeros" << endl;
			for (a=0; a<i ; a=a+1)
			 {
			   cin >> v[a];
			   s = s + v[a];
			 }
			 x = s/i;
			 for (a=0; a<i; a=a+1)
			 {
			 	y = y + (pow ((v[a]- x ),2));
			 }
			 d = sqrt (y/(i-1));
			 cout << "Seu desvio padrao Corrigido e = " << d << endl;
       }
       if (b==3)
	   {
	   	    int i,a;
	   	    cout << "Digite a quantidade de numeros a serem utilizados" << endl << endl;
			cin >> i;
			float v[i],s=0,x,d,y=0;
			cout << "Agora digite os numeros" << endl;
			for (a=0; a<i ; a=a+1)
			 {
			   cin >> v[a];
			   s = s + v[a];
			 }
			 x = s/i;
			 for (a=0; a<i; a=a+1)
			 {
			 	y = y + (pow ((v[a]- x ),2));
			 }
			 d = y/(i-1);
			 cout << "Sua desvio variancia e = " << d << endl;
	   }
	   if (b==2)
	   {
	   	    int i,a,c;
	   	    cout << "Digite a quantidade de numeros a serem utilizados" << endl << endl;
			cin >> i;
			float v[i],s=0,x,d,y=0;
			for (a=0,c=0; a<i,c<i ; a=a+1,c=c+1)
			 {
			   cout << "Digite o numero ";
			   cin >> v[a];
			   cout << "Digite o respectivo peso ";
			   cin >> v[i];
			   s = s + v[i];
			   y = y + (v[a]*v[i]);
			 }
			 x = y/s;
			 cout << "Sua media ponderada e = " << x << endl;
	    }
	    if (b==7)
	    {
	    	float a,c,d,e,n,MD;
	    	cout << "Digite o limite inferior da classe que contem a mediana" << endl;
	    	cin >> a;
	    	cout << "Digite a frequencia acumulada da classe anterior" << endl;
	    	cin >>c;
	    	cout << "Digite a frequencia absoluta da classe da mediana" << endl;
	    	cin >> d;
	    	cout << "Digite a amplitude da classe que contem a mediana" << endl;
	    	cin >> e;
	    	cout << "Digite a quantidade total de informacoes usadas" << endl;
	    	cin >> n;
	    	cout << endl;
	    	MD = a + (((n/2) - c)/d) * e;
	    	cout << "Sua mediana sera = " << MD << endl;
		}
		if (b==8)
		{
			float MO,Lmo,fmo,fa,fp,h;
			cout << "Digite o limite inferior da classe que contem a moda" << endl;
			cin >> Lmo;
			cout << "Digite a frequencia da classe da moda" << endl;
			cin >> fmo;
			cout << "Digite a frequencia absoluta da clase anterior" << endl;
			cin >> fa;
			cout << "Digite a frequencia absoluta da classe posterior" << endl;
			cin >> fp;
			cout << "Digite a amplitude da classe que contem a mediana" << endl;
	    	cin >> h;
			MO = Lmo + ((fmo - fa)/((fmo - fa) + (fmo - fp))) * h;
			cout << "Sua moda sera = " << MO << endl;
		}
		if (b==9)
		{
			 int i,a;
	   	     cout << "Digite a quantidade de numeros a serem utilizados" << endl << endl;
			 cin >> i;
			 float v[i],s=0,x,g,y=0,w=0;
			 cout << "Agora digite os numeros" << endl;
			 for (a=0; a<i ; a=a+1)
			  {
			    cin >> v[a];
			    s = s + v[a];
			  }
			  x = s/i;
			  for (a=0; a<i; a=a+1)
			  {
			  	y = y + (pow ((v[a]- x ),4));
			  }
			  for (a=0; a<i; a=a+1)
			  {
			  	w = w + (pow ((v[a]- x ),2));
			  }
			  g = y / ( pow ((w),2));
			  cout << "Sua curtose e = " << g << endl;
		}
		if (b==10)
		{
			int o;
			cout << "Quer percentil normal (1) ou de distribuicao de frequencias (2)";
			cin >> o;
			if (o==1)
			{
				float Pj,j,n;
				cout << "Diga quantos valores serao deixados a esquerda" << endl;
				cin >> j;
				cout << "Diga quantos valores existem no total" << endl;
				cin >> n;
				cout << endl;
				Pj = (j * (n+1)) / 100;
				cout << "Seu percentil e = " << Pj << endl;
			}
			if (o==2)
			{
				float Pj,Lpj,j,n,Fa,h,fpj;
				cout << "Diga qual o limite inferior da classe que contem o percentil" << endl;
				cin >> Lpj;
				cout << "Diga a ordem do percentil em decimais" << endl;
				cin >> j;
				cout << "Diga o numero de elementos da serie" <<  endl;
				cin >> n;
				cout << "Diga a frequencia acumulada da classe anterior a que contem o percentil" << endl;
				cin >> Fa;
				cout << "Diga a frequencia absoluta da classe que contem o percentil" << endl;
				cin >> fpj;
				cout << "Diga a amplitude da classe" << endl;
				cin >> h;
				cout << endl;
				Pj = Lpj + (((j*n)-Fa)/fpj) * h;
				cout << "Seu percentil e = " << Pj << endl;
	         }
		}
		if (b==11)
		{
			float Pj,Lpj,j,n,Fa,h,fpj;
				cout << "Diga qual o limite inferior da classe que contem o percentil" << endl;
				cin >> Lpj;
				cout << "Diga o percentil " << endl;
				cin >> Pj;
				cout << "Diga o numero de elementos da serie" <<  endl;
				cin >> n;
				cout << "Diga a frequencia acumulada da classe anterior a que contem o percentil" << endl;
				cin >> Fa;
				cout << "Diga a frequencia absoluta da classe que contem o percentil" << endl;
				cin >> fpj;
				cout << "Diga a amplitude da classe" << endl;
				cin >> h;
				cout << endl;
				j = ((((Pj-Lpj)*fpj)/h) + Fa) * (100/n);
				cout << "Sua ordem e " << j << endl;
		}
		if (b==12)
		{
			int n,a;
	        cout << "Digite quantas notas serao lancadas" << endl;
	        cin >> n;
	        cout << "Digite as primeiras notas" << endl;
	        float v1[n],v2[n],s1=0,s2=0,s3=0,s4=0,s5=0,r;
	        for (int a=0; a<n; a=a+1)
	        {
		      cin >> v1[a];
		      s2 = s2 + v1[a];
	        }
	        cout << "Digite as segundas notas" << endl;
	        for (int a=0; a<n; a=a+1)
	        {
		      cin >> v2[a];
		      s3 = s3 + v2[a];
	        }
	        for (int a=0; a<n; a=a+1)
	        {
		      s1 = s1 + (v1[a]*v2[a]);
		      s4 = s4 + pow((v1[a]),2);
		      s5 = s5 + pow((v2[a]),2);
	        }
	        r = ((n*s1)-(s2*s3))/((sqrt((n*s4)-pow((s2),2)))*(sqrt((n*s5)-pow((s3),2))));
	        cout << "O coeficiente de Pearson e " << r << endl;
		}
	  }
     }
     if (a==3)
     {
     	while (A=10)
     	{
     		int c;
     		cout << "Digite o que deseja" << endl << endl;
     		cout << "1- Area de triangulo" << endl;
     		cout << "2- Area de retangulo" << endl;
     		cout << "3- Area de circulo" << endl;
     		cout << "4- Volume de paralelepipedo" << endl;
     		cout << "5- Volume de piramide" << endl;
     		cout << "6- Volume de cilindro" << endl;
     		cout << "7- Volume de esfera" << endl;
     		cout << "8- Area de Losango" << endl;
     		cout << "9- Area de paralelogramo" << endl;
     		cout << "10- Sair" << endl;
     		cin >> c;
     		cout << endl;
     		if (c==10)
     		{
     			break;
			}
			if (c==1)
			{
				double d,e,f,g,p;
				cout << "Digite o 1 lado" << endl;
				cin >> d;
				cout << "Digite o 2 lado" << endl;
				cin >> e;
				cout << "Digite o 3 lado" << endl;
				cin >> f;
				cout << endl;
				p = (d + e + f)/2;
				g = sqrt(p*(p-d)*(p-e)*(p-f));
				cout << "Sua area = " << g << endl;
			} 
		    if (c==2)
		    {
		    	double d,e,f;
		    	cout << "Digite o 1 lado" << endl;
		    	cin >> d;
		    	cout << "Digite o 2 lado" << endl;
		    	cin >> e;
		    	cout << endl;
		    	f = d * e;
		    	cout << "Sua area = " << f << endl;
			}
			if (c==3)
			{
				double e,d;
				cout << "Digite o raio" << endl;
				cin >> e;
				cout << endl;
				d = 3.14 * e * e;
				cout << "Sua area = " << d << endl;
			}
		    if (c==4)
		    {
		    	double e,d,f,g;
		    	cout << "Digite o 1 lado" << endl << endl;
		    	cin >> e;
		    	cout << "Digite o 2 lado" << endl << endl;
		    	cin >> d;
		    	cout << "Digite o 3 lado" << endl << endl;
		    	cin >> f;
		    	cout << endl;
		    	g = e * f * d;
		    	cout << "Seu volume = " << g << endl;
			}
		    if (c==5)
		    {
		    	double e,f,g,h;
		    	cout << "Digite um lado da base" << endl << endl;
		    	cin >> e;
		    	cout << "Digite outro lado da base" << endl << endl;
		    	cin >> f;
		    	cout << "Digite a altura" << endl << endl;
		    	cin >> g;
		    	cout << endl;
		    	h = ( (e * f) * g ) / 3;
		    	cout << "Seu volume = " << h << endl;
			}
		    if (c==6)
		    {
		    	double e,f,g;
		    	cout << "Digite o raio da base" << endl << endl;
		    	cin >> e;
		    	cout << "Digite a altura do cilindro" << endl << endl;
		    	cin >> f;
		    	cout << endl;
		    	g = 3.14 * (e * e) * f;
		    	cout << "Seu volume = " << g << endl;
			}
		    if (c==7)
		    {
		    	double e,f;
		    	cout << "Digite o raio da esfera" << endl << endl;
		    	cin >> e;
		    	cout << endl;
		    	f = (4 * 3.14 * (e * e * e)) / 3;
		    	cout << "Seu volume = " << f << endl;
			}
		    if (c==8)
		    {
		    	double e,f,g;
		    	cout << "Digite uma diagonal" << endl << endl;
		    	cin >> e;
		    	cout << "Digite outra diagonal" << endl << endl;
		    	cin >> f;
		    	cout << endl;
		    	g = (e * f)/2;
		    	cout << "Sua area = " << g << endl;
			}
		    if (c==9)
		    {
		    	double e,f,g,h;
		    	cout << "Digite o tamanho da base" << endl << endl;
		    	cin >> e;
		    	cout << "Digite a altura do paralelogramo" << endl << endl;
		    	cin >> f;
		    	cout << endl;
		    	g = e * f;
		    	cout << "Sua area = " << g << endl;
		    	
			}
		 }
	 }
     if (a==4)
     {
     	break;
	 }
  }
}
