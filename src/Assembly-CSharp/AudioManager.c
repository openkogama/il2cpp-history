
/* Void Awake() */

void Assembly-CSharp.dll::AudioManager::AudioManager_Awake(AudioManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar1,(MethodInfo *)0x0);
  (this->fields).poolTransform = pGVar1;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pGVar1,StringLiteral_SoundPool,(MethodInfo *)0x0);
    pGVar1 = (this->fields).poolTransform;
    if (pGVar1 != (GameObject *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar2,pTVar3,(MethodInfo *)0x0);
        pLVar4 = (this->fields).activeSounds;
        if (pLVar4 != (List_1_AudioManager_Sound_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[AudioManager+Sound]::
          List_1_AudioManager_Sound__set_Capacity
                    (pLVar4,0x80,
                     MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__set_Capacity_int_
                    );
          pLVar4 = (this->fields).pooledSounds;
          if (pLVar4 != (List_1_AudioManager_Sound_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[AudioManager+Sound]::
            List_1_AudioManager_Sound__set_Capacity
                      (pLVar4,0x80,
                       MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__set_Capacity_int_
                      );
            this_00 = (this->fields).soundsToRemove;
            if (this_00 != (List_1_System_Int32_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__set_Capacity
                        (this_00,0x80,
                         MethodInfo__System__Collections__Generic__List<int>__set_Capacity_int_);
              iVar5 = 0;
              while( true ) {
                method_00 = TypeInfo__AudioManager__Sound;
                this_01 = (ScaleAnimationBase *)func_?();
                ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
                pGVar1 = (GameObject *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                          (pGVar1,(MethodInfo *)0x0);
                if ((this_01 == (ScaleAnimationBase *)0x0) ||
                   ((this_01->fields)._._._._.m_CachedPtr = pGVar1, pGVar1 == (GameObject *)0x0))
                break;
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                          ((Object_1 *)pGVar1,StringLiteral_PooledSoundObject,(MethodInfo *)0x0);
                pGVar1 = (this_01->fields)._._._._.m_CachedPtr;
                if (pGVar1 == (GameObject *)0x0) break;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,0,(MethodInfo *)0x0);
                pGVar1 = (this_01->fields)._._._._.m_CachedPtr;
                if (pGVar1 == (GameObject *)0x0) break;
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                if (_UNK_? == (GameObject *)0x0) break;
                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(_UNK_?,(MethodInfo *)0x0);
                if (pTVar2 == (Transform *)0x0) break;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                          (pTVar2,pTVar3,(MethodInfo *)0x0);
                pGVar1 = (this_01->fields)._._._._.m_CachedPtr;
                if (pGVar1 == (GameObject *)0x0) break;
                pWVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_AddComponent_85
                                   (pGVar1,
                                    UnityEngine__AudioSource_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::AudioSource>__
                                   );
                (this_01->fields).state = (int32_t)pWVar6;
                if (_UNK_? == (List_1_UIPushOption_ *)0x0) break;
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          (_UNK_?,(UIPushOption__Enum)this_01,
                           MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                          );
                iVar5 = iVar5 + 1;
                if (0x7f < iVar5) {
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pooledSounds;
  if (pLVar1 != (List_1_AudioManager_Sound_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__
                       );
    if (pOVar2 == (Object *)0x0) {
      return (AudioManager_Sound *)0x0;
    }
    pLVar1 = (this->fields).pooledSounds;
    if (pLVar1 != (List_1_AudioManager_Sound_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__
                         );
      pAVar3 = (AudioManager_Sound *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (int32_t)((int)&pOVar2[-1].monitor + 3),
                          MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                         );
      this_00 = (List_1_MVPlayer_ *)(this->fields).pooledSounds;
      if (this_00 != (List_1_MVPlayer_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__
                           );
        str1 = MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_;
        mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                  (this_00,(int32_t)((int)&pOVar2[-1].monitor + 3),
                   MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_
                  );
        pLVar1 = (this->fields).activeSounds;
        if (((pLVar1 != (List_1_AudioManager_Sound_ *)0x0) &&
            (mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
             List_1_UIPushOption__Add
                       ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)pAVar3,
                        MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                       ), pAVar3 != (AudioManager_Sound *)0x0)) &&
           (this_01 = (pAVar3->fields).go, this_01 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,1,(MethodInfo *)0x0);
          pGVar4 = (pAVar3->fields).go;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          value_00 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_Sound__,(String *)str1,::StringLiteral__,
                                (MethodInfo *)0x0);
          if (pGVar4 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                      ((Object_1 *)pGVar4,value_00,(MethodInfo *)0x0);
            pGVar4 = (pAVar3->fields).go;
            if ((pGVar4 != (GameObject *)0x0) &&
               (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar4,(MethodInfo *)0x0),
               this_02 != (Transform *)0x0)) {
              value.y = (float)pLVar1;
              value.x = (float)&UNK_?;
              value.z = (float)pAVar3;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (this_02,value,(MethodInfo *)0x0);
              pAVar5 = (pAVar3->fields).audio;
              if (pAVar5 != (AudioSource *)0x0) {
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                          (pAVar5,clip,(MethodInfo *)0x0);
                pAVar5 = (pAVar3->fields).audio;
                if (pAVar5 != (AudioSource *)0x0) {
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                            (pAVar5,3.234148e-29,(MethodInfo *)0x0);
                  pAVar5 = (pAVar3->fields).audio;
                  if (pAVar5 != (AudioSource *)0x0) {
                    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_priority
                              (pAVar5,0x80,(MethodInfo *)0x0);
                    pAVar5 = (pAVar3->fields).audio;
                    if (pAVar5 != (AudioSource *)0x0) {
                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                                (pAVar5,1.4013e-45,(MethodInfo *)0x0);
                      pAVar5 = (pAVar3->fields).audio;
                      if (pAVar5 != (AudioSource *)0x0) {
                        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                        AudioSource_set_panStereo(pAVar5,0.0,(MethodInfo *)0x0);
                        pAVar5 = (pAVar3->fields).audio;
                        if (pAVar5 != (AudioSource *)0x0) {
                          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                          AudioSource_set_spatialBlend(pAVar5,1.0,(MethodInfo *)0x0);
                          pAVar5 = (pAVar3->fields).audio;
                          if (pAVar5 != (AudioSource *)0x0) {
                            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                            AudioSource_set_reverbZoneMix(pAVar5,1.0,(MethodInfo *)0x0);
                            pAVar5 = (pAVar3->fields).audio;
                            if (pAVar5 != (AudioSource *)0x0) {
                              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                              AudioSource_set_dopplerLevel(pAVar5,0.13,(MethodInfo *)0x0);
                              pAVar5 = (pAVar3->fields).audio;
                              if (pAVar5 != (AudioSource *)0x0) {
                                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                AudioSource_set_spread(pAVar5,0.0,(MethodInfo *)0x0);
                                pAVar5 = (pAVar3->fields).audio;
                                if (pAVar5 != (AudioSource *)0x0) {
                                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                  AudioSource_set_rolloffMode
                                            (pAVar5,AudioRolloffMode__Enum_Linear,(MethodInfo *)0x0)
                                  ;
                                  pAVar5 = (pAVar3->fields).audio;
                                  fVar6 = _UNK_?;
                                  if ((this_01 != (GameObject *)0x0) &&
                                     (fVar6 = _UNK_?, this_01 != (GameObject *)0x1)) {
                                    fVar6 = _UNK_?;
                                  }
                                  if (pAVar5 != (AudioSource *)0x0) {
                                    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                    AudioSource_set_minDistance(pAVar5,fVar6,(MethodInfo *)0x0);
                                    pAVar5 = (pAVar3->fields).audio;
                                    fVar6 = _UNK_?;
                                    if (((this_01 != (GameObject *)0x0) &&
                                        (fVar6 = _UNK_?, this_01 != (GameObject *)0x1)) &&
                                       (this_01 == (GameObject *)0x2)) {
                                      fVar6 = _UNK_?;
                                    }
                                    if (pAVar5 != (AudioSource *)0x0) {
                                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                      AudioSource_set_maxDistance(pAVar5,fVar6,(MethodInfo *)0x0);
                                      pAVar5 = (pAVar3->fields).audio;
                                      if (pAVar5 != (AudioSource *)0x0) {
                                        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                        AudioSource_Play_1(pAVar5,(MethodInfo *)0x0);
                                        return pAVar3;
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
  func_?(0);
  pcVar7 = (code *)swi(3);
  pAVar3 = (AudioManager_Sound *)(*pcVar7)();
  return pAVar3;
}


/* AudioManager+Sound Play(String, AudioSource) */

AudioManager_Sound *
Assembly-CSharp.dll::AudioManager::AudioManager_Play_1
          (AudioManager *this,String *name,AudioSource *audioSource,MethodInfo *method)

{
  if (audioSource != (AudioSource *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)audioSource,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pooledSounds;
  if (pLVar1 != (List_1_AudioManager_Sound_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__
                       );
    if (pOVar2 == (Object *)0x0) {
      return (AudioManager_Sound *)0x0;
    }
    pLVar1 = (this->fields).pooledSounds;
    if (pLVar1 != (List_1_AudioManager_Sound_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__
                         );
      pAVar3 = (AudioManager_Sound *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (int32_t)((int)&pOVar2[-1].monitor + 3),
                          MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                         );
      this_00 = (List_1_MVPlayer_ *)(this->fields).pooledSounds;
      if (this_00 != (List_1_MVPlayer_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__
                           );
        str1 = MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_;
        mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                  (this_00,(int32_t)((int)&pOVar2[-1].monitor + 3),
                   MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_
                  );
        pLVar1 = (this->fields).activeSounds;
        if (pLVar1 != (List_1_AudioManager_Sound_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)pAVar3,
                     MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                    );
          if ((pAVar3 != (AudioManager_Sound *)0x0) &&
             (pGVar4 = (pAVar3->fields).go, pGVar4 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
            pGVar4 = (pAVar3->fields).go;
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            value_00 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_Sound__,(String *)str1,::StringLiteral__,
                                  (MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                        ((Object_1 *)pGVar4,value_00,(MethodInfo *)0x0);
              pGVar4 = (pAVar3->fields).go;
              if (pGVar4 != (GameObject *)0x0) {
                this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar4,(MethodInfo *)0x0);
                if (this_01 != (Transform *)0x0) {
                  value.y = (float)pLVar1;
                  value.x = (float)&UNK_?;
                  value.z = (float)pAVar3;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (this_01,value,(MethodInfo *)0x0);
                  pAVar5 = (pAVar3->fields).audio;
                  if (audioSource != (AudioSource *)0x0) {
                    value_01 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                               AudioSource_get_clip(audioSource,(MethodInfo *)0x0);
                    if (pAVar5 != (AudioSource *)0x0) {
                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                                (pAVar5,value_01,(MethodInfo *)0x0);
                      pAVar5 = (pAVar3->fields).audio;
                      value_02 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                 AudioSource_get_outputAudioMixerGroup
                                           (audioSource,(MethodInfo *)0x0);
                      if (pAVar5 != (AudioSource *)0x0) {
                        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                        AudioSource_set_outputAudioMixerGroup(pAVar5,value_02,(MethodInfo *)0x0);
                        pAVar5 = (pAVar3->fields).audio;
                        bVar6 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                AudioSource_get_mute(audioSource,(MethodInfo *)0x0);
                        if (pAVar5 != (AudioSource *)0x0) {
                          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                          AudioSource_set_mute(pAVar5,bVar6,(MethodInfo *)0x0);
                          pAVar5 = (pAVar3->fields).audio;
                          bVar6 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                  AudioSource_get_bypassEffects(audioSource,(MethodInfo *)0x0);
                          if (pAVar5 != (AudioSource *)0x0) {
                            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                            AudioSource_set_bypassEffects(pAVar5,bVar6,(MethodInfo *)0x0);
                            pAVar5 = (pAVar3->fields).audio;
                            bVar6 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                    AudioSource_get_bypassListenerEffects
                                              (audioSource,(MethodInfo *)0x0);
                            if (pAVar5 != (AudioSource *)0x0) {
                              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                              AudioSource_set_bypassListenerEffects(pAVar5,bVar6,(MethodInfo *)0x0);
                              pAVar5 = (pAVar3->fields).audio;
                              bVar6 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                      AudioSource_get_bypassReverbZones
                                                (audioSource,(MethodInfo *)0x0);
                              if (pAVar5 != (AudioSource *)0x0) {
                                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                AudioSource_set_bypassReverbZones(pAVar5,bVar6,(MethodInfo *)0x0);
                                pAVar5 = (pAVar3->fields).audio;
                                bVar6 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                        AudioSource_get_playOnAwake(audioSource,(MethodInfo *)0x0);
                                if (pAVar5 != (AudioSource *)0x0) {
                                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                  AudioSource_set_playOnAwake(pAVar5,bVar6,(MethodInfo *)0x0);
                                  pAVar5 = (pAVar3->fields).audio;
                                  bVar6 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                          AudioSource_get_loop(audioSource,(MethodInfo *)0x0);
                                  if (pAVar5 != (AudioSource *)0x0) {
                                    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                    AudioSource_set_loop(pAVar5,bVar6,(MethodInfo *)0x0);
                                    pAVar5 = (pAVar3->fields).audio;
                                    value_03 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource
                                               ::AudioSource_get_priority
                                                         (audioSource,(MethodInfo *)0x0);
                                    if (pAVar5 != (AudioSource *)0x0) {
                                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                      AudioSource_set_priority(pAVar5,value_03,(MethodInfo *)0x0);
                                      pAVar5 = (pAVar3->fields).audio;
                                      fVar7 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource
                                              ::AudioSource_get_volume
                                                        (audioSource,(MethodInfo *)0x0);
                                      if (pAVar5 != (AudioSource *)0x0) {
                                        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                        AudioSource_set_volume(pAVar5,fVar7,(MethodInfo *)0x0);
                                        pAVar5 = (pAVar3->fields).audio;
                                        fVar7 = UnityEngine.AudioModule.dll::UnityEngine::
                                                AudioSource::AudioSource_get_pitch
                                                          (audioSource,(MethodInfo *)0x0);
                                        if (pAVar5 != (AudioSource *)0x0) {
                                          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                          AudioSource_set_pitch(pAVar5,fVar7,(MethodInfo *)0x0);
                                          pAVar5 = (pAVar3->fields).audio;
                                          fVar7 = UnityEngine.AudioModule.dll::UnityEngine::
                                                  AudioSource::AudioSource_get_panStereo
                                                            (audioSource,(MethodInfo *)0x0);
                                          if (pAVar5 != (AudioSource *)0x0) {
                                            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                            AudioSource_set_panStereo
                                                      (pAVar5,fVar7,(MethodInfo *)0x0);
                                            pAVar5 = (pAVar3->fields).audio;
                                            fVar7 = UnityEngine.AudioModule.dll::UnityEngine::
                                                    AudioSource::AudioSource_get_spatialBlend
                                                              (audioSource,(MethodInfo *)0x0);
                                            if (pAVar5 != (AudioSource *)0x0) {
                                              UnityEngine.AudioModule.dll::UnityEngine::AudioSource
                                              ::AudioSource_set_spatialBlend
                                                        (pAVar5,fVar7,(MethodInfo *)0x0);
                                              pAVar5 = (pAVar3->fields).audio;
                                              fVar7 = UnityEngine.AudioModule.dll::UnityEngine::
                                                      AudioSource::AudioSource_get_reverbZoneMix
                                                                (audioSource,(MethodInfo *)0x0);
                                              if (pAVar5 != (AudioSource *)0x0) {
                                                UnityEngine.AudioModule.dll::UnityEngine::
                                                AudioSource::AudioSource_set_reverbZoneMix
                                                          (pAVar5,fVar7,(MethodInfo *)0x0);
                                                pAVar5 = (pAVar3->fields).audio;
                                                fVar7 = UnityEngine.AudioModule.dll::UnityEngine::
                                                        AudioSource::AudioSource_get_dopplerLevel
                                                                  (audioSource,(MethodInfo *)0x0);
                                                if (pAVar5 != (AudioSource *)0x0) {
                                                  UnityEngine.AudioModule.dll::UnityEngine::
                                                  AudioSource::AudioSource_set_dopplerLevel
                                                            (pAVar5,fVar7,(MethodInfo *)0x0);
                                                  pAVar5 = (pAVar3->fields).audio;
                                                  fVar7 = UnityEngine.AudioModule.dll::UnityEngine::
                                                          AudioSource::AudioSource_get_spread
                                                                    (audioSource,(MethodInfo *)0x0);
                                                  if (pAVar5 != (AudioSource *)0x0) {
                                                    UnityEngine.AudioModule.dll::UnityEngine::
                                                    AudioSource::AudioSource_set_spread
                                                              (pAVar5,fVar7,(MethodInfo *)0x0);
                                                    pAVar5 = (pAVar3->fields).audio;
                                                    value_04 = UnityEngine.AudioModule.dll::
                                                               UnityEngine::AudioSource::
                                                               AudioSource_get_rolloffMode
                                                                         (audioSource,
                                                                          (MethodInfo *)0x0);
                                                    if (pAVar5 != (AudioSource *)0x0) {
                                                      UnityEngine.AudioModule.dll::UnityEngine::
                                                      AudioSource::AudioSource_set_rolloffMode
                                                                (pAVar5,value_04,(MethodInfo *)0x0);
                                                      pAVar5 = (pAVar3->fields).audio;
                                                      fVar7 = UnityEngine.AudioModule.dll::
                                                              UnityEngine::AudioSource::
                                                              AudioSource_get_minDistance
                                                                        (audioSource,
                                                                         (MethodInfo *)0x0);
                                                      if (pAVar5 != (AudioSource *)0x0) {
                                                        UnityEngine.AudioModule.dll::UnityEngine::
                                                        AudioSource::AudioSource_set_minDistance
                                                                  (pAVar5,fVar7,(MethodInfo *)0x0);
                                                        pAVar5 = (pAVar3->fields).audio;
                                                        fVar7 = UnityEngine.AudioModule.dll::
                                                                UnityEngine::AudioSource::
                                                                AudioSource_get_maxDistance
                                                                          (audioSource,
                                                                           (MethodInfo *)0x0);
                                                        if (pAVar5 != (AudioSource *)0x0) {
                                                          UnityEngine.AudioModule.dll::UnityEngine::
                                                          AudioSource::AudioSource_set_maxDistance
                                                                    (pAVar5,fVar7,(MethodInfo *)0x0)
                                                          ;
                                                          pAVar5 = (pAVar3->fields).audio;
                                                          if (pAVar5 != (AudioSource *)0x0) {
                                                            UnityEngine.AudioModule.dll::UnityEngine
                                                            ::AudioSource::AudioSource_Play_1
                                                                      (pAVar5,(MethodInfo *)0x0);
                                                            return pAVar3;
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
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pAVar3 = (AudioManager_Sound *)(*pcVar8)();
  return pAVar3;
}


/* Void Update() */

void Assembly-CSharp.dll::AudioManager::AudioManager_Update(AudioManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  item = UIPushOption__Enum_None;
  pLVar1 = (this->fields).activeSounds;
  if (pLVar1 != (List_1_AudioManager_Sound_ *)0x0) {
    while (pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                               MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__
                              ), (int)item < (int)pOVar2) {
      pLVar1 = (this->fields).activeSounds;
      if (((pLVar1 == (List_1_AudioManager_Sound_ *)0x0) ||
          (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,item,
                               MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                              ), pIVar3 == (IEventSystemHandler *)0x0)) ||
         ((AudioSource *)pIVar3[1].monitor == (AudioSource *)0x0)) goto code_?;
      bVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        ((AudioSource *)pIVar3[1].monitor,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        this_00 = (List_1_UIPushOption_ *)(this->fields).soundsToRemove;
        if (this_00 == (List_1_UIPushOption_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  (this_00,item,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      pLVar1 = (this->fields).activeSounds;
      item = item + UIPushOption__Enum_Blocking;
      if (pLVar1 == (List_1_AudioManager_Sound_ *)0x0) goto code_?;
    }
    pLVar5 = (this->fields).soundsToRemove;
    if (pLVar5 != (List_1_System_Int32_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                          MethodInfo__System__Collections__Generic__List<int>__get_Count__);
      goto joined_?;
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
joined_?:
  if ((int)pOVar2 < 1) goto code_?;
  pLVar5 = (this->fields).soundsToRemove;
  if (pLVar5 == (List_1_System_Int32_ *)0x0) goto code_?;
  pOVar2 = (Object *)((int)&pOVar2[-1].monitor + 3);
  index = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
          List_1_System_Int32__get_Item
                    (pLVar5,(int32_t)pOVar2,
                     MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
  pLVar1 = (this->fields).pooledSounds;
  this_01 = (this->fields).activeSounds;
  if ((this_01 == (List_1_AudioManager_Sound_ *)0x0) ||
     (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,index,
                          MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                         ), pLVar1 == (List_1_AudioManager_Sound_ *)0x0)) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
            ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)pIVar3,
             MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
            );
  pLVar1 = (this->fields).activeSounds;
  if ((pLVar1 == (List_1_AudioManager_Sound_ *)0x0) ||
     ((pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                          ), pIVar3 == (IEventSystemHandler *)0x0 ||
      (pIVar3[1].klass == (IEventSystemHandler__Class *)0x0)))) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            ((GameObject *)pIVar3[1].klass,0,(MethodInfo *)0x0);
  this_02 = (List_1_MVPlayer_ *)(this->fields).activeSounds;
  if (this_02 == (List_1_MVPlayer_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
            (this_02,index,
             MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_);
  goto joined_?;
code_?:
  this_03 = (List_1_UnityEngine_UIVertex_ *)(this->fields).soundsToRemove;
  if (this_03 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_03,MethodInfo__System__Collections__Generic__List<int>__Clear__);
    return;
  }
  goto code_?;
}


/* AudioManager() */

void Assembly-CSharp.dll::AudioManager::AudioManager__ctor(AudioManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<AudioManager::Sound>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__List__);
  (this->fields).activeSounds = (List_1_AudioManager_Sound_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<AudioManager::Sound>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__List__);
  (this->fields).pooledSounds = (List_1_AudioManager_Sound_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).soundsToRemove = (List_1_System_Int32_ *)pLVar1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

