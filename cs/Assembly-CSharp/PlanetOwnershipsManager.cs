/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.OwnershipData;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlanetOwnershipsManager : MonoBehaviour
{
	// Fields
	[CompilerGenerated]
	private Action<Dictionary<int, PlanetOwnershipsEntry>> OnReceivedPlanetOwnershipData;
	[CompilerGenerated]
	private Action<Dictionary<int, List<int>>> OnReceivedPlanetPermissionsData;
	[CompilerGenerated]
	private static PlanetOwnershipsManager _Instance_k__BackingField;
	[CompilerGenerated]
	private Dictionary<int, PlanetOwnershipsEntry> _PlanetOwnershipsEntries_k__BackingField;
	[CompilerGenerated]
	private Dictionary<int, List<int>> _PlanetPermissionsEntries_k__BackingField;
	[CompilerGenerated]
	private bool _RecievedPlanetOwnershipData_k__BackingField;
	[CompilerGenerated]
	private bool _ReceivedPlanetPermissionsData_k__BackingField;

	// Properties
	public static PlanetOwnershipsManager Instance { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Dictionary<int, PlanetOwnershipsEntry> PlanetOwnershipsEntries { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Dictionary<int, List<int>> PlanetPermissionsEntries { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool RecievedPlanetOwnershipData { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool ReceivedPlanetPermissionsData { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Events
	public event Action<Dictionary<int, PlanetOwnershipsEntry>> OnReceivedPlanetOwnershipData {
		add;
		remove;
	}
	public event Action<Dictionary<int, List<int>>> OnReceivedPlanetPermissionsData {
		add;
		remove;
	}

	// Constructors
	public PlanetOwnershipsManager();

	// Methods
	private void Awake();
	public void RecievedPlanetOwnershipsDataCallback(PlanetOwnershipsData data);
	private void ReceivedPlanetPermissionsDataCallback(Dictionary<int, List<int>> data);
	private void JSON_Unstripper();
	private void OnDestroy();
	[CompilerGenerated]
	private void _Awake_b__26_0();
}

