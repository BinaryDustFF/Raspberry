/*
 * GestionMCP42100.cpp
 *
 *  Created on: 07 octobre 2018
 *      Author: totof
 * Controle du MCP42100
 */

#include "GestionMCP42100.h"

#define VALUE 100000.0

// **************************************
// Constructeur vide
// **************************************
GestionMCP42100::GestionMCP42100(void) {
}

// **************************************
// Constructeur
// M�morise le canal et initialise le SPI
// @Param le canal
// **************************************
GestionMCP42100::GestionMCP42100(Channel pChannel) {
	init(pChannel);
}

// **************************************
// Constructeur
// M�morise le canal et initialise le SPI
// @Param le canal
// @param la broche reset
// **************************************
GestionMCP42100::GestionMCP42100(Channel pChannel, PinGPIO pReset) {
	init(pChannel, pReset);
}

// **************************************
// Constructeur
// M�morise le canal et initialise le SPI
// @Param le canal
// @param la broche reset
// @param la broche shutdown
// **************************************
GestionMCP42100::GestionMCP42100(Channel pChannel, PinGPIO pReset, PinGPIO pShutdown) {
	init(pChannel, pReset, pShutdown);
}

// **************************************
// Constructeur
// M�morise le canal et initialise le SPI
// @Param le canal
// **************************************
bool GestionMCP42100::init(Channel pChannel) {
	return GestionMCP42xxx::init(pChannel, VALUE);
}

// **************************************
// Constructeur
// M�morise le canal et initialise le SPI
// @Param le canal
// @param la broche reset
// **************************************
bool GestionMCP42100::init(Channel pChannel, PinGPIO pReset) {
	return GestionMCP42xxx::init(pChannel, VALUE, pReset);
}

// **************************************
// Constructeur
// M�morise le canal et initialise le SPI
// @Param le canal
// @param la broche reset
// @param la broche shutdown
// **************************************
bool GestionMCP42100::init(Channel pChannel, PinGPIO pReset, PinGPIO pShutdown) {
	return GestionMCP42xxx::init(pChannel, VALUE, pReset, pShutdown);
}

// ***********
// Destructeur
// ***********
GestionMCP42100::~GestionMCP42100() {
}

