
/* Void Initialize() */

void Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter_Initialize
               (MVGlobalSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGlobalSoundEmitter__UpdateSound__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SoundLoader__UpdateSoundCallback);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_url);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).soundEmitterObject;
  if ((pSVar1 != (SoundEmitterObject *)0x0) &&
     (pSVar2 = (pSVar1->fields).soundCheck, pSVar2 != (SoundEmitterActiveCheck *)0x0)) {
    bVar3 = iRam_? != 0;
    (pSVar2->fields).globalSoundEmitter = this;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pSVar2->fields).globalSoundEmitter >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    (pSVar2->fields).initialized = 1;
    MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
    pSVar1 = (this->fields).soundEmitterObject;
    if ((pSVar1 != (SoundEmitterObject *)0x0) &&
       (pSVar8 = (this->fields).soundLoader, pSVar8 != (SoundLoader *)0x0)) {
      bVar3 = iRam_? != 0;
      (pSVar8->fields).audioSource = (pSVar1->fields).audioSource;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(pSVar8->fields).audioSource >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pSVar8 = (this->fields).soundLoader;
      this_00 = (SoundLoader_UpdateSoundCallback *)
                FUN_?(TypeInfo__SoundLoader__UpdateSoundCallback);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                ((NavMesh_OnNavMeshPreUpdate *)this_00,(Object *)this,
                 MethodInfo__MVGlobalSoundEmitter__UpdateSound__,(MethodInfo *)0x0);
      if (pSVar8 != (SoundLoader *)0x0) {
        bVar3 = iRam_? != 0;
        (pSVar8->fields).callback = this_00;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(pSVar8->fields).callback >> 0xc);
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        pSVar1 = (this->fields).soundEmitterObject;
        if (pSVar1 != (SoundEmitterObject *)0x0) {
          MVLogicObject::MVLogicObject_SetupCulling
                    ((MVLogicObject *)this,(pSVar1->fields).visualObject,
                     TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
          pDVar9 = (this->fields)._._._.data;
          if ((pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
             (pSVar10 = (String *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar9,(Object *)StringLiteral_url,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pSVar10 != (String *)0x0)) {
            pSVar11 = (String *)0x0;
            pSVar12 = pSVar11;
            if (pSVar10->klass == pSRam0000000182dbbc60) {
              pSVar12 = pSVar10;
            }
            if (pSVar12 == (String *)0x0) {
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pSVar12 = pSVar11;
            if (pSVar10->klass == pSRam0000000182dbbc60) {
              pSVar12 = pSVar10;
            }
            if ((pSVar12->fields)._stringLength < 1) {
              return;
            }
            pDVar9 = (this->fields)._._._.data;
            pSVar8 = (this->fields).soundLoader;
            if ((pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
               (pSVar10 = (String *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar9,(Object *)StringLiteral_url,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   ), pSVar8 != (SoundLoader *)0x0)) {
              if (pSVar10 != (String *)0x0) {
                if (pSVar10->klass == pSRam0000000182dbbc60) {
                  pSVar11 = pSVar10;
                }
                if (pSVar11 == (String *)0x0) {
                  FUN_?(pSVar10);
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
              bVar3 = iRam_? != 0;
              (pSVar8->fields).url = pSVar11;
              if (bVar3) {
                uVar4 = (uint)((ulonglong)&(pSVar8->fields).url >> 0xc);
                uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                do {
                  uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                  puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                  LOCK();
                  bVar3 = uVar6 == *puVar7;
                  if (bVar3) {
                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar3);
              }
              pSVar8 = (this->fields).soundLoader;
              if (pSVar8 != (SoundLoader *)0x0) {
                SoundLoader::SoundLoader_LoadSound(pSVar8,(MethodInfo *)0x0);
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


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter_OnDataUpdate
               (MVGlobalSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_url);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AmbientAudio_Music_slowstones_un);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._.data;
  if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pLVar2 = (List_1_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)StringLiteral_url,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pLVar2 == (List_1_System_Object_ *)0x0)) goto code_?;
  value = (List_1_System_Object_ *)0x0;
  pLVar3 = value;
  if (pLVar2->klass == pLRam0000000182dbbc60) {
    pLVar3 = pLVar2;
  }
  if (pLVar3 == (List_1_System_Object_ *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pLVar3 = value;
  if (pLVar2->klass == pLRam0000000182dbbc60) {
    pLVar3 = pLVar2;
  }
  pDVar1 = (this->fields)._._._.data;
  if (*(int *)&(pLVar3->fields)._items < 1) {
    if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pLVar2 = (List_1_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pLVar2 == (List_1_System_Object_ *)0x0)) goto code_?;
    pLVar3 = value;
    if (pLVar2->klass == pLRam0000000182dbbc60) {
      pLVar3 = pLVar2;
    }
    if (pLVar3 == (List_1_System_Object_ *)0x0) {
      FUN_?(pLVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pLVar3 = value;
    if (pLVar2->klass == pLRam0000000182dbbc60) {
      pLVar3 = pLVar2;
    }
    if (0 < *(int *)&(pLVar3->fields)._items) {
      return;
    }
    pDVar1 = (this->fields)._._._.data;
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar1,(Object *)StringLiteral_url,
               (Object *)StringLiteral_AmbientAudio_Music_slowstones_un,
               CONCAT31((int3)((uint)in_R9D >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = (this->fields)._._._.data;
    pSVar5 = (this->fields).soundLoader;
    if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (method_00 = 
        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
       , pLVar2 = (List_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar1,(Object *)StringLiteral_url,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pSVar5 == (SoundLoader *)0x0)) goto code_?;
    if (pLVar2 != (List_1_System_Object_ *)0x0) {
      if (pLVar2->klass == pLRam0000000182dbbc60) {
        value = pLVar2;
      }
      if (value == (List_1_System_Object_ *)0x0) {
        FUN_?(pLVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UQueryState`1[T]+ListQueryMatcher`1[System::Object,System::Object]::
    UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object__set_matches
              ((UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object_ *)pSVar5,value,
               method_00);
  }
  else {
    pSVar5 = (this->fields).soundLoader;
    if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pLVar2 = (List_1_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pSVar5 == (SoundLoader *)0x0)) goto code_?;
    if (pLVar2 != (List_1_System_Object_ *)0x0) {
      if (pLVar2->klass == pLRam0000000182dbbc60) {
        value = pLVar2;
      }
      if (value == (List_1_System_Object_ *)0x0) {
        FUN_?(pLVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar6 = iRam_? != 0;
    (pSVar5->fields).url = (String *)value;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(pSVar5->fields).url >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
  }
  pSVar5 = (this->fields).soundLoader;
  if (pSVar5 != (SoundLoader *)0x0) {
    SoundLoader::SoundLoader_LoadSound(pSVar5,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateSound() */

void Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter_UpdateSound
               (MVGlobalSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_soundEmitterObject_is_null);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_audioSource_for_soundEmitterObje);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_volume);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).soundEmitterObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 != (SoundEmitterObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pSVar1 = (this->fields).soundEmitterObject;
      if (pSVar1 == (SoundEmitterObject *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (pSVar1->fields).audioSource;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_00 != (AudioSource *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pDVar3 = (this->fields)._._._.data;
          if ((pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
             (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar3,(Object *)StringLiteral_volume,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pOVar4 != (Object *)0x0)) {
            if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar4,lRam_?);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                      (this_00,*(float *)&pOVar4[1].klass,(MethodInfo *)0x0);
            pDVar3 = (this->fields)._._._.data;
            if ((pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
               (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar3,(Object *)StringLiteral_pitch,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   ), pOVar4 != (Object *)0x0)) {
              if ((pOVar4->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar4,lRam_?);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                        (this_00,*(float *)&pOVar4[1].klass,(MethodInfo *)0x0);
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_spatialBlend
                        (this_00,0.0,(MethodInfo *)0x0);
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                        (this_00,1,(MethodInfo *)0x0);
              bVar5 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                      AudioSource_get_isPlaying(this_00,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                return;
              }
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                             );
                LOCK();
                UNLOCK();
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (this_00 == (AudioSource *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowArgumentNullException
                          ((Object *)0x0,StringLiteral_source,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pvVar6 = (this_00->fields)._._._._.m_CachedPtr;
              if (pvVar6 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowArgumentNullException
                          ((Object *)this_00,StringLiteral_source,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar6,0);
              return;
            }
          }
          goto code_?;
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar8 = StringLiteral_audioSource_for_soundEmitterObje;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar9 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar9 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar9,0,pSVar8);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_soundEmitterObject_is_null,(MethodInfo *)0x0);
  return;
}


/* MVGlobalSoundEmitter(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor
               (MVGlobalSoundEmitter *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SoundEmitterObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SoundLoader);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (SoundLoader *)FUN_?(TypeInfo__SoundLoader);
  SoundLoader::SoundLoader__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).soundLoader = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).soundLoader >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar6 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar6->fields).mvGloablSoundEmitterPrefab,
             worldObjects,(MethodInfo *)0x0);
  pSVar8 = (SoundEmitterObject *)(this->fields)._._.component;
  (this->fields)._._.interactionFlags =
       (this->fields)._._.interactionFlags & 0xffffffffffffdfffU | 0x8008000;
  if (pSVar8 == (SoundEmitterObject *)0x0) {
    (this->fields).soundEmitterObject = (SoundEmitterObject *)0x0;
  }
  else {
    bVar9 = (TypeInfo__SoundEmitterObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pSVar8->klass)->_1).naturalAligment < bVar9) ||
       ((((ObjectPrefab__Class *)pSVar8->klass)->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
        (Il2CppClass *)TypeInfo__SoundEmitterObject)) {
      FUN_?(pSVar8);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (this->fields).soundEmitterObject = pSVar8;
    bVar9 = (TypeInfo__SoundEmitterObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pSVar8->klass)->_1).naturalAligment < bVar9) ||
       ((((ObjectPrefab__Class *)pSVar8->klass)->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
        (Il2CppClass *)TypeInfo__SoundEmitterObject)) {
      FUN_?(pSVar8);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).soundEmitterObject >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

