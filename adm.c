#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int teoria, loop;

    system("color 0a");

    setlocale(LC_ALL, "pt_BR");
    do
    {
        system("cls");
        printf("[1]Burocracia ou estruturalista\n[2]Sistemas e Cibernétioca\n[3]Contigência\n[4]Compportamental\n[5]Schumpeteriana\nSobre qual dessas teorias voce gostaria de saber?\n");
        scanf("%d", &teoria);

        system("color 0b");
        system("cls");

        switch (teoria)
        {
        case 1:
            printf("Burocracia:\nVantagens:\n1- Divisão de trabalho\n2- Hierarquia de autoridade\n3- Racionalidade\n4- Regras e padrões\n5- Compromisso profissional\n6- Impessoalidade");
            printf("\n\nDesvantagens\n1- Apego às regras\n2- Superconformidade\n3- Excesso de papelório\n4- Excesso de formalismo\n5- Dificuldade com clientes\n6- Resistência às mudanças\n7- Exibição de sinais de autoridade\n8- Despersonalização de relacionamento");
            break;

        case 2:
            printf("Sistemas e Cibernétioca\nVisão holística: Enfatiza uma compreensão do sistema como um todo integrado, em vez de partes isoladas.\n\nInterdisciplinaridade\n\nAnálise de sistemas complexos\n\nÊnfase nas interações\n\nAbordagem sistêmica: Analisa as partes do sistema em relação ao todo e como elas se influenciam mutuamente.\n\nHierarquia e níveis de sistema: Reconhece que os sistemas podem estar contidos dentro de sistemas maiores e também podem conter subsistemas menores.\n\nRetroalimentação e autorregulação: Considera a importância dos mecanismos de feedback para o equilíbrio e o ajuste dos sistemas.\n\nAbstração e modelos: Usa modelos e representações abstratas para descrever sistemas complexos.\n\nContexto e ambiente: Reconhece a influência do ambiente externo em um sistema e a importância de considerar o contexto.");
            break;

        case 3:
            printf("Contigência\nAção ou situação imprevista, que não se consegue controlar nem prever; eventualidade, casualidade\n\nNão há uma solução única ou universal para a organização ou tomada de decisões\n\nAs estruturas e práticas organizacionais devem se adaptar às circunstâncias e ao ambiente específico\n\nO ambiente externo exerce influência significativa nas organizações\n\nDecisões e estratégias devem ser baseadas em fatores situacionais\n\nA busca pelo ajuste entre características internas e ambiente é essencial\n\nA abordagem deve ser personalizada de acordo com as necessidades e condições específicas.\n\nlexibilidade e adaptabilidade são fundamentais para a eficácia organizacional\n\nO diagnóstico cuidadoso das situações e do ambiente é necessário");
            break;

        case 4:
            printf("Compportamental\nFoco no comportamento humano nas organizações.\n\nRejeição da visão mecanicista.\n\nImportância das necessidades e motivação humana.\n\nÊnfase na liderança e motivação.\n\nValorização das relações humanas e comunicação.\n\nIncentivo à participação e envolvimento dos colaboradores.\n\nUtilização de técnicas de análise comportamental.");
            break;

        case 5:
            printf("Schumpeteriana\nÊnfase no empreendedorismo e na inovação.\n\nInovação como motor do crescimento econômico.\n\nCiclos econômicos relacionados à inovação.\n\nDestruição criativa como resultado da inovação.\n\nO empreendedor introduz inovações e assume riscos.\n\nImpacto profundo no sistema econômico.");
            break;

        default:
            break;
        }
        printf("\n\n\nQuer ler sobre outra teoria?[1]S[0]N\n");
        scanf("%d", &loop);

    } while (loop == 1);
    return 0;
}