#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <glm\glm.hpp>

GLuint createShader(char const * vertex_shader_content, char const * fragment_shader_content);
void destroyShader(GLuint programId);
void setUniformMatrix(GLuint programId, const char* uniformName, glm::mat4 matrix);
void setUniformVec2(GLuint programId, const char* uniformName, glm::vec2 vector);
void setUniformVec3(GLuint programId, const char* uniformName, glm::vec3 vector);