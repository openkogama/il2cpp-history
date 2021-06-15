
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedAudioClipToAudioSource::StreamedAudioClipToAudioSource_OnAssetSet
               (StreamedAudioClipToAudioSource *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).audioSource;
  if (pAVar1 != (AudioSource *)0x0) {
    bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      bVar2 = 0;
    }
    else {
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 == (AudioSource *)0x0) goto code_?;
      bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_loop
                        (pAVar1,(MethodInfo *)0x0);
    }
    pAVar1 = (this->fields).audioSource;
    if (pAVar1 != (AudioSource *)0x0) {
      bVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_playOnAwake
                        (pAVar1,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        bVar3 = 0;
      }
      else {
        pAVar1 = (this->fields).audioSource;
        if (pAVar1 == (AudioSource *)0x0) goto code_?;
        pAVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                           (pAVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pAVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      }
      pAVar1 = (this->fields).audioSource;
      pAVar4 = (AudioClip *)
               System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
               Int32]::
               Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                         ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                          MethodInfo__StreamingAsset<UnityEngine::AudioClip,_UnityEngine::AudioClip>__get_Asset__
                         );
      if (pAVar1 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                  (pAVar1,pAVar4,(MethodInfo *)0x0);
        if ((bVar2 == 0) && (bVar3 == 0)) {
          return;
        }
        if ((this->fields).audioSource != (AudioSource *)0x0) {
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)func_?(), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            func_?(uVar6);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(in_stack_7);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::StreamedAudioClipToAudioSource::StreamedAudioClipToAudioSource_Reset
               (StreamedAudioClipToAudioSource *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).audioSource;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                       );
    (this->fields).audioSource = (AudioSource *)pMVar2;
  }
  return;
}


/* StreamedAudioClipToAudioSource() */

void Assembly-CSharp.dll::StreamedAudioClipToAudioSource::StreamedAudioClipToAudioSource__ctor
               (StreamedAudioClipToAudioSource *this,MethodInfo *method)

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

