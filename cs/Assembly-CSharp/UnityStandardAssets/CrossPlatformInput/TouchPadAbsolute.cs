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

namespace UnityStandardAssets.CrossPlatformInput
{
	[RequireComponent(typeof(Image))]
	public class TouchPadAbsolute : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
	{
		// Fields
		private CrossPlatformInputManager.VirtualAxis horizontalVirtualAxis;
		private CrossPlatformInputManager.VirtualAxis verticalVirtualAxis;
		private Vector2 previousInputPosition;
		private bool dragging;
		private State state;
		public string horizontalAxisName;
		public string verticalAxisName;
		public string onTouchButtonName;
		private int fingerId;
	
		// Properties
		public State AxisState { set; }
	
		// Nested types
		[Flags]
		public enum State
		{
			None = 0,
			Horizontal = 1,
			Vertical = 2
		}
	
		// Constructors
		public TouchPadAbsolute();
	
		// Methods
		private void OnDisable();
		private void Awake();
		private void OnEnable();
		private void Update();
		private void CreateVirtualAxes();
		private void RegisterAxes();
		private void SetOnPointButton(bool isDown);
		private void UpdateVirtualAxes(Vector3 value);
		public void OnPointerUp(PointerEventData data);
		public void OnPointerDown(PointerEventData data);
		private void UpdateAxis();
		private void Reset();
		private bool TryGetTouch(out Touch touch, int fingerId);
	}
}
