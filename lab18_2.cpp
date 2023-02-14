void myString(char *&A,int N){
	A = new char[N];    
	for(int i = 0; i < N;i++) A[i] = 'A'+i;
}
