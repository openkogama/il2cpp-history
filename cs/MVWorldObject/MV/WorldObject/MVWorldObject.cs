/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public abstract class MVWorldObject
	{
		// Fields
		protected int id;
		protected int groupId;
		protected int itemId;
		internal bool inputState;
		internal List<Link> outputLinkRefs;
		internal List<Link> inputLinkRefs;
		internal List<ObjectLink> objectLinkRefs;
		private int ownerActorNr;
		private int previewOwnerProfileId;
		private Vector3 position;
		private Quaternion rotation;
		private Vector3 scale;
		private WorldObjectType type;
		internal Dictionary<object, object> data;
		private Dictionary<object, object> runTimeData;
		private int timestamp;
		public Action<List<Link>> OnInputLinkChanged;
		public Action<List<Link>> OnOutputLinkChanged;
	
		// Properties
		public int Id { get; }
		public int GroupId { get; set; }
		public int ItemId { get; set; }
		public int OwnerActorNr { get; set; }
		public int PreviewOwnerProfileId { get; set; }
		public virtual Vector3 Position { get; set; }
		public virtual Quaternion Rotation { get; set; }
		public virtual Vector3 Scale { get; set; }
		public virtual Vector3 WorldPosition { get; }
		public virtual Quaternion WorldRotation { get; }
		public WorldObjectType WorldObjectType { get; set; }
		public Dictionary<object, object> Data { get; set; }
		public virtual Dictionary<object, object> RunTimeData { get; set; }
		public List<Link> InputLinkRefs { get; }
		public List<Link> OutputLinkRefs { get; }
		public List<ObjectLink> ObjectLinkRefs { get; }
		public bool InputState { get; }
		public virtual bool HasOutputConnector { get; }
		public virtual bool HasInputConnector { get; }
		public virtual bool HasObjectConnector { get; }
	
		// Constructors
		public MVWorldObject();
	
		// Methods
		public virtual void OnInputStateChanged();
		public virtual void Reset();
		public virtual void OnObjectLinkChanged(ObjectLinkChangeType changeType, ObjectLink objectLink);
		public virtual bool IsSingletonObject();
		public Dictionary<object, object> DeepCopyWorldObjectDataParameters();
		protected void GetLinksForClone(List<int> links);
		protected void GetObjectLinksForClone(List<int> objectLinks);
		public void AddOutputLink(Link link);
		public void AddInputLink(Link link);
		public bool AddObjectLink(ObjectLink link);
		public bool RemoveOutputLink(Link link);
		public bool RemoveInputLink(Link link);
		public bool RemoveObjectLink(ObjectLink link);
		public bool ContainObjectLink(ObjectLink link);
		private int GetIndexOfObjectLink(ObjectLink link);
		public virtual MVWorldObject ShallowCopy();
		public virtual MVWorldObject DeepCopy();
		public override string ToString();
		public virtual void PartialUpdateWOData(Dictionary<object, object> newWOData);
		public virtual void PartialRemoveFromWOData(Dictionary<object, object> dataToRemove);
	}
}
