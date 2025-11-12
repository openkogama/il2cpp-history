/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

// Image 18: Assembly-CSharp-firstpass.dll - Assembly: Assembly-CSharp-firstpass, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace CodeStage.AntiCheat.Detectors
{
	[AddComponentMenu("Code Stage/Anti-Cheat Toolkit/Obscured Cheating Detector")]
	public class ObscuredCheatingDetector : ActDetectorBase
	{
		// Fields
		internal const string COMPONENT_NAME = "Obscured Cheating Detector";
		internal const string FINAL_LOG_PREFIX = "[ACTk] Obscured Cheating Detector: ";
		private static int instancesInScene;
		[Tooltip("Max allowed difference between encrypted and fake values in ObscuredFloat. Increase in case of false positives.")]
		public float floatEpsilon;
		[Tooltip("Max allowed difference between encrypted and fake values in ObscuredVector2. Increase in case of false positives.")]
		public float vector2Epsilon;
		[Tooltip("Max allowed difference between encrypted and fake values in ObscuredVector3. Increase in case of false positives.")]
		public float vector3Epsilon;
		[Tooltip("Max allowed difference between encrypted and fake values in ObscuredQuaternion. Increase in case of false positives.")]
		public float quaternionEpsilon;
		[CompilerGenerated]
		private static ObscuredCheatingDetector _Instance_k__BackingField;
	
		// Properties
		public static ObscuredCheatingDetector Instance { [CompilerGenerated] get; [CompilerGenerated] private set; }
		private static ObscuredCheatingDetector GetOrCreateInstance { get; }
		internal static bool IsRunning { get; }
	
		// Constructors
		private ObscuredCheatingDetector();
	
		// Methods
		public static void StartDetection();
		public static void StartDetection(UnityAction callback);
		public static void StopDetection();
		public static void Dispose();
		private void Awake();
		protected override void OnDestroy();
		private void OnLevelWasLoadedNew(Scene scene, LoadSceneMode mode);
		private void OnLevelLoadedCallback();
		private void StartDetectionInternal(UnityAction callback);
		protected override void StartDetectionAutomatically();
		protected override void PauseDetector();
		protected override void ResumeDetector();
		protected override void StopDetectionInternal();
		protected override void DisposeInternal();
	}
}
