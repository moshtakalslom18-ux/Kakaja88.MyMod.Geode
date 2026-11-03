#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        FLAlertLayer::create("Success!", "My custom Xiaomi Pad 6 Mod works!", "Awesome")->show();

        return true;
    }
};
