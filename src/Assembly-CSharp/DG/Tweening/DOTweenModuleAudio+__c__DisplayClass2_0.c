
/* Single <DOSetFloat>b__0() */

float Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio+<>c__DisplayClass2_0::
      DOTweenModuleAudio_c_DisplayClass2_0__DOSetFloat_b__0
                (DOTweenModuleAudio_c_DisplayClass2_0 *this,MethodInfo *method)

{
  this_00 = (this->fields).target;
  afStackX_8[0] = 0.0;
  if (this_00 != (AudioMixer *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::Audio::AudioMixer::AudioMixer_GetFloat
              (this_00,(this->fields).floatName,afStackX_8,(MethodInfo *)0x0);
    return afStackX_8[0];
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  fVar2 = (float)(*pcVar1)();
  return fVar2;
}


/* Void <DOSetFloat>b__1(Single) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio+<>c__DisplayClass2_0::
     DOTweenModuleAudio_c_DisplayClass2_0__DOSetFloat_b__1
               (DOTweenModuleAudio_c_DisplayClass2_0 *this,float x,MethodInfo *method)

{
  obj = (this->fields).target;
  if (obj == (AudioMixer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar2 = (this->fields).floatName;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Audio::AudioMixer>_UnityEngine__Audio__AudioMixer_
                  ,pSVar2,x,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStack_3[0] = (uint16_t *)0x0;
  puStack_4 = (uint16_t *)0x0;
  puStack_5 = (undefined *)0x0;
  uStack_6 = 0;
  ppuStack_7 = apuStack_3;
  if (obj != (AudioMixer *)0x0) {
    pvVar8 = (obj->fields)._.m_CachedPtr;
    if (pvVar8 != (void *)0x0) {
      if (pSVar2 != (String *)0x0) {
        if ((pSVar2->fields)._stringLength == 0) {
          puStack_4 = (uint16_t *)0x1;
          puStack_5 = (undefined *)0x0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar9 = (pSVar2->fields)._stringLength;
          apuStack_3[0] = &(pSVar2->fields)._firstChar;
          if (iVar9 == 0) {
            apuStack_3[0] = (uint16_t *)0x0;
          }
          puStack_5 = (undefined *)CONCAT44(puStack_5._4_4_,iVar9);
          puStack_4 = apuStack_3[0];
        }
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? != (code *)0x0) ||
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 != (code *)0x0)) {
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar8,&puStack_4,x);
        return;
      }
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

