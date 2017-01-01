#include "GLFunctions.h"

#ifdef OS_WINDOWS
#define glGetProcAddress wglGetProcAddress
#define GL_GET_PROC_ADR(proc_type, proc_name) proc_name = (proc_type) glGetProcAddress(#proc_name)
#elif defined(OS_LINUX)
#define glGetProcAddress glXGetProcAddress
#define GL_GET_PROC_ADR(proc_type, proc_name) proc_name = (proc_type) glGetProcAddress((const GLubyte*)#proc_name)
#endif

#ifdef OS_WINDOWS
PFNGLACTIVETEXTUREPROC glActiveTexture;
PFNGLBLENDCOLORPROC glBlendColor;
#endif
// GLSL functions
PFNGLCREATESHADERPROC glCreateShader;
PFNGLCOMPILESHADERPROC glCompileShader;
PFNGLSHADERSOURCEPROC glShaderSource;
PFNGLCREATEPROGRAMPROC glCreateProgram;
PFNGLATTACHSHADERPROC glAttachShader;
PFNGLLINKPROGRAMPROC glLinkProgram;
PFNGLUSEPROGRAMPROC glUseProgram;
PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
PFNGLUNIFORM1IPROC glUniform1i;
PFNGLUNIFORM1FPROC glUniform1f;
PFNGLUNIFORM2FPROC glUniform2f;
PFNGLUNIFORM2IPROC glUniform2i;
PFNGLUNIFORM4IPROC glUniform4i;
PFNGLUNIFORM4FPROC glUniform4f;
PFNGLUNIFORM3FVPROC glUniform3fv;
PFNGLUNIFORM4FVPROC glUniform4fv;
PFNGLDETACHSHADERPROC glDetachShader;
PFNGLDELETESHADERPROC glDeleteShader;
PFNGLDELETEPROGRAMPROC glDeleteProgram;
PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;
PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
PFNGLGETSHADERIVPROC glGetShaderiv;
PFNGLGETPROGRAMIVPROC glGetProgramiv;

PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation;
PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f;
PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv;

// multitexture functions
PFNGLDEPTHRANGEFPROC glDepthRangef;
PFNGLCLEARDEPTHFPROC glClearDepthf;

PFNGLDRAWBUFFERSPROC glDrawBuffers;
PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;
PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;
PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers;
PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D;
PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample;
PFNGLTEXSTORAGE2DMULTISAMPLEPROC glTexStorage2DMultisample;
PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers;
PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer;
PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;
PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;
PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer;
PFNGLGENBUFFERSPROC glGenBuffers;
PFNGLBINDBUFFERPROC glBindBuffer;
PFNGLBUFFERDATAPROC glBufferData;
PFNGLMAPBUFFERPROC glMapBuffer;
PFNGLMAPBUFFERRANGEPROC glMapBufferRange;
PFNGLUNMAPBUFFERPROC glUnmapBuffer;
PFNGLDELETEBUFFERSPROC glDeleteBuffers;
PFNGLBINDIMAGETEXTUREPROC glBindImageTexture;
PFNGLMEMORYBARRIERPROC glMemoryBarrier;
PFNGLGETSTRINGIPROC glGetStringi;
PFNGLINVALIDATEFRAMEBUFFERPROC glInvalidateFramebuffer;
PFNGLBUFFERSTORAGEPROC glBufferStorage;
PFNGLFENCESYNCPROC glFenceSync;
PFNGLCLIENTWAITSYNCPROC glClientWaitSync;
PFNGLDELETESYNCPROC glDeleteSync;

PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;
PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;
PFNGLGETUNIFORMINDICESPROC glGetUniformIndices;
PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;
PFNGLBINDBUFFERBASEPROC glBindBufferBase;
PFNGLBUFFERSUBDATAPROC glBufferSubData;

PFNGLGETPROGRAMBINARYPROC glGetProgramBinary;
PFNGLPROGRAMBINARYPROC glProgramBinary;
PFNGLPROGRAMPARAMETERIPROC glProgramParameteri;

PFNGLTEXSTORAGE2DPROC glTexStorage2D;
PFNGLTEXTURESTORAGE2DPROC glTextureStorage2D;
PFNGLTEXTURESUBIMAGE2DPROC glTextureSubImage2D;
PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC glTextureStorage2DMultisample;
PFNGLTEXTUREPARAMETERIPROC glTextureParameteri;
PFNGLTEXTUREPARAMETERFPROC glTextureParameterf;
PFNGLCREATETEXTURESPROC glCreateTextures;

void initGLFunctions()
{
#ifdef OS_WINDOWS
	GL_GET_PROC_ADR(PFNGLACTIVETEXTUREPROC, glActiveTexture);
	GL_GET_PROC_ADR(PFNGLBLENDCOLORPROC, glBlendColor);
#endif
	GL_GET_PROC_ADR(PFNGLCREATESHADERPROC, glCreateShader);
	GL_GET_PROC_ADR(PFNGLCOMPILESHADERPROC, glCompileShader);
	GL_GET_PROC_ADR(PFNGLSHADERSOURCEPROC, glShaderSource);
	GL_GET_PROC_ADR(PFNGLCREATEPROGRAMPROC, glCreateProgram);
	GL_GET_PROC_ADR(PFNGLATTACHSHADERPROC, glAttachShader);
	GL_GET_PROC_ADR(PFNGLLINKPROGRAMPROC, glLinkProgram);
	GL_GET_PROC_ADR(PFNGLUSEPROGRAMPROC, glUseProgram);
	GL_GET_PROC_ADR(PFNGLGETUNIFORMLOCATIONPROC, glGetUniformLocation);
	GL_GET_PROC_ADR(PFNGLUNIFORM1IPROC, glUniform1i);
	GL_GET_PROC_ADR(PFNGLUNIFORM1FPROC, glUniform1f);
	GL_GET_PROC_ADR(PFNGLUNIFORM2FPROC, glUniform2f);
	GL_GET_PROC_ADR(PFNGLUNIFORM2IPROC, glUniform2i);
	GL_GET_PROC_ADR(PFNGLUNIFORM4IPROC, glUniform4i);
	GL_GET_PROC_ADR(PFNGLUNIFORM4FPROC, glUniform4f);
	GL_GET_PROC_ADR(PFNGLUNIFORM3FVPROC, glUniform3fv);
	GL_GET_PROC_ADR(PFNGLUNIFORM4FVPROC, glUniform4fv);
	GL_GET_PROC_ADR(PFNGLDETACHSHADERPROC, glDetachShader);
	GL_GET_PROC_ADR(PFNGLDELETESHADERPROC, glDeleteShader);
	GL_GET_PROC_ADR(PFNGLDELETEPROGRAMPROC, glDeleteProgram);
	GL_GET_PROC_ADR(PFNGLGETPROGRAMINFOLOGPROC, glGetProgramInfoLog);
	GL_GET_PROC_ADR(PFNGLGETSHADERINFOLOGPROC, glGetShaderInfoLog);
	GL_GET_PROC_ADR(PFNGLGETSHADERIVPROC, glGetShaderiv);
	GL_GET_PROC_ADR(PFNGLGETPROGRAMIVPROC, glGetProgramiv);

	GL_GET_PROC_ADR(PFNGLENABLEVERTEXATTRIBARRAYPROC, glEnableVertexAttribArray);
	GL_GET_PROC_ADR(PFNGLDISABLEVERTEXATTRIBARRAYPROC, glDisableVertexAttribArray);
	GL_GET_PROC_ADR(PFNGLVERTEXATTRIBPOINTERPROC, glVertexAttribPointer);
	GL_GET_PROC_ADR(PFNGLBINDATTRIBLOCATIONPROC, glBindAttribLocation);
	GL_GET_PROC_ADR(PFNGLVERTEXATTRIB4FPROC, glVertexAttrib4f);
	GL_GET_PROC_ADR(PFNGLVERTEXATTRIB4FVPROC, glVertexAttrib4fv);

	GL_GET_PROC_ADR(PFNGLDEPTHRANGEFPROC, glDepthRangef);
	GL_GET_PROC_ADR(PFNGLCLEARDEPTHFPROC, glClearDepthf);

	GL_GET_PROC_ADR(PFNGLDRAWBUFFERSPROC, glDrawBuffers);
	GL_GET_PROC_ADR(PFNGLBINDFRAMEBUFFERPROC, glBindFramebuffer);
	GL_GET_PROC_ADR(PFNGLDELETEFRAMEBUFFERSPROC, glDeleteFramebuffers);
	GL_GET_PROC_ADR(PFNGLGENFRAMEBUFFERSPROC, glGenFramebuffers);
	GL_GET_PROC_ADR(PFNGLFRAMEBUFFERTEXTURE2DPROC, glFramebufferTexture2D);
	GL_GET_PROC_ADR(PFNGLTEXIMAGE2DMULTISAMPLEPROC, glTexImage2DMultisample);
	GL_GET_PROC_ADR(PFNGLTEXSTORAGE2DMULTISAMPLEPROC, glTexStorage2DMultisample);
	GL_GET_PROC_ADR(PFNGLGENRENDERBUFFERSPROC, glGenRenderbuffers);
	GL_GET_PROC_ADR(PFNGLBINDRENDERBUFFERPROC, glBindRenderbuffer);
	GL_GET_PROC_ADR(PFNGLRENDERBUFFERSTORAGEPROC, glRenderbufferStorage);
	GL_GET_PROC_ADR(PFNGLFRAMEBUFFERRENDERBUFFERPROC, glFramebufferRenderbuffer);
	GL_GET_PROC_ADR(PFNGLDELETERENDERBUFFERSPROC, glDeleteRenderbuffers);
	GL_GET_PROC_ADR(PFNGLCHECKFRAMEBUFFERSTATUSPROC, glCheckFramebufferStatus);
	GL_GET_PROC_ADR(PFNGLBLITFRAMEBUFFERPROC, glBlitFramebuffer);
	GL_GET_PROC_ADR(PFNGLGENBUFFERSPROC, glGenBuffers);
	GL_GET_PROC_ADR(PFNGLBINDBUFFERPROC, glBindBuffer);
	GL_GET_PROC_ADR(PFNGLBUFFERDATAPROC, glBufferData);
	GL_GET_PROC_ADR(PFNGLMAPBUFFERPROC, glMapBuffer);
	GL_GET_PROC_ADR(PFNGLMAPBUFFERRANGEPROC, glMapBufferRange);
	GL_GET_PROC_ADR(PFNGLUNMAPBUFFERPROC, glUnmapBuffer);
	GL_GET_PROC_ADR(PFNGLDELETEBUFFERSPROC, glDeleteBuffers);
	GL_GET_PROC_ADR(PFNGLBINDIMAGETEXTUREPROC, glBindImageTexture);
	GL_GET_PROC_ADR(PFNGLMEMORYBARRIERPROC, glMemoryBarrier);
	GL_GET_PROC_ADR(PFNGLGETSTRINGIPROC, glGetStringi);
	GL_GET_PROC_ADR(PFNGLINVALIDATEFRAMEBUFFERPROC, glInvalidateFramebuffer);
	GL_GET_PROC_ADR(PFNGLBUFFERSTORAGEPROC, glBufferStorage);
	GL_GET_PROC_ADR(PFNGLFENCESYNCPROC, glFenceSync);
	GL_GET_PROC_ADR(PFNGLCLIENTWAITSYNCPROC, glClientWaitSync);
	GL_GET_PROC_ADR(PFNGLDELETESYNCPROC, glDeleteSync);

	GL_GET_PROC_ADR(PFNGLGETUNIFORMBLOCKINDEXPROC, glGetUniformBlockIndex);
	GL_GET_PROC_ADR(PFNGLUNIFORMBLOCKBINDINGPROC, glUniformBlockBinding);
	GL_GET_PROC_ADR(PFNGLGETACTIVEUNIFORMBLOCKIVPROC, glGetActiveUniformBlockiv);
	GL_GET_PROC_ADR(PFNGLGETUNIFORMINDICESPROC, glGetUniformIndices);
	GL_GET_PROC_ADR(PFNGLGETACTIVEUNIFORMSIVPROC, glGetActiveUniformsiv);
	GL_GET_PROC_ADR(PFNGLBINDBUFFERBASEPROC, glBindBufferBase);
	GL_GET_PROC_ADR(PFNGLBUFFERSUBDATAPROC, glBufferSubData);

	GL_GET_PROC_ADR(PFNGLGETPROGRAMBINARYPROC, glGetProgramBinary);
	GL_GET_PROC_ADR(PFNGLPROGRAMBINARYPROC, glProgramBinary);
	GL_GET_PROC_ADR(PFNGLPROGRAMPARAMETERIPROC, glProgramParameteri);

	GL_GET_PROC_ADR(PFNGLTEXSTORAGE2DPROC, glTexStorage2D);
	GL_GET_PROC_ADR(PFNGLTEXTURESTORAGE2DPROC, glTextureStorage2D);
	GL_GET_PROC_ADR(PFNGLTEXTURESUBIMAGE2DPROC, glTextureSubImage2D);
	GL_GET_PROC_ADR(PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC, glTextureStorage2DMultisample);

	GL_GET_PROC_ADR(PFNGLTEXTUREPARAMETERIPROC, glTextureParameteri);
	GL_GET_PROC_ADR(PFNGLTEXTUREPARAMETERFPROC, glTextureParameterf);
	GL_GET_PROC_ADR(PFNGLCREATETEXTURESPROC, glCreateTextures);
}
