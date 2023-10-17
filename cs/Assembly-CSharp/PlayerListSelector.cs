/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerListSelector : MonoBehaviour
{
	// Fields
	[SerializeField]
	private PlayerListSelectorButton teamSelectButtonPrefab;
	private Dictionary<MVTeam, PlayerList> playerLists;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass2_0
	{
		// Fields
		public MVTeam teamCallbackVal;
		public PlayerListSelector __4__this;

		// Constructors
		public __c__DisplayClass2_0();

		// Methods
		internal void _Setup_b__0();
	}

	// Constructors
	public PlayerListSelector();

	// Methods
	public void Setup(Dictionary<MVTeam, PlayerList> playerLists);
	public void SetActiveTeam(MVTeam team);
}

