# ListaExerC
Praticando programação em algoritmos C

I - Programa de Seqüências Simples

1. Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.

2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9.

3. Fazer um programa que solicita um número decimal e imprime o correspondente em hexa e octal.

4. Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e imprime no console o correspondente em graus Celsius usando as fórmulas que seguem.

  a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula C=(f-32.0) * (5.0/9.0).
  b) Usar uma variável int para ler o valor em Fahrenheit e a fórmula C=(f-32)*(5/9).

5. Fazer um programa em "C" que solicite 2 números e informe:

  a) A soma dos números;
  b) O produto do primeiro número pelo quadrado do segundo;
  c) O quadrado do primeiro número;
  d) A raiz quadrada da soma dos quadrados;
  e) O seno da diferença do primeiro número pelo segundo;
  f) O módulo do primeiro número.

II - Explorando os Comandos de Controle de Fluxo

1. Faça um programa em "C" que lê dois valores e imprime:

  - se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
  - se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;
  - se ambos forem iguais a mensagem "valores iguais".

2. Fazer um programa que imprime a tabela ASCII (código decimal, código hexa, caracter) para os códigos de 0 a 127.

3. Fazer um programa em "C" que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.
OBS: não use o comando "if" ou o operador de condição "?".

4. Fazer um programa que lê um valor, um operador (+,-,*,/) e outro valor e imprime o resultado da expressão:
{ <valor 1> <operador> <valor 2> }

5. Escrever um programa em "C" que solicita as notas das duas provas feitas por cada um dos alunos de uma turma (as notas tem de estar no intervalo [0 10]) e imprime para cada um a média das notas. O programa deve parar imediatamente após ter sido digitado o valor 50 para a nota da primeira prova.

III - Explorando Comandos do Pré-processador

1. Escrever a seqüência de comandos do pré-processador que define o tipo de dados BOOL (com as constantes TRUE e FALSE) caso isso ainda não tenha sido feito.

2. Faca um programa em "C" que le dois números e utiliza uma função chamada "soma" e outra chamada "subtracao" para imprimir a soma e a diferenca entre os dois números. Ambas funções devem receber dois inteiros como parâmetro e retornar um inteiro como resultado. O programa deve ter duas versões para os protótipos das funções selecionáveis através da definição das constantes:

"KR" (Kernighan e Ritchie) e "ANSI" (padrão ANSI).

IV - Explorando o uso de funções

1. Fazer uma função que cacula a enésima potência de uma variável real x:

f(x, n) = xn

2. Fazer uma função que calcula o fatorial de um número. Implementar uma versão recursiva e uma versão com laço.

3. Dado que podemos calcular ex por:

 ex = 1 + x + x2/2! + x3/3! + ...

Fazer um trecho de programa em "C" que lê um valor para x e calcula o valor de ex. O valor deve ser calculado enquanto o termo calculado for maior que 10E-6.

4. Exercício: fazer um programa em "C" que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).

 1) Opção: a vista com 10% de desconto
 2) Opção: em duas vezes (preço da etiqueta)
 3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).
OBS: fazer uma função que imprime as opções solicita a opção desejada e retorna a opção escolhida. No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção).