package fr.soleil.mambo.tools;

// Interface impl�ment�e par tous les observateurs.
public interface Observateur
{
        // M�thode appel�e automatiquement lorsque l'�tat (position ou pr�cision) du GPS change.
        public void update(Observable o);
}