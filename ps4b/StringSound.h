// Copyright 2022 Aniketh Rai
#ifndef STRINGSOUND_H_
#define STRINGSOUND_H_
#include <vector>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "CircularBuffer.h"


class StringSound{
 public:
    explicit StringSound(double frequency);
    explicit StringSound(std::vector<sf::Int16> init);
    StringSound(const StringSound &obj) {}
    ~StringSound();
    void pluck();
    void tic();
    sf::Int16 sample();
    int time();

 private:
    CircularBuffer<int> *buffer{};
    int _time;
    int blen;
};
#endif  // STRINGSOUND_H_
