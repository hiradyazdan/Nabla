#ifndef __NBL_I_API_CONNECTION_H_INCLUDED__
#define __NBL_I_API_CONNECTION_H_INCLUDED__

#include "nbl/core/declarations.h"

#include "nbl/video/EApiType.h"
#include "nbl/video/debug/IDebugCallback.h"
#include "nbl/video/utilities/renderdoc.h"

namespace nbl::video
{

class IPhysicalDevice;

class IAPIConnection : public core::IReferenceCounted
{
    public:
        // TODO: are these "instance features" ?
        enum E_FEATURE
        {
            EF_SURFACE = 0,
            EF_COUNT
        };

        virtual E_API_TYPE getAPIType() const = 0;

        virtual IDebugCallback* getDebugCallback() const = 0;

        core::SRange<IPhysicalDevice* const> getPhysicalDevices() const;

        static core::SRange<const E_FEATURE> getDependentFeatures(const E_FEATURE feature);

    protected:
        IAPIConnection();

        std::vector<std::unique_ptr<IPhysicalDevice>> m_physicalDevices;
        renderdoc_api_t* m_rdoc_api;
};

}


#endif