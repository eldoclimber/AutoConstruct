# AutoConstruct

# CAD Program Design Specification

## Introduction

The goal is to design a 3D CAD program using modern OpenGL 4.0, GLFW, and ImGui. The initial focus will be on creating a minimum viable product (MVP), with further enhancements planned for subsequent versions.

## Program Requirements

1. **Platform Support:** Primary focus on the Windows platform, with macOS and Linux as secondary objectives.

2. **Programming Language:** The program will be developed using C++. 

3. **OpenGL Version:** OpenGL 4.0 will be used.

4. **Window Management:** The program will support resizing and full-screen mode. The full-screen mode will mimic the behavior of full-screen Windows office programs.

5. **User Interface:** The interface will contain multiple window panes, including a primary 3D view and several docked side windows. The side windows will display an object list, properties list, and potentially other as-yet-unspecified features.

6. **Rendering Capabilities:** Initial versions will not include advanced rendering capabilities such as anti-aliasing. Enhanced rendering capabilities are planned for future versions.

7. **User Input:** The program will support keyboard and mouse inputs.

8. **Error Handling:** Critical errors, such as failing to initialize GLFW or OpenGL, will cause the program to log the error and exit. Non-critical errors will be logged but will not cause the program to exit.

9. **OpenGL Context:** The program will use the Core profile.

10. **Multithreading:** The program will be multithreaded to improve performance.

11. **File I/O:** The program will support importing 3D models from OBJ files. A new file format, containing program-specific information in the header, will also be created.

12. **Shaders and Post-Processing Effects:** Initial versions will not include custom shaders or post-processing effects. These are planned for future versions.

13. **Performance Requirements:** The program should be compatible with 10-year-old office computers.

14. **Lighting Model:** The program will use Phong lighting.

## Future Enhancements

1. Implement enhanced rendering capabilities, including custom shaders and post-processing effects.
2. Develop a web-based version using WebGL.
3. Potentially support additional file formats for importing 3D models.

## Development Plan

1. **Set Up Development Environment:** Set up C++, OpenGL, GLFW, and ImGui in your development environment. Ensure everything is working correctly and that you can create a basic windowed application.

2. **Basic Rendering:** Implement basic rendering of 3D models using OpenGL. At this stage, you can use simple geometric shapes or hardcoded models.

3. **User Interface:** Develop the user interface using ImGui. This includes the primary 3D view and the docked side windows.

4. **File I/O:** Implement the ability to import 3D models from OBJ files and to save and load scenes using your custom file format.

5. **User Interaction:** Implement the ability to interact with the scene using keyboard and mouse input. This includes selecting and manipulating objects.

6. **Lighting:** Implement Phong lighting.

7. **Error Handling:** Implement error logging and appropriate handling of critical and non-critical errors.

8. **Performance Optimization:** Optimize the performance of your program to ensure it runs smoothly on older hardware. This includes potential use of multithreading.

9. **Future Enhancements:** After the MVP is complete, begin working on the future enhancements as outlined above.

Remember to follow good software development practices throughout, such as regular testing, version control, and writing clear, well-commented code.



# Design Document for 3D CAD Application

## Overview

The purpose of this document is to outline the design for a 3D CAD application built using modern OpenGL, GLFW, and ImGui. The application will support a Windows primary platform, with macOS and Linux as secondary objectives. The CAD application will be created with a focus on creating a minimum viable product (MVP) first, with future enhancements to be built as additional features. 

The chosen architecture for the software is a component-based architecture, which offers a balance between complexity and modularity.

## Software Architecture

The CAD application will be divided into the following major classes:

1. **Application**: The main entry point of the application. It manages the lifecycle of the application and holds instances of other major components.

2. **Window**: This class is responsible for creating and managing the window where 3D objects are rendered. It also handles window-specific inputs and events.

3. **Renderer**: This class is responsible for rendering the scene. It takes a Scene and renders it onto the window.

4. **Scene**: This class contains all the 3D models (or entities) that need to be rendered. It also manages the camera, lighting, and other aspects of the scene.

5. **Entity**: An entity represents a 3D model in the scene. It could be composed of various components like MeshComponent, MaterialComponent, TransformComponent, etc.

6. **Components**: These classes are attached to entities to give them properties or behaviors. Examples might be MeshComponent (for the shape of the model), MaterialComponent (for the appearance), TransformComponent (for position, rotation, and scale), and so on.

## User Interface

The User Interface will be implemented using ImGui and will include multiple panes. A primary 3D view will be featured along with secondary panes that include an objects list, properties list, and potentially other windows.

## I/O Operations

The application will support importing of 3D models from `.obj` files. In addition, it will include a custom file format that stores data similar to `.obj`, but includes application-specific information in the header.

## Error Handling

The application will log errors and exit the program if basic window and OpenGL contexts are unable to be created. For smaller errors, the program should continue running if possible.

## Multithreading

The application will make use of multithreading for performance optimization.

## Future Enhancements

Once the MVP has been completed, further enhancements may include enhanced rendering capabilities, special shaders or post-processing effects, and a web-based version of the CAD application using WebGL.

## Conclusion

This design document provides an outline of the initial design for the 3D CAD application. It should be used as a guide during development and will be subject to change as new requirements or constraints are identified.
