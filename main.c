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

	printf("�ŏ��ɋM���̖��O�𔼊p�p���̃��[�}���ŋ����Ă��������B\n�����Ĉ�X�y�[�X���J���A�M���̈�ԍD���ȔN��𐔎��̔��p�p���œ��͂��Ă��������B\n ");
	scanf("%s %d", a.x, &a.age);
	printf("��������͑�O��]�܂Œ��ׂ邱�Ƃ��ł��܂��B");

	
	for( i=0 ; i < 3 ;i ++){
		
		printf("\n ��%d��]�ōD���ȔN��i�΁j:",i+1) ;
		scanf("%d",&nennrei[i]) ;

	
		ryuuichi(a, i) ;
	}

	return 0;
}

void ryuuichi( person p, int i)
{
	int x  ;
	
	printf("�ǂ����n���D���ł����H\n1,�@�Y��\n2,�@����\n") ;

	scanf("%d",&x) ;

    if (nennrei[i] > 40 && x == 1 )
	{
		printf("%s����̈�ԍD���ȔN��� %d��\n", p.x, p.age ) ;
		printf("��������悪�f�f���ʂł��B\n41�Έȏ��ł��A�P��I�������M���ɂ����߂���̂�\n\n\n\n\n\n\n�}�c�R�E�f���b�N�X�l�ł�\n�B") ;
	}
	else if(nennrei[i] > 40 && x == 2 ){

		printf("%s����̍D���ȔN��� %d��\n", p.x, p.age) ;
		
		printf("��������悪�f�f���ʂł��B\n41�Έȏ��ł��A�Q��I�������M���ɂ����߂���̂�\n\n\n\n\n\n\n�N�������l�ł��B") ;
		
		}
	
	else if(nennrei[i] <= 40 && nennrei[i]> 30 &&  x == 1){

		printf("%s����̈�ԍD���ȔN��� %d��\n", p.x, p.age) ;
		
		printf("��������悪�f�f���ʂł��B\n30�΂���40�Έȉ���ł��A�P��I�������M���ɂ����߂���̂�\n\n\n\n\n\n\n�J�Y���[�U�[�l�ł��B") ;

	}

	else if(nennrei[i] <= 40 && nennrei[i] > 30 &&  x == 2){
		
		printf("%s����̈�ԍD���ȔN��� %d��\n", p.x, p.age) ;
		
		printf("��������悪�f�f���ʂł��B\n30�΂���40�Έȉ���ł��A�Q��I�������M���ɂ����߂���̂�\n\n\n\n\n\n\n�T���V���C���r��l�ł��B") ;
		

	}

	else if(nennrei[i] <= 30 && nennrei[i] > 20 && x == 1 ){

		printf("%s����̈�ԍD���ȔN��� %d��\n", p.x, p.age) ;
		
		printf("��������悪�f�f���ʂł��B\n20�΂���30�Έȉ���ł��A�P��I�������M���ɂ����߂���̂�\n\n\n\n\n\n\n�u���]�������ݗl�ł��B") ;
		}

	else if(nennrei[i] <= 30 && nennrei[i] > 20 && x == 2 ){

		printf("%s����̈�ԍD���ȔN��� %d��\n", p.x, p.age) ;
		printf("��������悪�f�f���ʂł��B\n20�΂���30�Έȉ���ł��A�Q��I�������M���ɂ����߂����\n\n\n\n\n\n\n�͉��V�Ďq�l�ł��B") ;
		}

	else if(nennrei[i] <= 20  && x == 1 ){

		printf("%s����̈�ԍD���ȔN��� %d�˂ł��B\n", p.x, p.age) ;
		
		printf("��������悪�f�f���ʂł��B\n20�Έȉ���ł��A�P��I�������M���ɂ����߂���̂�\n\n\n\n\n\n\n\n�R�{ �ʗl�ł��B") ;

		file();
		}

	
else if(nennrei[i] <= 20  && x == 2 ){

		printf("%s����̈�ԍD���ȔN��� %d��\n", p.x, p.age) ;
		
		printf("��������悪�f�f���ʂł��B\n20�Έȉ���ł��A�Q��I�������M���ɂ����߂���̂�\n\n\n\n\n\n\n\n���c���ؗl�ł��B") ;
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