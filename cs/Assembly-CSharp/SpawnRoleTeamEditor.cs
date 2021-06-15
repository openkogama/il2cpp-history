/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleTeamEditor : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<SpawnRoleTeamButton> teamButtons;
	private UnityAction<MVTeam> onTeamChangeCallback;

	// Nested types
	[Serializable]
	private struct SpawnRoleTeamButton
	{
		// Fields
		public GameObject buttonSelected;
		public GameObject buttonNotSelected;
		public UnityEngine.UI.Text buttonSelectedText;
		public UnityEngine.UI.Text buttonNotSelectedText;
		public MVTeam team;
	}

	// Constructors
	public SpawnRoleTeamEditor();

	// Methods
	public void Initialize(MVTeam spawnRolesTeam, UnityAction<MVTeam> onTeamChangeCallback);
	public void SelectRedTeam();
	public void SelectBlueTeam();
	public void SelectYellowTeam();
	public void SelectGreenTeam();
	private void SelectTeam(MVTeam teamSelected);
}

