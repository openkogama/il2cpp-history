/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVRoundCube : MVLogicObject
{
	// Fields
	private bool initializedInWorld;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public int DurationInMilliseconds { get; }
	protected override bool HasVisualsInPlaymode { get; }

	// Constructors
	public MVRoundCube(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override bool IsSingletonObject();
	public override void Destroy();
	public int GetTimeLeft();
	public string MakeTimeIntoText(int time);
	private void OnResetWorldDone(object sender, EventArgs e);
}

