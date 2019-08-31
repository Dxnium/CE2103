//
// Created by danium on 28/8/19.
//
#include <iostream>
using namespace std;
class Pelicula{

private:
    string color;
    string director_name;
    string num_critic_for_reviews;
    string duration;
    string director_facebook_likes;
    string actor_3_facebook_likes;
    string actor_2_name;
    string actor_1_facebook_likes;
    string gross;
    string genres;
    string actor_1_name;
    string movie_title;
    string num_voted_users;
    string cast_total_facebook_likes;
    string actor_3_name;
    string facenumber_in_poster;
    string plot_keywords;
    string movie_imdb_link;
    string num_user_for_reviews;
    string language;
    string country;
    string content_rating;
    string budget;
    string title_year;
    string actor_2_facebook_likes;
    string imdb_score;
    string aspect_ratio;
    string movie_facebook_likes;
public:
    const string &getColor() const {
        return color;
    }

    void setColor(const string &color) {
        Pelicula::color = color;
    }

    const string &getDirectorName() const {
        return director_name;
    }

    void setDirectorName(const string &directorName) {
        director_name = directorName;
    }

    const string &getNumCriticForReviews() const {
        return num_critic_for_reviews;
    }

    void setNumCriticForReviews(const string &numCriticForReviews) {
        num_critic_for_reviews = numCriticForReviews;
    }

    const string &getDuration() const {
        return duration;
    }

    void setDuration(const string &duration) {
        Pelicula::duration = duration;
    }

    const string &getDirectorFacebookLikes() const {
        return director_facebook_likes;
    }

    void setDirectorFacebookLikes(const string &directorFacebookLikes) {
        director_facebook_likes = directorFacebookLikes;
    }

    const string &getActor3FacebookLikes() const {
        return actor_3_facebook_likes;
    }

    void setActor3FacebookLikes(const string &actor3FacebookLikes) {
        actor_3_facebook_likes = actor3FacebookLikes;
    }

    const string &getActor2Name() const {
        return actor_2_name;
    }

    void setActor2Name(const string &actor2Name) {
        actor_2_name = actor2Name;
    }

    const string &getActor1FacebookLikes() const {
        return actor_1_facebook_likes;
    }

    void setActor1FacebookLikes(const string &actor1FacebookLikes) {
        actor_1_facebook_likes = actor1FacebookLikes;
    }

    const string &getGross() const {
        return gross;
    }

    void setGross(const string &gross) {
        Pelicula::gross = gross;
    }

    const string &getGenres() const {
        return genres;
    }

    void setGenres(const string &genres) {
        Pelicula::genres = genres;
    }

    const string &getActor1Name() const {
        return actor_1_name;
    }

    void setActor1Name(const string &actor1Name) {
        actor_1_name = actor1Name;
    }

    const string &getMovieTitle() const {
        return movie_title;
    }

    void setMovieTitle(const string &movieTitle) {
        movie_title = movieTitle;
    }

    const string &getNumVotedUsers() const {
        return num_voted_users;
    }

    void setNumVotedUsers(const string &numVotedUsers) {
        num_voted_users = numVotedUsers;
    }

    const string &getCastTotalFacebookLikes() const {
        return cast_total_facebook_likes;
    }

    void setCastTotalFacebookLikes(const string &castTotalFacebookLikes) {
        cast_total_facebook_likes = castTotalFacebookLikes;
    }

    const string &getActor3Name() const {
        return actor_3_name;
    }

    void setActor3Name(const string &actor3Name) {
        actor_3_name = actor3Name;
    }

    const string &getFacenumberInPoster() const {
        return facenumber_in_poster;
    }

    void setFacenumberInPoster(const string &facenumberInPoster) {
        facenumber_in_poster = facenumberInPoster;
    }

    const string &getPlotKeywords() const {
        return plot_keywords;
    }

    void setPlotKeywords(const string &plotKeywords) {
        plot_keywords = plotKeywords;
    }

    const string &getMovieImdbLink() const {
        return movie_imdb_link;
    }

    void setMovieImdbLink(const string &movieImdbLink) {
        movie_imdb_link = movieImdbLink;
    }

    const string &getNumUserForReviews() const {
        return num_user_for_reviews;
    }

    void setNumUserForReviews(const string &numUserForReviews) {
        num_user_for_reviews = numUserForReviews;
    }

    const string &getLanguage() const {
        return language;
    }

    void setLanguage(const string &language) {
        Pelicula::language = language;
    }

    const string &getCountry() const {
        return country;
    }

    void setCountry(const string &country) {
        Pelicula::country = country;
    }

    const string &getContentRating() const {
        return content_rating;
    }

    void setContentRating(const string &contentRating) {
        content_rating = contentRating;
    }

    const string &getBudget() const {
        return budget;
    }

    void setBudget(const string &budget) {
        Pelicula::budget = budget;
    }

    const string &getTitleYear() const {
        return title_year;
    }

    void setTitleYear(const string &titleYear) {
        title_year = titleYear;
    }

    const string &getActor2FacebookLikes() const {
        return actor_2_facebook_likes;
    }

    void setActor2FacebookLikes(const string &actor2FacebookLikes) {
        actor_2_facebook_likes = actor2FacebookLikes;
    }

    const string &getImdbScore() const {
        return imdb_score;
    }

    void setImdbScore(const string &imdbScore) {
        imdb_score = imdbScore;
    }

    const string &getAspectRatio() const {
        return aspect_ratio;
    }

    void setAspectRatio(const string &aspectRatio) {
        aspect_ratio = aspectRatio;
    }

    const string &getMovieFacebookLikes() const {
        return movie_facebook_likes;
    }

    void setMovieFacebookLikes(const string &movieFacebookLikes) {
        movie_facebook_likes = movieFacebookLikes;
    }


};