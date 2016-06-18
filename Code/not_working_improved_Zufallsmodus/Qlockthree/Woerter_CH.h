/**
 * Woerter_CH
 * Definition der schweizerischen Woerter fuer die Zeitansage.
 * Die Woerter sind Bitmasken fuer die Matrix.
 *
 *   01234567890
 * 0 ESKISCHAFÜF
 * 1 VIERTUBFZÄÄ
 * 2 ZWÄNZGSIVOR
 * 3 ABOHAUBIEGE
 * 4 EISZWÖISDRÜ
 * 5 VIERIFÜFIQT
 * 6 SÄCHSISIBNI
 * 7 ACHTINÜNIEL
 * 8 ZÄNIERBEUFI
 * 9 ZWÖUFINAUHR
 *
 * @mc       Arduino/RBBB
 * @autor    Thomas Schuler / thomas.schuler _AT_ vtg _DOT_ admin _DOT_ ch (Basis)
 * @autor    Christian Aschoff / caschoff _AT_ mac _DOT_ com (Anpassung)
 * @version  1.1
 * @created  18.3.2012
 * @updated  4.4.2013
 *
 * Version 1.1: - Layoutanpassung
 */
#ifndef WOERTER_CH_H
#define WOERTER_CH_H

/**
 * Definition der Woerter
 */
#define CH_ESISCH       matrix[0] |= 0b1101111000000000
#define CH_ZYT          matrix[0] |= 0b0000000011100000

#define CH_VIERTU       matrix[1] |= 0b1111110000000000
#define CH_ZAEAE        matrix[1] |= 0b0000000011100000

#define CH_FUEF         matrix[2] |= 0b0111000000000000
#define CH_ZWAENZG      matrix[2] |= 0b0000011111100000

#define CH_FUER         matrix[3] |= 0b1110000000000000
#define CH_VOR          matrix[3] |= 0b0001110000000000
#define CH_NAE          matrix[3] |= 0b0000001100000000
#define CH_NAES         matrix[3] |= 0b0000001110000000
#define CH_AB           matrix[3] |= 0b0000000001100000

#define CH_HAUBI        matrix[4] |= 0b1111100000000000
#define CH_H_EIS        matrix[4] |= 0b0000000111000000

#define CH_H_ZWOEI      matrix[5] |= 0b1111000000000000
#define CH_WITZ         matrix[5] |= 0b0000111100000000
#define CH_H_DRUE       matrix[5] |= 0b0000000011100000

#define CH_KUSS         matrix[6] |= 0b1111000000000000
#define CH_H_VIER       matrix[6] |= 0b0000111110000000

#define CH_H_FUEFI      matrix[7] |= 0b0111100000000000
#define CH_KNUDDU       matrix[7] |= 0b0000011111100000

#define CH_MERCI        matrix[8] |= 0b1111100000000000
#define CH_H_SAECHSI    matrix[8] |= 0b0000011111100000

#define CH_H_SIBNI      matrix[9] |= 0b0111110000000000
#define CH_H_ACHTI      matrix[9] |= 0b0000001111100000

#define CH_LAECHLE      matrix[10] |= 0b1111110000000000
#define CH_H_NUENI      matrix[10] |= 0b0000001111000000

#define CH_H_ZAENI      matrix[11] |= 0b1111000000000000
#define CH_POUSE        matrix[11] |= 0b0000111110000000

#define CH_H_EUFI       matrix[12] |= 0b1111000000000000
#define CH_H_ZWOEUFI    matrix[12] |= 0b0000011111100000

#endif
