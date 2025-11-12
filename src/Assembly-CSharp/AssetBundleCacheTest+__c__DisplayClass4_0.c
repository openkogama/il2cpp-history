
/* Void <DownloadTestAsset>b__0(UnityWebRequest) */

void Assembly-CSharp.dll::AssetBundleCacheTest+<>c__DisplayClass4_0::
     AssetBundleCacheTest_c_DisplayClass4_0__DownloadTestAsset_b__0
               (AssetBundleCacheTest_c_DisplayClass4_0 *this,UnityWebRequest *www,MethodInfo *method
               )

{
  pAVar1 = (this->fields).onDownloadFinished;
  if (pAVar1 != (Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,www,(this->fields).startTime,
               (this->fields).currentStreamingAssetVersion,(pAVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

