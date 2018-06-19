// Adapter.hpp
//
// MIT License
//
// Copyright(c) 2017 Oiltanker
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// The developer's email is mentioned on GitHub profile
//

#ifndef ADAPTER
#define ADAPTER

#include <memory>
#include <SFML/Graphics/Color.hpp>
#include "../CLNoise/DeviceManager.h"

typedef unsigned char uchar;

class Adapter {
public:
    //Initialize
    Adapter(Device& device);
    ~Adapter();

    sf::Color* to_shade(float* noise, size_t msize, float nmin, float nmax);
    sf::Color* to_color(float* noise1, float* noise2, float* noise3, size_t msize, float nmin, float nmax);

private:
    class impl;
    std::unique_ptr<impl> pimpl;
};

#endif // ADAPTER
