#include <stdio.h>

int string_size( const char* str )
{
    int i=0;
    while(str[i]!=0)
    {
        i++;
    }
    return i;
}

void put_str( char* str, unsigned int pos, const char* replacement)
{
    int i;
    for(i=0;i<string_size(replacement);i++)
    {
        if(pos+i>=string_size(str))
        {
            break;
        }
        str[pos+i]=replacement[i];
    }
}

int find_str( char* str, const char* ref)
{
    int teller;
    int ref_teller=0;
    for(teller=0;teller<string_size(str);teller++)
    {
        char letter1 = str[teller];
        char letter2 = ref[ref_teller];
        if(letter1 == letter2)
        {
            if(ref_teller >= string_size(ref)-2){
                return teller-ref_teller;
            }
            ref_teller++;
        }else{
            ref_teller=0;
        }
    }

    /*Als we niets hebben gevonden, return -1*/
    if(ref_teller == 0)
    {
        return -1;
    }

}

char zin[] = "dit is gredeoen en rood niet";
const char ref_string[] = "groen";

int main()
{
    int pos = find_str(zin, ref_string);
    
    if(pos!=-1)
    {
        printf("%s start na positie %d\n", ref_string, pos);
        put_str(zin, pos, "BLAUW");
        printf("Na vervanging: %s\n", zin);
    }
    else{
        printf("%s is niet gevonden. We vervangen niets.\n", ref_string);
    }
    
    return 1;
}