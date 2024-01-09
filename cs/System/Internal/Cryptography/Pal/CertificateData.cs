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
[assembly: AssemblyCompany("Mono development team")]
[assembly: AssemblyCopyright("(c) Various Mono authors")]
[assembly: AssemblyDefaultAlias("System.dll")]
[assembly: AssemblyDelaySign(true)]
[assembly: AssemblyDescription("System.dll")]
[assembly: AssemblyFileVersion("4.0.30319.17020")]
[assembly: AssemblyInformationalVersion("4.0.30319.17020")]
[assembly: AssemblyKeyFile("../silverlight.pub")]
[assembly: AssemblyProduct("Mono Common Language Infrastructure")]
[assembly: AssemblyTitle("System.dll")]
[assembly: CLSCompliant(true)]
[assembly: CompilationRelaxations(8)]
[assembly: ComVisible(false)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: InternalsVisibleTo("Mono.Btls.Interface, PublicKey=002400000480000094000000060200000024000052534131000400000100010079159977d2d03a8e6bea7a2e74e8d1afcc93e8851974952bb480a12c9134474d04062447c37e0e68c080536fcf3c3fbe2ff9c979ce998475e506e8ce82dd5b0f350dc10e93bf2eeecf874b24770c5081dbea7447fddafa277b22de47d6ffea449674a4f9fccf84d15069089380284dbdd35f46cdff12a1bd78e4ef0065d016df")]
[assembly: InternalsVisibleTo("System.Net.Http, PublicKey=002400000480000094000000060200000024000052534131000400000100010007d1fa57c4aed9f0a32e84aa0faefd0de9e8fd6aec8f87fb03766c834c99921eb23be79ad9d5dcc1dd9ad236132102900b723cf980957fc4e177108fc607774f29e8320e92ea05ece4e821c0a5efe8f1645c4c0c93c1ab99285d622caa652c1dfad63d745d6f2de5f17e5eaf0fc4963d261c8a12436518206dc093344d5ad293")]
[assembly: InternalsVisibleTo("System.Data, PublicKey=00000000000000000400000000000000")]
[assembly: InternalsVisibleTo("System.ComponentModel.DataAnnotations, PublicKey=0024000004800000940000000602000000240000525341310004000001000100b5fc90e7027f67871e773a8fde8938c81dd402ba65b9201d60593e96c492651e889cc13f1415ebb53fac1131ae0bd333c5ee6021672d9718ea31a8aebd0da0072f25d87dba6fc90ffd598ed4da35e44c398c454307e8e33b8426143daec9f596836f97c8f74750e5975c64e2189f45def46b2a2b1247adc3652bf5c308055da9")]
[assembly: InternalsVisibleTo("System.Net.Http.WebRequest, PublicKey=002400000480000094000000060200000024000052534131000400000100010007d1fa57c4aed9f0a32e84aa0faefd0de9e8fd6aec8f87fb03766c834c99921eb23be79ad9d5dcc1dd9ad236132102900b723cf980957fc4e177108fc607774f29e8320e92ea05ece4e821c0a5efe8f1645c4c0c93c1ab99285d622caa652c1dfad63d745d6f2de5f17e5eaf0fc4963d261c8a12436518206dc093344d5ad293")]
[assembly: InternalsVisibleTo("Mono.Security, PublicKey=002400000480000094000000060200000024000052534131000400000100010079159977d2d03a8e6bea7a2e74e8d1afcc93e8851974952bb480a12c9134474d04062447c37e0e68c080536fcf3c3fbe2ff9c979ce998475e506e8ce82dd5b0f350dc10e93bf2eeecf874b24770c5081dbea7447fddafa277b22de47d6ffea449674a4f9fccf84d15069089380284dbdd35f46cdff12a1bd78e4ef0065d016df")]
[assembly: NeutralResourcesLanguage("en-US")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: SatelliteContractVersion("4.0.0.0")]

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
