
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
    pSVar3 = pSVar1->klass;
    uVar4 = 0;
    uVar5._0_1_ = (pSVar3->_1).rank;
    uVar5._1_1_ = (pSVar3->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pSVar3->interfaceOffsets[uVar4].interfaceType ==
            (Il2CppClass *)TypeInfo__StreamedAudioClip__IReceiver) {
          pSVar3 = pSVar1->klass;
          iVar6 = pSVar3->interfaceOffsets[uVar4].offset;
          (*(code *)(&pSVar3->vtable)[iVar6].OnAudioReceived.method)
                    (pSVar1,pAVar2,(&pSVar3[1]._0.image)[iVar6 * 2]);
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    puVar7 = (undefined4 *)func_?(pSVar1,TypeInfo__StreamedAudioClip__IReceiver,0);
    (*(code *)*puVar7)(pSVar1,pAVar2,puVar7[1]);
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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

