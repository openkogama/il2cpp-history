
/* Void Awake() */

void Assembly-CSharp.dll::AudioManager::AudioManager_Awake(AudioManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__AudioSource_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::AudioSource>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__set_Capacity_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__set_Capacity_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AudioManager__Sound);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SoundPool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PooledSoundObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar1,(String *)0x0,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).poolTransform = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).poolTransform >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar1 = (this->fields).poolTransform;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
              ((Object_1 *)pGVar1,StringLiteral_SoundPool,(MethodInfo *)0x0);
    pGVar1 = (this->fields).poolTransform;
    if (pGVar1 != (GameObject *)0x0) {
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar1,(MethodInfo *)0x0);
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar7,pTVar8,(MethodInfo *)0x0);
        pLVar9 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                  *)(this->fields).activeSounds;
        if (pLVar9 != (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
          RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
          List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__set_Capacity
                    (pLVar9,0x80,
                     MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__set_Capacity_int_
                    );
          pLVar9 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                    *)(this->fields).pooledSounds;
          if ((pLVar9 != (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                          *)0x0) &&
             (mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
              RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
              List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__set_Capacity
                        (pLVar9,0x80,
                         MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__set_Capacity_int_
                        ), (this->fields).soundsToRemove != (List_1_System_Int32_ *)0x0)) {
            FUN_?();
            iVar10 = 0;
            while( true ) {
              item = (Object *)FUN_?(TypeInfo__AudioManager__Sound);
              pOVar11 = (Object__Class *)FUN_?(TypeInfo__UnityEngine__GameObject);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_Internal_CreateGameObject
                        ((GameObject *)pOVar11,(String *)0x0,(MethodInfo *)0x0);
              if (item == (Object *)0x0) break;
              bVar2 = iRam_? != 0;
              item[1].klass = pOVar11;
              if (bVar2) {
                uVar3 = (uint)((ulonglong)(item + 1) >> 0xc);
                lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                  puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                  LOCK();
                  bVar2 = uVar5 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
              if (item[1].klass == (Object__Class *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                        ((Object_1 *)item[1].klass,StringLiteral_PooledSoundObject,(MethodInfo *)0x0
                        );
              pOVar11 = item[1].klass;
              if (pOVar11 == (Object__Class *)0x0) break;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pcVar12 = (pOVar11->_0).name;
              if (pcVar12 == (char *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar11,(MethodInfo *)0x0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pcRam_? = pcVar13;
              (*pcRam_?)(pcVar12);
              pOVar11 = item[1].klass;
              if (pOVar11 == (Object__Class *)0x0) break;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pcVar12 = (pOVar11->_0).name;
              if (pcVar12 == (char *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar11,(MethodInfo *)0x0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pcRam_? = pcVar13;
              pvVar15 = (void *)(*pcRam_?)(pcVar12);
              pTVar7 = (Transform *)
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar15,
                                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                  );
              pGVar1 = (this->fields).poolTransform;
              if (pGVar1 == (GameObject *)0x0) break;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar15 = (pGVar1->fields)._.m_CachedPtr;
              if (pvVar15 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pcRam_? = pcVar13;
              pvVar15 = (void *)(*pcRam_?)(pvVar15);
              pTVar8 = (Transform *)
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar15,
                                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                  );
              if (pTVar7 == (Transform *)0x0) break;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Debug);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__RectTransform);
                LOCK();
                UNLOCK();
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pTVar16 = (Transform *)0x0;
              if (pTVar7->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                pTVar16 = pTVar7;
              }
              if (pTVar16 != (Transform *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                          ((Object *)StringLiteral_Parent_of_RectTransform_is_being,
                           (Object_1 *)pTVar7,(MethodInfo *)0x0);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar7,pTVar8,1,(MethodInfo *)0x0);
              if (item[1].klass == (Object__Class *)0x0) break;
              pOVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  ((GameObject *)item[1].klass,
                                   UnityEngine__AudioSource_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::AudioSource>__
                                  );
              bVar2 = iRam_? != 0;
              item[1].monitor = (MonitorData *)pOVar17;
              if (bVar2) {
                uVar3 = (uint)((ulonglong)&item[1].monitor >> 0xc);
                lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                  puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                  LOCK();
                  bVar2 = uVar5 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
              pMVar18 = 
              MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
              ;
              this_00 = (this->fields).pooledSounds;
              if (this_00 == (List_1_AudioManager_Sound_ *)0x0) break;
              piVar19 = &(this_00->fields)._version;
              *piVar19 = *piVar19 + 1;
              pAVar20 = (this_00->fields)._items;
              if (pAVar20 == (AudioManager_Sound__Array *)0x0) break;
              uVar3 = (this_00->fields)._size;
              if (uVar3 < (uint)pAVar20->max_length) {
                (this_00->fields)._size = uVar3 + 1;
                FUN_?(pAVar20);
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__AddWithResize
                          ((List_1_System_Object_ *)this_00,item,
                           pMVar18->klass->rgctx_data[0xe].method);
              }
              iVar10 = iVar10 + 1;
              if (0x7f < iVar10) {
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
          (AudioManager *this,String *name,AudioClip *clip,Vector3 *position,float volume,
          SoundRangeDistance__Enum range,float pitch,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sound__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pooledSounds;
  if (pLVar1 == (List_1_AudioManager_Sound_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pAVar3 = (AudioManager_Sound *)(*pcVar2)();
    return pAVar3;
  }
  if ((pLVar1->fields)._size == 0) {
    return (AudioManager_Sound *)0x0;
  }
  iVar4 = (pLVar1->fields)._size;
  if (iVar4 - 1U < (uint)(pLVar1->fields)._size) {
    pAVar5 = (pLVar1->fields)._items;
    if (pAVar5 != (AudioManager_Sound__Array *)0x0) {
      if ((uint)pAVar5->max_length <= iVar4 - 1U) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        pAVar3 = (AudioManager_Sound *)(*pcVar2)();
        return pAVar3;
      }
      pLVar1 = (this->fields).pooledSounds;
      pAVar3 = pAVar5->vector[(longlong)iVar4 + -1];
      if (pLVar1 != (List_1_AudioManager_Sound_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)(this->fields).pooledSounds,(pLVar1->fields)._size + -1,
                   MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_
                  );
        pLVar1 = (this->fields).activeSounds;
        if (((pLVar1 != (List_1_AudioManager_Sound_ *)0x0) &&
            (FUN_?(pLVar1,pAVar3), pAVar3 != (AudioManager_Sound *)0x0)) &&
           (pGVar6 = (pAVar3->fields).go, pGVar6 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,1,(MethodInfo *)0x0);
          pGVar6 = (pAVar3->fields).go;
          name_00 = mscorlib.dll::System::String::String_Concat_5
                              (StringLiteral_Sound__,name,::StringLiteral__,(MethodInfo *)0x0);
          if (pGVar6 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                      ((Object_1 *)pGVar6,name_00,(MethodInfo *)0x0);
            pGVar6 = (pAVar3->fields).go;
            if ((pGVar6 != (GameObject *)0x0) &&
               (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar6,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
              uStack_7._0_4_ = position->x;
              uStack_7._4_4_ = position->y;
              fStack_8 = position->z;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar9 = (obj->fields)._._.m_CachedPtr;
              if (pvVar9 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                return pAVar3;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar2 = (code *)swi(3);
                pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                return pAVar3;
              }
              pcRam_? = pcVar2;
              (*pcRam_?)(pvVar9,&uStack_7);
              pAVar11 = (pAVar3->fields).audio;
              if (pAVar11 != (AudioSource *)0x0) {
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                          (pAVar11,(AudioResource *)clip,(MethodInfo *)0x0);
                pAVar11 = (pAVar3->fields).audio;
                if (pAVar11 != (AudioSource *)0x0) {
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                            (pAVar11,volume,(MethodInfo *)0x0);
                  pAVar11 = (pAVar3->fields).audio;
                  if (pAVar11 != (AudioSource *)0x0) {
                    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_priority
                              (pAVar11,0x80,(MethodInfo *)0x0);
                    pAVar11 = (pAVar3->fields).audio;
                    if (pAVar11 != (AudioSource *)0x0) {
                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                                (pAVar11,pitch,(MethodInfo *)0x0);
                      pAVar11 = (pAVar3->fields).audio;
                      if (pAVar11 != (AudioSource *)0x0) {
                        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                        AudioSource_set_panStereo(pAVar11,0.0,(MethodInfo *)0x0);
                        pAVar11 = (pAVar3->fields).audio;
                        if (pAVar11 != (AudioSource *)0x0) {
                          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                          AudioSource_set_spatialBlend(pAVar11,_UNK_?,(MethodInfo *)0x0);
                          pAVar11 = (pAVar3->fields).audio;
                          if (pAVar11 != (AudioSource *)0x0) {
                            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                            AudioSource_set_reverbZoneMix(pAVar11,_UNK_?,(MethodInfo *)0x0);
                            pAVar11 = (pAVar3->fields).audio;
                            if (pAVar11 != (AudioSource *)0x0) {
                              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                              AudioSource_set_dopplerLevel(pAVar11,_UNK_?,(MethodInfo *)0x0);
                              pAVar11 = (pAVar3->fields).audio;
                              if (pAVar11 != (AudioSource *)0x0) {
                                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                AudioSource_set_spread(pAVar11,0.0,(MethodInfo *)0x0);
                                pAVar11 = (pAVar3->fields).audio;
                                if (pAVar11 != (AudioSource *)0x0) {
                                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                  AudioSource_set_rolloffMode
                                            (pAVar11,AudioRolloffMode__Enum_Linear,(MethodInfo *)0x0)
                                  ;
                                  pAVar11 = (pAVar3->fields).audio;
                                  fVar12 = _UNK_?;
                                  if ((range != SoundRangeDistance__Enum_Short) &&
                                     (fVar12 = _UNK_?,
                                     range != SoundRangeDistance__Enum_Medium)) {
                                    fVar12 = _UNK_?;
                                  }
                                  if (pAVar11 != (AudioSource *)0x0) {
                                    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                    AudioSource_set_minDistance(pAVar11,fVar12,(MethodInfo *)0x0);
                                    pAVar11 = (pAVar3->fields).audio;
                                    fVar12 = _UNK_?;
                                    if (((range != SoundRangeDistance__Enum_Short) &&
                                        (fVar12 = _UNK_?,
                                        range != SoundRangeDistance__Enum_Medium)) &&
                                       (range == SoundRangeDistance__Enum_Long)) {
                                      fVar12 = _UNK_?;
                                    }
                                    if (pAVar11 != (AudioSource *)0x0) {
                                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                      AudioSource_set_maxDistance(pAVar11,fVar12,(MethodInfo *)0x0);
                                      pAVar11 = (pAVar3->fields).audio;
                                      if (pAVar11 != (AudioSource *)0x0) {
                                        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                        AudioSource_Play_1(pAVar11,(MethodInfo *)0x0);
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
    FUN_?();
    pcVar2 = (code *)swi(3);
    pAVar3 = (AudioManager_Sound *)(*pcVar2)();
    return pAVar3;
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  pAVar3 = (AudioManager_Sound *)(*pcVar2)();
  return pAVar3;
}


/* AudioManager+Sound Play(String, AudioSource) */

AudioManager_Sound *
Assembly-CSharp.dll::AudioManager::AudioManager_Play_1
          (AudioManager *this,String *name,AudioSource *audioSource,MethodInfo *method)

{
  if ((audioSource == (AudioSource *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)audioSource,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pAVar2 = (AudioManager_Sound *)(*pcVar1)();
    return pAVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  VStack_3.z = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pAVar2 = (AudioManager_Sound *)(*pcVar1)();
    return pAVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pAVar2 = (AudioManager_Sound *)(*pcVar1)();
    return pAVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&VStack_3);
  VStack_6.x = VStack_3.x;
  VStack_6.y = VStack_3.y;
  VStack_6.z = VStack_3.z;
  pAVar2 = AudioManager_Play_2(this,name,audioSource,&VStack_6,(MethodInfo *)0x0);
  return pAVar2;
}


/* AudioManager+Sound Play(String, AudioSource, Vector3) */

AudioManager_Sound *
Assembly-CSharp.dll::AudioManager::AudioManager_Play_2
          (AudioManager *this,String *name,AudioSource *audioSource,Vector3 *position,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sound__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pooledSounds;
  if (pLVar1 == (List_1_AudioManager_Sound_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pAVar3 = (AudioManager_Sound *)(*pcVar2)();
    return pAVar3;
  }
  if ((pLVar1->fields)._size == 0) {
    return (AudioManager_Sound *)0x0;
  }
  iVar4 = (pLVar1->fields)._size;
  if ((uint)(pLVar1->fields)._size <= iVar4 - 1U) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pAVar3 = (AudioManager_Sound *)(*pcVar2)();
    return pAVar3;
  }
  pAVar5 = (pLVar1->fields)._items;
  if (pAVar5 != (AudioManager_Sound__Array *)0x0) {
    if ((uint)pAVar5->max_length <= iVar4 - 1U) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pAVar3 = (AudioManager_Sound *)(*pcVar2)();
      return pAVar3;
    }
    pLVar1 = (this->fields).pooledSounds;
    pAVar3 = pAVar5->vector[(longlong)iVar4 + -1];
    if (pLVar1 != (List_1_AudioManager_Sound_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)(this->fields).pooledSounds,(pLVar1->fields)._size + -1,
                 MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_)
      ;
      pLVar1 = (this->fields).activeSounds;
      if (((pLVar1 != (List_1_AudioManager_Sound_ *)0x0) &&
          (FUN_?(pLVar1,pAVar3), pAVar3 != (AudioManager_Sound *)0x0)) &&
         (pGVar6 = (pAVar3->fields).go, pGVar6 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,1,(MethodInfo *)0x0);
        pGVar6 = (pAVar3->fields).go;
        name_00 = mscorlib.dll::System::String::String_Concat_5
                            (StringLiteral_Sound__,name,::StringLiteral__,(MethodInfo *)0x0);
        if (pGVar6 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                    ((Object_1 *)pGVar6,name_00,(MethodInfo *)0x0);
          pGVar6 = (pAVar3->fields).go;
          if ((pGVar6 != (GameObject *)0x0) &&
             (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar6,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar7 = (obj->fields)._._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              pAVar3 = (AudioManager_Sound *)(*pcVar2)();
              return pAVar3;
            }
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar2 = (code *)swi(3);
              pAVar3 = (AudioManager_Sound *)(*pcVar2)();
              return pAVar3;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(pvVar7);
            pAVar9 = (pAVar3->fields).audio;
            if ((audioSource != (AudioSource *)0x0) &&
               (value_01 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                           AudioSource_get_clip(audioSource,(MethodInfo *)0x0),
               pAVar9 != (AudioSource *)0x0)) {
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                        (pAVar9,(AudioResource *)value_01,(MethodInfo *)0x0);
              pAVar9 = (pAVar3->fields).audio;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Audio__AudioMixerGroup_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Audio::AudioMixerGroup>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
              if (pvVar7 == (void *)0x0) {
code_?:
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)audioSource,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                return pAVar3;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar2 = (code *)swi(3);
                pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                return pAVar3;
              }
              pcRam_? = pcVar2;
              pvVar7 = (void *)(*pcRam_?)(pvVar7);
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar7,
                         UnityEngine__Audio__AudioMixerGroup_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Audio::AudioMixerGroup>_void__
                        );
              if (pAVar9 != (AudioSource *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Audio::AudioMixerGroup>_UnityEngine__Audio__AudioMixerGroup_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar7 = (pAVar9->fields)._._._._.m_CachedPtr;
                if (pvVar7 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar9,(MethodInfo *)0x0);
                  pcVar2 = (code *)swi(3);
                  pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                  return pAVar3;
                }
                if ((
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Audio::AudioMixerGroup>_UnityEngine__Audio__AudioMixerGroup_
                    ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                  FUN_?();
                }
                pcVar2 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar2 = (code *)swi(3);
                  pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                  return pAVar3;
                }
                pcRam_? = pcVar2;
                (*pcRam_?)(pvVar7);
                pAVar9 = (pAVar3->fields).audio;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                if (pvVar7 == (void *)0x0) goto code_?;
                pcVar2 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar2 = (code *)swi(3);
                  pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                  return pAVar3;
                }
                pcRam_? = pcVar2;
                (*pcRam_?)(pvVar7);
                if (pAVar9 != (AudioSource *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar7 = (pAVar9->fields)._._._._.m_CachedPtr;
                  if (pvVar7 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar9,(MethodInfo *)0x0);
                    pcVar2 = (code *)swi(3);
                    pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                    return pAVar3;
                  }
                  pcVar2 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar2 = (code *)swi(3);
                    pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                    return pAVar3;
                  }
                  pcRam_? = pcVar2;
                  (*pcRam_?)(pvVar7);
                  pAVar9 = (pAVar3->fields).audio;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                  if (pvVar7 == (void *)0x0) goto code_?;
                  pcVar2 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar2 = (code *)swi(3);
                    pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                    return pAVar3;
                  }
                  pcRam_? = pcVar2;
                  (*pcRam_?)(pvVar7);
                  if (pAVar9 != (AudioSource *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar7 = (pAVar9->fields)._._._._.m_CachedPtr;
                    if (pvVar7 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar9,(MethodInfo *)0x0);
                      pcVar2 = (code *)swi(3);
                      pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                      return pAVar3;
                    }
                    pcVar2 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                      uVar8 = func_?(&UNK_?);
                      FUN_?(uVar8,0);
                      pcVar2 = (code *)swi(3);
                      pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                      return pAVar3;
                    }
                    pcRam_? = pcVar2;
                    (*pcRam_?)(pvVar7);
                    pAVar9 = (pAVar3->fields).audio;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                    if (pvVar7 == (void *)0x0) goto code_?;
                    pcVar2 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                      uVar8 = func_?(&UNK_?);
                      FUN_?(uVar8,0);
                      pcVar2 = (code *)swi(3);
                      pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                      return pAVar3;
                    }
                    pcRam_? = pcVar2;
                    (*pcRam_?)(pvVar7);
                    if (pAVar9 != (AudioSource *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar7 = (pAVar9->fields)._._._._.m_CachedPtr;
                      if (pvVar7 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pAVar9,(MethodInfo *)0x0);
                        pcVar2 = (code *)swi(3);
                        pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                        return pAVar3;
                      }
                      pcVar2 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                        uVar8 = func_?(&UNK_?);
                        FUN_?(uVar8,0);
                        pcVar2 = (code *)swi(3);
                        pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                        return pAVar3;
                      }
                      pcRam_? = pcVar2;
                      (*pcRam_?)(pvVar7);
                      pAVar9 = (pAVar3->fields).audio;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                      if (pvVar7 == (void *)0x0) goto code_?;
                      pcVar2 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                        uVar8 = func_?(&UNK_?);
                        FUN_?(uVar8,0);
                        pcVar2 = (code *)swi(3);
                        pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                        return pAVar3;
                      }
                      pcRam_? = pcVar2;
                      (*pcRam_?)(pvVar7);
                      if (pAVar9 != (AudioSource *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar7 = (pAVar9->fields)._._._._.m_CachedPtr;
                        if (pvVar7 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pAVar9,(MethodInfo *)0x0);
                          pcVar2 = (code *)swi(3);
                          pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                          return pAVar3;
                        }
                        pcVar2 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0))
                        {
                          uVar8 = func_?(&UNK_?);
                          FUN_?(uVar8,0);
                          pcVar2 = (code *)swi(3);
                          pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                          return pAVar3;
                        }
                        pcRam_? = pcVar2;
                        (*pcRam_?)(pvVar7);
                        pAVar9 = (pAVar3->fields).audio;
                        bVar10 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                AudioSource_get_playOnAwake(audioSource,(MethodInfo *)0x0);
                        if (pAVar9 != (AudioSource *)0x0) {
                          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                          AudioSource_set_playOnAwake(pAVar9,bVar10,(MethodInfo *)0x0);
                          pAVar9 = (pAVar3->fields).audio;
                          bVar10 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                  AudioSource_get_loop(audioSource,(MethodInfo *)0x0);
                          if (pAVar9 != (AudioSource *)0x0) {
                            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                            AudioSource_set_loop(pAVar9,bVar10,(MethodInfo *)0x0);
                            pAVar9 = (pAVar3->fields).audio;
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                            if (pvVar7 == (void *)0x0) goto code_?;
                            pcVar2 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar2 = (code *)FUN_?(&UNK_?),
                               pcVar2 == (code *)0x0)) {
                              uVar8 = func_?(&UNK_?);
                              FUN_?(uVar8,0);
                              pcVar2 = (code *)swi(3);
                              pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                              return pAVar3;
                            }
                            pcRam_? = pcVar2;
                            value = (*pcRam_?)(pvVar7);
                            if (pAVar9 != (AudioSource *)0x0) {
                              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                              AudioSource_set_priority(pAVar9,value,(MethodInfo *)0x0);
                              pAVar9 = (pAVar3->fields).audio;
                              fVar11 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                       AudioSource_get_volume(audioSource,(MethodInfo *)0x0);
                              if (pAVar9 != (AudioSource *)0x0) {
                                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                AudioSource_set_volume(pAVar9,fVar11,(MethodInfo *)0x0);
                                pAVar9 = (pAVar3->fields).audio;
                                fVar11 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                         AudioSource_get_pitch(audioSource,(MethodInfo *)0x0);
                                if (pAVar9 != (AudioSource *)0x0) {
                                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                  AudioSource_set_pitch(pAVar9,fVar11,(MethodInfo *)0x0);
                                  pAVar9 = (pAVar3->fields).audio;
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                                  if (pvVar7 == (void *)0x0) goto code_?;
                                  pcVar2 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar2 = (code *)FUN_?(&UNK_?),
                                     pcVar2 == (code *)0x0)) {
                                    uVar8 = func_?(&UNK_?);
                                    FUN_?(uVar8,0);
                                    pcVar2 = (code *)swi(3);
                                    pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                                    return pAVar3;
                                  }
                                  pcRam_? = pcVar2;
                                  fVar11 = (float)(*pcRam_?)(pvVar7);
                                  if (pAVar9 != (AudioSource *)0x0) {
                                    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                    AudioSource_set_panStereo(pAVar9,fVar11,(MethodInfo *)0x0);
                                    pAVar9 = (pAVar3->fields).audio;
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                                    if (pvVar7 == (void *)0x0) goto code_?;
                                    pcVar2 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) &&
                                       (pcVar2 = (code *)FUN_?(&UNK_?),
                                       pcVar2 == (code *)0x0)) {
                                      uVar8 = func_?(&UNK_?);
                                      FUN_?(uVar8,0);
                                      pcVar2 = (code *)swi(3);
                                      pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                                      return pAVar3;
                                    }
                                    pcRam_? = pcVar2;
                                    fVar11 = (float)(*pcRam_?)(pvVar7);
                                    if (pAVar9 != (AudioSource *)0x0) {
                                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                      AudioSource_set_spatialBlend(pAVar9,fVar11,(MethodInfo *)0x0);
                                      pAVar9 = (pAVar3->fields).audio;
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                                      if (pvVar7 == (void *)0x0) goto code_?;
                                      pcVar2 = pcRam_?;
                                      if ((pcRam_? == (code *)0x0) &&
                                         (pcVar2 = (code *)FUN_?(&UNK_?),
                                         pcVar2 == (code *)0x0)) {
                                        uVar8 = func_?(&UNK_?);
                                        FUN_?(uVar8,0);
                                        pcVar2 = (code *)swi(3);
                                        pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                                        return pAVar3;
                                      }
                                      pcRam_? = pcVar2;
                                      fVar11 = (float)(*pcRam_?)(pvVar7);
                                      if (pAVar9 != (AudioSource *)0x0) {
                                        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                        AudioSource_set_reverbZoneMix
                                                  (pAVar9,fVar11,(MethodInfo *)0x0);
                                        pAVar9 = (pAVar3->fields).audio;
                                        if (cRam_? == '\0') {
                                          FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                                  );
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                                        if (pvVar7 == (void *)0x0) goto code_?;
                                        pcVar2 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar2 = (code *)FUN_?(&UNK_?),
                                           pcVar2 == (code *)0x0)) {
                                          uVar8 = func_?(&UNK_?);
                                          FUN_?(uVar8,0);
                                          pcVar2 = (code *)swi(3);
                                          pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                                          return pAVar3;
                                        }
                                        pcRam_? = pcVar2;
                                        fVar11 = (float)(*pcRam_?)(pvVar7);
                                        if (pAVar9 != (AudioSource *)0x0) {
                                          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                          AudioSource_set_dopplerLevel
                                                    (pAVar9,fVar11,(MethodInfo *)0x0);
                                          pAVar9 = (pAVar3->fields).audio;
                                          if (cRam_? == '\0') {
                                            FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                                  );
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                                          if (pvVar7 == (void *)0x0) goto code_?;
                                          pcVar2 = pcRam_?;
                                          if ((pcRam_? == (code *)0x0) &&
                                             (pcVar2 = (code *)FUN_?(&UNK_?),
                                             pcVar2 == (code *)0x0)) {
                                            uVar8 = func_?(&UNK_?);
                                            FUN_?(uVar8,0);
                                            pcVar2 = (code *)swi(3);
                                            pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                                            return pAVar3;
                                          }
                                          pcRam_? = pcVar2;
                                          fVar11 = (float)(*pcRam_?)(pvVar7);
                                          if (pAVar9 != (AudioSource *)0x0) {
                                            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                                            AudioSource_set_spread(pAVar9,fVar11,(MethodInfo *)0x0);
                                            pAVar9 = (pAVar3->fields).audio;
                                            if (cRam_? == '\0') {
                                              FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                                  );
                                              LOCK();
                                              UNLOCK();
                                              cRam_? = '\x01';
                                            }
                                            pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                                            if (pvVar7 == (void *)0x0) goto code_?;
                                            pcVar2 = pcRam_?;
                                            if ((pcRam_? == (code *)0x0) &&
                                               (pcVar2 = (code *)FUN_?(&UNK_?),
                                               pcVar2 == (code *)0x0)) {
                                              uVar8 = func_?(&UNK_?);
                                              FUN_?(uVar8,0);
                                              pcVar2 = (code *)swi(3);
                                              pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                                              return pAVar3;
                                            }
                                            pcRam_? = pcVar2;
                                            value_00 = (*pcRam_?)(pvVar7);
                                            if (pAVar9 != (AudioSource *)0x0) {
                                              UnityEngine.AudioModule.dll::UnityEngine::AudioSource
                                              ::AudioSource_set_rolloffMode
                                                        (pAVar9,value_00,(MethodInfo *)0x0);
                                              pAVar9 = (pAVar3->fields).audio;
                                              if (cRam_? == '\0') {
                                                FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                                  );
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                                              if (pvVar7 == (void *)0x0) goto code_?;
                                              pcVar2 = pcRam_?;
                                              if ((pcRam_? == (code *)0x0) &&
                                                 (pcVar2 = (code *)FUN_?(&UNK_?),
                                                 pcVar2 == (code *)0x0)) {
                                                uVar8 = func_?(&UNK_?);
                                                FUN_?(uVar8,0);
                                                pcVar2 = (code *)swi(3);
                                                pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                                                return pAVar3;
                                              }
                                              pcRam_? = pcVar2;
                                              fVar11 = (float)(*pcRam_?)(pvVar7);
                                              if (pAVar9 != (AudioSource *)0x0) {
                                                UnityEngine.AudioModule.dll::UnityEngine::
                                                AudioSource::AudioSource_set_minDistance
                                                          (pAVar9,fVar11,(MethodInfo *)0x0);
                                                pAVar9 = (pAVar3->fields).audio;
                                                if (cRam_? == '\0') {
                                                  FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                pvVar7 = (audioSource->fields)._._._._.m_CachedPtr;
                                                if (pvVar7 == (void *)0x0)
                                                goto code_?;
                                                pcVar2 = pcRam_?;
                                                if ((pcRam_? == (code *)0x0) &&
                                                   (pcVar2 = (code *)FUN_?(&UNK_?),
                                                   pcVar2 == (code *)0x0)) {
                                                  uVar8 = func_?(&UNK_?);
                                                  FUN_?(uVar8,0);
                                                  pcVar2 = (code *)swi(3);
                                                  pAVar3 = (AudioManager_Sound *)(*pcVar2)();
                                                  return pAVar3;
                                                }
                                                pcRam_? = pcVar2;
                                                fVar11 = (float)(*pcRam_?)(pvVar7);
                                                if (pAVar9 != (AudioSource *)0x0) {
                                                  UnityEngine.AudioModule.dll::UnityEngine::
                                                  AudioSource::AudioSource_set_maxDistance
                                                            (pAVar9,fVar11,(MethodInfo *)0x0);
                                                  pAVar9 = (pAVar3->fields).audio;
                                                  if (pAVar9 != (AudioSource *)0x0) {
                                                    UnityEngine.AudioModule.dll::UnityEngine::
                                                    AudioSource::AudioSource_Play_1
                                                              (pAVar9,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  pAVar3 = (AudioManager_Sound *)(*pcVar2)();
  return pAVar3;
}


/* Void Update() */

void Assembly-CSharp.dll::AudioManager::AudioManager_Update(AudioManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeSounds;
  uVar2 = 0;
  if (pLVar1 != (List_1_AudioManager_Sound_ *)0x0) {
    lVar3 = 0x20;
    while ((int)uVar2 < (pLVar1->fields)._size) {
      pLVar1 = (this->fields).activeSounds;
      if (pLVar1 == (List_1_AudioManager_Sound_ *)0x0) goto code_?;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pAVar4 = (pLVar1->fields)._items;
      if (pAVar4 == (AudioManager_Sound__Array *)0x0) goto code_?;
      if ((uint)pAVar4->max_length <= uVar2) goto code_?;
      lVar5 = *(longlong *)((longlong)pAVar4->vector + lVar3 + -0x20);
      if ((lVar5 == 0) || (obj = *(Object **)(lVar5 + 0x18), obj == (Object *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar6 = obj[1].klass;
      if (pOVar6 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      cVar9 = (*pcRam_?)(pOVar6);
      if (cVar9 == '\0') {
        pLVar10 = (this->fields).soundsToRemove;
        if (pLVar10 == (List_1_System_Int32_ *)0x0) goto code_?;
        FUN_?(pLVar10,uVar2,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      pLVar1 = (this->fields).activeSounds;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
      if (pLVar1 == (List_1_AudioManager_Sound_ *)0x0) goto code_?;
    }
    pLVar10 = (this->fields).soundsToRemove;
    if (pLVar10 != (List_1_System_Int32_ *)0x0) {
      uVar2 = (pLVar10->fields)._size;
      uVar11 = (ulonglong)(int)uVar2;
      if ((int)uVar2 < 1) goto code_?;
      lVar3 = uVar11 * 4 + 0x1c;
      goto code_?;
    }
  }
  goto code_?;
code_?:
  do {
    pMVar12 = 
    MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__Add_AudioManager__Sound_;
    uVar2 = uVar2 - 1;
    pLVar10 = (this->fields).soundsToRemove;
    if (pLVar10 == (List_1_System_Int32_ *)0x0) goto code_?;
    if ((uint)(pLVar10->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pIVar13 = (pLVar10->fields)._items;
    if (pIVar13 == (Int32__Array *)0x0) goto code_?;
    if ((uint)pIVar13->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pLVar1 = (this->fields).activeSounds;
    this_00 = (this->fields).pooledSounds;
    if (pLVar1 == (List_1_AudioManager_Sound_ *)0x0) goto code_?;
    uVar14 = *(uint *)((longlong)pIVar13->vector + lVar3 + -0x20);
    if ((uint)(pLVar1->fields)._size <= uVar14) goto code_?;
    pAVar4 = (pLVar1->fields)._items;
    if (pAVar4 == (AudioManager_Sound__Array *)0x0) goto code_?;
    if ((uint)pAVar4->max_length <= uVar14) goto code_?;
    item = pAVar4->vector[(int)uVar14];
    if (this_00 == (List_1_AudioManager_Sound_ *)0x0) goto code_?;
    piVar15 = &(this_00->fields)._version;
    *piVar15 = *piVar15 + 1;
    pAVar4 = (this_00->fields)._items;
    if (pAVar4 == (AudioManager_Sound__Array *)0x0) goto code_?;
    uVar16 = (this_00->fields)._size;
    if (uVar16 < (uint)pAVar4->max_length) {
      (this_00->fields)._size = uVar16 + 1;
      FUN_?(pAVar4,(longlong)(int)uVar16,item);
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__AddWithResize
                ((List_1_System_Object_ *)this_00,(Object *)item,
                 pMVar12->klass->rgctx_data[0xe].method);
    }
    pLVar1 = (this->fields).activeSounds;
    if (pLVar1 == (List_1_AudioManager_Sound_ *)0x0) goto code_?;
    if ((uint)(pLVar1->fields)._size <= uVar14) goto code_?;
    pAVar4 = (pLVar1->fields)._items;
    if (pAVar4 == (AudioManager_Sound__Array *)0x0) goto code_?;
    if ((uint)pAVar4->max_length <= uVar14) goto code_?;
    if ((pAVar4->vector[(int)uVar14] == (AudioManager_Sound *)0x0) ||
       (obj_00 = (pAVar4->vector[(int)uVar14]->fields).go, obj_00 == (GameObject *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar17 = (obj_00->fields)._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar17,0);
    pLVar1 = (this->fields).activeSounds;
    if (pLVar1 == (List_1_AudioManager_Sound_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAt
              ((List_1_System_Object_ *)pLVar1,uVar14,
               MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__RemoveAt_int_);
    uVar14 = (int)uVar11 - 1;
    uVar11 = (ulonglong)uVar14;
    lVar3 = lVar3 + -4;
  } while (0 < (int)uVar14);
code_?:
  pLVar10 = (this->fields).soundsToRemove;
  if (pLVar10 != (List_1_System_Int32_ *)0x0) {
    piVar15 = &(pLVar10->fields)._version;
    *piVar15 = *piVar15 + 1;
    (pLVar10->fields)._size = 0;
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* AudioManager() */

void Assembly-CSharp.dll::AudioManager::AudioManager__ctor(AudioManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<AudioManager::Sound>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_AudioManager_Sound_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<AudioManager::Sound>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).activeSounds = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).activeSounds >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar1 = (List_1_AudioManager_Sound_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<AudioManager::Sound>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<AudioManager::Sound>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).pooledSounds = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).pooledSounds >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar7 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar7,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).soundsToRemove = pLVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).soundsToRemove >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

