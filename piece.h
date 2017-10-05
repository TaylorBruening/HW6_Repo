/**
*  @file piece.h
*  @author Brock Ferrell
// CS2401
// November 23, 2015
// Project7
*/
#ifndef PIECE_H
#define PIECE_H
enum color {black, white, blank};

class piece {
public:
	piece() {theColor = blank;}

	/**
	*  A member function that changes the color of the piece.
	*  The color of the piece will be changed to its opposite color.
	*  @see color
	*/
	void flip()
	{
		if (theColor == white) {
			theColor = black;
		}
		else if (theColor == black) {
			theColor = white;
		}
	}

	bool is_blank()const {return theColor == blank;}
	bool is_black()const {return theColor == black;}
	bool is_white()const {return theColor == white;}
	void set_white() {theColor = white;}
	void set_black() {theColor = black;}

private:
	color theColor;

};

#endif

