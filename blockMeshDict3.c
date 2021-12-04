/*--------------------------------*- C++ -*----------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Version:  9
     \\/     M anipulation  |
\*---------------------------------------------------------------------------*/
FoamFile
{
    format      ascii;
    class       dictionary;
    object      blockMeshDict;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

convertToMeters 1;

vertices
(
    (0 0 -0.05)//0
    (0 1 -0.05)//1
    (0.33 0 -0.05)//2
    (0.33 1 -0.05)//3
    (0.67 0 -0.05)//4
    (0.67 1 -0.05)//5
    (1 0 -0.05)//6
    (1 1 -0.05)//7

    (0 0 0.05)//8
    (0 1 0.05)//9
    (0.33 0 0.05)//10
    (0.33 1 0.05)//11
    (0.67 0 0.05)//12
    (0.67 1 0.05)//13
    (1 0 0.05)//14
    (1 1 0.05)//15
);

blocks
(
    hex (0 1 11 9 4 5 10 8) (20 20 1) simpleGrading (1 1 1)
    hex (4 5 10 8 6 7 14 12) (50 20 1) simpleGrading (1 1 1)
    hex (2 3 15 13 6 7 14 12) (20 20 1) simpleGrading (1 1 1)
);

edges
(
//---------------------------------------------------------------------------
	spline 0 6
	(
        (0.17 0.0 -0.05)
        (0.20474 -0.14738 -0.05)
        (0.23947 -0.20253 -0.05)
        (0.27421 -0.24067 -0.05)
        (0.30895 -0.26907 -0.05)
        (0.34368 -0.29062 -0.05)
        (0.37842 -0.30679 -0.05)
        (0.41316 -0.31837 -0.05)
        (0.44789 -0.32585 -0.05)
        (0.48263 -0.32955 -0.05)
        (0.51737 -0.32955 -0.05)
        (0.55211 -0.32585 -0.05)
        (0.58684 -0.31837 -0.05)
        (0.62158 -0.30679 -0.05)
        (0.65632 -0.29062 -0.05)
        (0.69105 -0.26907 -0.05)
        (0.72579 -0.24067 -0.05)
        (0.76053 -0.20253 -0.05)
        (0.79526 -0.14738 -0.05)
        (0.83 0.0 -0.05)        
	)
//---------------------------------------------------------------------------	
	spline 2 4
	(
        (0.33 0.0 -0.05)
        (0.34789 -0.07589 -0.05)
        (0.36579 -0.10436 -0.05)
        (0.38368 -0.12398 -0.05)
        (0.40158 -0.1386 -0.05)
        (0.41947 -0.1497 -0.05)
        (0.43737 -0.15805 -0.05)
        (0.45526 -0.16401 -0.05)
        (0.47316 -0.16787 -0.05)
        (0.49105 -0.16976 -0.05)
        (0.50895 -0.16976 -0.05)
        (0.52684 -0.16787 -0.05)
        (0.54474 -0.16401 -0.05)
        (0.56263 -0.15805 -0.05)
        (0.58053 -0.1497 -0.05)
        (0.59842 -0.1386 -0.05)
        (0.61632 -0.12398 -0.05)
        (0.63421 -0.10436 -0.05)
        (0.65211 -0.07589 -0.05)
        (0.67 0.0 -0.05)
	)
//---------------------------------------------------------------------------	
	spline 8 14 
	(
        (0.17 0.0 0.05)
        (0.20474 -0.14738 0.05)
        (0.23947 -0.20253 0.05)
        (0.27421 -0.24067 0.05)
        (0.30895 -0.26907 0.05)
        (0.34368 -0.29062 0.05)
        (0.37842 -0.30679 0.05)
        (0.41316 -0.31837 0.05)
        (0.44789 -0.32585 0.05)
        (0.48263 -0.32955 0.05)
        (0.51737 -0.32955 0.05)
        (0.55211 -0.32585 0.05)
        (0.58684 -0.31837 0.05)
        (0.62158 -0.30679 0.05)
        (0.65632 -0.29062 0.05)
        (0.69105 -0.26907 0.05)
        (0.72579 -0.24067 0.05)
        (0.76053 -0.20253 0.05)
        (0.79526 -0.14738 0.05)
        (0.83 0.0 0.05)

	)
//---------------------------------------------------------------------------
	spline 10 12
	(
        (0.33 0.0 0.05)
        (0.34789 -0.07589 0.05)
        (0.36579 -0.10436 0.05)
        (0.38368 -0.12398 0.05)
        (0.40158 -0.1386 0.05)
        (0.41947 -0.1497 0.05)
        (0.43737 -0.15805 0.05)
        (0.45526 -0.16401 0.05)
        (0.47316 -0.16787 0.05)
        (0.49105 -0.16976 0.05)
        (0.50895 -0.16976 0.05)
        (0.52684 -0.16787 0.05)
        (0.54474 -0.16401 0.05)
        (0.56263 -0.15805 0.05)
        (0.58053 -0.1497 0.05)
        (0.59842 -0.1386 0.05)
        (0.61632 -0.12398 0.05)
        (0.63421 -0.10436 0.05)
        (0.65211 -0.07589 0.05)
        (0.67 0.0 0.05)
	)
);

boundary
(
    in
    {
        type patch;
        faces
        (
            (2 3 13 15)
        );
    }
    out
    {
        type patch;
        faces
        (
            (0 1 11 9)
        );
    }
    walls
    {
        type wall;
        faces
        (
            (1 5 10 11) //inner side
            (5 6 12 10)
            (2 6 12 13)

            (0 4 8 9) //outer side
            (4 7 14 8)
            (7 3 15 14)

            (0 1 5 4) // front
            (4 5 6 7)
            (2 3 7 6)
        
            (9 11 10 8)//back
            (8 10 12 14)
            (13 15 14 12)
        );
    }
);

mergePatchPairs
(
);

// ************************************************************************* //