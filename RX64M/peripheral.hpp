#pragma once
//=====================================================================//
/*!	@file
	@brief	RX64M グループ・ペリフェラル
    @author 平松邦仁 (hira@rvf-rc45.net)
	@copyright	Copyright (C) 2016, 2017 Kunihito Hiramatsu @n
				Released under the MIT license @n
				https://github.com/hirakuni45/RX/blob/master/LICENSE
*/
//=====================================================================//
#include <cstdint>

namespace device {

	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
	/*!
		@brief  ペリフェラル種別
	*/
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
	enum class peripheral {
		CMT0,
		CMT1,
		CMT2,
		CMT3,

		RIIC0,
		RIIC2,

		SCI0,  // (P20:TXD0, P21:RXD0)
		SCI1,  // (PF0:TXD1, PF2:RXD1)
		SCI2,  // (P13:TXD2, P12:RXD2)
		SCI3,  // (P23:TXD3, P25:RXD3)
		SCI4,  // (PB1:TXD4, PB0:RXD4)
		SCI5,  // (PA4:TXD5, PA2:RXD5)
		SCI6,  // (P00:TXD6, P01:RXD6)
		SCI7,  // (P90:TXD7, P92:RXD7)

		SCI12,  //

		RSPI,

		TMR0,	///< 8 ビットタイマ０
		TMR1,	///< 8 ビットタイマ１
		TMR2,	///< 8 ビットタイマ２
		TMR3,	///< 8 ビットタイマ３

		S12AD,	///< 12 ビット A/D コンバータ（ユニット０）
		S12AD1,	///< 12 ビット A/D コンバータ（ユニット１）

		R12DA,	///< 12 ビット D/A コンバーター

		SDHI,	///< SDHI

		ETHERC0,	///< Ethernet 0 (PHY RMII)
		ETHERC1,	///< Ethernet 1 (PHY RMII)
		PTPETHERC,	///< PTP Ethernet

		ETHERCA,	///< Ethernet 0 (PHY RMII)カスタムポート接続

		EDMAC0,		///< Ethernet DMA 0
		EDMAC1,		///< Ethernet DMA 1
		PTPEDMAC,	///< PTP Ethernet DMA
	};

}
