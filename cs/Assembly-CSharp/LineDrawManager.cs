/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LineDrawManager : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Material lineMaterial;
	private Link tempLink;
	private ObjectLink tempObjectLink;
	private LinkObjectScript tempLinkObject;
	private Queue<LinkLine> linkLines;

	// Nested types
	private class LinkLine
	{
		// Fields
		public Vector3 startPos;
		public Vector3 endPos;
		public Color color;

		// Constructors
		public LinkLine(Vector3 startPos, Vector3 endPos, Color color);
	}

	// Constructors
	public LineDrawManager();

	// Methods
	protected void OnPostRender();
	public void SetTempLink(Link link);
	public void SetTempObjectLink(ObjectLink link);
	public void DrawLineDirect(Vector3 from, Vector3 to, Color color);
	private void DrawLine(Vector3 from, Vector3 to, Color color);
	private void DrawEnqueuedLines();
	private void DrawLine(LinkLine linkLine);
}

