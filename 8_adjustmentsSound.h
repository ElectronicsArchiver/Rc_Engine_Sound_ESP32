/* General SOUND SETTINGS ************************************************************************************************
 *  
 * Most sound settings are done in the vehicle configuration files in the /vehicles/ directory.
 * 
 */

#define NO_SIREN // siren sound is not played, if defined
 
const  uint8_t numberOfVolumeSteps = 3; // The mumber of volume steps below
const uint8_t masterVolumePercentage[] = {100, 66, 33}; // loud, medium, silent (more than 100% may cause distortions)
