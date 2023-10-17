/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVNetworkReporter : MVNetworkObject
{
	// Fields
	private long lastUpdateTimestamp;
	public bool suspendTransformReporting;
	private SendTransformData prevSendTransformData;
	private bool stopPackageSent;

	// Properties
	public override bool RemoveFromUpdate { get; }

	// Nested types
	private struct SendTransformData : IEquatable<SendTransformData>
	{
		// Fields
		private Vector3 position;
		private byte[] rotation;

		// Constructors
		public SendTransformData(Vector3 position, byte[] rotation);

		// Methods
		public bool Equals(SendTransformData other);
		public static bool operator ==(SendTransformData std1, SendTransformData std2);
		public static bool operator !=(SendTransformData std1, SendTransformData std2);
		public override bool Equals(object obj);
		public override int GetHashCode();
	}

	// Constructors
	public MVNetworkReporter(MVWorldObjectClient owner);

	// Methods
	public override void Update(MVNetworkGame game);
}

