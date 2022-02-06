package com.company;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

class FigureTest {

    @Test
    void whatIsItCircle() throws Exception {
        Figure f = Figure.whatIsIt("(0,5) 7");
        assertTrue(f instanceof Circle);
    }

    @Test
    void whatIsItPolygon() throws Exception {
        Figure f = Figure.whatIsIt("(0,0) (0,5) (1,9) (7,4)");
        assertTrue(f instanceof Polygon);
    }
}