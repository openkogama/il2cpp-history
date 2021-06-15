
/* Void <>m__0(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClient+<>c__AnonStorey0::
     MVWorldObjectClient_c_AnonStorey0___m__0
               (MVWorldObjectClient_c_AnonStorey0 *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(this->fields).childIDs;
  if (wo != (MVWorldObjectClient *)0x0) {
    item = (UnityWebRequest *)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
    if (this_00 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                (this_00,item,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

