/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVMovingPlatformNode : MVWorldObjectClient
{
	// Fields
	[CompilerGenerated]
	private MVMovingPlatformNode _Previous_k__BackingField;
	[CompilerGenerated]
	private MVMovingPlatformNode _Next_k__BackingField;

	// Properties
	public MVMovingPlatformNode Previous { [CompilerGenerated] get; [CompilerGenerated] set; }
	public MVMovingPlatformNode Next { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public MVMovingPlatformNode(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Select(Color color);
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public override bool Delete(MVWorldObjectClientManager WOCM, ref string errorText);
}

