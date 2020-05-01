#version 330 core
in vec2 TexCoord;
in vec4 Color;

out vec4 outColor;

uniform sampler2D tex;
void main()
{
	outColor = texture(tex, TexCoord)*Color;

}
