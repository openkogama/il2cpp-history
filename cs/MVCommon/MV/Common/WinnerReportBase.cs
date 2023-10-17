/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 11: MVCommon.dll - Assembly: MVCommon, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.Common
{
	public class WinnerReportBase
	{
		// Fields
		public MVWinningState winningState;
		public MVWinningCondition winningType;
		public List<WinnerListNode> winnerList;
		public bool isTeamGame;
	
		// Constructors
		public WinnerReportBase();
	
		// Methods
		public void AddWinner(int actorNr, int timeMS);
		public void AddWinners(Dictionary<int, int> orderedList);
		public int[] GetWinnerListActors();
		public int[] GetWinnerListTimes();
	}
}
