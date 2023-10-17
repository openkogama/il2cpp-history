/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.FirstTimeSystem
{
	public class FirstTimeActivatableTeamNameMessage : FirstTimeActivatableButtonPointer
	{
		// Fields
		[SerializeField]
		private bool inventoryButton;
		private readonly WorldObjectTypeInShopChecker inShopChecker;
	
		// Properties
		public override bool CanShow { get; }
	
		// Constructors
		public FirstTimeActivatableTeamNameMessage();
	
		// Methods
		private void Register();
		[CompilerGenerated]
		private void _Register_b__4_0(IFirstTimeElementActivator x, BaseEventData y);
	}
}
