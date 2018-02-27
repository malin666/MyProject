#include <iostream>

int main(int argc, char** argv) {
    
    // Eine Aufzählung ist ein selbstdefinierter Datentyp. Die Definition einer
    // Aufzählung erfolgt mit dem Schlüsselwort enum. Sie legt die möglichen Werte
    // und gleichzeitig die Namen für diese Werte fest.
    // Bsp.:
    enum Figur{Linie, Rechteck, Ellipse};
    
    // Hiermit wird der Aufzählungstyp Figur definiert. Die in der Liste
    // angegebenen Elemente bezeichnen Konstanten. Ihre Werte ergeben sich
    // automatisch aus der Reihenfolge in der Liste. Die erste Konstante hat den
    // Wert 0, jede weitere Konstante einen um eins höheren Wert als sein
    // Vorgänger.
    //
    // Im obigen Beispiel repräsentiert also Linie den Wert 0, Rechteck den 
    // Wert 1 und Ellipse den Wert 2. Eine Variable vom Typ Figur kann nur einen
    // dieser drei Werte annehmen.
    // 
    // Anwendung finden enums z.B. in switch-case-Strukturen.
    //
    // Die Werte der Konstanten können auch explizit festgelegt werden.
    // Bsp.:
    //
    enum Bound{lower=-1, upper=1};
    //
    // Falls nur die Konstanten definiert werden sollen, kann der Typname 
    // wegfallen.
    // Bsp.:
    enum {OFF, AUS=0, ON, AN=1};
    //
    // Hiermit werden die Konstanten OFF und AUS mit dem Wert 0 sowie die 
    // Konstanten ON und AN mit dem Wert 1 definiert. Dabei ergeben sich die
    // Werte für OFF und ON wie oben implizit.
    
    
    //MOJ KOD
    std::cout << ON << std::endl;
    std::cout << lower << std::endl;
    std::cout << Linie << Rechteck << Ellipse << std::endl;
    
    return 0;
}
