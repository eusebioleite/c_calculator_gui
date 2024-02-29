#include <gtk/gtk.h>

// Function to handle button 1 click event
static void button1_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Set the text in the buffer to "Hello, World!"
    gtk_text_buffer_set_text(buffer, "Hello, World!\n", -1);
}

// Function to handle button 2 click event
static void button2_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Set the text in the buffer to "Hello, New World!"
    gtk_text_buffer_set_text(buffer, "Hello, New World!\n", -1);
}

// Main function
int main(int argc, char *argv[]) {
    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Hello World");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 150);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create a vertical box container for the main layout
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5); // Vertical box with 5 pixels spacing
    gtk_container_add(GTK_CONTAINER(window), vbox);

    // Create a text view
    GtkWidget *textView = gtk_text_view_new();
    gtk_text_view_set_editable(GTK_TEXT_VIEW(textView), FALSE); // Make the text view read-only
    gtk_box_pack_start(GTK_BOX(vbox), textView, TRUE, TRUE, 0); // Add the text view to the main vertical box

    // Create a horizontal box container for the buttons
    GtkWidget *hbox_buttons = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5); // Horizontal box with 5 pixels spacing
    gtk_box_pack_start(GTK_BOX(vbox), hbox_buttons, FALSE, FALSE, 0); // Add the horizontal box to the main vertical box

    // Create Button 1
    GtkWidget *button1 = gtk_button_new_with_label("Button 1");
    g_signal_connect(button1, "clicked", G_CALLBACK(button1_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons), button1, TRUE, TRUE, 0); // Add Button 1 to the horizontal box

    // Create Button 2
    GtkWidget *button2 = gtk_button_new_with_label("Button 2");
    g_signal_connect(button2, "clicked", G_CALLBACK(button2_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons), button2, TRUE, TRUE, 0); // Add Button 2 to the horizontal box

    // Show all widgets
    gtk_widget_show_all(window);

    // Start the GTK main loop
    gtk_main();

    return 0;
}
