# Fall2017_CS1C-2D Graphics Modeler

Create 2D graphics modeler for simple geometric shapes.
Will be integrated into customer's code.

**//CORE COMPONENT REQUIREMENTS//**
1) Use inheritance, composition, excepstion handlers,
virtual functions, and at least two overloaded operators.

2) One class must contain a pointer.

3) Copy constructor needs to be written and tested.

4) Using the Qt Painter low-level graphics rendering library:
  a)Implement abstract base class shape.
   -aggregation relationship(pointer to another class)
   -includes the following virtual functions:
     > draw
     > move
     > perimeter
     > area
     
  b)Implement shape classes derived from Shape:
   -Line
   -Polyline
   -Polygon
   -Rectangle
   -Ellipse
    <Must contain the following properties>:
    > Dimensions
    > Pen Color
    > Pen Width
    > Pen Style
    > Pen Cap Style
    > Pen Join Style
    > Brush Color
    > Brush Style

   -Text
    <Must contain the following properties>:
    > Alighment
    > Point Size
    > Font Family
    > Font Style
    > Font Weight
  
  c)Overload equality and less-than operators.
    (Will facilitate shape id comparisons for sorting)
    
  d)Disable copy operations for all shape types.
    (Mark copy constructor/assignment operator for Shape as deleted)
    
5) Implement our vector class, based on John's provided example.
  (Will store shape objects for modeler)
  <Suppors the following operations>:
  > constructors for one or more arguments
  > default constructors
  > copy constructors
  > copy assignment
  > move constructor
  > move assignment
  > destructor
  > basic iterator member type
  > member begin() and end() operations
  
6) Implement a user-friendly interface to demonstrate the modeler.

**//CORE FEATURE REQUIREMENTS//**
1) Provide a help operation to the user.(Operation Explanation)

2) Sales pitch

3) List of supported environments.

4) Logistics/mainenance plan with pricing.

5) Provide customer testimonials
   - Guest users may enter new testimonials
   - Must be persistent from session to session

6) Provide Contact Info

7) Display all graphic objects
   - Shape id displayed above object
   - Rendering area must be minimum
     > 1000 pixels horizontal
     > 500 pixels vertical
   - Origin of coordinate plane is top left
     > (0,0) top left of plane
     > (1000,500) bottom right of plane

8) Objects must be read in from persistent database file
     > Can be a textfile
     > Shapes must be identified by type(line, text, etc) and id.
     
9) Shapes can be updated by users with administrator permissions.
     > via update shape form
     > changes will be visible in rendering area
     
10) Shapes can be moved by users with administrator permissions.
     > via move shape form
     > changes will be visible in rendering area
     
11) Shapes can be added removed by user with administrator permissioins.
     > via add/remove shape form
     > changes will be visible in rendering area
     
12) Provide list of shapes sorted by id, with all properties visible in report.

13) Provide list of shapes sorted by area, with type, id, and area in report.
     > contains only shapes which have an area

14) Provide list of shapes sorted by perimeter, with type, id, and perimeter in report.
     > contains only shapes which have a perimeter
     
15) All changes saved from session to session.
