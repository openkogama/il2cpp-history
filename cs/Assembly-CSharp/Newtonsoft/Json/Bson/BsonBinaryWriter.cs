/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Text;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Bson
{
	internal class BsonBinaryWriter
	{
		// Fields
		private static readonly Encoding Encoding;
		private readonly BinaryWriter _writer;
		private byte[] _largeByteBuffer;
		private int _maxChars;
		[CompilerGenerated]
		private DateTimeKind _DateTimeKindHandling_k__BackingField;
	
		// Properties
		public DateTimeKind DateTimeKindHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		public BsonBinaryWriter(Stream stream);
		static BsonBinaryWriter();
	
		// Methods
		public void Flush();
		public void Close();
		public void WriteToken(BsonToken t);
		private void WriteTokenInternal(BsonToken t);
		private void WriteString(string s, int byteCount, int? calculatedlengthPrefix);
		private int CalculateSize(int stringByteCount);
		private int CalculateSizeWithLength(int stringByteCount, bool includeSize);
		private int CalculateSize(BsonToken t);
	}
}
