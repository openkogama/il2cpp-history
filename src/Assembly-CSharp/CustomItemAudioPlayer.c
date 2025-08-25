
/* Void Initialize(String[]) */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_Initialize
               (CustomItemAudioPlayer *this,String__Array *clipNames,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                   );
    cRam_? = '\x01';
  }
  pAVar1 = (AudioSource *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                     );
  (this->fields).audioSource = pAVar1;
  func_?(&(this->fields).audioSource,pAVar1);
  pAVar1 = (this->fields).audioSource;
  if (pAVar1 != (AudioSource *)0x0) {
    fVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_volume
                      (pAVar1,(MethodInfo *)0x0);
    (this->fields).clipNames = clipNames;
    (this->fields).baseVolume = fVar2;
    func_?(&(this->fields).clipNames,clipNames);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsClipLooped(Int32) */

bool Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_IsClipLooped
               (CustomItemAudioPlayer *this,int32_t index,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields).audioClips;
  if (pCVar2 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((uint)index < pCVar2->max_length) {
    return pCVar2->vector[index].isLooped;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void PlayClip(Int32, Boolean, Vector3) */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
               (CustomItemAudioPlayer *this,int32_t index,bool useAudioManager,Vector3 position,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).audioSource;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  if (index < 0) {
    return;
  }
  pCVar3 = (this->fields).audioClips;
  if (pCVar3 != (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) {
    if ((int)pCVar3->max_length <= index) {
      return;
    }
    CustomItemAudioPlayer_SetAudioSourceSettings(this,index,(MethodInfo *)0x0);
    if (useAudioManager == 0) {
code_?:
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (pAVar1,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 != (AudioSource *)0x0) {
        bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_loop
                          (pAVar1,(MethodInfo *)0x0);
        if (bVar2 != 0) goto code_?;
        if (_UNK_? <=
            (position.y - 0.0) * (position.y - 0.0) + (position.x - 0.0) * (position.x - 0.0) +
            (position.z - 0.0) * (position.z - 0.0)) {
          uVar4 = position._0_8_;
        }
        else {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (this_00 == (Transform *)0x0) goto code_?;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&puStack_6,this_00,(MethodInfo *)0x0);
          uVar4._0_4_ = pVVar5->x;
          uVar4._4_4_ = pVVar5->y;
          position.z = pVVar5->z;
        }
        uVar7 = (undefined4)uVar4;
        uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
        pSVar9 = (this->fields).clipNames;
        if (pSVar9 != (String__Array *)0x0) {
          if (pSVar9->max_length <= (uint)index) goto code_?;
          if (this_01 != (AudioManager *)0x0) {
            position_00.y = (float)uVar8;
            position_00.x = (float)uVar7;
            position_00.z = position.z;
            AudioManager::AudioManager_Play_2
                      (this_01,pSVar9->vector[index],(this->fields).audioSource,position_00,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void PlayClipFraction(Int32, Single) */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClipFraction
               (CustomItemAudioPlayer *this,int32_t index,float length,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).audioSource;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if ((bVar2 == 0) && (-1 < index)) {
    pCVar3 = (this->fields).audioClips;
    if (pCVar3 != (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) {
      if ((int)pCVar3->max_length <= index) {
        return;
      }
      CustomItemAudioPlayer_SetAudioSourceSettings(this,index,(MethodInfo *)0x0);
      dVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSettings::AudioSettings_get_dspTime
                        ((MethodInfo *)0x0);
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 != (AudioSource *)0x0) {
        dStack_5 = (double)CONCAT44(&UNK_?,SUB84(dVar4,0));
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                  (pAVar1,0,(MethodInfo *)0x0);
        pAVar1 = (this->fields).audioSource;
        if (pAVar1 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayScheduled
                    (pAVar1,1.33757308318574e-315,in_stack_6);
          pAVar1 = (this->fields).audioSource;
          if (pAVar1 != (AudioSource *)0x0) {
            uStack7 = SUB84(dStack_5 + 3.2141838823347503e-29,0);
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_SetScheduledEndTime
                      (pAVar1,(double)((ulonglong)(dStack_5 + 3.2141838823347503e-29) >> 0x20),
                       in_stack_8);
            return;
          }
        }
      }
    }
    func_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  return;
}


/* Void SetAudioSourceSettings(Int32) */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_SetAudioSourceSettings
               (CustomItemAudioPlayer *this,int32_t index,MethodInfo *method)

{
  pCVar1 = (this->fields).audioClips;
  if (pCVar1 != (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) {
    if (pCVar1->max_length <= (uint)index) goto code_?;
    fVar2 = pCVar1->vector[index].pitchVariation;
    pAVar3 = (this->fields).audioSource;
    if (pAVar3 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar3,(bool)*(undefined4 *)&pCVar1->vector[index].isLooped,(MethodInfo *)0x0);
      if (index != (this->fields).index) {
        pAVar3 = (this->fields).audioSource;
        (this->fields).index = index;
        if (pAVar3 == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                  (pAVar3,(AudioClip *)0x0,(MethodInfo *)0x0);
      }
      if (fVar2 == _UNK_?) {
        return;
      }
      pAVar3 = (this->fields).audioSource;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                        (_UNK_? - fVar2,fVar2 + _UNK_?,(MethodInfo *)0x0);
      if (pAVar3 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (pAVar3,fVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetPitch(Single) */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_SetPitch
               (CustomItemAudioPlayer *this,float pitch,MethodInfo *method)

{
  this_00 = (this->fields).audioSource;
  if (this_00 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (this_00,pitch,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVolume(Single) */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_SetVolume
               (CustomItemAudioPlayer *this,float volume,MethodInfo *method)

{
  this_00 = (this->fields).audioSource;
  if (this_00 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (this_00,volume * (this->fields).baseVolume,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Stop() */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_Stop
               (CustomItemAudioPlayer *this,MethodInfo *method)

{
  if ((this->fields).audioSource != (AudioSource *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)();
    return;
  }
  puStack_1 = &stack0xfffffffc;
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* CustomItemAudioPlayer() */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer__ctor
               (CustomItemAudioPlayer *this,MethodInfo *method)

{
  (this->fields).baseVolume = 0.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Single get_ClipLength() */

float Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_get_ClipLength
                (CustomItemAudioPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).audioSource;
  if (pAVar1 != (AudioSource *)0x0) {
    pAVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                       (pAVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return 0.0;
    }
    pAVar1 = (this->fields).audioSource;
    if (pAVar1 != (AudioSource *)0x0) {
      pAVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                         (pAVar1,(MethodInfo *)0x0);
      if (pAVar2 != (AudioClip *)0x0) {
        if (pcRam_? == (code *)0x0) {
          pcRam_? = (code *)func_?();
        }
        pcStack4 = pcRam_?;
        fVar5 = (float10)(*pcRam_?)();
        return (float)fVar5;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  fVar5 = (float10)(*pcVar6)();
  return (float)fVar5;
}


/* Boolean get_IsPlaying() */

bool Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_get_IsPlaying
               (CustomItemAudioPlayer *this,MethodInfo *method)

{
  pAStack_1 = (AudioSource *)&stack0xfffffffc;
  pAVar2 = (this->fields).audioSource;
  if (pAVar2 != (AudioSource *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pAStack_1 = pAVar2;
    bVar3 = (*pcRam_?)();
    return bVar3;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}

