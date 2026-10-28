Organização de Preços de um Supermercado
1. Objetivo do projeto

Este projeto tem como objetivo desenvolver uma aplicação na linguagem C que organize os preços de produtos de um supermercado utilizando dois algoritmos de ordenação: Bubble Sort e Quick Sort.

A atividade foi desenvolvida para demonstrar o funcionamento desses algoritmos e comparar seus resultados na organização dos mesmos dados.

2. Situação-problema

Em um supermercado, organizar os preços dos produtos em ordem crescente pode facilitar a consulta e a comparação de valores.

Para resolver esse problema, o programa utiliza uma lista com 10 preços fictícios e apresenta os valores originais e os resultados obtidos após a ordenação com cada algoritmo.

3. Tecnologias utilizadas
Linguagem de programação C.
Compilador OnlineGDB.
GitHub para hospedagem do código-fonte.
4. Funcionalidades
Apresenta os preços originais dos produtos.
Ordena os preços utilizando o Bubble Sort.
Ordena os mesmos preços utilizando o Quick Sort.
Exibe os resultados dos dois algoritmos para comparação.
5. Como executar o programa
Opção 1: OnlineGDB
Acesse https://www.onlinegdb.com/online_c_compiler.
Selecione a linguagem C.
Copie o conteúdo do arquivo main.c para o editor.
Clique em Run para compilar e executar o programa.
Opção 2: Compilador GCC

Com o GCC instalado, abra o terminal na pasta do projeto e execute:

bash
gcc main.c -o supermercado


Para executar no Linux ou macOS:

bash
./supermercado


No Windows, execute:

bash
supermercado.exe

6. Algoritmos utilizados
Bubble Sort

O Bubble Sort compara elementos vizinhos e troca suas posições quando estão fora de ordem. O processo se repete até que todos os valores estejam ordenados.

Sua complexidade média e de pior caso é O(n²). No melhor caso, com a otimização de parada antecipada implementada neste projeto, a complexidade é O(n).

Quick Sort

O Quick Sort escolhe um elemento como pivô e divide os demais elementos em grupos menores ou iguais ao pivô e maiores que ele. Em seguida, aplica o mesmo processo recursivamente às partes do vetor.

Sua complexidade média é O(n log n), mas, no pior caso, pode chegar a O(n²).

7. Resultados esperados

Os dois algoritmos devem produzir a mesma sequência de preços em ordem crescente.

O programa apresenta:

Os preços originais.
Os preços ordenados pelo Bubble Sort.
Os preços ordenados pelo Quick Sort.
8. Estrutura do projeto
text
projeto-supermercado/
├── main.c
└── README.md

9. Conclusão

O projeto demonstra como os algoritmos Bubble Sort e Quick Sort podem ser utilizados para resolver um problema cotidiano de organização de dados.

Embora ambos produzam o mesmo resultado, utilizam estratégias diferentes de ordenação e apresentam diferenças de desempenho conforme a quantidade e a disposição dos dados.

10. Testes realizados
O programa utiliza 10 preços fictícios de produtos. Os resultados são apresentados em ordem crescente após a execução dos algoritmos Bubble Sort e Quick Sort.

A validação consiste em verificar se ambos produzem a mesma sequência ordenada e se todos os preços originais estão presentes nos resultados.
