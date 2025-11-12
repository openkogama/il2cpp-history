
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::StreamingAsset+<DelayedUnload>d__13::
     StreamingAsset_DelayedUnload_d_13_MoveNext
               (StreamingAsset_DelayedUnload_d_13 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  if (iVar1 == 0) {
    bVar2 = iRam_? != 0;
    (this->fields).__1__state = -1;
    (this->fields).__2__current = (Object *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    this_00 = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
              DownloadHandlerAssetBundle::DownloadHandlerAssetBundle_GetContent
                        ((this->fields).www,(MethodInfo *)0x0);
    if (this_00 == (AssetBundle *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_Unload
              (this_00,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_UnloadUnusedAssets
              ((MethodInfo *)0x0);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::StreamingAsset+<DelayedUnload>d__13::
     StreamingAsset_DelayedUnload_d_13_System_Collections_IEnumerator_Reset
               (StreamingAsset_DelayedUnload_d_13 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__StreamingAsset___DelayedUnload_d__13__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

