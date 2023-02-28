#include <stdio.h>

int nennrei[3];

int i ;




typedef struct person
{
	char x [31];
	int age;
}person;

void ryuuichi(person p, int i);
void file();

int main(void)
{
	struct person a ;

	printf("最初に貴方の名前を半角英数のローマ字で教えてください。\nそして一個スペースを開け、貴方の一番好きな年齢を数字の半角英数で入力してください。\n ");
	scanf("%s %d", a.x, &a.age);
	printf("ここからは第三希望まで調べることができます。");

	
	for( i=0 ; i < 3 ;i ++){
		
		printf("\n 第%d希望で好きな年齢（歳）:",i+1) ;
		scanf("%d",&nennrei[i]) ;

	
		ryuuichi(a, i) ;
	}

	return 0;
}

void ryuuichi( person p, int i)
{
	int x  ;
	
	printf("どっち系が好きですか？\n1,　綺麗\n2,　可愛い\n") ;

	scanf("%d",&x) ;

    if (nennrei[i] > 40 && x == 1 )
	{
		printf("%sさんの一番好きな年齢は %d才\n", p.x, p.age ) ;
		printf("ここから先が診断結果です。\n41歳以上を打ち、１を選択した貴方にお勧めするのは\n\n\n\n\n\n\nマツコ・デラックス様です\n。") ;
	}
	else if(nennrei[i] > 40 && x == 2 ){

		printf("%sさんの好きな年齢は %d才\n", p.x, p.age) ;
		
		printf("ここから先が診断結果です。\n41歳以上を打ち、２を選択した貴方にお勧めするのは\n\n\n\n\n\n\nクロちゃん様です。") ;
		
		}
	
	else if(nennrei[i] <= 40 && nennrei[i]> 30 &&  x == 1){

		printf("%sさんの一番好きな年齢は %d才\n", p.x, p.age) ;
		
		printf("ここから先が診断結果です。\n30歳から40歳以下を打ち、１を選択した貴方にお勧めするのは\n\n\n\n\n\n\nカズレーザー様です。") ;

	}

	else if(nennrei[i] <= 40 && nennrei[i] > 30 &&  x == 2){
		
		printf("%sさんの一番好きな年齢は %d才\n", p.x, p.age) ;
		
		printf("ここから先が診断結果です。\n30歳から40歳以下を打ち、２を選択した貴方にお勧めするのは\n\n\n\n\n\n\nサンシャイン池崎様です。") ;
		

	}

	else if(nennrei[i] <= 30 && nennrei[i] > 20 && x == 1 ){

		printf("%sさんの一番好きな年齢は %d才\n", p.x, p.age) ;
		
		printf("ここから先が診断結果です。\n20歳から30歳以下を打ち、１を選択した貴方にお勧めするのは\n\n\n\n\n\n\nブルゾンちえみ様です。") ;
		}

	else if(nennrei[i] <= 30 && nennrei[i] > 20 && x == 2 ){

		printf("%sさんの一番好きな年齢は %d才\n", p.x, p.age) ;
		printf("ここから先が診断結果です。\n20歳から30歳以下を打ち、２を選択した貴方にお勧めするの\n\n\n\n\n\n\nは横澤夏子様です。") ;
		}

	else if(nennrei[i] <= 20  && x == 1 ){

		printf("%sさんの一番好きな年齢は %d才です。\n", p.x, p.age) ;
		
		printf("ここから先が診断結果です。\n20歳以下を打ち、１を選択した貴方にお勧めするのは\n\n\n\n\n\n\n\n山本 彩様です。") ;

		file();
		}

	
else if(nennrei[i] <= 20  && x == 2 ){

		printf("%sさんの一番好きな年齢は %d才\n", p.x, p.age) ;
		
		printf("ここから先が診断結果です。\n20歳以下を打ち、２を選択した貴方にお勧めするのは\n\n\n\n\n\n\n\n芦田愛菜様です。") ;
}
}

void file()
{
	FILE* fp;

	char c;

	fp = fopen( "yamamoto_sayaka.txt", "r" );

	while( ( c = fgetc( fp ) ) != EOF )
	{
		printf( "%c", c );
	}

	printf( "\n" );

	fclose( fp );
}