#include <iostream>
using namespace std;
int opcion, resp;

bool salida = true;
int main()
{
    do {
        system("cls");
        cout << "Seleccione una opcion" << endl;
        cout << "1. Deportes" << endl;
        cout << "2. Anime" << endl;
        cout << "3. Peliculas" << endl;
        cout << "4. Videojuegos" << endl;
        cout << "5. Salir del programa" << endl;
        cin >> opcion;
        system("cls");
        if (opcion == 5) {
        }
        switch (opcion)
        {
            break;
        case 1:
            system("cls");
            cout << "Estos son algunos tipos de deportes recomendado" << endl;
            cout << "1. Deportes Acuaticos" << endl;
            cout << "2. Deportes Aereos" << endl;
            cout << "3. Deportes Terrestres" << endl;
            cout << "4. Deportes Individuales" << endl;
            cout << "5. Deportes de Equipo" << endl;
            cout << "6. Salir del programa" << endl;
            cin >> opcion;
            system("cls");
            if (opcion == 6) {
              break;
            }
            switch (opcion)
            {
            case 1:
                system("cls");
                cout << "//Estos son algunos ejemplos de Deportes Acuaticos//" << endl;
                cout << endl;
                cout << "1. Natacion" << endl;
                cout << "2. Surf" << endl;
                cout << "3. Esqui acuatico" << endl;
                cin >> opcion;
                system("cls");
                switch (opcion)
                {
                case 1:
                    system("cls");
                    cout << "**Beneficios de la natacion**" << endl;
                    cout << endl;
                    cout << "Potencia la salud mental y emocional" << endl;
                    cout << "Es un ejercicio completo" << endl;
                    cout << "Mejora el aparato respiratorio y cardiovascular" << endl;
                    cout << "Es un quemagrasa comprobado" << endl;
                    cout << endl;
                    break;

                case 2:
                    system("cls");
                    cout << "**Beneficios del Surf**" << endl;
                    cout << endl;
                    cout << "El surf fortalecera tu musculatura, ligamentos y articulaciones" << endl;
                    cout << "Mejorara tu movilidad y coordinacion" << endl;
                    cout << "Practicando surf aumentaras tu resistencia aerobica" << endl;
                    cout << "Reduce el riesgo de lesiones cardiovasculares" << endl;
                    cout << endl;
                    break;

                case 3:
                    system("cls");
                    cout << "**Beneficios del Esqui acuatico**" << endl;
                    cout << endl;
                    cout << "Reducen el estres y la ansiedad" << endl;
                    cout << "Favorecen la conciliacion del sueno mejorando el descanso" << endl;
                    cout << "Aumentan el estado de felicidad y la sensacion de bienestar." << endl;
                    cout << "Ayuda a verse y sentirse mejor con uno mismo" << endl;
                    cout << endl;
                    break;

                }
                break;
            case 2:
                system("cls");
                cout << "//Estos son algunos ejemplos de Deportes Aereos//" << endl;
                cout << endl;
                cout << "1. Aeromodelismo" << endl;
                cout << "2. Parapente" << endl;
                cout << "3. Paracaidismo" << endl;
                cin >> opcion;
                system("cls");
                switch (opcion)
                {
                case 1:
                    system("cls");
                    cout << "**Beneficios de la Aeromodelismo**" << endl;
                    cout << endl;
                    cout << "Mantiene activas las capacidades" << endl;
                    cout << "Favorece la actividad mental" << endl;
                    cout << "Eleva la autoestima" << endl;
                    cout << "Mejora la destreza manual" << endl;
                    cout << endl;
                    break;

                case 2:
                    system("cls");
                    cout << "**Beneficios del Parapente**" << endl;
                    cout << endl;
                    cout << "Aumenta tu equilibrio corporal y un tronco mÃ¡s fuerte" << endl;
                    cout << "Menos estrÃ©s" << endl;
                    cout << "Refuerza la confianza en ti mismo" << endl;
                    cout << " El parapente es una gran forma de quemar calorÃ­as" << endl;
                    cout << endl;
                    break;

                case 3:
                    system("cls");
                    cout << "**Beneficios del Paracaidismo**" << endl;
                    cout << endl;
                    cout << "LiberaciÃ³n de Adrenalina" << endl;
                    cout << "Mejora tu atenciÃ³n y obtÃ©n reflejos felinos" << endl;
                    cout << "Alivia el estrÃ©s" << endl;
                    cout << "Una actividad energizante" << endl;
                    cout << endl;
                    break;

                }
                break;
            case 3:
                system("cls");
                cout << "//Estos son algunos ejemplos de Deportes Terrestres//" << endl;
                cout << endl;
                cout << "1. Ciclismo  " << endl;
                cout << "2. Running " << endl;
                cout << "3. Motocross" << endl;
                cin >> opcion;
                system("cls");
                switch (opcion)
                {
                case 1:
                    system("cls");
                    cout << "**Beneficios del Ciclismo**" << endl;
                    cout << endl;
                    cout << "Oxigena el cerebro y combate el estres" << endl;
                    cout << "Ayuda a dormir mejor" << endl;
                    cout << "Tonifica y fortalece la espalda" << endl;
                    cout << "Corazon fuerte" << endl;
                    cout << endl;
                    break;

                case 2:
                    system("cls");
                    cout << "**Beneficios del Running**" << endl;
                    cout << endl;
                    cout << "Mejora el Aparato Locomotor" << endl;
                    cout << "Hace Mas Eficiente el Sistema Cardiovascular y Respiratorio" << endl;
                    cout << "Fortalece el Sistema Inmune" << endl;
                    cout << "Ayuda a Prevenir Enfermedades" << endl;
                    cout << endl;
                    break;

                case 3:
                    system("cls");
                    cout << "**Beneficios del  Motocross**" << endl;
                    cout << endl;
                    cout << "Mejora tu condiciÃ³n fisica" << endl;
                    cout << "Contribuye a tener mayor agilidad y control de tus movimientos sobre la moto" << endl;
                    cout << "Mayor tacto y mejor control tanto del gas como del freno" << endl;
                    cout << "Perfecciona tu equilibrio" << endl;
                    cout << endl;
                    break;

                }
                break;
            case 4:
                system("cls");
                cout << "//Estos son algunos ejemplos de Deportes Individuales//" << endl;
                cout << endl;
                cout << "1. Futbol" << endl;
                cout << "2. Baloncesto" << endl;
                cout << "3. Waterpolo" << endl;
                cin >> opcion;
                system("cls");
                switch (opcion)
                {
                case 1:
                    system("cls");
                    cout << "**Beneficios del Futbol**" << endl;
                    cout << endl;
                    cout << "Mejora la salud cardiovascular" << endl;
                    cout << "Reduce la grasa corporal y mejora el tono muscular" << endl;
                    cout << "Construye la fuerza muscular" << endl;
                    cout << "Aumenta la fuerza de los huesos" << endl;
                    cout << endl;
                    break;

                case 2:
                    system("cls");
                    cout << "**Beneficios del Baloncesto**" << endl;
                    cout << endl;
                    cout << "Mejora la coordinacion" << endl;
                    cout << "Aumenta la resistencia" << endl;
                    cout << "Desarrollo de la agilidad, habilidad locomotriz y la rapidez de reflejos" << endl;
                    cout << "Una mayor concentracion y una espectacular rapidez de reflejos" << endl;
                    cout << endl;
                    break;

                case 3:
                    system("cls");
                    cout << "**Beneficios del Waterpolo**" << endl;
                    cout << endl;
                    cout << "Aporta resistencia cardiopulmonar" << endl;
                    cout << "Estimula la circulaciÃ³n sanguinea" << endl;
                    cout << "Ayuda a tener la presiÃ³n arterial estable" << endl;
                    cout << "educe el riesgo de enfermedades del corazon" << endl;
                    cout << endl;
                    break;

                }
                break;
            case 5:
                system("cls");
                cout << "//Estos son algunos ejemplos de Deportes de Equipo//" << endl;
                cout << endl;
                cout << "1. Balonmano" << endl;
                cout << "2. Beisbol" << endl;
                cout << "3. Voleibol" << endl;
                cin >> opcion;
                system("cls");
                switch (opcion)
                {
                case 1:
                    system("cls");
                    cout << "**Beneficios del Balonmano**" << endl;
                    cout << endl;
                    cout << "Se trabajan tanto el tren inferior como el superior" << endl;
                    cout << "Desarrolla la coordinacion" << endl;
                    cout << "Fortalece la musculatura" << endl;
                    cout << "Mejora la flexibilidad" << endl;
                    cout << endl;
                    break;
                    break;
                case 2:
                    system("cls");
                    cout << "**Beneficios del Beisbol**" << endl;
                    cout << endl;
                    cout << "Potencia la motricidad, la resistencia y mejora la fuerza muscular" << endl;
                    cout << "Desarrolla la coordinacion, la velocidad y el equilibrio" << endl;
                    cout << "Favorece los reflejos" << endl;
                    cout << "Mejora la atencion" << endl;
                    cout << endl;
                    break;
                    break;
                case 3:
                    system("cls");
                    cout << "**Beneficios del Voleibol**" << endl;
                    cout << endl;
                    cout << "Desarrollo de flexibilidad corporal" << endl;
                    cout << "Aumenta la coordinacion y los reflejos" << endl;
                    cout << "Tonificacion muscular" << endl;
                    cout << "Aumenta resistencia" << endl;
                    cout << endl;
                    break;
                } // case deporte
            }
            break;
        case 2:
            system("cls");
            cout << "Estos son algunos tipos de genero de anime recomendado" << endl;
            cout << "1. Romance" << endl;
            cout << "2. Shonen" << endl;
            cout << "3. Gore" << endl;
            cout << "4. Isekai" << endl;
            cout << "5. Salir del programa" << endl;
            cin >> opcion;
            system("cls");
            if (opcion == 5) {
              break;
            }
            switch (opcion)
            {
                break;
            case 1:
                system("cls");
                cout << "//Estos son algunos ejemplos del genero Romance//" << endl;
                cout << endl;
                cout << "1. Yaoi" << endl;
                cout << "2. Yuri" << endl;
                cout << "3. Romance normal" << endl;
                cin >> opcion;
                system("cls");
                switch (opcion)
                {
                    break;
                case 1:
                    system("cls");
                    cout << "//Estos son algunos ejemplos del genero Yaoi//" << endl;
                    cout << endl;
                    cout << "1. Sasaki to Miyano" << endl;
                    cout << "2. Given" << endl;
                    cout << "3. Love Stage!!" << endl;
                    cin >> opcion;
                    system("cls");
                    switch (opcion) {
                    case 1:
                        system("cls");
                        cout << "**Sinopsis de Sasaki to Miyano**" << endl;
                        cout << endl;
                        cout << "Miyano es un joven acomplejado por sus facciones femeninas y extremadamente timido, hasta que inicia una relacion de" << endl;
                        cout << "amistad con Sasaki, un extrovertido chico con el que comparte aficion por el BL. Esta nueva pasion en comun hara que" << endl;
                        cout << "ambos se acerquen cada vez mas y que su relacion vaya mas alla de una mera amistad." << endl;
                        cout << endl;
                        cout << "**PRECAUCION NO VER ESTE ANIME CON SU FAMILIA**" << endl;
                        cout << endl;
                        break;
                    case 2:
                        system("cls");
                        cout << "**Sinopsis de Given**" << endl;
                        cout << endl;
                        cout << "Justo cuando esta empezando a hastiarse de la guitarra y el baloncesto que tanto adoraba, Uenoyama se encuentra con" << endl;
                        cout << "Mafuyu, que esta abrazado a una guitarra estropeada.Despues de arreglarsela, no puede evitar sentir cierta simpatia hacia el." << endl;
                        cout << "Entonces le oye cantar... y su voz se le clava en lo mas hondo del alma..." << endl;
                        cout << endl;
                        cout << "**PRECAUCION NO VER ESTE ANIME CON SU FAMILIA**" << endl;
                        cout << endl;
                        break;
                    case 3:
                        system("cls");
                        cout << "**Sinopsis de Love Stage!!**" << endl;
                        cout << endl;
                        cout << "Izumi Sena es un estudiante universitario que suena con convertirse en mangaka. " << endl;
                        cout << "Toda su familia esta en el negocio del entretenimiento y creen que el deberia hacer carrera alli, pero resulta que este no piensa asi." << endl;
                        cout << "Sin embargo, diez anos atras, por ciertas circunstancias, estuvo presente en el rodaje de un anuncio de boda. En dicho comercial hizo el rol de una nina que tenia que atrapar el ramo de novia, siendo co-estrella infantil de Ryoma Ichijo. " << endl;
                        cout << "Ahora, la compania detras de esa publicidad desea recrear una nueva version con la nina y el nino de ese entonces, lo que significa para Izumi siendo chico llevar un vestido de novia. El nino de aquel comercial, ya todo un apuesto idol, Ryoma Ichijo, " << endl;
                        cout << "esulta estar enamorado de Izumi e incluso despues de descubrir el hecho que no es una chica sino chico, sus sentimientos no disminuyen, sino todo lo contrario..." << endl;
                        cout << endl;
                        cout << "**PRECAUCION NO VER ESTE ANIME CON SU FAMILIA**" << endl;
                        cout << endl;
                        break;
                    }
                    break;
                case 2:
                    system("cls");
                    cout << "//Estos son algunos ejemplos del genero Yuri//" << endl;
                    cout << endl;
                    cout << "1. Sakura Trick" << endl;
                    cout << "2. Citrus" << endl;
                    cout << "3. Bloom Into You" << endl;
                    cin >> opcion;
                    system("cls");
                    switch (opcion) {
                    case 1:
                        system("cls");
                        cout << "**Sinopsis de Sakura Trick**" << endl;
                        cout << endl;
                        cout << "Esta serie es una de las mas importantes de la nueva generacion. Seguimos a Haruka Takayama y a Yuu Sonoda, amigas inseparables desde que estaban en la escuela primaria." << endl;
                        cout << "Sin embargo, cuando se encuentran nuevamente en la secundaria, terminan en asientos opuestos a cada lado del salon." << endl;
                        cout << "Gracias a esta distancia, su relacion evoluciona poco a poco, y lo que conocian como amistad, ahora es romance. Pero no todo es color de rosa, y las chicas tendran que ocultar su relacion ante sus amigos y una hermana mayor muy celosa." << endl;
                        cout << endl;
                        cout << "**PRECAUCION NO VER ESTE ANIME CON SU FAMILIA**" << endl;
                        cout << endl;
                        break;
                    case 2:
                        system("cls");
                        cout << "**Sinopsis de Citrus**" << endl;
                        cout << endl;
                        cout << "Citrus es uno de los anime mas recientes de esta lista. Sigue la historia de Yuzu Aihara, una joven que luego de que su madre se volviese a casar, tiene que trasladarse de escuela y empezar una nueva vida. " << endl;
                        cout << "Esto, Yuzu lo toma como una oportunidad de empezar de cero y finalmente conocer al amor de su vida. No obstante, se transfiere a una escuela de solamente chicas, y alli conoce a Mei Aihara, la presidenta del consejo de estudiantes. " << endl;
                        cout << "Es una joven intimidante y hermosa, que le roba su primer beso. Pero las sorpresas no terminan alli, puesto que cuando Yuzu regresa a casa, descubre que Mei es su nueva pariente; la hija del nuevo esposo de su madre. Â¿Que significara esto para ambas?" << endl;
                        cout << endl;
                        cout << "**PRECAUCION NO VER ESTE ANIME CON SU FAMILIA**" << endl;
                        cout << endl;
                        break;
                    case 3:
                        system("cls");
                        cout << "**Sinopsis de Bloom Into You**" << endl;
                        cout << endl;
                        cout << "Bloom Into You cuenta la historia de Yuu, una joven que era una gran fanatica del manga shoujo (tipo romantico) y espera con ansias el dia en que un chico declare su amor por ella." << endl;
                        cout << "Sin embargo, cuando un nino de su escuela le declara a Yuu, ella no siente nada, esta super decepcionada y confundida." << endl;
                        cout << "Todo cambia tan pronto como Yuu ve a la hermosa Nanami rechazar a un pretendiente con madurez y confianza. Inspirada por esto, decide pedirle ayuda a la nina. Despues de eso, su romance *shoujo* comienza de una manera que nunca podria haber imaginado." << endl;
                        cout << endl;
                        cout << "**PRECAUCION NO VER ESTE ANIME CON SU FAMILIA**" << endl;
                        cout << endl;
                        break;
                    }
                    break;
                case 3:
                    system("cls");
                    cout << "//Estos son algunos ejemplos del genero romance//" << endl;
                    cout << endl;
                    cout << "1. Go Toubun no Hanayome(Las quintillisas)" << endl;
                    cout << "2. Toradora" << endl;
                    cout << "3. Clannad" << endl;
                    cin >> opcion;
                    system("cls");
                    switch (opcion) {
                    case 1:
                        system("cls");
                        cout << "**Sinopsis de Go Toubun no Hanayome(Las quintillisas)**" << endl;
                        cout << endl;
                        cout << "Fuutarou Uesugi es un estudiante pobre y antisocial. Un dia, consigue un trabajo como tutor de una familia rica que es nueva en la ciudad." << endl;
                        cout << "Las futuras estudiantes de Fuutarou se revelan como sus nuevas companeras de clase, Itsuki Nakano, y sus cuatro hermanas Quintillizas." << endl;
                        cout << "A pesar de la pobre primera impresion de Fuutarou por parte de las chicas, intenta seriamente hacer su trabajo, solo para descubrir que tienen calificaciones terribles y personalidades terriblemente complicadas." << endl;
                        cout << endl;
                        break;
                    case 2:
                        system("cls");
                        cout << "**Sinopsis de Toradora**" << endl;
                        cout << endl;
                        cout << "Ryuuji Takasu es un amable estudiante de secundaria al que le gustan las tareas domesticas; pero en contraste con su naturaleza amable, tiene un rostro intimidante que a menudo hace que se le etiquete como delincuente. " << endl;
                        cout << "Por otro lado esta Taiga Aisaka, una estudiante pequena y con aspecto de muneca, que es cualquier cosa menos una chica linda y fragil. Dotada de una katana de madera y de una personalidad aguerrida, Taiga es conocida en toda la escuela como Â«Tigre compactoÂ». " << endl;
                        cout << "Un dia, un error embarazoso hace que los dos estudiantes se crucen. Ryuuji descubre que Taiga tiene un lado dulce: esta enamorada del popular vicepresidente, Yuusaku Kitamura, que resulta ser su mejor amigo. Pero las cosas se vuelven mas locas cuando Ryuuji revela que esta enamorado de Minori Kushieda, la mejor amiga de Taiga." << endl;
                        cout << endl;
                        break;
                    case 3:
                        system("cls");
                        cout << "**Sinopsis de Clannad**" << endl;
                        cout << endl;
                        cout << "Clannad nos cuenta la historia de Tomoya Okazaki, un estudiante de tercer ano de secundaria al que la suerte, desgraciadamente, no le sonrie: su madre murio cuando era joven, dejando asi su custodia a Naoyuki, su padre, quien, al verse afectado por esta tragica perdida, queda hundido en el juego y el alcohol. " << endl;
                        cout << "La relacion entre padre-hijo se complica hasta el punto en que Tomoya decide frecuentar su casa lo menos posible. Cuando se dirige a su escuela, conoce a Nagisa Furukawa, una estudiante que cursa el tercer ano de secundaria, al igual que el. Desde aqui las cosas empiezan a cambiar mucho para el. " << endl;
                        cout << "Empieza una amistad entre los dos, gracias a ello hacen muchos nuevos amigos a los cuales les ayudaran con sus problemas y como alcanzar los suenos de cada uno." << endl;
                        cout << endl;
                        break;
                    }
                }
                break;
                case 2:
                    system("cls");
                    cout << "//Estos son algunos ejemplos del genero Shonen//" << endl;
                    cout << endl;
                    cout << "1. Naruto" << endl;
                    cout << "2. One Piece" << endl;
                    cout << "3. Bleach" << endl;
                    cin >> opcion;
                    system("cls");
                    switch (opcion) {
                    case 1:
                        system("cls");
                        cout << "**Sinopsis de Naruto**" << endl;
                        cout << endl;
                        cout << "Es una serie Manga que cuenta la historia de un joven ninja hiperactivo llamado Naruto Uzumaki que hara todo lo posible por ascender al maximo grado ninja de su aldea con el proposito de ser reconocido como alguien importante dentro de su aldea." << endl;
                        cout << "Dentro de el reside encerrado en su interior el Zorro de Nueve Colas (Kyubi), un demonio que ataco a la Aldea Oculta de la Hoja matando a muchas personas. Por lo que que Naruto es maltratado ahora por los ciudadanos de la aldea por considerarle como el propio Kyubi." << endl;
                        cout << "La historia sigue a Naruta y al crecimiento indidividual de sus amigos junto a su desarrollo como ninja. Naruto se relaciona con Sasuke Uchiha y Sakura Haruno, quienes forman el Equipo 7 junto a su sensei Kakashi Hatake. " << endl;
                        cout <<"Mientras ellos aprenden nuevas habilidades de ninja, moldear su chakra y conocer a nueva gente y escenarios, Naruto lucha por su sueno. Durante su camino conoceran a los tres legendarios ninja: Jiraiya, Orochimaru y Tsunade; y se encontraran con varios enemigos con los que poder superarse dia a dia." << endl;
                        cout << endl;
                        break;
                    case 2: 
                        system("cls");
                        cout << "**Sinopsis de One Piece**" << endl;
                        cout << endl;
                        cout << "Sigue las aventuras de Monkey D. Luffy, un chico que suena con ser el rey de los piratas y que se hace a la mar en un bote para buscar la tripulacion que le pueda ayudar en ello. La serie mas entretenida de television, ahora tambien en manga." << endl;
                        cout << endl;
                        break;
                    case 3: 
                        system("cls");
                        cout << "**Sinopsis de Bleach**" << endl;
                        cout << endl;
                        cout << "La serie narra las aventuras de un adolescente llamado Ichigo Kurosaki, un estudiante de quince anos que tiene la habilidad de interactuar con los espiritus. " << endl;
                        cout << "Una noche, Ichigo se encuentra con una Shinigami (æ­»ç¥ž, lit. dios de la muerte) llamada Rukia Kuchiki." << endl;
                        cout << endl;
                        break;
                    }
                    break;
                case 3:
                    system("cls");
                    cout << "//Estos son algunos ejemplos del genero Gore//" << endl;
                    cout << endl;
                    cout << "1. Another" << endl;
                    cout << "2. Mirai Nikki" << endl;
                    cout << "3. Uzumaki" << endl;
                    cin >> opcion;
                    system("cls");
                    switch (opcion) {
                    case 1:
                        system("cls");
                        cout << "**Sinopsis de Another**" << endl;
                        cout << endl;
                        cout << "En 1972, un estudiante popular en la clase de Yomiyama North Middle School llamado Misaki fallecio durante el ano escolar. Desde entonces, la ciudad de Yomiyama ha estado envuelta por una temerosa atmosfera. Como si cada habitante, especialmente en la escuela secundaria, ocultaran algo." << endl;
                        cout << "Veintiseis anos mas tarde, Kouichi Sakakibara, de 15 anos, se traslada a la clase 3-3 de esta misma secundaria, solo para descubrir que un ambiente extrano y sombrio rodea a todos los estudiantes. Este se siente atraido por la misteriosa estudiante Mei Misaki, a pesar de que todos la ignoran." << endl;
                        cout << "Como todos los buenos protagonistas, no le hace caso a las advertencias y comienza a acercarse no solo a ella, sino tambien a la verdad detras del horrible fenomeno que ocurre en la clase 3-3 de Yomiyama North." << endl;
                        cout << endl;
                        cout << "//PRECAUCION ESTE TIPO DE ANIME NO ES RECOMENDABLE PARA PERSONAS SENCIBLES//" << endl;
                        cout << endl;
                        break;
                    case 2:
                        system("cls");
                        cout << "**Sinopsis de Mirai Nikki**" << endl;
                        cout << endl;
                        cout << "Mirai Nikki es uno de esos animes que promete, pero a medida que avanza en su historia, el desarrollo va decayendo. Quizas no es uno de los mejores animes gore pero sin dudas, vale la pena verlo aunque sea una vez. La historia sigue a Yukiteru Amano, un estudiante poco social que escribe en un diario digital todo lo que sucede en su dia. " << endl;
                        cout << "Su unico amigo es un ser llamado Deus Ex Machina, el dios del espacio y tiempo. Un dia se entera que Deus Ex Machina esta muriendo y debe encontrar a un sucesor para colocar en su cargo.La cosa es que decide regalarle a Yukiteru un diario que predice su futuro hasta dentro de 90 dias." << endl;
                        cout << " AsÃ­ como el, hay otro con diarios que predicen futuros pero en condiciones distintas. La cuestion es que los 12 participantes deben asesinarse entre si, para que el ultimo en pie ocupe el nuevo puesto de un dios." << endl;
                        cout << endl;
                        cout << "//PRECAUCION ESTE TIPO DE ANIME NO ES RECOMENDABLE PARA PERSONAS SENCIBLES//" << endl;
                        cout << endl;
                        break;
                    case 3:
                        system("cls");
                        cout << "**Sinopsis de Uzumaki**" << endl;
                        cout << endl;
                        cout << "La historia relata sobre un pueblo en el que ha caido una maldicion extrana. Los habitantes se obsesionan de algun modo con los espirales. Asesinatos, accidentes, suicidios, mutilaciones, muertes y todo tipo de desgracias se desencadenan en forma de espirales, mientras se intenta detener este retorcido mal." << endl;
                        cout << "Esta proxima adaptacion del famoso mangaka Junji Ito te va a incomodar de sobremanera y seguro te sacara un buen susto. Si no puedes esperar, aprovecha para leer el manga de esta obra, o disfruta la adaptaciÃ³n japonesa en formato de pelÃ­cula. Tan desagradable como encantadora." << endl;
                        cout << endl;
                        cout << "//PRECAUCION ESTE TIPO DE ANIME NO ES RECOMENDABLE PARA PERSONAS SENCIBLES//" << endl;
                        cout << endl;
                        break;
                    }
                     break;
                case 4:
                    system("cls");
                    cout << "//Estos son algunos ejemplos del genero Gore//" << endl;
                    cout << endl;
                    cout << "1. Konosuba" << endl;
                    cout << "2. No Game, No Life" << endl;
                    cout << "3. Mushoku Tensei" << endl;
                    cin >> opcion;
                    system("cls");
                    switch (opcion) {
                    case 1:
                        system("cls");
                        cout << "**Sinopsis de Konosuba**" << endl;
                        cout << endl;
                        cout << "Luego de morir de forma humillante, el estudiante recluso Kazuma Satou se halla a si mismo ante la diosa Aqua. Ella le da dos opciones, o seguir hacia el cielo, o tener una vida nueva en un mundo magico. " << endl;
                        cout << "Por supuesto, Kazuma decide reencarnar, convirtiendose en un guerrero con la tarea de salvar al mundo del mal. Para hacer el tema mas complicado, Aqua tambien esta en este universo, y Kazuma pronto descubrira que la *diosa* es una completa inutil como companera." << endl;
                        cout << endl;
                        break;
                    case 2:
                        system("cls");
                        cout << "**Sinopsis de No Game, No Life**" << endl;
                        cout << endl;
                        cout << "Sora y Shiro son hermanos, y son reconocidos en el mundo de los videojuegos por ser una entidad invencible llamada *Blank*." << endl;
                        cout << "Para ellos, el mundo real es otro juego, pero al recibir un correo electronico que los reta a un juego virtual de ajedrez, sus vidas cambian drasticamente. " << endl;
                        cout << "Los hermanos son transportados a un reino misterioso donde conocen a Tet, el Dios de los Juegos." << endl;
                        cout << endl;
                        break;
                    case 3:
                        system("cls");
                        cout << "**Sinopsis de Mushoku Tensei**" << endl;
                        cout << endl;
                        cout << "El protagonista es un hombre de 34 anos que siempre ha sido un bueno para nada. Durante su vida, ha lamentado sus decisiones y suena con llegar a mucho mas, hasta que un accidente fatal con un autobus le da una segunda oportunidad. " << endl;
                        cout << "Ahora ha sido reencarnado en otro mundo como un bebe, y cuenta con habilidades magicas. Solo le falta un poco de valentia para cumplir sus suenos, y emprendera el viaje de su vida, contando con todos sus anos de experiencia en el cuerpo de un nino pequeno." << endl;
                        cout << endl;
                        break;
                    }
            } // case de anime
           break;
          case 3:
            system("cls");
            cout << "tipos de peliculas segun su genero. " << endl;
            cout << "1. por su estilo." << endl;
            cout << "2. por formato." << endl;
            cout << "3. por ambientacion." << endl;
            cout << "4. salir de la seleccion de peliculas. " << endl;
            cin >> opcion;
            if(opcion == 4){
              break;
            }
            switch(opcion){
              case 1:
                system("cls");
                cout << "En la clasificacion de estilo podemos encontrar." << endl;
                cout << "1. Accion." << endl;
                cout << "2. Aventura." << endl;
                cout << "3. Ciencia ficcion." << endl;
                cout << "4. comedia." << endl;
                cout << "5. No-ficcion." << endl;
                cout << "6. Drama." << endl;
                cout << "7. Fantasia." << endl;
                cout << "8. musical." << endl;
                cout << "9. Suspenso." << endl;
                cout << "10. Terror." << endl;
                cout << "11. salir de la seleccion." << endl;
                cin >> opcion;
              if(opcion == 11){
                break;
              }
                switch(opcion){
                  case 1:
                    system("cls");
                    cout << "Accion: " << endl;
                    cout << "En este genero prevalecen altas dosis de adrenalina con una buena carga de movimiento,                          fugas, acrobacias, peleas, guerras, persecuciones y una lucha contra el mal." << endl;
                    cout << "algunas peliculas de accion que se puede mencionar son las siguientes: " << endl;
                    cout << "-The warriors, los amos de la noche." << endl;
                    cout << "-Robocop." << endl;
                    cout << "-Operacion dragon." << endl;
                    cout << "-Acorralado." << endl;
                    cout << "-Termintor 2: El juego final. " << endl;
                  break;
                  case 2:
                    system("cls");
                    cout << "Aventura: " << endl;
                    cout << "Similares a las de accion, predominan las nuevas experiencias y situaciones." << endl;
                    cout << "Algunas peliculas de aventura que se puede mencionar son las siguientes:" << endl;
                    cout << "-En busca del arca perdida." << endl;
                    cout << "-Parque jurasico." << endl;
                    cout << "-Piratas del caribe: La maldicion de la perla." << endl;
                    cout << "-King Kong." << endl;
                    cout << "-Stardust." << endl;
                  break;
                  case 3:
                    system("cls");
                    cout << "Ciencia ficcion." << endl;
                    cout << "Basados en fenomenos imaginarios, en la ciencia ficcion son usuales los extraterrestres,                        sociedades inventadas, otros planetas…" << endl;
                    cout << "Algunas peliculas de ciencia ficcion son:" << endl;
                    cout << "-La guerra de las galaxias." << endl;
                    cout << "-Encuentros de la tercera fase." << endl;
                    cout << "-Wall-E." << endl;
                    cout << "-Mad-max: furia en la carretera." << endl;
                    cout << "-Un viaje alucinante al fondo de la mente." << endl;
                  break;
                  case 4:
                    system("cls");
                    cout << "Comedia:"<< endl;
                    cout << "Disenadas especificamente para provocar la risa o la alegria entre los espectadores."
<< endl;
                    cout << "Estas son unas de las peliculas de comedia:" << endl;
                    cout << "-Punales por la espalda." << endl;
                    cout << "-Erase una vez... en Hollywood." << endl;
                    cout << "-Intocable."<< endl;
                    cout << "-Green Book." << endl;
                    cout << "-EL lado bueno de las cosas." << endl;
                  break;
                  case 5:
                    system("cls");
                    cout << "No-ficcion:" << endl;
                    cout << "documental. Este genero analiza un hecho o situacion real sin ficcionarlo." << endl;
                    cout << "unas recomendaciones:" << endl;
                    cout << "-'Libranos del mal (Deliver Us From Evil)' (2006)" << endl;
                    cout << "-'I Am not Your Negro' (2016)" << endl;
                    cout << "-'The Square' ('Al Midan', 2013)" << endl;
                    cout << "-'The Thin Blue Line' (1988)" << endl;
                    cout << "-'Shoah' (1985)" << endl;
                  break;
                  case 6:
                    system("cls") ;
                    cout << "Drama:" << endl;
                    cout << "Los dramas se centran en desarrollar el problema o problemas entre los diferentes protagonistas. Este es quizas uno de los generos cinematograficos mas amplios de la lista. No predominan las aventuras o la accion, aunque pueden aparecer puntualmente Generalmente se basan en desarrollar la interaccion y caracteres humanos"<< endl;
                    cout << "unas recomendaciones:" << endl;
                    cout << "-El Padrino (1972)" << endl;
                    cout << "-Lo que el viento se llevo (1939)" << endl;
                    cout << "-Apocalypse Now (1979)" << endl;
                    cout << "-12 años de esclavitud (2013)" << endl;
                    cout << "-Taxi Driver (1976)"<< endl;
                  break;
                  case 7:
                    system("cls");
                    cout << "Fantasia:" << endl;
                    cout << "En ellas se incluyen personajes irreales o totalmente inventados, inexistentes en nuestra realidad. Tambien podemos conocer este genero de cine como “fantastico”. No se basa en ideas que puedan llegar a materializarse." << endl;
                    cout << "Recomendacione:" <<endl;
                    cout << "-Saga cinematografica de Harry Potter (2001-2011)" << endl;
                    cout << "-Trilogia de El señor de los anillos (2001, 2002, 2003)" << endl;
                    cout << "-El laberinto del fauno (2006)" << endl;
                    cout << "-Bestias del sur salvaje (2012)" << endl;
                    cout << "-La forma del agua (2017)" << endl;
                  break;
                  case 8:
                    system("cls");
                    cout << "Musical:" << endl;
                    cout << "Las películas que cortan su desarrollo natural con fragmentos musicales son protagonistas de este genero" << endl;
                    cout << "Recomendaciones:" << endl;
                    cout << "-Los Muppets (2011)" << endl;
                    cout << "-Charlie y la fabrica de chocolate (2005)" << endl;
                    cout << "-Dirty Dancing (1987)" << endl;
                    cout << "-Granujas a todo ritmo (1980)" << endl;
                    cout << "-Moulin Rouge (2001)" << endl;
                  break;
                  case 9:
                    system("cls");
                    cout << "Suspenso:" << endl;
                    cout << "Conocido tambien como intriga, estas peliculas se desarrollan rapidamente, y todos sus elementos giran entorno un mismo elemento intrigante." << endl;
                    cout << "Aqui recomendaciones:" << endl;
                    cout << "-'Seven' (Se7en)' (1995)" << endl;
                    cout << "-'El silencio de los corderos' ('The Silence of the Lambs', 1991)" << endl;
                    cout << "-'The French Connection. Contra el imperio de la droga' ('The French Connection', 1971)" << endl;
                    cout << "-'Oldboy' (2003)" << endl;
                    cout << "-'Rashomon' (1950)" << endl;
                  break;
                  case 10:
                    system("cls");
                    cout << "Terror" << endl;
                    cout << "Su principal objetivo es causar miedo, horror, incomodidad o preocupacion." << endl;
                    cout << "Recomendaciones:" << endl;
                    cout << "-'La matanza de Texas' ('The Texas Chainsaw Massacre', 1974)" << endl;
                    cout << "-'Al final de la escalera' ('The Changeling', 1980)" << endl;
                    cout << "-'Scream. Vigila quien llama' ('Scream', 1996)" << endl;
                    cout << "-'Babadook' ('The Babadook', 2014)" << endl;
                    cout << "-'28 dias despues' ('28 Days Later', 2002)"  << endl;
                  break;
                }
              break; //case 1 por su estilo
              case 2:
                system("cls");
                cout << "En este formato se encuentra: " << endl;
                cout << "1. Cine mudo." << endl;
                cout << "2. Cinema sonoro." << endl;
                cout << "3. cine 2D." << endl;
                cout << "4. Peliculas 3d" << endl;
                cout << "5. Animacion." << endl;
                cout << "6. salir de la seleccion." << endl;
                cin >> opcion;
                if(opcion == 6){
                  break;
                }
                switch(opcion){
                  case 1:
                    system("cls");
                    cout << "Cine mudo:" << endl;
                    cout << "Las peliculas que se incluyen en este genero cinematografico no disponen de una grabacion de sonido. Solamente están compuestas por imagenes." << endl;
                    cout << "Recomendaciones:" << endl;
                    cout << "-Luces de la ciudad (1931)" << endl;
                    cout << "-Tiempos modernos (1936)" << endl;
                    cout << "-Y el mundo marcha (1928)" << endl;
                    cout << "-El circo (1928)" << endl;
                    cout << "-El cameraman (1928)" << endl;
                  break;
                  case 2:
                    system("cls");
                    cout << "Cinema sonoro." << endl;
                    cout << "Al contrario que el cine mudo, en este genero las películas incorporan una grabacion de sonido sincronizada con las imagenes." << endl;
                    cout << "Recomendaciones:"<< endl;
                    cout << "-The Great dictator (1940) Charles Chaplin." << endl;
                    cout << "-Singing in the rain (1952) Stanley Donnen, Gene Kelly" << endl;
                    cout << "-Silent movie (1976) Mel Brooks." << endl;
                    cout << "-The artist (2011) Michel Hazanavicius." << endl;
                  break;
                  case 3:
                    system("cls");
                    cout << "Cine 2D" << endl;
                    cout << "Cine proyectado en dos dimensiones: altura y fondo." << endl;
                    cout << "Recomendaciones:" << endl;
                    cout << "-AKIRA (1988)" << endl;
                    cout << "-El Rey León (1994)" << endl;
                    cout << "-Mulan (1998)" << endl;
                    cout << "-El principe de Egipto (1998)" << endl;
                    cout << "-Aladdin (1992)" << endl;
                  break;
                  case 4:
                    system("cls");
                    cout << "Peliculas 3D" << endl;
                    cout << "En estas peliculas se suma el ancho a las otras dimensiones, siendo asi una pelicula 3D." << endl;
                    cout << "Recomendaciones:" << endl;
                    cout << "-ToyStory" << endl;
                    cout << "-Avatar" << endl;
                    cout << "-Tron:Legacy" << endl;
                    cout << "-Jurassic park" << endl;
                    cout << "-Titanic" << endl;
                  break;
                  case 5:
                    system("cls");
                    cout << "Animacion" << endl;
                    cout << "Peliculas que se componen de fotogramas hechos a mano y que, pasados rapidamente uno detras de otro, producen la ilusion de movimiento o video. Pueden ser hechas a mano (tradicionalmente) o mediante ordenador." << endl;
                    cout << "Recomendaciones:" << endl;
                    cout << "-¿Quién engano a Roger Rabbit?" << endl;
                    cout << "-South Park: Mas grande, mas largo y sin cortes" << endl;
                    cout << "-La LEGO pelicula (2014)" << endl;
                    cout << "-¡Rompe Ralph! (2012)" << endl;
                    cout << "-Shrek (2001)" << endl;
                  break;
                }
              break; // case 2 por formato.
              case 3:
                system("cls");
                cout << "Se tiene lo siguiente por clasificacion de ambientacion." << endl;
                cout << "1.Religiosas" << endl;
                cout << "2.Futuristas" << endl;
                cout << "3.Policiacas" << endl;
                cout << "4.Historicas" << endl;
                cout << "5.Deportivas" << endl;
                cout << "6.Salir de la seleccion" << endl;
                cin >> opcion;
                if (opcion == 6){
                  break;
                }
                switch(opcion){
                  case 1:
                    system("cls");
                    cout << "Religiosas" << endl;
                    cout << "Su tematica esta enfocada a una religion." << endl;
                    cout << "Recomendaciones:" << endl;
                    cout << "-Priceless (2016) PG" << endl;
                    cout << "-Dios no esta muerto 2 (2016)" << endl;
                    cout << "-No me averguenzo (2016)" << endl;
                    cout << "-Milagros del cielo (2016)" << endl;
                    cout << "-¿Crees? (2015)" << endl;     
                  break;
                  case 2:
                    system("cls");
                    cout << "Futuristas" << endl;
                    cout << "Tienen lugar en epocas futuras, y sus personajes pueden ser realistas o ficticios." << endl;
                    cout << "Recomendaciones:" << endl;
                    cout << "-‘Interstellar’" << endl;
                    cout << "-‘Wall-E’" << endl;
                    cout << "-Tenet" << endl;
                    cout << "-Dune" << endl;
                    cout << "-‘Rompenieves (Snowpiercer)’" << endl;
                  break;
                  case 3:
                    system("cls");
                    cout << "policiacas" << endl;
                    cout << "Suelen tener lugar en una escena del crimen y se centran en resolverlo." << endl;
                    cout << "Recomendaciones:" << endl;
                    cout << "-Arma fatal (Edgar Wright, 2007)" << endl;
                    cout << "-El infierno del odio (Akira Kurosawa, 1963)" << endl;
                    cout << "-Seven (Se7en) (David Fincher, 1995)" << endl;
                    cout << "-Sed de mal (Orson Welles, 1958)" << endl;
                    cout << "-El silencio de los corderos (Jonathan Demme, 1991)" << endl;
                  break;
                  case 4:
                    system("cls");
                    cout << "Historicas" << endl;
                    cout << "Se ambientan en epocas determinadas, con recreaciones de personas, hechos, lugares o argumentos." << endl;
                    cout << "Recomendaciones" << endl;
                    cout << "-‘12 años de esclavitud’ (Steve McQueen, 2013)" << endl;
                    cout << "-‘300’ (Zack Snyder, 2006)" << endl;
                    cout << "-‘Apocalypse Now’ (Francis Ford Coppola, 1979)" << endl;
                    cout << "-‘Cartas desde Iwo Jima’ (Clint Eastwood, 2006)" << endl;
                    cout << "-'Centauros del desierto’ (John Ford, 1956)" << endl;
                  break;
                  case 5:
                    system("cls");
                    cout << "Deportivas" << endl;
                    cout << "Recomendaciones:" <<endl;
                    cout << "-'Carros de fuego' ('Chariots of Fire', 1981)" << endl;
                    cout << "-'Un domingo cualquiera' ('Any Given Sunday', 1999)" << endl;
                    cout << "-'The Damned United' (2009)" << endl;
                    cout << "-'El luchador' ('The Wrestler', 2008)" << endl;
                    cout << "-'Senna' (2010)" << endl;
                  break;
                }
              break; //case 3 por ambientacion
            }
            break; // case de peliculas
          case 4:
            system("cls");
            cout << "Existen diversas clases de videojugos." << endl;
            cout << "Hay diversas formas de jugar videojuegos: con dispositivos moviles y consolas por ejemplo." << endl;
            cout << "1.Accion" << endl;
            cout << "2.Disparos" <<endl;
            cout << "3.Estrategia" << endl;
            cout << "4.Simulacion" << endl;
            cout << "5.Deporte" << endl;
            cout << "6.Carreras" << endl;
            cout << "7.Aventura" << endl;
            cout << "8.Rol" << endl;
            cout << "9.Musical" <<endl;
            cout << "10.Puzzles" << endl;
            cout << "11.Salir de la selección" << endl;
            cin >> opcion;
            if (opcion == 11){
              break;
            }
            switch(opcion){
              case 1:
                system("cls");
                cout << "Juegos de accion" << endl;
                cout << "Engloba juegos en los que su mecanica consiste en la ejecucion de una o varias acciones concretas. Por ejemplo: la accion de saltar para esquivar obstaculos y aplastar enemigos." << endl;
                cout << "Recomendaciones:" << endl;
                cout << "-Call of Duty: Warzone" << endl;
                cout << "-Apex Legends" << endl;
                cout << "-Spellbreak" << endl;
                cout << "-DC Universe Online" << endl;
                cout << "-Vigor" << endl;
              break;
              case 2:
                system("cls");
                cout << "Juegos de Disparos" << endl;
                cout << "Obviamente los juegos de disparos implican accion, pero al estar enfocados unicamente en operar armas de fuego y granadas, constituyen un propio genero por su cuenta. Ademas, dependiendo del punto de vista del jugador queda por completo modificada la jugabilidad, lo cual también separa a este genero del genero de accion convencional." << endl;
                cout << "Recomendaciones:" <<endl;
                cout << "-Metroid Prime" << endl;
                cout << "-Halo: Combat Evolved Anniversary" << endl;
                cout << "-BioShock" << endl;
                cout << "-GoldenEye 007" << endl;
              break;
              case 3:
                system("cls");
                cout << "Juegos de estrategia" <<endl;
                cout << "Lo que caracteriza a los videojuegos de estrategia no es la rapidez de los reflejos, sino la rapidez mental y el ingenio para administrar recursos de un modo eficiente hasta alcanzar los objetivos planteados en cada partida. Se divide en dos subgéneros principales: videojuegos de estrategia en tiempo real y videojuegos de estrategia por turnos." << endl;
                cout << "Recomendaciones" << endl;
                cout << "-Age of Empires 2: The Age of Kings" << endl;
                cout << "-Clash Royale" << endl;
                cout << "-Boom Beach" << endl;
                cout << "-Plague Inc" << endl;
                cout << "-Fallout Shelter" << endl;
              break;
              case 4:
                system("cls"); 
                cout << "Juegos de simulacion" << endl;
                cout << "Los videojuegos de simulacion son aquellos cuya jugabilidad y mecanicas apuntan hacia una representacion fiel de elementos de la vida real. Se divide en varios subgéneros: simulacion de vehiculos, de construccion, de vida y de combate." << endl;
                cout << "Recomendaciones:" << endl;
                cout << "-SimCity" << endl;
                cout << "-Forza Horizon 4" << endl;
                cout << "-Zombie Combat" << endl;
                cout << "-Fallout Shelter" << endl;
              break;
              case 5:
                system("cls");
                cout << "Juegos de deporte" << endl;
                cout << "El genero deporte incluye como subgeneros casi todos los deportes que se practican en la vida real. Sin embargo, en terminos de diseño, un videojuego de deporte es aquel en que las acciones de los personajes han de ser conformes a un deporte realmente existente." << endl;
                cout << "Recomendaciones" << endl;
                cout << "-NBA 2K" << endl;
                cout << "-Retro Bowl" << endl;
                cout << "-MLB 9 Innings 22" << endl;
                cout << "-Australian Open Game" << endl;
                cout << "-Pro Evolution Soccer 2021" << endl;
              break;
              case 6:
                system("cls");
                cout << "Juegos de carreras" << endl;
                cout << "Los videojuegos de carreras, por su parte, cuando se trata de carreras organizadas y adscritas a instituciones deportivas, se suelen considerar videojuegos deportivos. Sin embargo, lo más adecuado es incluirlas en un genero propio, puesto que la jugabilidad y mecanicas son perfectamente distinguibles de otros juegos deportivos." << endl;
                cout << "Recomendaciones:" << endl;
                cout << "-Asphalt 9: Legends" << endl;
                cout << "-Mario Kart Tour" << endl;
                cout << "-F1 Mobile Racing" << endl;
                cout << "-Real Racing" << endl;
                cout << "-Need For Speed" << endl;
              break;
              case 7:
                system("cls");
                cout << "Juegos de Aventura" << endl;
                cout << "Un juego de aventura no excluye elementos de otros generos como el rol, la accion o los disparos. Al contrario, muchas veces los juegos de aventura involucran todas las caracteristicas de los videojuegos de otros generos como los juegos de guerra y aventura. Sin embargo, lo que los hace ser un videojuego de aventura es el hecho de que el jugador debe avanzar en una trama interactuando con diversos personajes (llamados NPCs) y con objetos del entorno." << endl;
                cout << "Recomendaciones" << endl;
                cout << "-Pascal Wager's" << endl;
                cout << "-Dead Cells" << endl;
                cout << "-Grimvalor" << endl;
                cout << "-Forgotten Anne" << endl;
                cout << "-Life is Strange" << endl;
              break;
              case 8:
                system("cls");
                cout << "Juegos de rol" << endl;
                cout << "El videojuego de rol tiene la caracteristica unica que sus protagonistas tienen un importante desarrollo de personaje a lo largo de la aventura. Por lo general, esta tiene un mundo inmersivo y una historia compleja. En los videojuegos de rol ademas se suelen adoptar oficios con habilidades o poderes especiales." << endl;
                cout << "Recomendaciones" << endl;
                cout << "-Genshin Impact" << endl;
                cout << "-Star Wars: Knights of the Old Republic 2" << endl;
                cout << "-Baldur's Gate 2" << endl;
                cout << "-Chrono Trigger" << endl;
                cout << "-Thronebreaker: Witcher Tales" << endl;
              break;
              case 9:
                system("cls");
                cout << "Juegos musicales " << endl;
                cout << "Como parte del entretenimiento grupal, existe una gran variedad de juegos musicales que incluyen Karaoke, Baile y simulación de banda de rock. Estos juegos se caracterizan porque el principal objetivo de los mismos consiste en sincronizar movimientos con los solicitados por la interfaz del videojuego." << endl;
                cout << "Recomendaciones" << endl;
                cout << "-Arcaea" << endl;
                cout << "-Cytus" << endl;
                cout << "-DEEMO" << endl;
                cout << "-Groove Coaster 2" << endl;
                cout << "-Dynamix" << endl;
              break;
              case 10:
                system("cls");
                cout << "Juegos de puzzles" << endl;
                cout << "Estos juegos ponen a prueba la habilidad logico-deductiva del jugador y no sus reflejos, destreza o capacidad estrategica. Son videojuegos muy tranquilos, pero de gran exigencia mental en los que deben resolverse los problemas planteados." << endl;
                cout << "Recomendaciones" << endl;
                cout << "-Monument Valley" << endl;
                cout << "-Where's My Water?" << endl;
                cout << "-World of Goo" << endl;
                cout << "-Lara Croft GO" << endl;
                cout << "-Candy Crush Soda Saga" << endl;
              break;
            }
           break; //case videojuegos
          default:
            cout <<" ¡¡ERROR!!, la opcion elegida sale del rango del opciones." << endl;
          break;
            
        } // case de temas
            cout << "Desea continuar? seleccione el 1 para continuar y 0 para salir" << endl;
            cin >> salida;
    } while (salida == true);
}