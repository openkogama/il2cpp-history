/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.WorldObjectTypes.EditablePickupItem;
using RTG;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.WorldObjectTypes.CustomGun
{
	internal class MVCustomGunBlueprint : MVEditablePickupItemBaseBlueprint
	{
		// Fields
		private const float Offset = 0.01f;
		private GameObject muzzlePoint;
		private ObjectTransformGizmo transformGizmo;
		private IEnumerator muzzleBoundCheckRoutine;
	
		// Properties
		protected override float CubeModelScale { get; }
		public override MVWorldObjectDocumentationType DocumentationType { get; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class _MuzzleBoundCheckRoutine_d__17 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public MVCustomGunBlueprint __4__this;
			private Vector3 _max_5__2;
			private Vector3 _min_5__3;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _MuzzleBoundCheckRoutine_d__17(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public MVCustomGunBlueprint(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	
		// Methods
		public override void Initialize();
		protected override void SetCubeSize();
		public override bool OnEnterObject(EditorStateMachine e);
		public override void OnEndEditing();
		private void EnterMuzzleEdit();
		private void EndMuzzleEdit();
		private void ResetMuzzlePosition();
		private void ResetMuzzleRotation();
		[IteratorStateMachine(typeof(_MuzzleBoundCheckRoutine_d__17))]
		private IEnumerator MuzzleBoundCheckRoutine();
		private void SetMuzzlePointPosition(Vector3 pos);
	}
}
