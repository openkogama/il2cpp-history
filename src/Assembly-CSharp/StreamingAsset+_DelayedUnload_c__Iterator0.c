
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::StreamingAsset+<DelayedUnload>c__Iterator0::
     StreamingAsset_DelayedUnload_c_Iterator0_MoveNext
               (StreamingAsset_DelayedUnload_c_Iterator0 *this,MethodInfo *method)

{
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    (this->fields)._current = (Object *)0x0;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    return 1;
  }
  if (iVar1 == 1) {
    this_00 = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
              DownloadHandlerAssetBundle::DownloadHandlerAssetBundle_GetContent
                        ((this->fields).www,(MethodInfo *)0x0);
    (this->fields)._assetBundle___0 = this_00;
    if (this_00 == (AssetBundle *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_Unload
              (this_00,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_UnloadUnusedAssets
              ((MethodInfo *)0x0);
    (this->fields)._PC = -1;
  }
  return 0;
}


/* Void Reset() */

void Assembly-CSharp.dll::StreamingAsset+<DelayedUnload>c__Iterator0::
     StreamingAsset_DelayedUnload_c_Iterator0_Reset
               (StreamingAsset_DelayedUnload_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

