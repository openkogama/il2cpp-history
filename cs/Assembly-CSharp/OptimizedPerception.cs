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

public class OptimizedPerception
{
	// Fields
	private Vector3 position;
	private float radius;
	private HashSet<int> potentialTargets;
	private HashSet<int> removeSet;
	private List<WorldObjectClientRef> targets;

	// Constructors
	public OptimizedPerception();

	// Methods
	public void Update(Vector3 position, float radius);
	public List<WorldObjectClientRef> GetTargets(MVTeam alliedTeam);
	private bool GetValidTarget(int woID, MVTeam alliedTeam, out WorldObjectClientRef wo);
	private void UpdatePotentialTargets();
}

