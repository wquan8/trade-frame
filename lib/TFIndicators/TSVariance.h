/************************************************************************
 * Copyright(c) 2012, One Unified. All rights reserved.                 *
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

#pragma once

#include "TSMA.h"

namespace ou { // One Unified
namespace tf { // TradeFrame
namespace hf { // high frequency

// p1 = power
// p2 = 1 / p2 for Standard Deviation

class TSVariance: public Prices {
public:
  TSVariance( Prices& series, time_duration dt, unsigned int n, double p1, double p2 = 1.0 );
  ~TSVariance(void);
protected:
private:
  time_duration m_dtTimeRange;
  unsigned int m_n;
  double m_p1;
  double m_p2;
  double m_z;
  Prices m_dummy;
  Prices& m_seriesSource;
  TSMA m_ma1;
  TSMA m_ma2;
  void HandleUpdate( const Price& );
  void HandleMA1Update( const Price& );
  void HandleMA2Update( const Price& );
};

} // namespace hf
} // namespace tf
} // namespace ou