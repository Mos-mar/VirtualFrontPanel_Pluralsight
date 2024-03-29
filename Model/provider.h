#pragma once
#include <memory>

namespace Ps {
class Settings;
class Provider final
{
public:

    static Settings &GetSettingsAsSingleton();

private:
    static std::unique_ptr<Settings> m_instanceSettings;

    explicit Provider(const Provider &rhs) = delete;
    Provider &operator=(const Provider &rhs) = delete;
};
} // namespace Ps
