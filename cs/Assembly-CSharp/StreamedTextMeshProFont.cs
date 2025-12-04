/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class StreamedTextMeshProFont : StreamingAsset<TMP_FontAsset, TMP_FontAsset>
{
	// Fields
	protected IReceiver receiver;

	// Nested types
	public interface IReceiver
	{
		// Methods
		void OnFontReceived(TMP_FontAsset a);
	}

	// Constructors
	public StreamedTextMeshProFont();

	// Methods
	public virtual void Initialize(IReceiver receiver);
	protected override void OnAssetSet();
}

