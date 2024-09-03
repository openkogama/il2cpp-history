/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	[Serializable]
	public class Hotkeys
	{
		// Fields
		private static List<KeyCode> _availableKeys;
		private static List<string> _availableKeyNames;
		private const int _maxNumberOfKeys = 2;
		[SerializeField]
		private bool _isEnabled;
		[SerializeField]
		private KeyCode _key;
		[SerializeField]
		private bool _lCtrl;
		[SerializeField]
		private bool _lCmd;
		[SerializeField]
		private bool _lAlt;
		[SerializeField]
		private bool _lShift;
		[SerializeField]
		private bool _useStrictModifierCheck;
		[SerializeField]
		private bool _lMouseBtn;
		[SerializeField]
		private bool _rMouseBtn;
		[SerializeField]
		private bool _mMouseBtn;
		[SerializeField]
		private bool _useStrictMouseCheck;
		[SerializeField]
		private string _name;
		[NonSerialized]
		private List<Hotkeys> _potentialOverlaps;
		[SerializeField]
		private HotkeysStaticData _staticData;
	
		// Properties
		public static List<KeyCode> AvailableKeys { get; }
		public static List<string> AvailableKeyNames { get; }
		public bool IsEnabled { get; set; }
		public string Name { get; }
		public KeyCode Key { get; set; }
		public bool LCtrl { get; set; }
		public bool LCmd { get; set; }
		public bool LAlt { get; set; }
		public bool LShift { get; set; }
		public bool LMouseButton { get; set; }
		public bool RMouseButton { get; set; }
		public bool MMouseButton { get; set; }
		public bool UseStrictMouseCheck { get; set; }
		public bool UseStrictModifierCheck { get; set; }
	
		// Constructors
		static Hotkeys();
		public Hotkeys(string name);
		public Hotkeys(string name, HotkeysStaticData staticData);
	
		// Methods
		public static void EstablishPotentialOverlaps(List<Hotkeys> hotkeysCollection);
		public int GetNumModifiers();
		public int GetNumMouseButtons();
		public List<MouseButton> GetAllUsedMouseButtons();
		public bool UsesMouseButtons(List<MouseButton> buttons);
		public List<KeyCode> GetAllUsedModifiers();
		public bool UsesModifiers(List<KeyCode> modifiers);
		public void AddPotentialOverlap(Hotkeys hotkeys);
		public bool ContainsPotentialOverlap(Hotkeys hotkeys);
		public bool IsOverlappedBy(Hotkeys hotkeys);
		public bool IsActive(bool checkForOverlaps = true);
		public bool IsActiveInFrame(bool checkForOverlaps = true);
		public bool HasNoKeys();
		public bool HasNoModifiers();
		public bool HasNoMouseButtons();
		public bool IsEmpty();
		private bool IsAnyModifierKeyPressed();
		private bool IsAnyMouseButtonPressed();
	}
}
