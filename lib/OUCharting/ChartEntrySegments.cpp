/************************************************************************
 * Copyright(c) 2010, One Unified. All rights reserved.                 *
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

//#include "StdAfx.h"

#include "ChartEntrySegments.h"

namespace ou { // One Unified

ChartEntrySegments::ChartEntrySegments(void) 
: ChartEntryPrice()
{
}

ChartEntrySegments::~ChartEntrySegments(void) {
}

bool ChartEntrySegments::AddEntryToChart(XYChart *pXY, structChartAttributes *pAttributes) {
  
  ChartEntryPrice::ClearQueue();
  
  bool bAdded( false );
  if ( 0 < ChartEntryPrice::Size() ) {
    DoubleArray daXData = ChartEntryTime::GetDateTimes();
    if ( 0 != daXData.len ) {
      LineLayer *layer = pXY->addLineLayer( GetPrices(), m_eColour, m_sName.c_str() );
    
      layer->setXData( daXData );
      pAttributes->dblXMin = daXData[0];
      pAttributes->dblXMax = daXData[ daXData.len - 1 ];
      bAdded = true;
    }
  }
  return bAdded;
}

} // namespace ou
