/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVTeleportGroup : MVBlueprintBase
{
	// Fields
	private MVTeleporter teleporter1;
	private MVTeleporter teleporter2;

	// Properties
	public MVTeleporter Teleporter1 { get; }
	public MVTeleporter Teleporter2 { get; }
	public override MVWorldObjectDocumentationType DocumentationType { get; }

	// Constructors
	public MVTeleportGroup(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private MVTeleporter RetrieveTeleporter(Dictionary<object, object> table, string id);
	public override void SetWorldObjectToPurchased();
	public override void AddPreviewBox();
	private void AddPreviewBoxesToTeleporters();
}

