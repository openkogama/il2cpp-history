/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVPlayerContainer : IEnumerator, IEnumerable<KeyValuePair<int, MVPlayer>>
{
	// Fields
	private readonly Dictionary<int, MVPlayer> players;
	private readonly Dictionary<int, MVPlayer> pendingPlayers;
	private int localPlayerActorNumber;
	public Action OnPlayerListChanged;
	public Action OnPlayerListLoaded;
	public Action OnLocalPlayerReady;
	public Action OnLocalPlayerTeamChanged;

	// Properties
	public MVLocalPlayer LocalPlayer { get; }
	public int Count { get; }
	public int PendingPlayersCount { get; }
	public Dictionary<int, MVPlayer> Values { get; }
	public MVPlayer this[int actorNumber] { get => default; }
	public object Current { get; }

	// Constructors
	public MVPlayerContainer();

	// Methods
	public void SetLocalPlayer(int actorNumber);
	public bool TryGetPlayerByProfileId(int profileId, out MVPlayer player);
	public void Add(MVPlayer player);
	public void Add(List<MVPlayer> playerList);
	public void Remove(int actorNr);
	public void UpdateTeam(int actorNr, MVTeam team);
	public void UpdateTeamForPlayersOnRemovedTeam(MVTeam removedTeam, MVTeam defaultTeam);
	public MVPlayer GetPlayerUnsafe(int actorNr);
	public void SetPlayerReady(int actorNr);
	public bool TryGetValue(int actorNr, out MVPlayer player);
	public bool ContainsKey(int actorNr);
	public IEnumerator<KeyValuePair<int, MVPlayer>> GetEnumerator();
	IEnumerator IEnumerable.GetEnumerator();
	public bool MoveNext();
	public void Reset();
	private void SendPlayerListEvents();
}

