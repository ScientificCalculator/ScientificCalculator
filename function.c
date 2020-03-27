int convertDecimalToBinary(int n) {
    int bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0) {
        rem = n % 2;
       // printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rem, n / 2);
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int convertDecimalToOctal(int n)
{
    int octalNumber = 0, i = 1;

    while (n != 0)
    {
        octalNumber += (n % 8) * i;
        n /= 8;
        i *= 10;
    }

    return octalNumber;
}


void decToHexa(int n) 
{    
   	printf("%d in decimal   = ", n);
 // char array to store hexadecimal number 
    char hexaDeciNum[100]; 
      
    // counter for hexadecimal number array 
    int i = 0; 
    while(n!=0) 
    {    
        // temporary variable to store remainder 
        int temp  = 0; 
          
        // storing remainder in temp variable. 
        temp = n % 16; 
          
        // check if temp < 10 
        if(temp < 10) 
        { 
            hexaDeciNum[i] = temp + 48; 
            i++; 
        } 
        else
        { 
            hexaDeciNum[i] = temp + 55; 
            i++; 
        } 
          
        n = n/16; 
    } 
	//printf("%d in decimal   = ", n);
      
    // printing hexadecimal number array in reverse order 
    for(int j=i-1; j>=0; j--) 
        printf("%c" , hexaDeciNum[j]); 
		printf(" in hexadecimal");

} 
int convertBinaryToDecimal(int n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

int convertOctalToDecimal(int n)
{
    int decimalNumber = 0, i = 0;

    while(n != 0)
    {
        decimalNumber += (n%10) * pow(8,i);
        ++i;
        n/=10;
    }

    i = 1;

    return decimalNumber;
}



///////////////////////////////////////////////////
int convertBinaryToOctal( int bin) {
    int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}


int convertOctalToBinary(int oct) {
    int dec = 0, i = 0;
    long long bin = 0;

    // converting octal to decimal
    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }
    i = 1;

   // converting decimal to binary
    while (dec != 0) {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
	
}
int convertBinaryTohexa(int bin) {
	
     int  hex = 0, i = 1, remainder;
    
    while (bin != 0)
    {
        remainder = bin % 10;
        hex = hex + remainder * i;
        i = i * 2;
        bin = bin / 10;
    }
    return hex;
	
}

int convertOctalTohexa(int octal) {
	
     int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};

    int temp_Octal, binary, place;
    char hex[65] = "";
    int rem;

    place = 1;
    binary = 0;
	temp_Octal = octal;

    // First Convert Octal to Binary
     
    while(temp_Octal > 0)
    {
        rem = temp_Octal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        temp_Octal /= 10;

        place *= 1000;
    }
    
    // Convert Binary to Hexadecimal
    
    while(binary > 0)
    {
        rem = binary % 10000;
        switch(rem)
        {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }

        binary /= 10000;
    }
	// strrev(hex);
    return strrev(hex);
	
}
void HexaToDecimal(char hex[32] )
{
	
    int dec, i;
    int  cnt;   /*for power index*/
    int  dig;   /*to store digit*/
	
 cnt=0;
    dec=0;
    for(i=(strlen(hex)-1);i>=0;i--)
    {
        switch(hex[i])
        {
            case 'a':
			case 'A':
                dig=10; break;
            
			case 'b':
			case 'B':
                dig=11; break;
            case 'c':
			case 'C':
                dig=12; break;
            case 'd':
			case 'D':
                dig=13; break;
            case 'e':
			case 'E':
                dig=14; break;
            case 'f':
			case 'F':
                dig=15; break;
            default:
                dig=hex[i]-0x30;
       }
       dec= dec+ (dig)*pow((double)16,(double)cnt);
       cnt++;
   }

   printf("Equivalent Decimal Value is: %d",dec);	
}
void HexaToOctal(char hex[17] )
{

    
    long long octal, bin, place;
    int i = 0, rem, val;

    /* Input hexadecimal number from user */
  
    octal = 0ll;
    bin = 0ll;
    place = 0ll;

    /* Hexadecimal to binary conversion */
    for(i=0; hex[i]!='\0'; i++)
    {
        bin = bin * place;

        switch(hex[i])
        {
            case '0':
                bin += 0;
                break;
            case '1':
                bin += 1;
                break;
            case '2':
                bin += 10;
                break;
            case '3':
                bin += 11;
                break;
            case '4':
                bin += 100;
                break;
            case '5':
                bin += 101;
                break;
            case '6':
                bin += 110;
                break;
            case '7':
                bin += 111;
                break;
            case '8':
                bin += 1000;
                break;
            case '9':
                bin += 1001;
                break;
            case 'a':
            case 'A':
                bin += 1010;
                break;
            case 'b':
            case 'B':
                bin += 1011;
                break;
            case 'c':
            case 'C':
                bin += 1100;
                break;
            case 'd':
            case 'D':
                bin += 1101;
                break;
            case 'e':
            case 'E':
                bin += 1110;
                break;
            case 'f':
            case 'F':
                bin += 1111;
                break;
            default:
                printf("Invalid hexadecimal input.");
        }

        place = 10000;
    }

    place = 1;

    /* Binary to octal conversion */
    while(bin > 0)
    {
        rem = bin % 1000;

        switch(rem)
        {
            case 0:
                val = 0;
                break;
            case 1:
                val = 1;
                break;
            case 10:
                val = 2;
                break;
            case 11:
                val = 3;
                break;
            case 100:
                val = 4;
                break;
            case 101:
                val = 5;
                break;
            case 110:
                val = 6;
                break;
            case 111:
                val = 7;
                break;
        }

        octal = (val * place) + octal;
        bin /= 1000;

        place *= 10;
    }

    
    printf("Octal number = %lld", octal);

   
}
void HexaToBinary(char hex[17])
{
    char  bin[65] = "";
    int i = 0;

    /* Input hexadecimal number from user */
   

    /* Extract first digit and find binary of each hex digit */
    for(i=0; hex[i]!='\0'; i++)
    {
        switch(hex[i])
        {
            case '0':
                strcat(bin, "0000");
                break;
            case '1':
                strcat(bin, "0001");
                break;
            case '2':
                strcat(bin, "0010");
                break;
            case '3':
                strcat(bin, "0011");
                break;
            case '4':
                strcat(bin, "0100");
                break;
            case '5':
                strcat(bin, "0101");
                break;
            case '6':
                strcat(bin, "0110");
                break;
            case '7':
                strcat(bin, "0111");
                break;
            case '8':
                strcat(bin, "1000");
                break;
            case '9':
                strcat(bin, "1001");
                break;
            case 'a':
            case 'A':
                strcat(bin, "1010");
                break;
            case 'b':
            case 'B':
                strcat(bin, "1011");
                break;
            case 'c':
            case 'C':
                strcat(bin, "1100");
                break;
            case 'd':
            case 'D':
                strcat(bin, "1101");
                break;
            case 'e':
            case 'E':
                strcat(bin, "1110");
                break;
            case 'f':
            case 'F':
                strcat(bin, "1111");
                break;
            default:
                printf("Invalid hexadecimal input.");
        }
    }

   
    printf("Binary number = %s", bin);

    
}
