/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SelectionController : ISelectionController
{
	// Fields
	private HashSet<int> selectedIDs;
	private Stack<int> parentGroups;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private EventHandler<WorldObjectDestroyedEventArgs> SelectedWorldObjectDeleted;
	[CompilerGenerated]
	private static EventHandler<WorldObjectDestroyedEventArgs> __f__am_cache0;

	// Properties
	private MVWorldObjectClientManager WOCM { get; }
	public int ParentGroupID { get; }
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
	[CompilerGenerated]
	private sealed class _DeSelectAllExcept_c__AnonStorey0
	{
		// Fields
		internal int id;

		// Constructors
		public _DeSelectAllExcept_c__AnonStorey0();

		// Methods
		internal bool __m__0(int s);
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
	[CompilerGenerated]
	private static void _SelectedWorldObjectDeleted_m__0(object param_00005ba9, WorldObjectDestroyedEventArgs param_00005baa);
}

