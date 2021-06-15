
/* Void <>m__0(UnityWebRequest) */

void Assembly-CSharp.dll::AssetBundleCacheTest+<DownloadTestAsset>c__AnonStorey0::
     AssetBundleCacheTest_DownloadTestAsset_c_AnonStorey0___m__0
               (AssetBundleCacheTest_DownloadTestAsset_c_AnonStorey0 *this,UnityWebRequest *www,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_3_Object_Single_Int32_ *)(this->fields).onDownloadFinished;
  if (this_00 != (Action_3_Object_Single_Int32_ *)0x0) {
    System.Core.dll::System::Action`3[Object,Single,Int32]::Action_3_Object_Single_Int32__Invoke
              (this_00,(Object *)www,(this->fields).startTime,
               (this->fields).currentStreamingAssetVersion,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>__Invoke_UnityEngine__Networking__UnityWebRequest__float__int_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

