
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedAudioClip::StreamedAudioClip_OnAssetSet
               (StreamedAudioClip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StreamedAudioClip__IReceiver);
    func_?(&
                    MethodInfo__StreamingAsset<UnityEngine::AudioClip,_UnityEngine::AudioClip>__get_Asset__
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).receiver;
  pAVar2 = (this->fields)._.asset;
  if (pSVar1 != (StreamedAudioClip_IReceiver *)0x0) {
    uVar3 = 0;
    uVar4 = (pSVar1->klass->_1).interface_offsets_count;
    if (uVar4 != 0) {
      do {
        if (pSVar1->klass->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__StreamedAudioClip__IReceiver) {
          pSVar5 = &pSVar1->klass->vtable + pSVar1->klass->interfaceOffsets[uVar3].offset;
          (*(pSVar5->OnAudioReceived).methodPtr)(pSVar1,pAVar2,(pSVar5->OnAudioReceived).method);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)func_?(pSVar1,TypeInfo__StreamedAudioClip__IReceiver,0);
    (*(code *)*puVar6)(pSVar1,pAVar2,puVar6[1]);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* StreamedAudioClip() */

void Assembly-CSharp.dll::StreamedAudioClip::StreamedAudioClip__ctor
               (StreamedAudioClip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__StreamingAsset<UnityEngine::AudioClip,_UnityEngine::AudioClip>__StreamingAsset__
                   );
    cRam_? = '\x01';
  }
  StreamingAsset`2[System::Object,System::Object]::
  StreamingAsset_2_System_Object_System_Object___ctor
            ((StreamingAsset_2_System_Object_System_Object_ *)this,
             MethodInfo__StreamingAsset<UnityEngine::AudioClip,_UnityEngine::AudioClip>__StreamingAsset__
            );
  return;
}

