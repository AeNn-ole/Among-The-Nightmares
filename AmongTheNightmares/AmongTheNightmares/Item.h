#pragma once


class Item {
public:
	virtual ~Item() = default;
	virtual void Use() = 0;
};