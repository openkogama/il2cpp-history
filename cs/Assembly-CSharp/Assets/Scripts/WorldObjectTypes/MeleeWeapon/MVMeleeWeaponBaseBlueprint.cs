/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.WorldObjectTypes.EditablePickupItem;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.WorldObjectTypes.MeleeWeapon
{
	public class MVMeleeWeaponBaseBlueprint : MVEditablePickupItemBaseBlueprint
	{
		// Fields
		public const int LegacySwordVariantId = 1;
	
		// Properties
		public override MVWorldObjectDocumentationType DocumentationType { get; }
	
		// Constructors
		public MVMeleeWeaponBaseBlueprint(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	
		// Methods
		public override void OnEndEditing();
	}
}
