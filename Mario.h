
#ifndef MARIO_H__
#define MARIO_H__

// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Character.h"


class Mario : public Character {
 public :
  // =========================================================================
  //                               Constructors
  // =========================================================================
  Mario();
  // =========================================================================
  //                                Destructor
  // =========================================================================
  virtual ~Mario();

  // =========================================================================
  //                                  Getters
  // =========================================================================

  // =========================================================================
  //                                  Setters
  // =========================================================================

  // =========================================================================
  //                                 Operators
  // =========================================================================

  // =========================================================================
  //                              Public Methods
  // =========================================================================
  virtual void WhatAmI();
	virtual void Break();
  
 protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
  
  private :

};

// ===========================================================================
//                            Getters' definitions
// ===========================================================================

// ===========================================================================
//                            Setters' definitions
// ===========================================================================

// ===========================================================================
//                           Operators' definitions
// ===========================================================================

// ===========================================================================
//                        Inline functions' definition
// ===========================================================================


#endif
