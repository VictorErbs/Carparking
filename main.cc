#include <iostream>

int main() {
    int horaInicial, horaFinal, totalHoras;
    double custoTotal = 0.0;
    bool eDiaDeTrabalho = true;

    std::cout << "Informe a hora de inicio (formato de 24 horas): ";
    std::cin >> horaInicial;

    std::cout << "Informe a hora de termino (formato de 24 horas): ";
    std::cin >> horaFinal;

    std::cout << "E um dia de trabalho? (1 para sim, 0 para nao): ";
    std::cin >> eDiaDeTrabalho;

    // Calcula o total de horas
    if (horaFinal >= horaInicial) {
        totalHoras = horaFinal - horaInicial;
    } else {
        totalHoras = 24 - horaInicial + horaFinal;
    }

    // Aplica as taxas de estacionamento com base nas condicoes fornecidas
    if (eDiaDeTrabalho) {
        if (horaInicial >= 4 && horaFinal <= 23) {
            custoTotal = 5 + (totalHoras - 1) * 1;
        } else if ((horaInicial >= 18 && horaInicial <= 23) || (horaFinal >= 0 && horaFinal <= 6)) {
            custoTotal = totalHoras * 3;
        } else if (horaInicial >= 23 || horaFinal <= 6) {
            custoTotal = totalHoras * 5 * 0.2;
        }
    } else {
        custoTotal = totalHoras * 4;
    }

    std::cout << "Custo total do estacionamento: Total Cost " << custoTotal << std::endl;

    return 0;
}
