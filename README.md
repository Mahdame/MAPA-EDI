# MAPA - Estrutura de Dados I - 2020

Todo dispositivo digital, internamente, trabalha com dados formatados em estruturas específicas para resolver problemas particulares. Na vida profissional de um desenvolvedor, frequentemente, ele irá se deparar com situações nas quais é preciso identificar qual estrutura de dados é a mais adequada para determinada função.

Tomando por base as pilhas, pode-se realizar diversas operações para solucionar problemas. Uma dessas operações é a inversão dos dados de uma lista. Para se inverter a ordem dos dados de uma fila, vetor ou arquivo, basta desempilhar os seus valores e empilhá-los na ordem em que eles foram desempilhados. Ou seja, no mesmo momento em que se desempilha um elemento, deve-se empilha-lo em um novo local para que, ao final, repetindo esse processo, todos os elementos se invertam.

------------

#### INSTRUÇÕES:
No caso das pilhas, as prerrogativas são as seguintes:
1. A inserção de novos elementos é feita sempre ao final da pilha.
2. A remoção de elementos também é feita somente no fim da pilha.
Assim, dizemos que a pilha opera ao estilho Last In, First Out (LIFO), ou seja, o último a entrar é o primeiro a sair.

Você deverá desenvolver um programa em Linguagem C que execute os seguintes passos:
##### 1. Preencher uma pilha com os números do seu R.A.;
##### 2. Imprimir a pilha na ordem em que os elementos foram inseridos (iniciando pela base, e finalizando pelo topo);
##### 3. Desempilhar todos os elementos, inserindo-os em uma segunda estrutura de dados do tipo pilha;
##### 4. Imprimir a nova pilha na ordem em que os elementos foram inseridos (iniciando pela base, e finalizando pelo topo).

------------

**Observação importante: ** seu código-fonte deve declara duas estruturas de dados tipo pilha distintas. A primeira impressão dos dados que seu programa deve fazer está relacionada ao conteúdo da primeira pilha (itens 1 e 2 do passo a passo apresentado acima). Já a segunda impressão dos dados que seu programa fará, está relacionada aos dados que foram inseridos na segunda pilha.

O resultado da execução do seu algoritmo, supondo que seu R.A. é igual ao número  12345678, deverá ser algo parecido com o seguinte:

![](https://sistemasead.unicesumar.edu.br/flex/amfphp/services/Portal/ImagemQuestionario2/QUE_99637_298506_1.png)
 
**Método de entrega:** enviar o código fonte (arquivo.c) nomeando o arquivo com seu nome completo. Exemplo: Pietro_Martins_de_Oliveira.c
