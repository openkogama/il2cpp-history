/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.WorldObjectTypes.MVDoor;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WorldObjectTypes.MVDoor
{
	public class MVDoor : MVLogicObject, IIsLogicObjectFiringEventHandler, ILogicWorldObject
	{
		// Fields
		public MVCubeModelInstance doorModelInstance;
		[CompilerGenerated]
		private IInputSignalReceiver _InputSignalReceiver_k__BackingField;
		private const float serverResponseTimeoutSeconds = 1f;
		[CompilerGenerated]
		private MVDoorBlueprint _DoorBlueprint_k__BackingField;
		private MVDoorObject doorObject;
		private UseInteractor useInteractor;
		private DoorConfiguration doorConfig;
		private Dictionary<object, object> useInteractorData;
		private IEnumerator doorAnimationRoutine;
		private IEnumerator collisionCheckRoutine;
		private IEnumerator serverResponseTimeoutRoutine;
		private bool localIsOpen;
		private bool storedBeginOpen;
		private bool storedReverseOpenDirection;
	
		// Properties
		public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public override bool HasInputConnector { get; }
		public override bool HasOutputConnector { get; }
		public DoorConfiguration DoorConfig { get; }
		public DoorType DoorType { get; }
		public MVDoorObject DoorObject { get; }
		public override Vector3 InputConnectorOffset { get; }
		public override Quaternion InputConnectorRotation { get; }
		protected override bool HasVisualsInPlaymode { get; }
		private bool IsOpen { get; set; }
		public MVDoorBlueprint DoorBlueprint { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Nested types
		public struct DoorConfiguration
		{
			// Fields
			public string name;
			public bool beginOpen;
			public bool playersCanOpen;
			public bool reverseOpenDirection;
			public float openValue;
			public float closeValue;
			public float toggleTime;
			public MVWorldObjectDocumentationType docType;
			public DoorType doorType;
		}
	
		[CompilerGenerated]
		private sealed class _AnimationCoroutine_d__55 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public MVDoor __4__this;
			public float from;
			public float to;
			private float _currentValue_5__2;
			private float _t_5__3;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _AnimationCoroutine_d__55(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _CollisionCheckCoroutine_d__57 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public MVDoor __4__this;
			private MVAvatarLocal _localAvatar_5__2;
			private bool _foundIntersection_5__3;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _CollisionCheckCoroutine_d__57(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _BeginOpenCoroutine_d__62 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public MVDoor __4__this;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _BeginOpenCoroutine_d__62(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _ServerResponseTimeoutRoutine_d__67 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public MVDoor __4__this;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _ServerResponseTimeoutRoutine_d__67(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public MVDoor(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	
		// Methods
		public override void Initialize();
		private void InputStateUpdateCallback(LogicInputState logicInputState, LogicObjectManager logicObjectManager);
		public override void OnDataUpdate();
		public void SetUseInteractorData(Dictionary<object, object> data);
		public void UpdateUseInteractor();
		private bool CheckIfOpen();
		private void UpdateBeginOpen();
		private void UpdateReverseOpen();
		private DoorConfiguration ReadWorldObjectData();
		private static DoorConfiguration CreateDefaultDoorConfig(DoorType doorType);
		public bool Use(int userWoID);
		public override void Reset();
		private void ToggleDoor(bool state);
		private void StartDoorAnimation(float from, float to);
		[IteratorStateMachine(typeof(_AnimationCoroutine_d__55))]
		private IEnumerator AnimationCoroutine(float from, float to);
		private void CollisionCheck();
		[IteratorStateMachine(typeof(_CollisionCheckCoroutine_d__57))]
		private IEnumerator CollisionCheckCoroutine();
		private bool IntersectsWithDoor(Bounds bound);
		private void ToggleDoorColliders(bool val);
		private void DestroyUseInteractor();
		public override void Destroy();
		[IteratorStateMachine(typeof(_BeginOpenCoroutine_d__62))]
		private IEnumerator BeginOpenCoroutine();
		public void OnIsFiringChanged(bool isFiring);
		private void OnEditModeChange(EditModeChangeArgs arg);
		public ValueTuple<float, float> GetOpenCloseValues();
		public override bool OnClickHandler(EditorStateMachine esm, Collider collider);
		[IteratorStateMachine(typeof(_ServerResponseTimeoutRoutine_d__67))]
		private IEnumerator ServerResponseTimeoutRoutine();
	}
}
