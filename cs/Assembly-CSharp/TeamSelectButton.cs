/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeamSelectButton : MonoBehaviour, IPointerDownHandler
{
	// Fields
	[SerializeField]
	private Image buttonImage;
	[SerializeField]
	private UnityEngine.UI.Text teamName;
	[SerializeField]
	private UnityEngine.UI.Text playerCountText;
	[SerializeField]
	private UnityEngine.UI.Text friendCountText;
	[SerializeField]
	private GameObject friendIcon;
	private TeamData teamData;
	private UnityAction<MVTeam> OnTeamSelected;

	// Constructors
	public TeamSelectButton();

	// Methods
	public void Initialize(TeamData teamData, UnityAction<MVTeam> OnTeamSelected);
	public void OnPointerDown(PointerEventData eventData);
	private void StartPlaying();
}

