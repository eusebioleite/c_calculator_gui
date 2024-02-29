#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to handle button 1 click event
static void button1_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "1", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
    
}

// Function to handle button 2 click event
static void button2_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "2", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Function to handle button 3 click event
static void button3_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "3", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Function to handle button Division click event
static void buttondiv_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "/", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Function to handle button 4 click event
static void button4_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "4", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Function to handle button 5 click event
static void button5_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "5", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Function to handle button 6 click event
static void button6_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "6", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Function to handle button Multiplication click event
static void buttonmul_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "*", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Function to handle button 7 click event
static void button7_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "7", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Function to handle button 8 click event
static void button8_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "8", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Function to handle button 9 click event
static void button9_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "9", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Function to handle button Addition click event
static void buttonadd_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "+", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Function to evaluate a mathematical expression
char *evaluateExpression(const char *expression) {
    float result = 0.0;  // Initialize result to 0.0
    float operand = 0.0;
    char operator = '+';
    int length = strlen(expression);

    for (int i = 0; i < length; i++) {
        // Skip whitespace
        if (isspace(expression[i])) {
            continue;
        }
        // Check for operator
        else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            operator = expression[i];
        }
        // Parse operand
        else if (isdigit(expression[i])) {
            // Parse entire numeric value of the operand
            char *endptr;
            operand = strtof(&expression[i], &endptr);
            i += (int)(endptr - &expression[i]) - 1;  // Move iterator to the end of the parsed number

            // Apply the operation based on the operator
            switch (operator) {
                case '+':
                    result += operand;
                    break;
                case '-':
                    result -= operand;
                    break;
                case '*':
                    result *= operand;
                    break;
                case '/':
                    if (operand != 0.0) {
                        result /= operand;
                    } else {
                        printf("Error: Division by zero\n");
                        return NULL;
                    }
                    break;
            }
        }
    }

    // Convert float result to string
    char *result_str = (char *)malloc(160 * sizeof(char)); // Allocate memory for the string
    sprintf(result_str, "%.2f", result); // Format the float to a string with two decimal places

    return result_str;
}



// Function to handle button Enter click event
static void buttonenter_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *formula = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);
    gchar *new_text = evaluateExpression(formula);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(formula);
    g_free(new_text);

}

// Function to handle button 0 click event
static void button0_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    // Concatenate "1" to the current text
    gchar *new_text = g_strconcat(current_text, "0", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Function to handle button Clear click event
static void buttonclear_clicked(GtkWidget *widget, gpointer text_view) {
  // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Clear the text buffer
    gtk_text_buffer_set_text(buffer, "", 0);
}

// Function to handle button Subtraction click event
static void buttonsub_clicked(GtkWidget *widget, gpointer text_view) {
    // Cast gpointer to GtkTextView*
    GtkTextView *textView = GTK_TEXT_VIEW(text_view);

    // Get the text buffer from the text view
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(textView);

    // Get the current text from the buffer
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    gchar *current_text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);

    gchar *new_text = g_strconcat(current_text, "-", NULL);

    // Set the updated text back to the buffer
    gtk_text_buffer_set_text(buffer, new_text, -1);

    // Free allocated memory
    g_free(current_text);
    g_free(new_text);
}

// Main function
int main(int argc, char *argv[]) {
    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Hello World");
    gtk_window_set_default_size(GTK_WINDOW(window), 10, 10);
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
    GtkWidget *button1 = gtk_button_new_with_label("1");
    g_signal_connect(button1, "clicked", G_CALLBACK(button1_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons), button1, TRUE, TRUE, 0); // Add Button 1 to the horizontal box

    // Create Button 2
    GtkWidget *button2 = gtk_button_new_with_label("2");
    g_signal_connect(button2, "clicked", G_CALLBACK(button2_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons), button2, TRUE, TRUE, 0); // Add Button 2 to the horizontal box

    // Create Button 3
    GtkWidget *button3 = gtk_button_new_with_label("3");
    g_signal_connect(button3, "clicked", G_CALLBACK(button3_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons), button3, TRUE, TRUE, 0); // Add Button 3 to the horizontal box

    // Create Button Division
    GtkWidget *buttondiv = gtk_button_new_with_label("/");
    g_signal_connect(buttondiv, "clicked", G_CALLBACK(buttondiv_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons), buttondiv, TRUE, TRUE, 0); // Add Button Division to the horizontal box

    // Create a horizontal box container for the buttons
    GtkWidget *hbox_buttons2 = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5); // Horizontal box with 5 pixels spacing
    gtk_box_pack_start(GTK_BOX(vbox), hbox_buttons2, FALSE, FALSE, 0); // Add the horizontal box to the main vertical box

    // Create Button 4
    GtkWidget *button4 = gtk_button_new_with_label("4");
    g_signal_connect(button4, "clicked", G_CALLBACK(button4_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons2), button4, TRUE, TRUE, 0); // Add Button 4 to the horizontal box

    // Create Button 5
    GtkWidget *button5 = gtk_button_new_with_label("5");
    g_signal_connect(button5, "clicked", G_CALLBACK(button5_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons2), button5, TRUE, TRUE, 0); // Add Button 5 to the horizontal box

    // Create Button 6
    GtkWidget *button6 = gtk_button_new_with_label("6");
    g_signal_connect(button6, "clicked", G_CALLBACK(button6_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons2), button6, TRUE, TRUE, 0); // Add Button 6 to the horizontal box

    // Create Button Multiplication
    GtkWidget *buttonmul = gtk_button_new_with_label("*");
    g_signal_connect(buttonmul, "clicked", G_CALLBACK(buttonmul_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons2), buttonmul, TRUE, TRUE, 0); // Add Button Multiplication to the horizontal box

    // Create a horizontal box container for the buttons
    GtkWidget *hbox_buttons3 = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5); // Horizontal box with 5 pixels spacing
    gtk_box_pack_start(GTK_BOX(vbox), hbox_buttons3, FALSE, FALSE, 0); // Add the horizontal box to the main vertical box

    // Create Button 7
    GtkWidget *button7 = gtk_button_new_with_label("7");
    g_signal_connect(button7, "clicked", G_CALLBACK(button7_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons3), button7, TRUE, TRUE, 0); // Add Button 7 to the horizontal box

    // Create Button 8
    GtkWidget *button8 = gtk_button_new_with_label("8");
    g_signal_connect(button8, "clicked", G_CALLBACK(button8_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons3), button8, TRUE, TRUE, 0); // Add Button 8 to the horizontal box

    // Create Button 9
    GtkWidget *button9 = gtk_button_new_with_label("9");
    g_signal_connect(button9, "clicked", G_CALLBACK(button9_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons3), button9, TRUE, TRUE, 0); // Add Button 9 to the horizontal box

    // Create Button Addition
    GtkWidget *buttonadd = gtk_button_new_with_label("+");
    g_signal_connect(buttonadd, "clicked", G_CALLBACK(buttonadd_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons3), buttonadd, TRUE, TRUE, 0); // Add Button Addition to the horizontal box

    // Create a horizontal box container for the buttons
    GtkWidget *hbox_buttons4 = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5); // Horizontal box with 5 pixels spacing
    gtk_box_pack_start(GTK_BOX(vbox), hbox_buttons4, FALSE, FALSE, 0); // Add the horizontal box to the main vertical box

    // Create Button Enter
    GtkWidget *buttonenter = gtk_button_new_with_label("E");
    g_signal_connect(buttonenter, "clicked", G_CALLBACK(buttonenter_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons4), buttonenter, TRUE, TRUE, 0); // Add Button Enter to the horizontal box

    // Create Button 0
    GtkWidget *button0 = gtk_button_new_with_label("0");
    g_signal_connect(button0, "clicked", G_CALLBACK(button0_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons4), button0, TRUE, TRUE, 0); // Add Button 0 to the horizontal box

    // Create Button Clear
    GtkWidget *buttonclear = gtk_button_new_with_label("C");
    g_signal_connect(buttonclear, "clicked", G_CALLBACK(buttonclear_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons4), buttonclear, TRUE, TRUE, 0); // Add Button Clear to the horizontal box

    // Create Button Subtraction
    GtkWidget *buttonsub = gtk_button_new_with_label("-");
    g_signal_connect(buttonsub, "clicked", G_CALLBACK(buttonsub_clicked), textView); // Pass the text view as data
    gtk_box_pack_start(GTK_BOX(hbox_buttons4), buttonsub, TRUE, TRUE, 0); // Add Button Subtraction to the horizontal box



    // Show all widgets
    gtk_widget_show_all(window);

    // Start the GTK main loop
    gtk_main();

    return 0;
}
