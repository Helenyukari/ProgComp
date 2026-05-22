# Programação Competitiva — Anotações

## Referências

- Playlist PROTIVA UNESP — Introdução à Programação Competitiva: <https://www.youtube.com/playlist?list=PLJ-Xmtz9xtgsKuJIPrSmxJP0nUS8aYWjR>
- Parte 2 (Primeiro exercício em C++, Python e Java): <https://www.youtube.com/watch?v=qMjYT2xdZ2w&list=PLJ-Xmtz9xtgsKuJIPrSmxJP0nUS8aYWjR&index=3>
  - Contest: <https://vjudge.net/contest/507598> (senha: `lpc2022`)
  - Material: <https://github.com/pedropaiola/unesp-programacao-competitiva>
- USACO Guide (trilha Bronze): <https://usaco.guide/bronze>
- CSES Problem Set: <https://cses.fi/problemset/>
- youkn0wwho Academy (topic list): <https://youkn0wwho.academy/topic-list>
- TheMECP (simulados): <https://themecp.vercel.app/>

## Estrutura de pastas por problema

Convenção usada (ex.: problema 1087 do Beecrowd):

```
Beecrowd/
└── 1087/
    ├── bee1087.py       # solução em Python
    ├── bee1087.cpp      # solução em C++ (se for o caso)
    ├── bee1087.in       # entrada de exemplo
    ├── bee1087.sol      # saída esperada (gabarito)
    └── my.sol           # saída gerada pela sua execução
```

## Comandos

### Criar arquivos do problema

Você pode criar a pasta e os arquivos do problema com uma variável (recomendado):
```bash
PROB=1087
mkdir "$PROB" && cd "$PROB"
touch "bee${PROB}.py" "bee${PROB}.in" "bee${PROB}.sol"
```

Ou usando expansão de chaves (bash):

```bash
mkdir 1087 && cd 1087
touch bee1087.{py,in,sol}
```

Para C++ substitua a extensão quando necessário:

```bash
touch bee1087.cpp bee1087.in bee1087.sol
```

Abrir os arquivos no VS Code (expansão de chaves funciona no bash):

```bash
code bee1087.{py,in,sol}
```

Cole a entrada de exemplo em `bee1087.in` e a saída esperada em `bee1087.sol`.

### Rodar em Python

```bash
python3 bee1087.py < bee1087.in > my.sol
```

Com medição de tempo:

```bash
time python3 bee1087.py < bee1087.in > my.sol
```

### Rodar em C++

Compilar (flags recomendadas pra contest):

```bash
g++ -Wall -std=c++17 bee1087.cpp
```

Executar:

```bash
./a.out < bee1087.in > my.sol
```

Com tempo:

```bash
time ./a.out < bee1087.in > my.sol
```

### Comparar sua saída com o gabarito

```bash
diff bee1087.sol my.sol
```

- **Sem saída** = arquivos idênticos = solução correta.
- Se aparecer algo, são as linhas diferentes.

Pra confirmação explícita:

```bash
diff -s bee1087.sol my.sol
```

Ignorar diferenças triviais (espaços extras no fim de linha, linhas em branco):

```bash
diff -bB bee1087.sol my.sol
```

## Template C++ base

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // código aqui

    return 0;
}
```

> `ios_base::sync_with_stdio(false)` e `cin.tie(NULL)` aceleram bastante a leitura — usar sempre em problemas com I/O grande.

## Situações comuns de entrada

- **Quantidade conhecida (N na primeira linha):** ler N e fazer um for.
- **Até fim do arquivo (EOF):** `while (cin >> x)` em C++ ou `for line in sys.stdin` em Python.
- **Até sentinela (ex.: linha com 0):** `while (cin >> x && x != 0)`.

## Dicas

- Sempre testar localmente com `diff` antes de submeter no juiz.
- Em C++, usar `long long` por padrão quando há somas/multiplicações grandes (evita overflow silencioso).
- Em Python, cuidado com performance — pra problemas com tempo apertado, migrar pra C++.
- Cuidado ao copiar comandos de tutoriais: o `%` ou `$` no início é só o prompt do shell, não faz parte do comando.

TESTE