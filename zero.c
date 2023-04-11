// Incluindo os arquivos de cabeçalho do GTK
#include<gtk/gtk.h>

// Função que é chamada quando o botão é clicado
static void on_button_clicked (GtkButton *button, gpointer user_data)
{
  // Obtendo o label que foi passado como user_data
  GtkLabel *label = GTK_LABEL (user_data);

  // Alterando o texto do label
  gtk_label_set_text (label, "Olá, mundo!");
}

// Função principal
int main (int argc, char *argv[])
{
  // Inicializando o GTK
  gtk_init (&argc, &argv);

  // Criando uma janela
  GtkWidget *window = gtk_window_new (GTK_WINDOW_TOPLEVEL);

  // Definindo o título da janela
  gtk_window_set_title (GTK_WINDOW (window), "Minha primeira interface");

  // Definindo o tamanho da janela
  gtk_window_set_default_size (GTK_WINDOW (window), 300, 200);

  // Conectando o sinal "destroy" da janela à função gtk_main_quit
  g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);

  // Criando um container vertical
  GtkWidget *vbox = gtk_box_new (GTK_ORIENTATION_VERTICAL, 10);

  // Adicionando o container à janela
  gtk_container_add (GTK_CONTAINER (window), vbox);

  // Criando um label (texto) no container
  GtkWidget *label = gtk_label_new ("Clique no botão");

  // Adicionando o label ao container
  gtk_box_pack_start (GTK_BOX (vbox), label, TRUE, TRUE, 0);

  // Criando um botão no container
  GtkWidget *button = gtk_button_new_with_label ("Clique aqui");

  // Adicionando o botão ao container
  gtk_box_pack_start (GTK_BOX (vbox), button, TRUE, TRUE, 0);

  // Conectando o sinal "clicked" do botão à função on_button_clicked
  g_signal_connect (button, "clicked", G_CALLBACK (on_button_clicked), label);

  // Mostrando todos os widgets da janela
  gtk_widget_show_all (window);

  // Iniciando o loop principal do GTK
}