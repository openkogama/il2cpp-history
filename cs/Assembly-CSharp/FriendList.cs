/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine.Events;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FriendList
{
	// Fields
	public OnFriendListUpdatedDelegate OnFriendListUpdated;
	public OnFriendRequestUpdated OnFriendRequestAccepted;
	public UnityAction OnFriendRequestReceived;
	public UnityAction<int> OnPendingCountChanged;
	private Dictionary<int, Friend> friends;
	private Dictionary<int, Friend> pending;
	private List<int> pendingNotifications;

	// Properties
	public Dictionary<int, Friend> Friends { get; }
	public Dictionary<int, Friend> Pending { get; }
	public List<int> PendingProfileIds { get; }
	public Friend this[int friendID] { get => default; }

	// Nested types
	public delegate void OnFriendListUpdatedDelegate();

	public delegate void OnFriendRequestUpdated(Friend friend);

	[CompilerGenerated]
	private sealed class _GetFriendByProfileID_c__AnonStorey0
	{
		// Fields
		internal int profileID;

		// Constructors
		public _GetFriendByProfileID_c__AnonStorey0();

		// Methods
		internal bool __m__0(KeyValuePair<int, Friend> f);
		internal bool __m__1(KeyValuePair<int, Friend> f);
		internal bool __m__2(KeyValuePair<int, Friend> f);
		internal bool __m__3(KeyValuePair<int, Friend> f);
	}

	// Constructors
	public FriendList();

	// Methods
	private void OnPlayersLoaded();
	public void AddFriend(int friendID, int profileID, int friendProfileID, FriendStatus status);
	public void UpdateFriend(int friendID, int profileID, FriendStatus status);
	public bool IsFriend(int profileID);
	public Friend GetFriendByProfileID(int profileID);
	public Dictionary<int, MVPlayer> GetOnlineFriends();
	private void RemoveFromPendingByProfileID(int profileID);
}

