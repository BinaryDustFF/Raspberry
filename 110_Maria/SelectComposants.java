package mariaDB;


import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

/**
 * Lecture de la table composants du PostgreSql.
 * @author totof
 *
 */
public class SelectComposants {

	public static void main(String[] args) {
		Connection c = null;
		Statement stmt = null;
		try {
			// Chargement du driver et connection
			Class.forName("org.mariadb.jdbc.Driver");
			c = DriverManager.getConnection("jdbc:mariadb://192.168.1.27:3306/electronique", "raspberry", "trucmuche");
			c.setAutoCommit(false);
			System.out.println("Base ouverte avec succ�s");

			// Requ�te
			stmt = c.createStatement();
			ResultSet rs = stmt.executeQuery("SELECT nom, utilisation, nb_patte, alimentation FROM composants");
			while (rs.next()) {
				// Lecture et affichage des donn�es
				String nom = rs.getString("nom");
				String utilisation = rs.getString("utilisation");
				int nbPatte = rs.getInt("nb_patte");
				float alimentation = rs.getFloat("alimentation");
				System.out.println("Nom: " + nom);
				System.out.println("Utilisation: " + utilisation);
				System.out.println("Nombre de pattes: " + nbPatte);
				System.out.println("Alimentation: " + alimentation);
				System.out.println();
			}
			
			// Fermeture de la connection et des traitements
			rs.close();
			stmt.close();
			c.close();
		} catch (Exception e) {
			// Erreur
			System.err.println(e.getClass().getName() + ": " + e.getMessage());
			System.exit(0);
		}
		// Message de succ�s
		System.out.println("Operation termin�e avec succ�s");
	}
}
