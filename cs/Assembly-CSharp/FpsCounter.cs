/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FpsCounter : MonoBehaviour
{
	// Fields
	private static FpsCounter instance;
	private int idx;
	private float[] frameTimes;
	private FPSMetricCollector metricsCollector;
	private float fps;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private static bool _StartedPlaying_k__BackingField;

	// Properties
	public static float Fps { get; }
	public static bool StartedPlaying { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Nested types
	private class FPSMetricCollector
	{
		// Fields
		private readonly float startTime;
		private const float timeBeforeMetricCollectionInSeconds = 30f;
		private bool metricsCollected;

		// Properties
		public bool IsFPSCollected { get; }
		public bool IsTimeForCollect { get; }

		// Constructors
		public FPSMetricCollector();

		// Methods
		public void CollectFPSMetric(float averageFPS);
	}

	// Constructors
	public FpsCounter();

	// Methods
	protected void Awake();
	protected void OnDestroy();
	protected void Update();
}

