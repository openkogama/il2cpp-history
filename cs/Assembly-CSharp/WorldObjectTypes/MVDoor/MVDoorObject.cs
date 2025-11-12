/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.WorldObjectTypes.MVDoor;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WorldObjectTypes.MVDoor
{
	public class MVDoorObject : ObjectPrefab
	{
		// Fields
		[HideInInspector]
		public MVDoor doorLogic;
		[Header("Door Object Management")]
		public GameObject useInteractionRotator;
		public Transform animationRoot;
		public Collider useCollider;
		public Transform cube;
		[SerializeField]
		private TriggerBoxEvents triggerBoxEvents;
		[Header("Door Audio")]
		[SerializeField]
		private AudioSource audioSource;
		[SerializeField]
		private StreamedAudioClipManual doorOpenSoundStream;
		[SerializeField]
		private StreamedAudioClipManual slidingDoorOpenSoundStream;
		[SerializeField]
		private StreamedAudioClipManual trapDoorOpenSoundStream;
	
		// Properties
		public TriggerBoxEvents TriggerBoxEvents { get; }
	
		// Constructors
		public MVDoorObject();
	
		// Methods
		public float GetCurrentValue(DoorType doorType);
		public void SetCurrentValue(float value, DoorType doorType);
		public void playOpenDoorSound(DoorType doorType);
		protected override void OnValidate();
	}
}
