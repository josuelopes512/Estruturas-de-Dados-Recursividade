typedef struct Lista TLista;
TLista* criar();
int tamanho(TLista *l);
void inserir(TLista *l, int v);
int remover(TLista *l, int v);
int buscar(TLista *l, int v);
void exibe(TLista *l);
void inserir_pos(TLista *l, int v, int p);
void ordena_bin(TLista *l, int v);
int impar(int n);
int seq(int n);

