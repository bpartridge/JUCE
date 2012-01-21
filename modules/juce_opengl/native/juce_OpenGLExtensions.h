/*
  ==============================================================================

   This file is part of the JUCE library - "Jules' Utility Class Extensions"
   Copyright 2004-11 by Raw Material Software Ltd.

  ------------------------------------------------------------------------------

   JUCE can be redistributed and/or modified under the terms of the GNU General
   Public License (Version 2), as published by the Free Software Foundation.
   A copy of the license is included in the JUCE distribution, or can be found
   online at www.gnu.org/licenses.

   JUCE is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

  ------------------------------------------------------------------------------

   To release a closed-source product which uses JUCE, commercial licenses are
   available: visit www.rawmaterialsoftware.com/juce for more information.

  ==============================================================================
*/

#ifndef __JUCE_OPENGLEXTENSIONS_JUCEHEADER__
#define __JUCE_OPENGLEXTENSIONS_JUCEHEADER__


/** @internal This macro contains a list of GL extension functions that need to be dynamically loaded on Windows/Linux.
    @see OpenGLExtensionFunctions
*/
#define JUCE_GL_BASIC_EXTENSION_FUNCTIONS(USE_FUNCTION) \
    USE_FUNCTION (glActiveTexture,          void, (GLenum p1), (p1))\
    USE_FUNCTION (glBindBuffer,             void, (GLenum p1, GLuint p2), (p1, p2))\
    USE_FUNCTION (glDeleteBuffers,          void, (GLsizei p1, const GLuint* p2), (p1, p2))\
    USE_FUNCTION (glGenBuffers,             void, (GLsizei p1, GLuint* p2), (p1, p2))\
    USE_FUNCTION (glBufferData,             void, (GLenum p1, GLsizeiptr p2, const GLvoid* p3, GLenum p4), (p1, p2, p3, p4))\
    USE_FUNCTION (glBufferSubData,          void, (GLenum p1, GLintptr p2, GLsizeiptr p3, const GLvoid* p4), (p1, p2, p3, p4))\
    USE_FUNCTION (glIsRenderbuffer,         GLboolean, (GLuint p1), (p1))\
    USE_FUNCTION (glBindRenderbuffer,       void, (GLenum p1, GLuint p2), (p1, p2))\
    USE_FUNCTION (glDeleteRenderbuffers,    void, (GLsizei p1, const GLuint* p2), (p1, p2))\
    USE_FUNCTION (glGenRenderbuffers,       void, (GLsizei p1, GLuint* p2), (p1, p2))\
    USE_FUNCTION (glRenderbufferStorage,    void, (GLenum p1, GLenum p2, GLsizei p3, GLsizei p4), (p1, p2, p3, p4))\
    USE_FUNCTION (glGetRenderbufferParameteriv,  void, (GLenum p1, GLenum p2, GLint* p3), (p1, p2, p3))\
    USE_FUNCTION (glIsFramebuffer,          GLboolean, (GLuint p1), (p1))\
    USE_FUNCTION (glBindFramebuffer,        void, (GLenum p1, GLuint p2), (p1, p2))\
    USE_FUNCTION (glDeleteFramebuffers,     void, (GLsizei p1, const GLuint* p2), (p1, p2))\
    USE_FUNCTION (glGenFramebuffers,        void, (GLsizei p1, GLuint* p2), (p1, p2))\
    USE_FUNCTION (glCheckFramebufferStatus, GLenum, (GLenum p1), (p1))\
    USE_FUNCTION (glFramebufferTexture2D,   void, (GLenum p1, GLenum p2, GLenum p3, GLuint p4, GLint p5), (p1, p2, p3, p4, p5))\
    USE_FUNCTION (glFramebufferRenderbuffer,  void, (GLenum p1, GLenum p2, GLenum p3, GLuint p4), (p1, p2, p3, p4))\
    USE_FUNCTION (glGetFramebufferAttachmentParameteriv, void, (GLenum p1, GLenum p2, GLenum p3, GLint* p4), (p1, p2, p3, p4))

#if JUCE_USE_OPENGL_SHADERS
 #define JUCE_GL_EXTENSION_FUNCTIONS1(USE_FUNCTION) JUCE_GL_BASIC_EXTENSION_FUNCTIONS(USE_FUNCTION) \
    USE_FUNCTION (glCreateProgram,          GLuint, (), ())\
    USE_FUNCTION (glDeleteProgram,          void, (GLuint p1), (p1))\
    USE_FUNCTION (glCreateShader,           GLuint, (GLenum p1), (p1))\
    USE_FUNCTION (glDeleteShader,           void, (GLuint p1), (p1))\
    USE_FUNCTION (glShaderSource,           void, (GLuint p1, GLsizei p2, const GLchar** p3, const GLint* p4), (p1, p2, p3, p4))\
    USE_FUNCTION (glCompileShader,          void, (GLuint p1), (p1))\
    USE_FUNCTION (glAttachShader,           void, (GLuint p1, GLuint p2), (p1, p2))\
    USE_FUNCTION (glLinkProgram,            void, (GLuint p1), (p1))\
    USE_FUNCTION (glUseProgram,             void, (GLuint p1), (p1))\
    USE_FUNCTION (glGetShaderiv,            void, (GLuint p1, GLenum p2, GLint* p3), (p1, p2, p3))\
    USE_FUNCTION (glGetShaderInfoLog,       void, (GLuint p1, GLsizei p2, GLsizei* p3, GLchar* p4), (p1, p2, p3, p4))\
    USE_FUNCTION (glGetProgramiv,           void, (GLuint p1, GLenum p2, GLint* p3), (p1, p2, p3))\
    USE_FUNCTION (glGetUniformLocation,     GLint, (GLuint p1, const GLchar* p2), (p1, p2))\
    USE_FUNCTION (glGetAttribLocation,      GLint, (GLuint p1, const GLchar* p2), (p1, p2))\
    USE_FUNCTION (glVertexAttribPointer,    void, (GLuint p1, GLint p2, GLenum p3, GLboolean p4, GLsizei p5, const GLvoid* p6), (p1, p2, p3, p4, p5, p6))\
    USE_FUNCTION (glEnableVertexAttribArray, void, (GLuint p1), (p1))\
    USE_FUNCTION (glUniform1f,              void, (GLint p1, GLfloat p2), (p1, p2))\
    USE_FUNCTION (glUniform1i,              void, (GLint p1, GLint p2), (p1, p2))\
    USE_FUNCTION (glUniform2f,              void, (GLint p1, GLfloat p2, GLfloat p3), (p1, p2, p3))\
    USE_FUNCTION (glUniform3f,              void, (GLint p1, GLfloat p2, GLfloat p3, GLfloat p4), (p1, p2, p3, p4))\
    USE_FUNCTION (glUniform4f,              void, (GLint p1, GLfloat p2, GLfloat p3, GLfloat p4, GLfloat p5), (p1, p2, p3, p4, p5))\
    USE_FUNCTION (glUniform4i,              void, (GLint p1, GLint p2, GLint p3, GLint p4, GLint p5), (p1, p2, p3, p4, p5))\
    USE_FUNCTION (glUniform1fv,             void, (GLint p1, GLsizei p2, const GLfloat* p3), (p1, p2, p3))
#else
 #define JUCE_GL_EXTENSION_FUNCTIONS1(USE_FUNCTION) JUCE_GL_BASIC_EXTENSION_FUNCTIONS(USE_FUNCTION)
#endif

#if JUCE_USE_OPENGL_FIXED_FUNCTION
 #define JUCE_GL_EXTENSION_FUNCTIONS(USE_FUNCTION) JUCE_GL_EXTENSION_FUNCTIONS1(USE_FUNCTION) \
    USE_FUNCTION (glClientActiveTexture,    void, (GLenum p1), (p1))
#else
 #define JUCE_GL_EXTENSION_FUNCTIONS(USE_FUNCTION) JUCE_GL_EXTENSION_FUNCTIONS1(USE_FUNCTION)
#endif

/** This class contains a generated list of OpenGL extension functions, which are either dynamically loaded
    for a specific GL context, or simply call-through to the appropriate OS function where available.
*/
struct OpenGLExtensionFunctions
{
    void initialise();

   #if JUCE_WINDOWS && ! DOXYGEN
    typedef char GLchar;
    typedef pointer_sized_int GLsizeiptr;
    typedef pointer_sized_int GLintptr;
   #endif

   #if JUCE_WINDOWS || JUCE_LINUX
    #if JUCE_WINDOWS
     #define JUCE_GL_STDCALL __stdcall
    #else
     #define JUCE_GL_STDCALL
    #endif

    #define JUCE_DECLARE_GL_FUNCTION(name, returnType, params, callparams) typedef returnType (JUCE_GL_STDCALL *type_ ## name) params; type_ ## name name;
   #elif JUCE_OPENGL_ES
    #define JUCE_DECLARE_GL_FUNCTION(name, returnType, params, callparams) inline static returnType name params;
   #else
    #define JUCE_DECLARE_GL_FUNCTION(name, returnType, params, callparams) inline static returnType name params { return ::name callparams; }
   #endif

    JUCE_GL_EXTENSION_FUNCTIONS (JUCE_DECLARE_GL_FUNCTION)
    #undef JUCE_DECLARE_GL_FUNCTION
};

#endif   // __JUCE_OPENGLEXTENSIONS_JUCEHEADER__