/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class KoGaMaPackageClient
{
	// Fields
	public Dictionary<int, RuntimePrototypeCubeModel> prototypes;
	public Dictionary<int, MVWorldObjectClient> worldObjects;
	public Dictionary<int, Link> links;
	public Dictionary<int, ObjectLink> objectLinks;
	public int worldObjectRoot;

	// Constructors
	public KoGaMaPackageClient(BytePacker koGaMaData, bool readRuntimeValues);

	// Methods
	public void InventoryInitialize();
	public void Destroy();
	public void HandleDeserializedData(Dictionary<object, object> returnData, KogamaDataType dataType);
	private void AddLink(Dictionary<object, object> data);
	private void AddObjectLink(Dictionary<object, object> data);
	private void AddPrototype(Dictionary<object, object> data);
	private void AddWorldObject(Dictionary<object, object> data);
	public static float Compare(KoGaMaPackageClient koGaMaPackageClientOriginal, KoGaMaPackageClient koGaMaPackageClientDesendant);
	public static MVWorldObjectClient WorldObjectFactory(Dictionary<object, object> worldObjectData, Dictionary<int, MVWorldObjectClient> worldObjects, Dictionary<int, RuntimePrototypeCubeModel> prototypes);
	public override string ToString();
}

