/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using System.Security.Cryptography.X509Certificates;

// Image 4: System.dll - Assembly: System, Version=4.0.0.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e

namespace Internal.Cryptography.Pal
{
	internal struct CertificateData
	{
		// Fields
		internal byte[] RawData;
		internal byte[] SubjectPublicKeyInfo;
		internal int Version;
		internal byte[] SerialNumber;
		internal AlgorithmIdentifier TbsSignature;
		internal X500DistinguishedName Issuer;
		internal DateTime NotBefore;
		internal DateTime NotAfter;
		internal X500DistinguishedName Subject;
		internal AlgorithmIdentifier PublicKeyAlgorithm;
		internal byte[] PublicKey;
		internal byte[] IssuerUniqueId;
		internal byte[] SubjectUniqueId;
		internal List<X509Extension> Extensions;
		internal AlgorithmIdentifier SignatureAlgorithm;
		internal byte[] SignatureValue;
	
		// Nested types
		internal struct AlgorithmIdentifier
		{
			// Fields
			internal string AlgorithmId;
			internal byte[] Parameters;
		}
	
		[CompilerGenerated]
		private sealed class _ReadReverseRdns_d__21 : IEnumerable<KeyValuePair<string, string>>, IEnumerator<KeyValuePair<string, string>>
		{
			// Fields
			private int __1__state;
			private KeyValuePair<string, string> __2__current;
			private int __l__initialThreadId;
			private X500DistinguishedName name;
			public X500DistinguishedName __3__name;
			private Stack<DerSequenceReader> _rdnReaders_5__2;
			private DerSequenceReader _rdnReader_5__3;
	
			// Properties
			KeyValuePair<string, string> IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _ReadReverseRdns_d__21(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
			[DebuggerHidden]
			IEnumerator<KeyValuePair<string, string>> IEnumerable<KeyValuePair<string, string>>.GetEnumerator();
			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator();
		}
	
		// Constructors
		internal CertificateData(byte[] rawData);
	
		// Methods
		public string GetNameInfo(X509NameType nameType, bool forIssuer);
		private static string GetSimpleNameInfo(X500DistinguishedName name);
		private static string FindAltNameMatch(byte[] extensionBytes, GeneralNameType matchType, string otherOid);
		[IteratorStateMachine(typeof(_ReadReverseRdns_d__21))]
		private static IEnumerable<KeyValuePair<string, string>> ReadReverseRdns(X500DistinguishedName name);
	}
}
