
/* Void Awake() */

void Assembly-CSharp.dll::AudioManager::AudioManager_Awake(AudioManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__AudioSource_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::AudioSource>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__set_Capacity_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__set_Capacity_int_);
    func_?(&TypeInfo__AudioManager__Sound);
    func_?(&StringLiteral_SoundPool);
    func_?(&StringLiteral_PooledSoundObject);
    cRam_? = '\x01';
  }
  this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(this_00,(MethodInfo *)0x0)
  ;
  ppGVar1 = &(this->fields).poolTransform;
  *ppGVar1 = this_00;
  func_?(ppGVar1,this_00);
  if (*ppGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)*ppGVar1,StringLiteral_SoundPool,(MethodInfo *)0x0);
    if (*ppGVar1 != (GameObject *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (*ppGVar1,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar2,pTVar3,(MethodInfo *)0x0);
        pLVar4 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                  *)(this->fields).activeSounds;
        if (pLVar4 != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
          MultiColumnCollectionHeader+ViewState+ColumnState]::
          List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__set_Capacity
                    (pLVar4,0x80,
                     MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__set_Capacity_int_
                    );
          pLVar4 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                    *)(this->fields).pooledSounds;
          if (pLVar4 != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
            MultiColumnCollectionHeader+ViewState+ColumnState]::
            List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__set_Capacity
                      (pLVar4,0x80,
                       MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__set_Capacity_int_
                      );
            pLVar4 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                      *)(this->fields).soundsToRemove;
            if (pLVar4 != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
              MultiColumnCollectionHeader+ViewState+ColumnState]::
              List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__set_Capacity
                        (pLVar4,0x80,
                         MethodInfo__System__Collections__Generic__List<int>__set_Capacity_int_);
              while( true ) {
                method_00 = TypeInfo__AudioManager__Sound;
                value = (Object *)func_?();
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                this_01 = (Object__Class *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                          ((GameObject *)this_01,(MethodInfo *)0x0);
                if (value == (Object *)0x0) break;
                pOVar5 = value + 1;
                pOVar5->klass = this_01;
                func_?();
                if (pOVar5->klass == (Object__Class *)0x0) break;
                pSVar6 = StringLiteral_PooledSoundObject;
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                          ((Object_1 *)pOVar5->klass,StringLiteral_PooledSoundObject,
                           (MethodInfo *)0x0);
                if (pOVar5->klass == (Object__Class *)0x0) break;
                puVar7 = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          ((GameObject *)pOVar5->klass,0,(MethodInfo *)0x0);
                if (pOVar5->klass == (Object__Class *)0x0) break;
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform((GameObject *)pOVar5->klass,(MethodInfo *)0x0);
                if (pSVar6->klass == (String__Class *)0x0) break;
                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform((GameObject *)pSVar6->klass,(MethodInfo *)0x0);
                if (pTVar2 == (Transform *)0x0) break;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                          (pTVar2,pTVar3,(MethodInfo *)0x0);
                if (pOVar5->klass == (Object__Class *)0x0) break;
                pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_AddComponent_1
                                   ((GameObject *)pOVar5->klass,
                                    UnityEngine__AudioSource_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::AudioSource>__
                                   );
                value[1].monitor = (MonitorData *)pOVar5;
                func_?();
                if (pLRam00000018 == (List_1_System_Object_ *)0x0) break;
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          (pLRam00000018,value,
                           MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                          );
                if (0x7f < (int)(puVar7 + 1)) {
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Single GetMaxDistanceFromRange(SoundRangeDistance) */

float Assembly-CSharp.dll::AudioManager::AudioManager_GetMaxDistanceFromRange
                (SoundRangeDistance__Enum range,MethodInfo *method)

{
  if (range == SoundRangeDistance__Enum_Short) {
    return _UNK_?;
  }
  if ((range != SoundRangeDistance__Enum_Medium) && (range == SoundRangeDistance__Enum_Long)) {
    return _UNK_?;
  }
  return _UNK_?;
}


/* Single GetMinDistanceFromRange(SoundRangeDistance) */

float Assembly-CSharp.dll::AudioManager::AudioManager_GetMinDistanceFromRange
                (SoundRangeDistance__Enum range,MethodInfo *method)

{
  if (range == SoundRangeDistance__Enum_Short) {
    return _UNK_?;
  }
  if (range != SoundRangeDistance__Enum_Medium) {
    return _UNK_?;
  }
  return _UNK_?;
}


/* AudioManager+Sound Play(String, AudioClip, Vector3, Single, SoundRangeDistance, Single) */

AudioManager_Sound *
Assembly-CSharp.dll::AudioManager::AudioManager_Play
          (AudioManager *this,String *name,AudioClip *clip,Vector3 position,float volume,
          SoundRangeDistance__Enum range,float pitch,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                   );
    func_?(&StringLiteral_Sound__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).pooledSounds;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size == 0) {
      return (AudioManager_Sound *)0x0;
    }
    item = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,(this_00->fields)._size + -1,
                      MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                     );
    pLVar1 = (this->fields).pooledSounds;
    if (pLVar1 != (List_1_AudioManager_Sound_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,(pLVar1->fields)._size + -1,
                 MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_)
      ;
      pLVar1 = (this->fields).activeSounds;
      if (((pLVar1 != (List_1_AudioManager_Sound_ *)0x0) &&
          (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
           List_1_System_Object__Add
                     ((List_1_System_Object_ *)pLVar1,(Object *)item,
                      MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                     ), item != (RegexCharClass_SingleRange)0x0)) &&
         (*(GameObject **)((int)item + 8) != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)((int)item + 8),1,(MethodInfo *)0x0);
        pSVar2 = ::StringLiteral__;
        this_01 = *(Object_1 **)((int)item + 8);
        value_00 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral_Sound__,(String *)&UNK_?,::StringLiteral__,
                              (MethodInfo *)0x0);
        if (this_01 != (Object_1 *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                    (this_01,value_00,(MethodInfo *)0x0);
          if ((*(GameObject **)((int)item + 8) != (GameObject *)0x0) &&
             (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(*(GameObject **)((int)item + 8),(MethodInfo *)0x0),
             this_02 != (Transform *)0x0)) {
            value.y = 0.0;
            value.x = (float)pSVar2;
            value.z = position.z;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (this_02,value,(MethodInfo *)0x0);
            if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                        (*(AudioSource **)((int)item + 0xc),(AudioClip *)&UNK_?,
                         (MethodInfo *)0x0);
              if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                          (*(AudioSource **)((int)item + 0xc),volume,(MethodInfo *)0x0);
                if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_priority
                            (*(AudioSource **)((int)item + 0xc),0x80,(MethodInfo *)0x0);
                  if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
                    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                              (*(AudioSource **)((int)item + 0xc),3.183059e-29,(MethodInfo *)0x0);
                    if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                      AudioSource_set_panStereo
                                (*(AudioSource **)((int)item + 0xc),0.0,(MethodInfo *)0x0);
                      if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
                        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                        AudioSource_set_spatialBlend
                                  (*(AudioSource **)((int)item + 0xc),1.0,(MethodInfo *)0x0);
                        if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
                          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                          AudioSource_set_reverbZoneMix
                                    (*(AudioSource **)((int)item + 0xc),1.0,(MethodInfo *)0x0);
                          if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
                            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                            AudioSource_set_dopplerLevel
                                      (*(AudioSource **)((int)item + 0xc),0.13,(MethodInfo *)0x0);
                            if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
                              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                              AudioSource_set_spread
                                        (*(AudioSource **)((int)item + 0xc),0.0,(MethodInfo *)0x0);
                              if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
                                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                AudioSource_set_rolloffMode
                                          (*(AudioSource **)((int)item + 0xc),
                                           AudioRolloffMode__Enum_Linear,(MethodInfo *)0x0);
                                fVar3 = _UNK_?;
                                if ((range != SoundRangeDistance__Enum_Short) &&
                                   (fVar3 = _UNK_?, range != SoundRangeDistance__Enum_Medium)
                                   ) {
                                  fVar3 = _UNK_?;
                                }
                                if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
                                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                  AudioSource_set_minDistance
                                            (*(AudioSource **)((int)item + 0xc),fVar3,
                                             (MethodInfo *)0x0);
                                  fVar3 = _UNK_?;
                                  if (((range != SoundRangeDistance__Enum_Short) &&
                                      (fVar3 = _UNK_?,
                                      range != SoundRangeDistance__Enum_Medium)) &&
                                     (range == SoundRangeDistance__Enum_Long)) {
                                    fVar3 = _UNK_?;
                                  }
                                  if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
                                    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                    AudioSource_set_maxDistance
                                              (*(AudioSource **)((int)item + 0xc),fVar3,
                                               (MethodInfo *)0x0);
                                    if (*(AudioSource **)((int)item + 0xc) != (AudioSource *)0x0) {
                                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                      AudioSource_Play(*(AudioSource **)((int)item + 0xc),
                                                       (MethodInfo *)0x0);
                                      return (AudioManager_Sound *)item;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pAVar5 = (AudioManager_Sound *)(*pcVar4)();
  return pAVar5;
}


/* AudioManager+Sound Play(String, AudioSource) */

AudioManager_Sound *
Assembly-CSharp.dll::AudioManager::AudioManager_Play_1
          (AudioManager *this,String *name,AudioSource *audioSource,MethodInfo *method)

{
  if (audioSource != (AudioSource *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)audioSource,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
      pAVar2 = AudioManager_Play_2(this,name,audioSource,*pVVar1,(MethodInfo *)0x0);
      return pAVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pAVar2 = (AudioManager_Sound *)(*pcVar3)();
  return pAVar2;
}


/* AudioManager+Sound Play(String, AudioSource, Vector3) */

AudioManager_Sound *
Assembly-CSharp.dll::AudioManager::AudioManager_Play_2
          (AudioManager *this,String *name,AudioSource *audioSource,Vector3 position,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                   );
    func_?(&StringLiteral_Sound__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).pooledSounds;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size == 0) {
      return (AudioManager_Sound *)0x0;
    }
    item = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,(this_00->fields)._size + -1,
                      MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                     );
    pLVar1 = (this->fields).pooledSounds;
    if (pLVar1 != (List_1_AudioManager_Sound_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,(pLVar1->fields)._size + -1,
                 MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_)
      ;
      pLVar1 = (this->fields).activeSounds;
      if (pLVar1 != (List_1_AudioManager_Sound_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar1,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                  );
        if ((item != (RegexCharClass_SingleRange)0x0) &&
           (pSVar2 = *(String **)((int)item + 8), pSVar2 != (String *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)pSVar2,1,(MethodInfo *)0x0);
          this_02 = ::StringLiteral__;
          this_01 = *(Object_1 **)((int)item + 8);
          pSVar2 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral_Sound__,pSVar2,::StringLiteral__,(MethodInfo *)0x0);
          if (this_01 != (Object_1 *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                      (this_01,pSVar2,(MethodInfo *)0x0);
            if (*(GameObject **)((int)item + 8) != (GameObject *)0x0) {
              this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(*(GameObject **)((int)item + 8),(MethodInfo *)0x0);
              if (this_03 != (Transform *)0x0) {
                auVar3._8_4_ = 0;
                auVar3._0_8_ = position._4_8_;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (this_03,(Vector3)(auVar3 << 0x20),(MethodInfo *)0x0);
                pAVar4 = *(AudioSource **)((int)item + 0xc);
                if (this_02 != (String *)0x0) {
                  value = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                          AudioSource_get_clip((AudioSource *)this_02,(MethodInfo *)0x0);
                  if (pAVar4 != (AudioSource *)0x0) {
                    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                              (pAVar4,value,(MethodInfo *)0x0);
                    pAVar4 = *(AudioSource **)((int)item + 0xc);
                    value_00 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                               AudioSource_get_outputAudioMixerGroup
                                         ((AudioSource *)this_02,(MethodInfo *)0x0);
                    if (pAVar4 != (AudioSource *)0x0) {
                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                      AudioSource_set_outputAudioMixerGroup(pAVar4,value_00,(MethodInfo *)0x0);
                      pAVar4 = *(AudioSource **)((int)item + 0xc);
                      bVar5 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                              AudioSource_get_mute((AudioSource *)this_02,(MethodInfo *)0x0);
                      if (pAVar4 != (AudioSource *)0x0) {
                        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_mute
                                  (pAVar4,bVar5,(MethodInfo *)0x0);
                        pAVar4 = *(AudioSource **)((int)item + 0xc);
                        bVar5 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                AudioSource_get_bypassEffects
                                          ((AudioSource *)this_02,(MethodInfo *)0x0);
                        if (pAVar4 != (AudioSource *)0x0) {
                          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                          AudioSource_set_bypassEffects(pAVar4,bVar5,(MethodInfo *)0x0);
                          pAVar4 = *(AudioSource **)((int)item + 0xc);
                          bVar5 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                  AudioSource_get_bypassListenerEffects
                                            ((AudioSource *)this_02,(MethodInfo *)0x0);
                          if (pAVar4 != (AudioSource *)0x0) {
                            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                            AudioSource_set_bypassListenerEffects(pAVar4,bVar5,(MethodInfo *)0x0);
                            pAVar4 = *(AudioSource **)((int)item + 0xc);
                            bVar5 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                    AudioSource_get_bypassReverbZones
                                              ((AudioSource *)this_02,(MethodInfo *)0x0);
                            if (pAVar4 != (AudioSource *)0x0) {
                              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                              AudioSource_set_bypassReverbZones(pAVar4,bVar5,(MethodInfo *)0x0);
                              pAVar4 = *(AudioSource **)((int)item + 0xc);
                              bVar5 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                      AudioSource_get_playOnAwake
                                                ((AudioSource *)this_02,(MethodInfo *)0x0);
                              if (pAVar4 != (AudioSource *)0x0) {
                                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                AudioSource_set_playOnAwake(pAVar4,bVar5,(MethodInfo *)0x0);
                                pAVar4 = *(AudioSource **)((int)item + 0xc);
                                bVar5 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                        AudioSource_get_loop
                                                  ((AudioSource *)this_02,(MethodInfo *)0x0);
                                if (pAVar4 != (AudioSource *)0x0) {
                                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                  AudioSource_set_loop(pAVar4,bVar5,(MethodInfo *)0x0);
                                  pAVar4 = *(AudioSource **)((int)item + 0xc);
                                  value_01 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                             AudioSource_get_priority
                                                       ((AudioSource *)this_02,(MethodInfo *)0x0);
                                  if (pAVar4 != (AudioSource *)0x0) {
                                    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                    AudioSource_set_priority(pAVar4,value_01,(MethodInfo *)0x0);
                                    pAVar4 = *(AudioSource **)((int)item + 0xc);
                                    fVar6 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                            AudioSource_get_volume
                                                      ((AudioSource *)this_02,(MethodInfo *)0x0);
                                    if (pAVar4 != (AudioSource *)0x0) {
                                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                      AudioSource_set_volume(pAVar4,fVar6,(MethodInfo *)0x0);
                                      pAVar4 = *(AudioSource **)((int)item + 0xc);
                                      fVar6 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource
                                              ::AudioSource_get_pitch
                                                        ((AudioSource *)this_02,(MethodInfo *)0x0);
                                      if (pAVar4 != (AudioSource *)0x0) {
                                        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                        AudioSource_set_pitch(pAVar4,fVar6,(MethodInfo *)0x0);
                                        pAVar4 = *(AudioSource **)((int)item + 0xc);
                                        fVar6 = UnityEngine.AudioModule.dll::UnityEngine::
                                                AudioSource::AudioSource_get_panStereo
                                                          ((AudioSource *)this_02,(MethodInfo *)0x0)
                                        ;
                                        if (pAVar4 != (AudioSource *)0x0) {
                                          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                          AudioSource_set_panStereo(pAVar4,fVar6,(MethodInfo *)0x0);
                                          pAVar4 = *(AudioSource **)((int)item + 0xc);
                                          fVar6 = UnityEngine.AudioModule.dll::UnityEngine::
                                                  AudioSource::AudioSource_get_spatialBlend
                                                            ((AudioSource *)this_02,
                                                             (MethodInfo *)0x0);
                                          if (pAVar4 != (AudioSource *)0x0) {
                                            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                            AudioSource_set_spatialBlend
                                                      (pAVar4,fVar6,(MethodInfo *)0x0);
                                            pAVar4 = *(AudioSource **)((int)item + 0xc);
                                            fVar6 = UnityEngine.AudioModule.dll::UnityEngine::
                                                    AudioSource::AudioSource_get_reverbZoneMix
                                                              ((AudioSource *)this_02,
                                                               (MethodInfo *)0x0);
                                            if (pAVar4 != (AudioSource *)0x0) {
                                              UnityEngine.AudioModule.dll::UnityEngine::AudioSource
                                              ::AudioSource_set_reverbZoneMix
                                                        (pAVar4,fVar6,(MethodInfo *)0x0);
                                              pAVar4 = *(AudioSource **)((int)item + 0xc);
                                              fVar6 = UnityEngine.AudioModule.dll::UnityEngine::
                                                      AudioSource::AudioSource_get_dopplerLevel
                                                                ((AudioSource *)this_02,
                                                                 (MethodInfo *)0x0);
                                              if (pAVar4 != (AudioSource *)0x0) {
                                                UnityEngine.AudioModule.dll::UnityEngine::
                                                AudioSource::AudioSource_set_dopplerLevel
                                                          (pAVar4,fVar6,(MethodInfo *)0x0);
                                                pAVar4 = *(AudioSource **)((int)item + 0xc);
                                                fVar6 = UnityEngine.AudioModule.dll::UnityEngine::
                                                        AudioSource::AudioSource_get_spread
                                                                  ((AudioSource *)this_02,
                                                                   (MethodInfo *)0x0);
                                                if (pAVar4 != (AudioSource *)0x0) {
                                                  UnityEngine.AudioModule.dll::UnityEngine::
                                                  AudioSource::AudioSource_set_spread
                                                            (pAVar4,fVar6,(MethodInfo *)0x0);
                                                  pAVar4 = *(AudioSource **)((int)item + 0xc);
                                                  value_02 = UnityEngine.AudioModule.dll::
                                                             UnityEngine::AudioSource::
                                                             AudioSource_get_rolloffMode
                                                                       ((AudioSource *)this_02,
                                                                        (MethodInfo *)0x0);
                                                  if (pAVar4 != (AudioSource *)0x0) {
                                                    UnityEngine.AudioModule.dll::UnityEngine::
                                                    AudioSource::AudioSource_set_rolloffMode
                                                              (pAVar4,value_02,(MethodInfo *)0x0);
                                                    pAVar4 = *(AudioSource **)((int)item + 0xc);
                                                    fVar6 = UnityEngine.AudioModule.dll::UnityEngine
                                                            ::AudioSource::
                                                            AudioSource_get_minDistance
                                                                      ((AudioSource *)this_02,
                                                                       (MethodInfo *)0x0);
                                                    if (pAVar4 != (AudioSource *)0x0) {
                                                      UnityEngine.AudioModule.dll::UnityEngine::
                                                      AudioSource::AudioSource_set_minDistance
                                                                (pAVar4,fVar6,(MethodInfo *)0x0);
                                                      pAVar4 = *(AudioSource **)((int)item + 0xc);
                                                      fVar6 = UnityEngine.AudioModule.dll::
                                                              UnityEngine::AudioSource::
                                                              AudioSource_get_maxDistance
                                                                        ((AudioSource *)this_02,
                                                                         (MethodInfo *)0x0);
                                                      if (pAVar4 != (AudioSource *)0x0) {
                                                        UnityEngine.AudioModule.dll::UnityEngine::
                                                        AudioSource::AudioSource_set_maxDistance
                                                                  (pAVar4,fVar6,(MethodInfo *)0x0);
                                                        if (*(AudioSource **)((int)item + 0xc) !=
                                                            (AudioSource *)0x0) {
                                                          UnityEngine.AudioModule.dll::UnityEngine::
                                                          AudioSource::AudioSource_Play
                                                                    (*(AudioSource **)
                                                                      ((int)item + 0xc),
                                                                     (MethodInfo *)0x0);
                                                          return (AudioManager_Sound *)item;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pAVar8 = (AudioManager_Sound *)(*pcVar7)();
  return pAVar8;
}


/* Void Update() */

void Assembly-CSharp.dll::AudioManager::AudioManager_Update(AudioManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).activeSounds;
  if (pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    while (iVar1 < (pLVar2->fields)._size) {
      if (((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar2,iVar1,
                              MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                             ), RVar3 == (RegexCharClass_SingleRange)0x0)) ||
         (*(AudioSource **)((int)RVar3 + 0xc) == (AudioSource *)0x0)) goto code_?;
      bVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (*(AudioSource **)((int)RVar3 + 0xc),(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pLVar5 = (this->fields).soundsToRemove;
        if (pLVar5 == (List_1_System_Int32_ *)0x0) goto code_?;
        func_?(pLVar5);
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).activeSounds;
      iVar1 = iVar1 + 1;
      if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
    }
    pLVar5 = (this->fields).soundsToRemove;
    if (pLVar5 != (List_1_System_Int32_ *)0x0) {
      iVar1 = (pLVar5->fields)._size;
      goto joined_?;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
joined_?:
  if (iVar1 < 1) goto code_?;
  pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).soundsToRemove;
  if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
  goto code_?;
  iVar1 = iVar1 + -1;
  RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                    (pLVar2,iVar1,MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                    );
  pLVar7 = (this->fields).pooledSounds;
  pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).activeSounds;
  if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar2,(int32_t)RVar3,
                         MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                        ), pLVar7 == (List_1_AudioManager_Sound_ *)0x0)) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
            ((List_1_System_Object_ *)pLVar7,(Object *)RVar8,
             MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
            );
  pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).activeSounds;
  if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     ((RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar2,(int32_t)RVar3,
                          MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                         ), RVar8 == (RegexCharClass_SingleRange)0x0 ||
      (*(GameObject **)((int)RVar8 + 8) == (GameObject *)0x0)))) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (*(GameObject **)((int)RVar8 + 8),0,(MethodInfo *)0x0);
  pLVar7 = (this->fields).activeSounds;
  if (pLVar7 == (List_1_AudioManager_Sound_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__RemoveAt
            ((List_1_System_Object_ *)pLVar7,(int32_t)RVar3,
             MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_);
  goto joined_?;
code_?:
  pLVar5 = (this->fields).soundsToRemove;
  if (pLVar5 != (List_1_System_Int32_ *)0x0) {
    piVar9 = &(pLVar5->fields)._version;
    *piVar9 = *piVar9 + 1;
    (pLVar5->fields)._size = 0;
    return;
  }
  goto code_?;
}


/* AudioManager() */

void Assembly-CSharp.dll::AudioManager::AudioManager__ctor(AudioManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__System__Collections__Generic__List<AudioManager::Sound>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_AudioManager_Sound_ *)
           func_?(TypeInfo__System__Collections__Generic__List<AudioManager::Sound>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__List__);
  ppLVar2 = &(this->fields).activeSounds;
  *ppLVar2 = pLVar1;
  func_?(ppLVar2,pLVar1);
  pLVar1 = (List_1_AudioManager_Sound_ *)
           func_?(TypeInfo__System__Collections__Generic__List<AudioManager::Sound>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__List__);
  ppLVar2 = &(this->fields).pooledSounds;
  *ppLVar2 = pLVar1;
  func_?(ppLVar2,pLVar1);
  this_00 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  ppLVar3 = &(this->fields).soundsToRemove;
  *ppLVar3 = this_00;
  func_?(ppLVar3,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

