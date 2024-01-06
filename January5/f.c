#define NAMES(x)\
	x(Tom) x(Jerry) x(Tyke) x(Spike)
int main(){
#define PRINTF(y) puts("Hello , " #y "!");
NAMES(PRINTF)

}
