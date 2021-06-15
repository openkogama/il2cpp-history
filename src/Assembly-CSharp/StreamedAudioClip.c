
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedAudioClip::StreamedAudioClip_OnAssetSet
               (StreamedAudioClip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).receiver;
  iVar2 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                     MethodInfo__StreamingAsset<UnityEngine::AudioClip,_UnityEngine::AudioClip>__get_Asset__
                    );
  if (pSVar1 != (StreamedAudioClip_IReceiver *)0x0) {
    pSVar3 = pSVar1->klass;
    uVar4 = 0;
    uVar5._0_1_ = (pSVar3->_1).rank;
    uVar5._1_1_ = (pSVar3->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pSVar3->interfaceOffsets[uVar4].interfaceType ==
            (Il2CppClass *)TypeInfo__StreamedAudioClip__IReceiver) {
          iVar6 = pSVar3->interfaceOffsets[uVar4].offset;
          (*(code *)(&pSVar1->klass->vtable)[iVar6].OnAudioReceived.method)
                    (pSVar1,iVar2,(&pSVar1->klass[1]._0.image)[iVar6 * 2]);
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    puVar7 = (undefined4 *)func_?(pSVar1,TypeInfo__StreamedAudioClip__IReceiver,0);
    (*(code *)*puVar7)(pSVar1,iVar2,puVar7[1]);
    return;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* StreamedAudioClip() */

void Assembly-CSharp.dll::StreamedAudioClip::StreamedAudioClip__ctor
               (StreamedAudioClip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  StreamingAsset`2[UnityEngine::Texture2D,UnityEngine::Texture2D]::
  StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D___ctor
            ((StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D_ *)this,
             MethodInfo__StreamingAsset<UnityEngine::AudioClip,_UnityEngine::AudioClip>__StreamingAsset__
            );
  return;
}

