/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TrailArc : MonoBehaviour
{
	// Fields
	private int savedIndex;
	private int pointIndex;
	public Material material;
	private bool Emit;
	private bool emittingDone;
	public int maxPointsDrawn;
	public int pointsStored;
	public float minVel;
	public bool faceCamera;
	public bool twist;
	private float time;
	public float lifetime;
	private float lifeTimeRatio;
	private float fadeOutRatio;
	public Color[] colors;
	public float[] widths;
	public float pointDistance;
	private float pointSqrDistance;
	public int segmentsPerPoint;
	private float tRatio;
	public bool printResults;
	public bool printSavedPoints;
	public bool printSegmentPoints;
	private GameObject trail;
	private Renderer mRenderer;
	private Mesh mesh;
	private Material trailMaterial;
	private Vector3[] saved;
	private Vector3[] savedUp;
	private int savedCnt;
	private Vector3[] points;
	private Vector3[] pointsUp;
	private int pointCnt;
	private int displayCnt;
	private float lastPointCreationTime;
	private float averageCreationTime;
	private float averageInsertionTime;
	private float elapsedInsertionTime;
	private float creationTime;
	public float maxLifeTime;
	private bool initialized;

	// Properties
	public bool emit { get; set; }

	// Constructors
	public TrailArc();

	// Methods
	private void Start();
	private void printPoints();
	private void printAllPoints();
	private void findCoordinates(int index);
	public void SetTrailColor(Color baseColor);
	private void Update();
}

