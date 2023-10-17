/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Misc
{
	public class OrientationControl : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private GameObject orientationWarningOverlay;
		[SerializeField]
		private bool printOrientation;
		[SerializeField]
		private bool toggleShowWarning;
		private bool takeAction;
		private MVOrientation desiredOrientation;
		private static bool debugging;
	
		// Properties
		public static MVOrientation CurrentOrientation { get; }
	
		// Constructors
		public OrientationControl();
	
		// Methods
		private static void PrintLog(string s);
		private static MVOrientation MapFromResolution(int width, int height);
		private static MVOrientation MapFromDeviceOrientation(DeviceOrientation deviceOrientation);
		private static MVOrientation MapFromScreenOrientation(ScreenOrientation screenOrientation);
		private void Start();
	}
}
