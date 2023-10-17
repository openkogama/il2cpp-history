/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.Common;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.GamePassSystem
{
	public class PlayerPlanetData
	{
		// Fields
		public int highScoreGamePoints;
		public int rank;
		public int progressionGamePoints;
		public TimeSpan playtime;
		public GamePassTier gamePassTier;
		public PlayerPlanetMetaDataClient playerPlanetMetaData;
		public GamePassTier previewGamePassTier;
	
		// Constructors
		public PlayerPlanetData();
		public PlayerPlanetData(int highScoreGamePoints, int progressionGamePoints, TimeSpan playtime, GamePassTier gamePassTier, GamePassTier previewGamePassTier, int rank, PlayerPlanetMetaDataClient playerPlanetMetaData);
	
		// Methods
		public GamePassTier GetGamePassTierWithPreview();
		public void UpdateWithPurchase(int deltaGamePoints, GamePassTier gamePassTier);
		public override string ToString();
	}
}
