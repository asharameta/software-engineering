package com.company;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;


class TriangleTest {

    @Test
    void findType() throws Exception {
        Triangle t = new Triangle("(1,1) (2,4) (3,3)");
        assertTrue(t instanceof Triangle);
    }

    @Test
    void whatTypeIs1() throws Exception {
        Triangle t = new Triangle("(0,0) (1,3) (2,2)");
        assertEquals("Scalene", t.WhatTypeIs());
        assertEquals("Right", t.FindType());
    }
    @Test
    void whatTypeIs2() throws Exception {
        Triangle t = new Triangle("(0,0) (6,0) (3,4)");
        assertEquals("Isosceles", t);
        assertEquals("Acute", t.FindType());
    }
    @Test
    void whatTypeIs3() throws Exception {
        Triangle t = new Triangle("(2,2) (3,5) (5,5)");
        assertEquals("Isosceles", t);
        assertEquals("Obtuse", t.FindType());
    }
    @Test
    void whatTypeIs4() throws Exception {
        Triangle t = new Triangle("(2,2) (6,6) (1,5)");
        assertEquals("Scalene", t);
        assertEquals("Obtuse", t.FindType());
    }
    @Test
    void whatTypeIs5() throws Exception {
        Triangle t = new Triangle("(0,1) (2,3) (5,5)");
        assertEquals("Scalene", t);
        assertEquals("Acute", t.FindType());
    }

}