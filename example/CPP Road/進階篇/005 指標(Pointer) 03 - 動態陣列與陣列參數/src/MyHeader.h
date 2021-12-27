/*
 * MyHeader.h
 *
 *  Created on: 2019¦~6¤ë21¤é
 *      Author: User
 */

double getAverage(int scores[] , int length);


double getAverage(int scores[] , int length){
	double total = 0;
	for(int i = 0; i <length; i++){
		total += scores[i];
	}
	return total / length;
}
