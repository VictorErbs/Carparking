# Calculadora de Custo de Estacionamento

Este é um programa simples em C++ que calcula o custo total do estacionamento com base nas horas de início e término, além de considerar se é um dia de trabalho ou não.

## Como usar

1. Compile o programa utilizando um compilador C++ de sua preferência.
2. Execute o programa.
3. Siga as instruções fornecidas pelo programa para inserir a hora de início, hora de término e se é um dia de trabalho.
4. O programa calculará automaticamente o custo total do estacionamento com base nas informações fornecidas.
5. O resultado será exibido no console.
6. Utilize horários sem inteiros sem ponto, vírgulas, dois pontos. etc.

## Detalhes do Cálculo

O programa segue as seguintes regras para calcular o custo total do estacionamento:

- Se for um dia de trabalho:
  - Se a hora de início estiver entre 4h e 23h e a hora de término estiver entre 4h e 23h, o custo total é de $5 mais $1 para cada hora adicional.
  - Se a hora de início estiver entre 18h e 23h ou a hora de término estiver entre 0h e 6h, o custo total é de $3 por hora.
  - Se a hora de início for maior ou igual a 23h ou a hora de término for menor ou igual a 6h, o custo total é de $5 multiplicado por 0.2 por hora.
- Se não for um dia de trabalho, o custo total é de $4 por hora.

## Contribuição

Contribuições são bem-vindas! Se você encontrar algum problema ou tiver alguma sugestão de melhoria, fique à vontade para abrir uma issue ou enviar um pull request.

## Autor

Este programa foi desenvolvido por Victor Erbs como parte de um exercício.
