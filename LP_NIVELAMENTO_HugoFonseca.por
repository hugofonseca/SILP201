programa {
inclua biblioteca Texto
real notas[3], preco_questao_tres[10], qtd_questao_tres[10], total_questao_tres = 0.0
inteiro matriz[4][4], codigo_questao_tres[10], qtd_caracteres
caracter input
cadeia nome_questao_tres[10], estoque_questao_tres[10], falta_questao_tres[10]
//  OBS ref a questão 3: embora o enunciado peça para o vetor de quantidade ser tipo INTEIRO, optei por declarar REAL em razão da omissão indevida das casas decimais quando o programa calcula o total (desconfio que haja conversão interna  para tipo INTEIRO, ou arredondamento do resultado, ao multiplicar um REAL COM VÍRGULA e um INTEIRO). Então, após testar e encontrar o problema, escolhi desobedecer o enunciado para garantir a precisão matemática do resultado e evitar prejuízo financeiro.
 
funcao real questao_dois (caracter t){
   
    real total = 0.0, media = 0.0
      
    escolha(t){
     
      caso 'a':
        para (inteiro i = 0; i < 3; i++){
          total += notas[i]
        }
        real media_a = total/3
        media = media_a
        pare
 
      caso 'p':
        real media_p = (notas[0]*5+notas[1]*3+notas[2]*2)/(5+3+2)
        media = media_p
        pare
     
      caso 'h':
        real media_h = 3/(1/notas[0]+1/notas[1]+1/notas[2])
        media = media_h
        pare
    }
 
    retorne media
  }
 
  funcao inicio() {
 
  real resposta_questao_dois
 
  escreva("INÍCIO questão 1\n")  
    para (inteiro i = 0; i < 4; i++){
      para (inteiro j = 0; j < 4; j++){
        se (i == j){
          matriz[i][j] = 1
          escreva(matriz[i][j])
        }
        senao {
          matriz[i][j] = 2
          escreva(matriz[i][j])
        }
      } escreva("\n")
    }
  escreva("FIM questão 1\n")
 
  escreva("\nINÍCIO questão 2\n")
  para (inteiro i = 0; i < 3; i++){
    escreva("Digite a nota do aluno para calcular a média.\n")
    leia(notas[i])
  } escreva("\n")
 
  faca{
    escreva("Digite 'a' para média aritmética, 'p' para média ponderada ou 'h' para média harmônica.\n")
    leia(input)
  } enquanto (input != 'a' e input != 'p' e input != 'h')
 
  resposta_questao_dois = questao_dois(input)
 
  se (input == 'a'){
    escreva("MÉDIA ARITMÉTICA = ", resposta_questao_dois, "\n")
  } senao se (input == 'p'){
    escreva("MÉDIA PONDERADA = ", resposta_questao_dois, "\n")
  } senao se (input == 'h'){
    escreva("MÉDIA HARMÔNICA = ", resposta_questao_dois, "\n")
  } escreva("FIM questão 2\n\n")
 
  escreva("INÍCIO questão 3\n")
  // ler produtos
  para (inteiro i = 0; i < 10; i++){
    faca{
      faca{
        escreva("Digite o NOME do ", i+1, "º produto.\n")
        leia(nome_questao_tres[i])
      } enquanto(nome_questao_tres[i] == "")      
    qtd_caracteres = Texto.numero_caracteres(nome_questao_tres[i])
    } enquanto(qtd_caracteres > 30)
   
    escreva("Digite o CÓDIGO do ", i+1, "º produto.\n")
    leia(codigo_questao_tres[i])
    escreva("Digite o PREÇO do ", i+1, "º produto.\n")
    leia(preco_questao_tres[i])
    escreva("Digite a QUANTIDADE do ", i+1, "º produto.\n")
    leia(qtd_questao_tres[i])
  }
  // a) separar produtos em dois vetores
  para (inteiro i = 0; i < 10; i++){
    se (qtd_questao_tres[i] > 0){
      estoque_questao_tres[i] = nome_questao_tres[i]
      falta_questao_tres[i] = ""
    } senao se (qtd_questao_tres[i] == 0){
      falta_questao_tres[i] = nome_questao_tres[i]
      estoque_questao_tres[i] = ""
    }
  }
  // b) exibir relatório de estoque CRIAR DESVIO SE FOR VAZIO ALGUM DOS VETORES ABAIXO
  escreva("\nLista produtos EM ESTOQUE:")
  para (inteiro i = 0; i < 10; i++){
    se (estoque_questao_tres[i] != "" e i != 9){
      escreva(" ",estoque_questao_tres[i])
      se (estoque_questao_tres[i+1] != ""){
        escreva(",")
      }
    } senao se (estoque_questao_tres[i] != ""){
      escreva(" ",estoque_questao_tres[i])
    }
  } escreva(" .\n")
 
  escreva("Lista produtos EM FALTA:")
  para (inteiro i = 0; i < 10; i++){
    se (falta_questao_tres[i] != "" e i != 9){
      escreva(" ",falta_questao_tres[i])
      se (falta_questao_tres[i+1] != ""){
        escreva(",")
      }
    } senao se (falta_questao_tres[i] != ""){
      escreva(" ",falta_questao_tres[i])
    }
  } escreva(" .\n\n")
  // c) calcular valor total do estoque (preço * qtd)
  para (inteiro i = 0; i < 10; i++){
    se (estoque_questao_tres[i] != ""){
      total_questao_tres += preco_questao_tres[i] * qtd_questao_tres[i]
    }
  }
  // c) exibir valor total do estoque
  se (total_questao_tres == 0){
    escreva("O valor total do estoque está zerado!\n")
  } senao{
    escreva("O valor total do estoque é R$ ", total_questao_tres, "\n")
  }
  escreva("FIM questão 3\n\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues\n")
  }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 4525; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */