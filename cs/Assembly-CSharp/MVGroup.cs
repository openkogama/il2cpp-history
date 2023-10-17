/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGroup : MVWorldObjectClient
{
	// Fields
	protected Dictionary<int, MVWorldObjectClient> children;

	// Properties
	public List<MVWorldObjectClient> Children { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Comparison<MVWorldObjectClient> __9__15_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal int _Clone_b__15_0(MVWorldObjectClient w1, MVWorldObjectClient w2);
	}

	// Constructors
	public MVGroup(Dictionary<object, object> data, GameObject prefabObject, Dictionary<int, MVWorldObjectClient> worldObjects);
	public MVGroup(Dictionary<object, object> data, ObjectPrefab prefabObject, Dictionary<int, MVWorldObjectClient> worldObjects);
	public MVGroup(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	private void CreateGroup();
	public HashSet<int> GetHierarchyWorldObjectIDs();
	private static Bounds ComputeLocalChildBounds(MVWorldObjectClient wo, BoundsContext boundsContext);
	public static Bounds ComputeBoundsForWOs(List<MVWorldObjectClient> woList, BoundsContext boundsContext);
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public override void Select();
	public override void Select(Color color);
	public override void DeSelect();
	public override void TraverseRecursiveTail(CallBackDelegate callBack);
	public override MVWorldObjectClient Clone(int ownerActorNumber, int cloneGroupId, CloneBookkeeping cloneBookkeeping, Dictionary<int, MVWorldObjectClient> worldObjects, Dictionary<int, RuntimePrototypeCubeModel> prototypes);
	public override void Initialize();
	private void SetupTranformation();
	private void OnPositionChanged(MVWorldObjectClient wo, PositionChangedEventArgs positionChangedEventArgs);
	public override void PositionChangedNotify();
	public override void InitializeInventory();
	public override void PlayModeInitialize();
	public void RemoveChild(int childId);
	public virtual void TransferChild(int id);
	public virtual void AddChild(MVWorldObjectClient child);
	public MVWorldObjectClient GetChild(int woID);
	public static bool IsDescendant(int parentId, int leafId);
	public static int GetGroupAbove(int currentParent, int leaf, InteractionFlags returnParentIfHasFlags = InteractionFlags.None);
	public static int GetParentBelow(int parentId, int childId);
	public static int GetParentBelow(MVWorldObjectClient parent, MVWorldObjectClient child);
	public override bool OnEnterObject(EditorStateMachine e);
}

