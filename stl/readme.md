**notes on stl files**

These files were designed to be printed using MJF. SLS should also work.
If you want to print in FDM, I recommend removing the cutouts for the rubber bumpers on the bottom of the plates, since adding support may not be a very convenient solution here.
To edit these files, I recommend using the source file in OnShape: 
https://cad.onshape.com/documents/c7d31654920783cf2170d04f/w/e26ac92a8d6e84ba2575ffdb/e/2fa55001fc01750eb4b64711?renderMode=0&uiState=635adfd41587a72417afa9e9

Files to print:
* For mouse keys: mousekey-plate_v221018
* For trackball: trackball-plate_v221027
* There is 3 options for trackball bearings, which require different files to print for the trackball holder:
  * Option 1: For roller bearings (MR63-3x6x2.5mm), print trackball-holder_v221027
  * Option 2: For BTU bearings (Veichu VCN310, 7.5mm), print trackball-holder-v2_v221116
  * Option 3: For static ceramic bearings (3mm ZrO2 or Si3N4 balls), print trackball-holder-v2_221116 AND:
    * (recommended) Static-bearing-holder_2.1_v230216.stl - latest version - which has the 3 bearing holders connected with a ring, which helps to prevent accidentally knocking the ball out of its socket, and may also help preventing any alignment issues due to printing tolerances.
    * (old version) 3x Static-bearing-holder_v221117.stl - old version - 3 separate bearing holders, basically a dimensional copy of the 7.5mm Veichu VCN310 BTU's. Not recommended for this design, but may still be useful if you are working on any other project that was designed for these BTU's.
