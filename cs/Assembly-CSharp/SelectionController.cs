/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SelectionController : ISelectionController
{
	// Fields
	private HashSet<int> selectedIDs;
	private Stack<int> parentGroups;
	[CompilerGenerated]
	private EventHandler<WorldObjectDestroyedEventArgs> SelectedWorldObjectDeleted;

	// Properties
	private MVWorldObjectClientManager WOCM { get; }
	public int ParentGroupID { get; }
	public bool ParentGroupIsRoot { get; }
	public MVGroup ParentGroup { get; }
	public HashSet<int> SelectedIDs { get; }
	public HashSet<MVWorldObjectClient> SelectedWOs { get; }
	public MVWorldObjectClient SingleSelectedWO { get; }

	// Events
	public event EventHandler<WorldObjectDestroyedEventArgs> SelectedWorldObjectDeleted {
		add;
		remove;
	}

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static EventHandler<WorldObjectDestroyedEventArgs> __9__19_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _.ctor_b__19_0(object _p0_, WorldObjectDestroyedEventArgs _p1_);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass27_0
	{
		// Fields
		public int id;

		// Constructors
		public __c__DisplayClass27_0();

		// Methods
		internal bool _DeSelectAllExcept_b__0(int s);
	}

	// Constructors
	public SelectionController();

	// Methods
	private void WOCM_WorldObjectDestroyedHandler(object sender, WorldObjectDestroyedEventArgs e);
	private void PushWOParents(MVWorldObjectClient wo, bool addAsParent = false);
	public WorldObjectClientRef SelectWO(int id, bool addToSelection = false, bool showVisuals = true);
	public WorldObjectClientRef Select(bool addToSelection = false, bool showVisuals = true, int layerMask = -5);
	public WorldObjectClientRef Select(VoxelHit hit, bool addToSelection = false, bool showVisuals = true);
	public bool SelectParent(bool showVisuals = true);
	public void DeSelectAll();
	public void DeSelectAllExcept(int id);
	public void DeSelectWorldObject(MVWorldObjectClient wo);
	public void EnterGroup(MVGroup group);
	public int ExitGroup();
	public int ExitGroupToRoot();
	public bool IsSelected(int id);
	public bool IsChildOf(int childId, int parentId);
	public bool IsChildOf(MVWorldObjectClient child, MVWorldObjectClient parent);
}

