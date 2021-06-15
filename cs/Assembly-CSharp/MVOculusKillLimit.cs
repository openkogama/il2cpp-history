/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVOculusKillLimit : MVGamePointRewardLogicObject
{
	// Fields
	private bool initializedInWorld;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	protected override bool HasVisualsInPlaymode { get; }
	private int KillLimit { get; }
	protected override int GamePointRewardAmount { get; }

	// Constructors
	public MVOculusKillLimit(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override bool IsSingletonObject();
	public override void OnDataUpdate();
	public override void Destroy();
}

