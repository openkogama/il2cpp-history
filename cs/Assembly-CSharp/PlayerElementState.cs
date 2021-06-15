/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerElementState : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Button requestFriendship;
	[SerializeField]
	private Button pendingFriendship;
	[SerializeField]
	private Button acceptFriendRequest;
	[SerializeField]
	private Button cancel;
	[SerializeField]
	private Button manageUserButton;
	[SerializeField]
	private AdminToolController adminToolsPrefab;
	[SerializeField]
	private OwnerToolController ownerToolsPrefab;
	[SerializeField]
	private UnityEngine.UI.Text playerName;

	// Nested types
	[CompilerGenerated]
	private sealed class _OpenUserManagement_c__AnonStorey0
	{
		// Fields
		internal AdminToolController adminTools;

		// Constructors
		public _OpenUserManagement_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OpenUserManagement_c__AnonStorey1
	{
		// Fields
		internal OwnerToolController ownerTools;

		// Constructors
		public _OpenUserManagement_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _SetupButtons_c__AnonStorey2
	{
		// Fields
		internal MVPlayer player;
		internal Friend friend;
		internal PlayerElementState _this;

		// Nested types
		private sealed class _SetupButtons_c__AnonStorey3
		{
			// Fields
			internal string errorText;
			internal _SetupButtons_c__AnonStorey2 __f__ref_2;

			// Constructors
			public _SetupButtons_c__AnonStorey3();

			// Methods
			internal void __m__0(IModalPopupCreator x, BaseEventData y);
		}

		// Constructors
		public _SetupButtons_c__AnonStorey2();

		// Methods
		internal void __m__0();
		internal void __m__1();
		internal void __m__2();
		internal void __m__3();
	}

	// Constructors
	public PlayerElementState();

	// Methods
	public void Initialize(MVPlayer player, Friend friend);
	public void OpenUserManagement();
	private void SetButtonVisibility(MVPlayer player, Friend friend);
	private void SetupButtons(MVPlayer player, Friend friend);
	private void ValidateFriendRequest();
}

