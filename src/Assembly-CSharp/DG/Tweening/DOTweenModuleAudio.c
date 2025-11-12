
/* Int32 DOComplete(AudioMixer, Boolean) */

int32_t Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOComplete
                  (AudioMixer *target,bool withCallbacks,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (AudioMixer *)0x0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                      (OperationType__Enum_Complete,FilterType__Enum_TargetOrId,(Object *)target,0,
                       (float)withCallbacks,(Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


/* TweenerCore`3[System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions]
   DOFade(AudioSource, Single, Single) */

TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOFade
          (AudioSource *target,float endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass0_0___DOFade_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass0_0___DOFade_b__1_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass0_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass0_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *)
             (*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(AudioSource **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (endValue < 0.0) {
    endValue = 0.0;
  }
  else if (_UNK_? < endValue) {
    endValue = _UNK_?;
  }
  getter = (DOGetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>)
  ;
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass0_0___DOFade_b__0__);
  setter = (DOSetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>)
  ;
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass0_0___DOFade_b__1_float_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
            );
  return pTVar3;
}


/* Int32 DOFlip(AudioMixer) */

int32_t Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOFlip
                  (AudioMixer *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (AudioMixer *)0x0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                      (OperationType__Enum_Flip,FilterType__Enum_TargetOrId,(Object *)target,0,0.0,
                       (Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


/* Int32 DOGoto(AudioMixer, Single, Boolean) */

int32_t Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOGoto
                  (AudioMixer *target,float to,bool andPlay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (AudioMixer *)0x0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                      (OperationType__Enum_Goto,FilterType__Enum_TargetOrId,(Object *)target,andPlay
                       ,to,(Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


/* Int32 DOKill(AudioMixer, Boolean) */

int32_t Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOKill
                  (AudioMixer *target,bool complete,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (AudioMixer *)0x0) {
    if (complete == 0) {
      iVar1 = 0;
    }
    else {
      if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar1 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                        (OperationType__Enum_Complete,FilterType__Enum_TargetOrId,(Object *)target,1
                         ,0.0,(Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    }
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar2 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                      (OperationType__Enum_Despawn,FilterType__Enum_TargetOrId,(Object *)target,0,
                       0.0,(Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    return iVar2 + iVar1;
  }
  return 0;
}


/* Int32 DOPause(AudioMixer) */

int32_t Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOPause
                  (AudioMixer *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (AudioMixer *)0x0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                      (OperationType__Enum_Pause,FilterType__Enum_TargetOrId,(Object *)target,0,0.0,
                       (Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


/* TweenerCore`3[System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions]
   DOPitch(AudioSource, Single, Single) */

TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOPitch
          (AudioSource *target,float endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass1_0___DOPitch_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass1_0___DOPitch_b__1_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass1_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass1_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *)
             (*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(AudioSource **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>)
  ;
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass1_0___DOPitch_b__0__)
  ;
  setter = (DOSetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>)
  ;
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass1_0___DOPitch_b__1_float_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
            );
  return pTVar3;
}


/* Int32 DOPlay(AudioMixer) */

int32_t Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOPlay
                  (AudioMixer *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (AudioMixer *)0x0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                      (OperationType__Enum_Play,FilterType__Enum_TargetOrId,(Object *)target,0,0.0,
                       (Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


/* Int32 DOPlayBackwards(AudioMixer) */

int32_t Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOPlayBackwards
                  (AudioMixer *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (AudioMixer *)0x0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                      (OperationType__Enum_PlayBackwards,FilterType__Enum_TargetOrId,
                       (Object *)target,0,0.0,(Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


/* Int32 DOPlayForward(AudioMixer) */

int32_t Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOPlayForward
                  (AudioMixer *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (AudioMixer *)0x0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                      (OperationType__Enum_PlayForward,FilterType__Enum_TargetOrId,(Object *)target,
                       0,0.0,(Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


/* Int32 DORestart(AudioMixer) */

int32_t Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DORestart
                  (AudioMixer *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (AudioMixer *)0x0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                      (OperationType__Enum_Restart,FilterType__Enum_TargetOrId,(Object *)target,1,
                       _UNK_?,(Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


/* Int32 DORewind(AudioMixer) */

int32_t Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DORewind
                  (AudioMixer *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (AudioMixer *)0x0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                      (OperationType__Enum_Rewind,FilterType__Enum_TargetOrId,(Object *)target,1,0.0
                       ,(Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


/* TweenerCore`3[System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions]
   DOSetFloat(AudioMixer, String, Single, Single) */

TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOSetFloat
          (AudioMixer *target,String *floatName,float endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass2_0___DOSetFloat_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass2_0___DOSetFloat_b__1_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass2_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass2_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *)
             (*pcVar2)();
    return pTVar3;
  }
  *(AudioMixer **)(lVar1 + 0x10) = target;
  if (iRam_? != 0) {
    uVar4 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  *(String **)(lVar1 + 0x18) = floatName;
  if (iVar9 != 0) {
    uVar4 = (uint)(lVar1 + 0x18U >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  getter = (DOGetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>)
  ;
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass2_0___DOSetFloat_b__0__
               );
  setter = (DOSetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>)
  ;
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleAudio____c__DisplayClass2_0___DOSetFloat_b__1_float_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
            );
  return pTVar3;
}


/* Int32 DOSmoothRewind(AudioMixer) */

int32_t Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOSmoothRewind
                  (AudioMixer *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (AudioMixer *)0x0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                      (OperationType__Enum_SmoothRewind,FilterType__Enum_TargetOrId,(Object *)target
                       ,0,0.0,(Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


/* Int32 DOTogglePause(AudioMixer) */

int32_t Assembly-CSharp.dll::DG::Tweening::DOTweenModuleAudio::DOTweenModuleAudio_DOTogglePause
                  (AudioMixer *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (AudioMixer *)0x0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_FilteredOperation
                      (OperationType__Enum_TogglePause,FilterType__Enum_TargetOrId,(Object *)target,
                       0,0.0,(Object *)0x0,(Object__Array *)0x0,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}

