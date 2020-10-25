//2Detor c++ project
#include<bits/stdc++.h> 
using namespace std;
int countAcid(string aminoSeq) //function to count no of space-sep words in string
{ 
    // breaking input into word using string stream 
    stringstream s(aminoSeq); // Used for breaking words 
    string amino; // to store individual words 
  
    int count = 0; 
    while (s >> amino) 
        count++; 
    return count; 
} 
//function to convert amino acid seq to corresponding N-base seq : 2 parameters - map and string
char* acidCodonConvert(unordred_map<string,string> codon_amino,string sequence)
{
	stringstream s1(sequence);
	string word;
	char baseSeq[count];
	int i=0;
	while(s1>>word)
	{
		baseSeq[i]=word;
		i++;
	}
	return baseSeq;
}
int main()
{
	//declaring and initialising aa sequence for ADA enzyme secretion
	string adaSeq=" ";
	unordered_map<string,string> codon_amino; //map container declaration
	
	//insert elements
	codon_amino["UUU"]="Phe";
	codon_amino["AAU"]="any"
	
	//print map contents
	for(auto x:codon_amino)
	{
		cout<<x.first<<" : "<<x.second<<endl;
	}
	
	//accept user-input amino acid sequence
	string aminoSeq;
	cout<<"Enter Amino Acid Sequence (space seperated) : ";
	cin>>aminoSeq;
	
	//to find no.of amino acids present in sequence
	int count=countAmino(aminoSeq);
	
}
