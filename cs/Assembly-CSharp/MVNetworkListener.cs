/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVNetworkListener : MVNetworkObject
{
	// Fields
	private HashSet<INetworkUpdateListener> updateListenerList;
	private Queue<NetworkTransformPackage> transformQueue;
	private NetworkTransformPackage currentPackage;
	private NetworkTransformPackage nextPackage;
	private bool transformReportingHasStopped;
	private bool stopListening;

	// Properties
	public override bool RemoveFromUpdate { get; }

	// Constructors
	public MVNetworkListener(MVWorldObjectClient owner);

	// Methods
	private NetworkTransformPackage CreateCurPosTransformPackage();
	public void SetToCurrentPosition();
	public void SetOwnerTransformToMostResentPackage();
	public void AddTransformPackage(NetworkTransformPackage p);
	public void RmoveNetorkUpdateListener(INetworkUpdateListener listener);
	public override void Update(MVNetworkGame game);
	private void UpdateTransform(MVNetworkGame game, int delayedTime);
	private Vector3 ExtrapolatePosition(float interpFactor);
	private Quaternion ExtrapolateRotation(float interpFactor);
}

