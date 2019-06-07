/************************************************************************
 * Copyright(c) 2019, One Unified. All rights reserved.                 *
 * email: info@oneunified.net                                           *
 *                                                                      *
 * This file is provided as is WITHOUT ANY WARRANTY                     *
 *  without even the implied warranty of                                *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                *
 *                                                                      *
 * This software may not be used nor distributed without proper license *
 * agreement.                                                           *
 *                                                                      *
 * See the file LICENSE.txt for redistribution information.             *
 ************************************************************************/

/*
 * File:    Strangle.h
 * Author:  raymond@burkholder.net
 * Project: TFOptions
 * Created on May 25, 2019, 10:56 PM
 */

#ifndef STRANGLE_H
#define STRANGLE_H

#include <vector>
#include <functional>

#include <OUCharting/ChartDataView.h>

#include <TFTrading/Portfolio.h>
#include <TFTrading/Position.h>

#include "Combo.h"
#include "Option.h"

namespace ou { // One Unified
namespace tf { // TradeFrame
namespace option { // options

class Strangle: public Combo {
public:

  using pPosition_t = ou::tf::Position::pPosition_t;
  using pPortfolio_t = ou::tf::Portfolio::pPortfolio_t;
  using pChartDataView_t = ou::ChartDataView::pChartDataView_t;

  Strangle();
  Strangle( const Strangle& rhs ) = delete;
  Strangle& operator=( const Strangle& rhs ) = delete;
  Strangle( Strangle&& rhs );

  virtual void AddPosition( pPosition_t, pChartDataView_t pChartData, ou::Colour::enumColour );

  virtual void PlaceOrder( ou::tf::OrderSide::enumOrderSide );

  void CloseFarItm( double price );

private:

  enum IX { ixCall, ixPut };

};

} // namespace option
} // namespace tf
} // namespace ou

#endif /* STRANGLE_H */
