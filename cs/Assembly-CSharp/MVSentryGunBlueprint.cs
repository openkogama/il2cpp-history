/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVSentryGunBlueprint : MVBlueprintBase
{
	// Fields
	private MVCubeModelInstance editableCubes;
	private MVSentryGun gun;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public MVCubeModelBase EditableCubesWO { get; }

	// Constructors
	public MVSentryGunBlueprint(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void InitializeInventory();
	public void InitializeCommon();
	public override bool CompareWithKoGaMaPackage(MVWorldObjectClient wo, KoGaMaPackageClient koGaMaPackageClient, ref int insertedByProfileId);
	public override bool OnEnterObject(EditorStateMachine e);
	public override bool OnExitObject(EditorStateMachine e);
	[CompilerGenerated]
	private IModelingConstraint _InitializeCommon_b__9_0();
}

