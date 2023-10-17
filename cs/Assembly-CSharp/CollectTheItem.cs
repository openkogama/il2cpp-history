/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CollectTheItem : MVBlueprintBase
{
	// Fields
	private CollectTheItemDropOff dropOff;
	private CollectTheItemCollectable collectable;
	private CollectTheItemLineObject objectPrefab;
	private bool hasInitializedReferences;
	[CompilerGenerated]
	private int _WoKeyInstance_k__BackingField;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public int WoKeyInstance { [CompilerGenerated] get; [CompilerGenerated] set; }
	public int DropOffId { get; }
	public bool HasDropOff { get; }

	// Nested types
	private enum LinePositionIndex
	{
		DropOff = 0,
		Collectable = 1
	}

	// Constructors
	public CollectTheItem(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public void SetupReferences();
	private void OnDropOffPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
	private void OnCollectablePositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
	public bool GetDoesWoFitDropOff(int keyId);
	private MVWorldObjectClient RetrieveWorldObject(Dictionary<object, object> table, string id);
}

