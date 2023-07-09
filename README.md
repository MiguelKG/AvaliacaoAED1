# Avaliação 1 - AED
<b>Nome</b> : Miguel Carraro<br/>
<b>Turma</b> : M1

## Problema (LeetCode 748)
<div align="justify">
O desafio solicita uma função que, ao receber uma string de caracteres ( <i>licensePlate</i> ) e um vetor de strings ( <i>words</i> ), retorne a menor palavra
do vetor que contenha todos os caracteres de licensePlate, desconsiderando espaços e caracteres númericos.
</div>

## Testes de Uso
Obs: todas as entradas testadas pelo algoritmo do LeetCode tiveram o retorno esperado.

### Entrada 1 :
char licensePlate[] = "1s3 PSt";<br/>
char *words[] = { "step", "steps", "stripe", "stepple" };

<b>Resultado</b> : steps

### Entrada 2 :
char licensePlate[] = "1s3 456";<br/>
char *words[] = { "looks", "pest", "stew", "show" };

<b>Resultado</b> : pest

### Entrada 3 :
char licensePlate[] = "PrL3AA99999l6e";<br/>
char *words[] = { "parable", "parallelogram", "parallel", "3999996" };

<b>Resultado</b> : parallel
