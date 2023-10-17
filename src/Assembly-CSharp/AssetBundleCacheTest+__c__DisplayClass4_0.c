
/* Void <DownloadTestAsset>b__0(UnityWebRequest) */

void Assembly-CSharp.dll::AssetBundleCacheTest+<>c__DisplayClass4_0::
     AssetBundleCacheTest_c_DisplayClass4_0__DownloadTestAsset_b__0
               (AssetBundleCacheTest_c_DisplayClass4_0 *this,UnityWebRequest *www,MethodInfo *method
               )

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).onDownloadFinished;
  if (pAVar2 != (Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *)0x0) {
    puStack_1 = (pAVar2->fields)._._.method;
    fStack_3 = (this->fields).startTime;
    iStack_4 = (this->fields).currentStreamingAssetVersion;
    (*(pAVar2->fields)._._.invoke_impl)((pAVar2->fields)._._.method_code,www);
    return;
  }
  uVar5 = func_?(&fStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

