/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	internal struct ResolverContractKey : IEquatable<Newtonsoft.Json.Serialization.ResolverContractKey>
	{
		// Fields
		private readonly Type _resolverType;
		private readonly Type _contractType;
	
		// Constructors
		public ResolverContractKey(Type resolverType, Type contractType);
	
		// Methods
		public override int GetHashCode();
		public override bool Equals(object obj);
		public bool Equals(ResolverContractKey other);
	}
}
