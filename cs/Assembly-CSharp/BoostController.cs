/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostController
{
	// Fields
	public Action BoostCountChanged;
	private static readonly Dictionary<BoostType, Boost> boosts;
	private Dictionary<BoostType, Action> onBoostTypeUpdate;
	public List<BoostType> boostPriorityList;
	private Dictionary<BoostType, Boost> activeBoosts;
	private List<Boost> removeList;

	// Constructors
	public BoostController();
	static BoostController();

	// Methods
	public void ActivateBoost(BoostType type);
	public void RemoveAllBoosts();
	private void BoostUpdated(BoostType type);
	public void AllowBoost(BoostType boost, bool allowed);
	public bool HasAvailableBoosts();
	public void SubscribeToBoostChanged(BoostType type, Action callback);
	public void UnSubscribeToBoostChanged(BoostType type, Action callback);
	public bool IsBoostActive(BoostType type);
	public Dictionary<BoostType, Boost> GetAllBoosts();
	public Dictionary<BoostType, Boost> GetActiveBoosts();
	public bool TryGetActiveBoost(BoostType type, out Boost boost);
	public bool TryGetBoost(BoostType type, out Boost boost);
}

