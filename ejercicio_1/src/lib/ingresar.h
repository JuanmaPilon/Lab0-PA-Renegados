////////////////////////////////////////////////////////////////

#include "./dt/string.h"
#include "./dt/tipo_estado.h"
#include "./dt/fecha_hora.h"
#include "./dt/huesped.h"

////////////////////////////////////////////////////////////////

class Ingresar
{
	public: static string      Texto         ();
	public: static int         Entero        ();
	public: static int         Entero_Entre  ( string, int, int );

	public: static int         Entero_Valido ();
	public: static int         Natural       ( string );
	public: static int         Positivo      ( string );
	public: static int         Real          ();

	public: static string      Texto_Minimo  ( unsigned int );
	public: static string      Minuscula     ( string );

	public: static void        Enter         ();
	public: static int         Opcion        ();
	public: static string      Email      ( string = "Email: " );
	public: static string      Contrasena    ();
	public: static int         Edad          ();
	public: static string      Nombre        ( string = "Nombre: " );
	public: static EstadoReserva   Estado        ();

	public: static float       Precio      ( string );
	public: static bool        Bool          ( string );
	public: static DtFechaHora Fecha         ( string );
	public: static string*     Huespedes     ( int );
	public: static int 		   Numero        (int);
};

////////////////////////////////////////////////////////////////