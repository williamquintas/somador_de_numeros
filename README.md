# Somador de Números

Nesta tarefa, o programa receberá como entrada um texto contendo diversas
palavras e números. Deverá retornar, na saída, a soma de todos os números
encontrados. Para isso, algumas regras deverão ser observadas:

1. Um número só é válido se for precedido de espaços. Isso significa que
   `PALAVRA123` não contém um número válido, mas `PALAVRA 123` contém.
1. Um número deve ser seguido de espaço, caractere fim de linha ou fim de
   arquivo, de forma que `123 PALAVRA` gera um número válido mas `123PALAVRA`
   não gera.
1. Um número pode estar em formato ponto flutuante. Assim, `0.123` é um número
   válido. A omissão da parte inteira também é válida, e, portanto, `.123`
   também é um número válido. Pela primeira regra, porém, `PALAVRA.123` não gera
   um número válido.
1. O número pode estar escrito na forma de um fatorial, se for inteiro. Isso
   significa que `5!` representa o número 5 fatorial, isto é, 120.
1. A saída do programa deve ser dada em formato ponto flutuante,
   obrigatoriamente com duas casas decimais (ou seja, duas casas depois da
   vírgula), seguida de um caractere quebra de linha `\n`.


## Como fazer uma outra tarefa usando este template
1. Crie um repositório vazio no Github (sem inicializar o readme nem a licença)
   com o nome da sua tarefa usando a interface web. Vamos chamar esse
   repositório com o nome fantasma de `foobar`.

1. Faça um clone deste repositório para um diretório com o nome de sua tarefa.
   Se sua tarefa se chama foobar, então a linha de comando é:
   `git clone https://github.com/Beethoven-ED/template_unit_test.git foobar`

1. Desvincule sua cópia local deste repositório:
   `git remote remove origin`

1. Vincule sua cópia local ao seu repositório no github:
   `git remote add origin https://github.com/seu_username/foobar.git`

1. Faça as modificações necessárias no código. Use `git add` e `git commit`
   sempre que necessário. Lembre-se de:
   * Modificar o enunciado
   * Adicionar testes de unidade
   * Adicionar um programa-template, se achar necessário.
   * Testar se `make` e `make test` estão funcionando adequadamente.

1. Quando terminar, envie suas modificações ao repositório: `git push
   --set-upstream origin master` (a flag `--set-upstream origin master` só será
   necessária da primeira vez que fizer o `push`).

1. Verifique se as modificações estão todas no Github, no endereço correto.

## Exemplos

Entrada | Saida
------- | -----
`1 2 3` | `6.00\n`
`1.1 OLA MUNDO 12` | `13.10\n`
`5 5OLA 3! 12.5 MUNDO` | `23.50\n`


## Instruções adicionais

1. Vá diretamente ao conjunto de testes para verificar como tratar casos
   limítrofes ou mal-definidos.
1. Lembre-se de seguir as [instruções de submissão](docs/instrucoes.md).
1. Se desejar, proponha novos casos de teste.
