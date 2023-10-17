/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class Links
{
	// Fields
	private readonly Dictionary<int, Link> links;
	private readonly Dictionary<int, LinkObjectScript> linkObjects;

	// Constructors
	public Links();

	// Methods
	public bool RemoveLink(int linkID, MVWorldObjectClient outputWo, MVWorldObjectClient inputWo);
	public void Update();
	public bool Contains(int linkID);
	public Link GetLink(int linkID);
	public void AddLink(Link link, MVWorldObjectClient outputWo, MVWorldObjectClient inputWo);
}

