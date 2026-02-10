
/* Void Initialize(String[]) */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_Initialize
               (CustomItemAudioPlayer *this,String__Array *clipNames,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  StreamedAudioClipManual_MethodInfo__UnityEngine__GameObject__AddComponent<StreamedAudioClipManual>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AuidoClipStream);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = (ValueAnimation_1_StyleValues_ *)0x0;
  uStack_2 = 0;
  pAVar3 = (AudioSource *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                     );
  bVar4 = iRam_? != 0;
  (this->fields).audioSource = pAVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).audioSource >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pAVar3 = (this->fields).audioSource;
  if (pAVar3 != (AudioSource *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar9 = (pAVar3->fields)._._._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar3,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    fVar12 = (float)(*pcRam_?)(pvVar9);
    bVar4 = iRam_? != 0;
    (this->fields).baseVolume = fVar12;
    (this->fields).clipNames = clipNames;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).clipNames >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pCVar13 = (this->fields).audioClips;
    uVar5 = 0;
    if (pCVar13 != (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) {
      lVar14 = 0;
      ppSVar15 = clipNames->vector;
      do {
        if ((int)pCVar13->max_length <= (int)uVar5) {
          return;
        }
        pCVar13 = (this->fields).audioClips;
        if (pCVar13 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) break;
        if ((uint)pCVar13->max_length <= uVar5) goto code_?;
        puVar16 = (undefined8 *)((longlong)&pCVar13->vector[0].clipURL + lVar14);
        value = (Func_2_Single_Single_ *)*puVar16;
        uStack_1 = (ValueAnimation_1_StyleValues_ *)puVar16[1];
        uStack_2 = *(undefined8 *)((longlong)&pCVar13->vector[0].pitchVariation + lVar14);
        pSVar17 = *(String **)((longlong)&pCVar13->vector[0].clipURL + lVar14);
        if ((pSVar17 != ::StringLiteral__) &&
           ((((pSVar17 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
             ((pSVar17->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
            (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar17->fields)._firstChar,
                                (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                (longlong)(pSVar17->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar18 == 0)))) {
          if (clipNames == (String__Array *)0x0) break;
          if ((uint)clipNames->max_length <= uVar5) {
code_?:
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pSVar17 = mscorlib.dll::System::String::String_Concat_4
                              (*ppSVar15,StringLiteral_AuidoClipStream,(MethodInfo *)0x0);
          this_00 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                    (this_00,pSVar17,(MethodInfo *)0x0);
          if (this_00 == (GameObject *)0x0) break;
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0);
          value_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
          if (this_01 == (Transform *)0x0) break;
          method_00 = (MethodInfo *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (this_01,value_00,(MethodInfo *)0x0);
          uStack_1 = (ValueAnimation_1_StyleValues_ *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (this_00,
                                 StreamedAudioClipManual_MethodInfo__UnityEngine__GameObject__AddComponent<StreamedAudioClipManual>__
                                );
          if (iRam_? != 0) {
            uVar19 = (uint)((ulonglong)&uStack_1 >> 0xc);
            uVar6 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
            method_00 = (MethodInfo *)(ulonglong)(uVar19 & 0x3f);
            do {
              uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
              puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
              LOCK();
              bVar4 = uVar7 == *puVar8;
              if (bVar4) {
                *puVar8 = uVar7 | 1L << (longlong)method_00;
              }
              UNLOCK();
            } while (!bVar4);
          }
          if (uStack_1 == (ValueAnimation_1_StyleValues_ *)0x0) break;
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
          ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__set_easingCurve
                    (uStack_1,value,method_00);
          pCVar13 = (this->fields).audioClips;
          if (pCVar13 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) break;
          if ((uint)pCVar13->max_length <= uVar5) goto code_?;
          uStack_20 = SUB84(value,0);
          uStack_21 = (undefined4)((ulonglong)value >> 0x20);
          puVar22 = (undefined4 *)((longlong)&pCVar13->vector[0].clipURL + lVar14);
          *puVar22 = uStack_20;
          puVar22[1] = uStack_21;
          puVar22[2] = (undefined4)uStack_1;
          puVar22[3] = uStack_1._4_4_;
          *(undefined8 *)((longlong)&pCVar13->vector[0].pitchVariation + lVar14) = uStack_2;
          func_?((longlong)&pCVar13->vector[0].clipURL + lVar14);
        }
        pCVar13 = (this->fields).audioClips;
        uVar5 = uVar5 + 1;
        ppSVar15 = ppSVar15 + 1;
        lVar14 = lVar14 + 0x18;
      } while (pCVar13 != (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0);
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean IsClipLooped(Int32) */

bool Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_IsClipLooped
               (CustomItemAudioPlayer *this,int32_t index,MethodInfo *method)

{
  pCVar1 = (this->fields).audioClips;
  if (pCVar1 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((uint)index < (uint)pCVar1->max_length) {
    return pCVar1->vector[index].isLooped;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void PlayClip(Int32, Boolean, Vector3) */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
               (CustomItemAudioPlayer *this,int32_t index,bool useAudioManager,Vector3 *position,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).audioSource;
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
  if (pAVar1 != (AudioSource *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr == (void *)0x0) {
      return;
    }
    if (index < 0) {
      return;
    }
    pCVar2 = (this->fields).audioClips;
    if (pCVar2 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0)
    goto code_?;
    if ((int)pCVar2->max_length <= index) {
      return;
    }
    CustomItemAudioPlayer_SetAudioSourceSettings(this,index,(MethodInfo *)0x0);
    if (useAudioManager != 0) {
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 == (AudioSource *)0x0) goto code_?;
      bVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_loop
                        (pAVar1,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        aVStack_4[0].x = position->x;
        aVStack_4[0].y = position->y;
        VStack_5.x = 0.0;
        VStack_5.y = 0.0;
        fVar6 = position->z - 0.0;
        if (_UNK_? <=
            (aVStack_4[0].y - 0.0) * (aVStack_4[0].y - 0.0) +
            (aVStack_4[0].x - 0.0) * (aVStack_4[0].x - 0.0) + fVar6 * fVar6) {
          uVar7 = position->x;
          uVar8 = position->y;
          VStack_5.z = position->z;
          fVar6 = (float)uVar7;
          fVar9 = (float)uVar8;
        }
        else {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (this_00 == (Transform *)0x0) goto code_?;
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (aVStack_4,this_00,(MethodInfo *)0x0);
          fVar6 = pVVar10->x;
          fVar9 = pVVar10->y;
          VStack_5.z = pVVar10->z;
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
        pSVar11 = (this->fields).clipNames;
        if (pSVar11 != (String__Array *)0x0) {
          if ((uint)pSVar11->max_length <= (uint)index) {
            FUN_?();
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (this_01 != (AudioManager *)0x0) {
            VStack_5.y = fVar9;
            VStack_5.x = fVar6;
            AudioManager::AudioManager_Play_2
                      (this_01,pSVar11->vector[index],(this->fields).audioSource,&VStack_5,
                       (MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
    }
    pAVar1 = (this->fields).audioSource;
    if (pAVar1 == (AudioSource *)0x0) {
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
              (pAVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void PlayClipFraction(Int32, Single) */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClipFraction
               (CustomItemAudioPlayer *this,int32_t index,float length,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).audioSource;
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
  if (pAVar1 != (AudioSource *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) && (-1 < index)) {
      pCVar2 = (this->fields).audioClips;
      if (pCVar2 != (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) {
        if ((int)pCVar2->max_length <= index) {
          return;
        }
        CustomItemAudioPlayer_SetAudioSourceSettings(this,index,(MethodInfo *)0x0);
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        dVar5 = (double)(*pcRam_?)();
        pAVar1 = (this->fields).audioSource;
        if (pAVar1 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (pAVar1,0,(MethodInfo *)0x0);
          pAVar1 = (this->fields).audioSource;
          if (pAVar1 != (AudioSource *)0x0) {
            uVar6 = 0;
            if (0.0 <= dVar5) {
              uVar6 = SUB84(dVar5,0);
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar7 = (pAVar1->fields)._._._._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar7,uVar6);
            pAVar1 = (this->fields).audioSource;
            if (pAVar1 != (AudioSource *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar7 = (pAVar1->fields)._._._._.m_CachedPtr;
              if (pvVar7 != (void *)0x0) {
                pcVar3 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                  uVar4 = func_?(&UNK_?);
                  FUN_?(uVar4,0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcRam_? = pcVar3;
                (*pcRam_?)(pvVar7,SUB84((double)length + dVar5,0));
                return;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Void SetAudioSourceSettings(Int32) */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_SetAudioSourceSettings
               (CustomItemAudioPlayer *this,int32_t index,MethodInfo *method)

{
  pCVar1 = (this->fields).audioClips;
  if (pCVar1 != (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) {
    if ((uint)pCVar1->max_length <= (uint)index) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pAVar3 = (this->fields).audioSource;
    uVar4 = pCVar1->vector[index].pitchVariation;
    value = pCVar1->vector[index].isLooped;
    pSVar5 = pCVar1->vector[index].audioStream;
    if (pAVar3 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar3,value,(MethodInfo *)0x0);
      if (index != (this->fields).index) {
        pAVar3 = (this->fields).audioSource;
        (this->fields).index = index;
        if ((pSVar5 == (StreamedAudioClipManual *)0x0) || (pAVar3 == (AudioSource *)0x0))
        goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                  (pAVar3,(AudioResource *)(pSVar5->fields)._Clip_k__BackingField,(MethodInfo *)0x0)
        ;
      }
      pAVar3 = (this->fields).audioSource;
      fVar6 = _UNK_?;
      if ((float)uVar4 != 0.0) {
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                          (_UNK_? - (float)uVar4,(float)uVar4 + _UNK_?,
                           (MethodInfo *)0x0);
      }
      if (pAVar3 != (AudioSource *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                        ,fVar6,0,in_R9,unaff_XMM6_Qa,unaff_XMM6_Qb,unaff_RBX);
          LOCK();
          UNLOCK();
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pAVar3 == (AudioSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowArgumentNullException
                    ((Object *)0x0,StringLiteral_source,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar7 = (pAVar3->fields)._._._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowArgumentNullException
                    ((Object *)pAVar3,StringLiteral_source,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar7,fVar6);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetPitch(Single) */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_SetPitch
               (CustomItemAudioPlayer *this,float pitch,MethodInfo *method)

{
  obj = (this->fields).audioSource;
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
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
  if (obj == (AudioSource *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowArgumentNullException((Object *)0x0,StringLiteral_source,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowArgumentNullException((Object *)obj,StringLiteral_source,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,pitch);
  return;
}


/* Void SetVolume(Single) */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_SetVolume
               (CustomItemAudioPlayer *this,float volume,MethodInfo *method)

{
  obj = (this->fields).audioSource;
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar2 = volume * (this->fields).baseVolume;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                  ,fVar2,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar3 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,fVar2);
  return;
}


/* Void Stop() */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_Stop
               (CustomItemAudioPlayer *this,MethodInfo *method)

{
  obj = (this->fields).audioSource;
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* CustomItemAudioPlayer() */

void Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer__ctor
               (CustomItemAudioPlayer *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).baseVolume = 0.5;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052aacd,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Single get_ClipLength() */

float Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_get_ClipLength
                (CustomItemAudioPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).audioSource;
  if (pAVar1 == (AudioSource *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  pAVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                     (pAVar1,(MethodInfo *)0x0);
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
  if (pAVar4 != (AudioClip *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar4->fields)._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).audioSource;
      if ((pAVar1 != (AudioSource *)0x0) &&
         (pAVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                             (pAVar1,(MethodInfo *)0x0), pAVar4 != (AudioClip *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioClip>_UnityEngine__AudioClip_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pAVar4->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar4,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          fVar3 = (float)(*pcVar2)();
          return fVar3;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar2 = (code *)swi(3);
          fVar3 = (float)(*pcVar2)();
          return fVar3;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        fVar3 = (float)(*pcRam_?)(pvVar5);
        return fVar3;
      }
      goto code_?;
    }
  }
  return 0.0;
}


/* Boolean get_IsPlaying() */

bool Assembly-CSharp.dll::CustomItemAudioPlayer::CustomItemAudioPlayer_get_IsPlaying
               (CustomItemAudioPlayer *this,MethodInfo *method)

{
  obj = (this->fields).audioSource;
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*pcRam_?)(pvVar3);
  return bVar2;
}

