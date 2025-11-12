/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening;
using DG.Tweening.Core.Enums;
using UnityEngine;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening.Core
{
	public class DOTweenSettings : ScriptableObject
	{
		// Fields
		public const string AssetName = "DOTweenSettings";
		public const string AssetFullFilename = "DOTweenSettings.asset";
		public bool useSafeMode;
		public SafeModeOptions safeModeOptions;
		public float timeScale;
		public float unscaledTimeScale;
		public bool useSmoothDeltaTime;
		public float maxSmoothUnscaledTime;
		public RewindCallbackMode rewindCallbackMode;
		public bool showUnityEditorReport;
		public LogBehaviour logBehaviour;
		public bool drawGizmos;
		public bool defaultRecyclable;
		public AutoPlay defaultAutoPlay;
		public UpdateType defaultUpdateType;
		public bool defaultTimeScaleIndependent;
		public Ease defaultEaseType;
		public float defaultEaseOvershootOrAmplitude;
		public float defaultEasePeriod;
		public bool defaultAutoKill;
		public LoopType defaultLoopType;
		public bool debugMode;
		public bool debugStoreTargetId;
		public bool showPreviewPanel;
		public SettingsLocation storeSettingsLocation;
		public ModulesSetup modules;
		public bool createASMDEF;
		public bool showPlayingTweens;
		public bool showPausedTweens;
	
		// Nested types
		public enum SettingsLocation
		{
			AssetsDirectory = 0,
			DOTweenDirectory = 1,
			DemigiantDirectory = 2
		}
	
		[Serializable]
		public class SafeModeOptions
		{
			// Fields
			public SafeModeLogBehaviour logBehaviour;
			public NestedTweenFailureBehaviour nestedTweenFailureBehaviour;
	
			// Constructors
			public SafeModeOptions();
		}
	
		[Serializable]
		public class ModulesSetup
		{
			// Fields
			public bool showPanel;
			public bool audioEnabled;
			public bool physicsEnabled;
			public bool physics2DEnabled;
			public bool spriteEnabled;
			public bool uiEnabled;
			public bool textMeshProEnabled;
			public bool tk2DEnabled;
			public bool deAudioEnabled;
			public bool deUnityExtendedEnabled;
			public bool epoOutlineEnabled;
	
			// Constructors
			public ModulesSetup();
		}
	
		// Constructors
		public DOTweenSettings();
	}
}
