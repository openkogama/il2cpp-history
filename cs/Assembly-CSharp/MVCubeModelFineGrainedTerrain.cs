/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCubeModelFineGrainedTerrain : MVCubeModelBase
{
	// Fields
	private CullingTerrainManager cullingTerrainManager;

	// Properties
	public bool RequiresResetToEdit { get; }

	// Constructors
	public MVCubeModelFineGrainedTerrain(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects, Dictionary<int, RuntimePrototypeCubeModel> prototypes);

	// Methods
	public override void Initialize();
	public override void Destroy();
	public override void Reset();
	public override void RemoveCubeNetworkUpdate(IntVector pos);
	public override void AddCubeNetworkUpdate(IntVector pos, CubeBase cube);
}

