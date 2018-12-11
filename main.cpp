#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name ;

    // Request user input.
    cout << "Enter any name to search for it in file of names : " ;
    cin >> name ;
    cout << endl ;

    string rank , RNA , protein ;
    bool any_Rna = false , any_protein = false ;

    // open the file that have CODON.
    ifstream inFileName( "RNA.txt" ) ;

    // passing on all lines.
    while( inFileName >> rank >> RNA  >> protein )
    {
        // Show message if name found in the  CODONS list.
        if( RNA.compare(name) == 0 )
        {
            name = protein;
            cout << "the protein is : "  << name << endl ;
            any_Rna = true;
        }
    }

    // close the file.
    inFileName.close() ;

    // Show message if name not found in the  RNA list.
    if( !any_Rna )
    {
        cout << "Error!" << endl ;
    }
    return 0 ;
}
