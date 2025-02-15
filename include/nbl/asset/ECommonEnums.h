#ifndef __NBL_E_COMMON_ENUMS_H_INCLUDED__
#define __NBL_E_COMMON_ENUMS_H_INCLUDED__

#include "nbl/core/declarations.h"

namespace nbl::asset
{

enum E_STENCIL_FACE_FLAGS : uint32_t
{
    ESFF_FRONT_BIT = 0x01,
    ESFF_BACK_BIT = 0x02,
    ESFF_FACE_AND_FRONT = 0x03
};

enum E_SUBPASS_CONTENTS : uint32_t
{
    ESC_INLINE = 0,
    ESC_SECONDARY_COMMAND_BUFFERS = 1
};

enum E_PIPELINE_BIND_POINT : uint32_t
{
    EPBP_GRAPHICS = 0,
    EPBP_COMPUTE,

    EPBP_COUNT
};

enum E_INDEX_TYPE : uint32_t
{
    EIT_16BIT = 0,
    EIT_32BIT,
    EIT_UNKNOWN
};

enum E_PIPELINE_STAGE_FLAGS : uint32_t
{
    EPSF_TOP_OF_PIPE_BIT = 0x00000001,
    EPSF_DRAW_INDIRECT_BIT = 0x00000002,
    EPSF_VERTEX_INPUT_BIT = 0x00000004,
    EPSF_VERTEX_SHADER_BIT = 0x00000008,
    EPSF_TESSELLATION_CONTROL_SHADER_BIT = 0x00000010,
    EPSF_TESSELLATION_EVALUATION_SHADER_BIT = 0x00000020,
    EPSF_GEOMETRY_SHADER_BIT = 0x00000040,
    EPSF_FRAGMENT_SHADER_BIT = 0x00000080,
    EPSF_EARLY_FRAGMENT_TESTS_BIT = 0x00000100,
    EPSF_LATE_FRAGMENT_TESTS_BIT = 0x00000200,
    EPSF_COLOR_ATTACHMENT_OUTPUT_BIT = 0x00000400,
    EPSF_COMPUTE_SHADER_BIT = 0x00000800,
    EPSF_TRANSFER_BIT = 0x00001000,
    EPSF_BOTTOM_OF_PIPE_BIT = 0x00002000,
    EPSF_HOST_BIT = 0x00004000,
    EPSF_ALL_GRAPHICS_BIT = 0x00008000,
    EPSF_ALL_COMMANDS_BIT = 0x00010000,
    EPSF_TRANSFORM_FEEDBACK_BIT_EXT = 0x01000000,
    EPSF_CONDITIONAL_RENDERING_BIT_EXT = 0x00040000,
    EPSF_RAY_TRACING_SHADER_BIT_KHR = 0x00200000,
    EPSF_ACCELERATION_STRUCTURE_BUILD_BIT_KHR = 0x02000000,
    EPSF_SHADING_RATE_IMAGE_BIT_NV = 0x00400000,
    EPSF_TASK_SHADER_BIT_NV = 0x00080000,
    EPSF_MESH_SHADER_BIT_NV = 0x00100000,
    EPSF_FRAGMENT_DENSITY_PROCESS_BIT_EXT = 0x00800000,
    EPSF_COMMAND_PREPROCESS_BIT_NV = 0x00020000
};

enum E_ACCESS_FLAGS : uint32_t
{
    EAF_INDIRECT_COMMAND_READ_BIT = 0x00000001,
    EAF_INDEX_READ_BIT = 0x00000002,
    EAF_VERTEX_ATTRIBUTE_READ_BIT = 0x00000004,
    EAF_UNIFORM_READ_BIT = 0x00000008,
    EAF_INPUT_ATTACHMENT_READ_BIT = 0x00000010,
    EAF_SHADER_READ_BIT = 0x00000020,
    EAF_SHADER_WRITE_BIT = 0x00000040,
    EAF_COLOR_ATTACHMENT_READ_BIT = 0x00000080,
    EAF_COLOR_ATTACHMENT_WRITE_BIT = 0x00000100,
    EAF_DEPTH_STENCIL_ATTACHMENT_READ_BIT = 0x00000200,
    EAF_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT = 0x00000400,
    EAF_TRANSFER_READ_BIT = 0x00000800,
    EAF_TRANSFER_WRITE_BIT = 0x00001000,
    EAF_HOST_READ_BIT = 0x00002000,
    EAF_HOST_WRITE_BIT = 0x00004000,
    EAF_MEMORY_READ_BIT = 0x00008000,
    EAF_MEMORY_WRITE_BIT = 0x00010000,
    EAF_TRANSFORM_FEEDBACK_WRITE_BIT_EXT = 0x02000000,
    EAF_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT = 0x04000000,
    EAF_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT = 0x08000000,
    EAF_CONDITIONAL_RENDERING_READ_BIT_EXT = 0x00100000,
    EAF_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT = 0x00080000,
    EAF_ACCELERATION_STRUCTURE_READ_BIT_KHR = 0x00200000,
    EAF_ACCELERATION_STRUCTURE_WRITE_BIT_KHR = 0x00400000,
    EAF_SHADING_RATE_IMAGE_READ_BIT_NV = 0x00800000,
    EAF_FRAGMENT_DENSITY_MAP_READ_BIT_EXT = 0x01000000,
    EAF_COMMAND_PREPROCESS_READ_BIT_NV = 0x00020000,
    EAF_COMMAND_PREPROCESS_WRITE_BIT_NV = 0x00040000,
    EAF_ALL_IMAGE_ACCESSES_DEVSH = EAF_INPUT_ATTACHMENT_READ_BIT|EAF_SHADER_READ_BIT|EAF_SHADER_WRITE_BIT|EAF_COLOR_ATTACHMENT_READ_BIT|EAF_COLOR_ATTACHMENT_WRITE_BIT|EAF_DEPTH_STENCIL_ATTACHMENT_READ_BIT|EAF_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT|EAF_TRANSFER_READ_BIT|EAF_TRANSFER_WRITE_BIT|EAF_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT|EAF_SHADING_RATE_IMAGE_READ_BIT_NV|EAF_FRAGMENT_DENSITY_MAP_READ_BIT_EXT,
    EAF_ALL_ACCESSES_BIT_DEVSH = 0x0004ffff,
    EAF_ALL_BUFFER_ACCESSES_DEVSH = EAF_ALL_ACCESSES_BIT_DEVSH^(EAF_INPUT_ATTACHMENT_READ_BIT|EAF_COLOR_ATTACHMENT_READ_BIT|EAF_COLOR_ATTACHMENT_WRITE_BIT|EAF_DEPTH_STENCIL_ATTACHMENT_READ_BIT|EAF_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT|EAF_MEMORY_READ_BIT|EAF_MEMORY_WRITE_BIT|EAF_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT|EAF_SHADING_RATE_IMAGE_READ_BIT_NV|EAF_FRAGMENT_DENSITY_MAP_READ_BIT_EXT)
};

enum E_DEPENDENCY_FLAGS
{
    EDF_NONE = 0x00,
    EDF_BY_REGION_BIT = 0x01,
    EDF_VIEW_LOCAL_BIT = 0x02,
    EDF_DEVICE_GROUP_BIT = 0x04
};

enum E_SHARING_MODE : uint32_t
{
    ESM_EXCLUSIVE = 0,
    ESM_CONCURRENT = 1
};

}

#endif