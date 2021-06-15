/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.GamePassSystem.GamePassProgressionDataObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGamePassProgressionDataObject : MVWorldObjectClient
{
	// Fields
	public const string gamePassProgressionDataObjectKey = "gamePassProgressionDataObject";
	public const string gamePassProgressionDataObjectValidationKey = "gamePassProgressionDataObjectValidation";
	public const string gamePassProgressionEnabledKey = "gamePassProgressionEnabled";

	// Properties
	public GamePassProgressionDataObjectShared GamePassProgressionDataObjectShared { get; set; }
	public GamePassProgressionDataObjectSharedValidator GamePassProgressionDataObjectSharedValidator { get; }
	public bool EnableProgression { get; }

	// Constructors
	public MVGamePassProgressionDataObject(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void OnDataUpdate();
}

