/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ObjectLinks
{
	// Fields
	protected readonly Dictionary<int, ObjectLink> objectLinks;
	protected readonly Dictionary<int, ObjectLinkObjectScript> objectLinkObjects;

	// Constructors
	public ObjectLinks();

	// Methods
	public ObjectLink GetObjectLink(int objectLinkID);
	public void Update();
	public bool Contains(int objectLinkID);
	public bool RemoveObjectLink(ObjectLink link, MVWorldObjectClient objectConnectorWo, MVWorldObjectClient objectWo);
	public bool AddObjectLink(ObjectLink objectLink, MVWorldObjectClient objectConnectorWo, MVWorldObjectClient objectWo);
}

