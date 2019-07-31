#include<iostream>
using namespace std;

int main()
{
	int opc;
	cout<<" BIENBENIDOS A SU CALCULADORA DE MATRICES "<<endl;
	cout<<" QUE OPERACION DESEA HACER "<<endl;
	cout<<endl;
	cout<<" 1. SUMA DE MATRICES. "<<endl;
	cout<<" 2. MULTIPLICACION DE ESCALR POR UNA MATRIZ. "<<endl;
	cout<<" 3. PRODUCTO DE MATRICES. "<<endl;
	cout<<" 4. MATRIZ TRASPUESTA. "<<endl;
	cout<<" 5. RESTA DE MATRICES. "<<endl;
	cout<<" 6. DETERMINANTE DE MATRIZ. "<<endl;
	cin>>opc;
	switch(opc)
	{
		case 1:
		{
			int a, b, c, d, f, g;
	        cout<<" TAMAÑO DE LA PRIMERA MATRIZ. "<<endl;
	        cout<<" FILA = ";
			cin>>a;
			cout<<" COLUMNA = ";
	        cin>>b;
	        cout<<" TAMAÑO DE LA SEGUNDA MATRIZ. "<<endl;
	        cout<<" FILA = ";
			cin>>c;
			cout<<" COLUMNA = ";
	        cin>>d;
	        f=a;
	        g=d;
	        float matriz1[a][b],matriz2[c][d],resultado[f][g];
	        int i,j;
	        if(a==c && b==d)
        	{
        		for(i=0;i<a;i++)
	        	{
	        		for(j=0;j<b;j++)
		        	{
			        	cout<<" DIGUITE ELEMENTOS PARA LA PRIMERA MATRIZ. "<<i<<j<<endl;
			        	cin>>matriz1[i][j];
			        }
		       }
		
	        	for(i=0;i<c;i++)
		        {
		        	for(j=0;j<d;j++)
		        	{
		        		cout<<" DIGUITE ELEMENTOS PARA LA SEGUNDA MATRIZ. "<<i<<j<<endl;
			        	cin>>matriz2[i][j];
					}
		        }
		        system("cls");
		        cout<<" LAS MATRISES QUE DIJITO SON: "<<endl;
		        cout<<endl;
		        cout<<" MATRIZ # 1 "<<endl;
		        for(i=0;i<f;i++)
	        	{
		        	for(j=0;j<g;j++)
		        	{
						cout<<matriz1[i][j];
			        	cout<<" ";
		        	}
			        cout<<endl;
	        	}
	        	cout<<endl<<" MATRIZ # 2 "<<endl;
		        for(i=0;i<f;i++)
	        	{
		        	for(j=0;j<g;j++)
		        	{
						cout<<matriz2[i][j];
			        	cout<<" ";
		        	}
			        cout<<endl;
	        	}
		
		        for(i=0;i<f;i++)
	        	{
		        	for(j=0;j<g;j++)
		        	{
	    				resultado[i][j]=matriz1[i][j]+matriz2[i][j];
		        	}
	        	}
	        	cout<<endl;
	        	cout<<" LA SUMA DE LAS MATRICES ES = "<<endl;
		        for(i=0;i<f;i++)
	        	{
		        	for(j=0;j<g;j++)
		        	{
						cout<<resultado[i][j];
			        	cout<<" ";
		        	}
			        cout<<endl;
	        	}	
        	}
        	else
        	{
	        	cout<<" NO SE PUEDE OPERAR YA QUE NO ES UNA MATRIZ CUADRADA. "<<endl;
	        }
		}
		break;
		case 2:
		{
			int a, b,c;
	        cout<<" TAMAÑO DE LA MATRIZ. "<<endl;
	        cout<<" FILA = ";
			cin>>a;
			cout<<" COLUMNA = ";
	        cin>>b;
	        cout<<" NUMERO ESCALAR "<<endl;
	        cin>>c;
	        float matriz[a][b],resultado[a][b];
	        int i,j;
	        for(i=0;i<a;i++)
		   {
	        	for(j=0;j<b;j++)
	        	{
	        		cout<<" DIGUITE ELEMENTOS PARA LA MATRIZ "<<i<<j<<endl;
		        	cin>>matriz[i][j];
				}
	        }
	        system("cls");
	        cout<<" LAS MATRIZ QUE DIJITO ES: "<<endl;
		    cout<<endl;
	        for(i=0;i<a;i++)
        	{
	        	for(j=0;j<b;j++)
	        	{
    				cout<<matriz[i][j];
		        	cout<<" ";
	        	}
		        cout<<endl;
	       	}
	       	for(i=0;i<a;i++)
        	{
	        	for(j=0;j<b;j++)
	        	{
    				resultado[i][j]= c*matriz[i][j];
	        	}
		        cout<<endl;
	       	}
	       	cout<<" MATRIZ RESULTADO = "<<endl;
	       	for(i=0;i<a;i++)
        	{
	        	for(j=0;j<b;j++)
	        	{
    				cout<<resultado[i][j];
    				cout<<" ";
	        	}
		        cout<<endl;
	       	}
	        
		}	
		break;
		case 3:
		{
			int a,b,c,d,e,f;
	        cout<<" TAMAÑO DE LA PRIMERA MATRIZ. "<<endl;
	        cout<<" FILAS = ";
			cin>>a;
			cout<<" COLUMNAS = ";
	        cin>>b;
	        cout<<" TAMAÑO DE LA SEGUNDA MATRIZ. "<<endl;
	        cout<<" FILAS = ";
			cin>>c;
			cout<<" COLUMNAS = ";
	        cin>>d;
	        e=a;
	        f=d;
	
	        float matriz1[a][b], matriz2[c][d], mresp[e][f];
            int i, j, k, l;
	
        	if(b==c)
	        {  
		        for(i=0;i<a;i++)
		        {
			        for(j=0;j<b;j++)
			        {
			        	cout<<" DIGUITE ELEMENTOS PARA LA SEGUNDA MATRIZ.  "<<i<<j<<endl;
			        	cin>>matriz1[i][j];
		        	}
	        	}
		
	        	for(i=0;i<c;i++)
	        	{
	        		for(j=0;j<d;j++)
		        	{
			        	cout<<" DIGUITE ELEMENTOS PARA LA SEGUNDA MATRIZ.  "<<i<<j<<endl;
			        	cin>>matriz2[i][j];
		        	}
		       }
		       system("cls");
	           cout<<" LAS MATRIZ QUE DIJITO ES: "<<endl;
		       cout<<endl;
		       cout<<" MATRIZ # 1 "<<endl;
		        for(i=0;i<a;i++)
		        {
			        for(j=0;j<b;j++)
			        {
			        	cout<<matriz1[i][j];
			        	cout<<" ";
		        	}
		        	cout<<endl;
	        	}
		        cout<<" MATRIZ # 2 "<<endl;
		        for(i=0;i<c;i++)
		        {
			        for(j=0;j<d;j++)
			        {
			        	cout<<matriz2[i][j];
			        	cout<<" ";
		        	}
		        	cout<<endl;
	        	}
		        for(i=0;i<e;i++)
		        {
		        	for(j=0;j<f;j++)
		            {
				        mresp[i][j]=0;
				        for(k=0; k<b; k++)
			        	{
			        	    mresp[i][j]	=mresp[i][j]+(matriz1[i][k]*matriz2[k][j]);
			        	}
		        	}
	        	}
		        cout<<endl;
		        cout<<" LA MULTIPLICACION DE LAS MATRICES ES: "<<endl;
		        for(i=0;i<e;i++)
	            {
		        	for(j=0;j<f;j++)
		        	{
		        		cout<<mresp[i][j];
		        		cout<<" ";
		        	}
		        	cout<<endl;
	        	}	
	       }
	       else
	       {
	        	cout<<" NO SE PUEDE REALIZAR LA OPERACION YA QUE LAS DIMENCIONES NO COINCIDEN. "<<endl;
        	}
		}
		break;
		case 4:
			
		{
			int a, b;
	        cout<<" TAMAÑO DE LA MATRIZ.  "<<endl;
	        cout<<" FILA = ";
			cin>>a;
			cout<<" COLUMNA = ";
	        cin>>b;
	        float matriz[a][b];
	        int i,j;
	        for(i=0;i<a;i++)
		   {
	        	for(j=0;j<b;j++)
	        	{
	        		cout<<" DIGUITE ELEMENTOS PARA LA MATRIZ. "<<i<<j<<endl;
		        	cin>>matriz[i][j];
				}
	        }
	        system("cls");
	        cout<<" LAS MATRIZ QUE DIJITO ES: "<<endl;
		    cout<<endl;
	        for(i=0;i<a;i++)
        	{
	        	for(j=0;j<b;j++)
	        	{
    				cout<<matriz[i][j];
		        	cout<<" ";
	        	}
		        cout<<endl;
	       	}
	       	cout<<" LA MATRIZ TRASPUESTA ES = "<<endl;
	       	for(i=0;i<a;i++)
        	{
	        	for(j=0;j<b;j++)
	        	{
    				cout<<matriz[j][i];
    				cout<<" ";
	        	}
		        cout<<endl;
	       	}
		}
		break;
		case 5:
		{
			int a, b, c, d, f, g;
	        cout<<" DIGUITE ELEMENTOS PARA LA PRIMERA MATRIZ "<<endl;
	        cout<<" FILA = ";
			cin>>a;
			cout<<" COLUMNA = ";
	        cin>>b;
	        cout<<" DIGUITE ELEMENTOS PARA LA SEGUNDA MATRIZ. "<<endl;
	        cout<<" FILA = ";
			cin>>c;
			cout<<" COLUMNA = ";
	        cin>>d;
	        f=a;
	        g=d;
	        float matriz1[a][b],matriz2[c][d],resultado[f][g];
	        int i,j;
	        if(a==c && b==d)
        	{
        		for(i=0;i<a;i++)
	        	{
	        		for(j=0;j<b;j++)
		        	{
			        	cout<<" DIGUITE ELEMENTOS PARA LA PRIMERA MATRIZ "<<i<<j<<endl;
			        	cin>>matriz1[i][j];
			        }
		       }
		
	        	for(i=0;i<c;i++)
		        {
		        	for(j=0;j<d;j++)
		        	{
		        		cout<<" DIGUITE ELEMENTOS PARA LA SEGUNDA MATRIZ "<<i<<j<<endl;
			        	cin>>matriz2[i][j];
					}
		        }
		        system("cls");
		        cout<<" LAS MATRISES QUE DIJITO SON: "<<endl;
		        cout<<endl;
		        cout<<" MATRIZ # 1 "<<endl;
		        for(i=0;i<f;i++)
	        	{
		        	for(j=0;j<g;j++)
		        	{
						cout<<matriz1[i][j];
			        	cout<<" ";
		        	}
			        cout<<endl;
	        	}
	        	cout<<endl<<" MATRIZ # 2 "<<endl;
		        for(i=0;i<f;i++)
	        	{
		        	for(j=0;j<g;j++)
		        	{
						cout<<matriz2[i][j];
			        	cout<<" ";
		        	}
			        cout<<endl;
	        	}
		
		        for(i=0;i<f;i++)
	        	{
		        	for(j=0;j<g;j++)
		        	{
	    				resultado[i][j]=matriz1[i][j]-matriz2[i][j];
		        	}
	        	}
	        	cout<<endl;
	        	cout<<" LA RESTA DE LAS MATRISES ES = "<<endl;
		        for(i=0;i<f;i++)
	        	{
		        	for(j=0;j<g;j++)
		        	{
						cout<<resultado[i][j];
			        	cout<<" ";
		        	}
			        cout<<endl;
	        	}	
        	}
        	else
        	{
	        	cout<<" NO SE PUEDE OPERAR YA QUE NO ES UNA MATRIZ CUADRAD. "<<endl;
	        }
		}
		break;
		case 6:
		{
			int i,j,k,l,m,n,b; 
            float a[100][100]; 
            float det; 
            cout<<" TAMAÑO DE LA MATRIZ. "<<endl;
	        cout<<" FILA = ";
			cin>>n;
			cout<<" COLUMNA = ";
	        cin>>b;
            if(n==b)
            {
                m=n-1; 
                cout << " INTRODUSCA LOS ELEMENTOS " << endl; 
                for(i=1;i<=n;i++) 
                {  
				    for(j=1;j<=n;j++)  
                    {             
					    cin >> a[i][j];
					}
				} 
                 
                system("cls");
		        cout<<" LAS MATRIZ QUE DIJITO ES: "<<endl;
		        cout<<endl;
		        for(i=1;i<=n;i++) 
                {  
				    for(j=1;j<=n;j++)  
                    {             
					    cout<<a[i][j];
					    cout<<" ";
					}
					cout<<endl;
				} 
                det=a[1][1]; 
                for(k=1;k<=m;k++) 
                {
				    l=k+1; 
                    for(i=l;i<=n;i++) 
                    {
					    for(j=l;j<=n;j++)
						{
						    a[i][j] = ( a[k][k]*a[i][j]-a[k][j]*a[i][k] )/a[k][k];
					    } 
                        det=det*a[k+1][k+1]; 
                    } 
                    cout << endl; 
					           cout << "DETERMINANTE = " << det << endl; 
	        }   
			}
			else
			{
				cout<<" LA MATRIZ DEBE DE SER DE IGUAL DIMENCION "<<endl;
			}
        }
		break;
		default:
		{
			cout<<" LA OPCION INGRESADA NO ES VALIDA "<<endl;
		}	
   }
	system ("pause");
	return 0;
}
