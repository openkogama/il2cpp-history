/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.WorldObjectTypes.Avatar.Accessories
{
	public class AccessoryLoader
	{
		// Fields
		private int id;
		private Dictionary<int, Request> requests;
	
		// Nested types
		private class Request
		{
			// Fields
			private Action<AvatarAccessory> accessoryCreatedCallback;
			private AccessoryLoaderRequest accessoryLoaderRequest;
	
			// Properties
			public string SubUrl { get; }
	
			// Constructors
			public Request(Action<AvatarAccessory> accessoryCreatedCallback, AccessoryLoaderRequest accessoryLoaderRequest);
	
			// Methods
			public void Callback(AvatarAccessory avatarAccessory);
			public void Destroy();
		}
	
		private class AccessoryLoaderRequest
		{
			// Fields
			private readonly int id;
			private Action<int, AvatarAccessory> accessoryCreatedCallback;
			private readonly string subUrl;
	
			// Properties
			public string SubUrl { get; }
	
			// Constructors
			public AccessoryLoaderRequest(int id, Action<int, AvatarAccessory> accessoryCreatedCallback, string subUrl);
	
			// Methods
			public void Remove();
			public void LoadAccessory();
			private void Callback(UnityWebRequest www);
		}
	
		// Constructors
		public AccessoryLoader();
	
		// Methods
		public void LoadAccessory(string url, Action<AvatarAccessory> accessoryCreatedExternalCallback);
		private void AddRequest(AccessoryLoaderRequest accessoryLoaderRequest, Action<AvatarAccessory> accessoryCreatedExternalCallback);
		private void AccessoryCreatedInternalCallback(int doneId, AvatarAccessory avatarAccessory);
		public void Destroy();
	}
}
