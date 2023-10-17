/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TimeoutMap
{
	// Fields
	private readonly float timeOut;
	private Dictionary<int, float> weaponTimeOutMap;
	private HashSet<int> removeSet;

	// Constructors
	public TimeoutMap(float timeOut);

	// Methods
	public void Update();
	public void Add(int id);
	public bool Contains(int id);
}

