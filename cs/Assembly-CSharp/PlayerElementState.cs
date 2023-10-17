/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class __c__DisplayClass9_0
	{
		// Fields
		public AdminToolController adminTools;

		// Constructors
		public __c__DisplayClass9_0();

		// Methods
		internal void _OpenUserManagement_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass9_1
	{
		// Fields
		public OwnerToolController ownerTools;

		// Constructors
		public __c__DisplayClass9_1();

		// Methods
		internal void _OpenUserManagement_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public PlayerElementState __4__this;
		public MVPlayer player;
		public Friend friend;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _SetupButtons_b__0();
		internal void _SetupButtons_b__1();
		internal void _SetupButtons_b__2();
		internal void _SetupButtons_b__3();
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass11_1
	{
		// Fields
		public string errorText;

		// Constructors
		public __c__DisplayClass11_1();

		// Methods
		internal void _SetupButtons_b__4(IModalPopupCreator x, BaseEventData y);
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

