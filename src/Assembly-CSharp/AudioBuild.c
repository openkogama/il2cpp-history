
/* Void Awake() */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_Awake(AudioBuild *this,MethodInfo *method)

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
    cRam_? = '\x01';
  }
  self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
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
            (self,(String *)0x0,(MethodInfo *)0x0);
  if (self != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (self,(MethodInfo *)0x0);
    value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (this_00,value,(MethodInfo *)0x0);
      pAVar1 = (AudioSource *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (self,
                          UnityEngine__AudioSource_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::AudioSource>__
                         );
      bVar2 = iRam_? != 0;
      (this->fields).buildSource = pAVar1;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).buildSource >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pAVar1 = (this->fields).buildSource;
      if (pAVar1 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_playOnAwake
                  (pAVar1,0,(MethodInfo *)0x0);
        pAVar1 = (this->fields).buildSource;
        if (pAVar1 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_spatialBlend
                    (pAVar1,_UNK_?,(MethodInfo *)0x0);
          pAVar1 = (this->fields).buildSource;
          if (pAVar1 != (AudioSource *)0x0) {
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_minDistance
                      (pAVar1,_UNK_?,(MethodInfo *)0x0);
            pAVar1 = (this->fields).buildSource;
            if (pAVar1 != (AudioSource *)0x0) {
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_maxDistance
                        (pAVar1,_UNK_?,(MethodInfo *)0x0);
              pAVar1 = (this->fields).buildSource;
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
                if (pvVar7 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam_?)(pvVar7,1);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void CubeAdded(Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_CubeAdded
               (AudioBuild *this,Vector3 *worldPos,MethodInfo *method)

{
  pSVar1 = (this->fields).cubeAddedClipStream;
  if (pSVar1 != (StreamedAudioClipManual *)0x0) {
    aVStack_2[0].x = worldPos->x;
    aVStack_2[0].y = worldPos->y;
    aVStack_2[0].z = worldPos->z;
    AudioBuild_PlayClip(this,aVStack_2,(pSVar1->fields)._Clip_k__BackingField,_UNK_?,
                        _UNK_?,_UNK_?,_UNK_?,1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CubePainted(Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_CubePainted
               (AudioBuild *this,Vector3 *worldPos,MethodInfo *method)

{
  pSVar1 = (this->fields).cubePaintedClipStream;
  if (pSVar1 != (StreamedAudioClipManual *)0x0) {
    aVStack_2[0].x = worldPos->x;
    aVStack_2[0].y = worldPos->y;
    aVStack_2[0].z = worldPos->z;
    AudioBuild_PlayClip(this,aVStack_2,(pSVar1->fields)._Clip_k__BackingField,_UNK_?,
                        _UNK_?,_UNK_?,_UNK_?,1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CubeRemoved(Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_CubeRemoved
               (AudioBuild *this,Vector3 *worldPos,MethodInfo *method)

{
  pSVar1 = (this->fields).cubeRemovedClipStream;
  if (pSVar1 != (StreamedAudioClipManual *)0x0) {
    aVStack_2[0].x = worldPos->x;
    aVStack_2[0].y = worldPos->y;
    aVStack_2[0].z = worldPos->z;
    AudioBuild_PlayClip(this,aVStack_2,(pSVar1->fields)._Clip_k__BackingField,_UNK_?,
                        _UNK_?,_UNK_?,_UNK_?,1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EdgeMoved(Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_EdgeMoved
               (AudioBuild *this,Vector3 *worldPos,MethodInfo *method)

{
  pSVar1 = (this->fields).edgeMovedClipStream;
  if (pSVar1 != (StreamedAudioClipManual *)0x0) {
    aVStack_2[0].x = worldPos->x;
    aVStack_2[0].y = worldPos->y;
    aVStack_2[0].z = worldPos->z;
    AudioBuild_PlayClip(this,aVStack_2,(pSVar1->fields)._Clip_k__BackingField,_UNK_?,
                        _UNK_?,_UNK_?,_UNK_?,1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FaceMoved(Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_FaceMoved
               (AudioBuild *this,Vector3 *worldPos,MethodInfo *method)

{
  pSVar1 = (this->fields).faceMovedClipStream;
  if (pSVar1 != (StreamedAudioClipManual *)0x0) {
    aVStack_2[0].x = worldPos->x;
    aVStack_2[0].y = worldPos->y;
    aVStack_2[0].z = worldPos->z;
    AudioBuild_PlayClip(this,aVStack_2,(pSVar1->fields)._Clip_k__BackingField,_UNK_?,
                        _UNK_?,_UNK_?,_UNK_?,1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PlayClip(Vector3, AudioClip, Single, Single, Single, Single, Boolean) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_PlayClip
               (AudioBuild *this,Vector3 *worldPos,AudioClip *audioClip,float pitchMin,
               float pitchMax,float volumeMin,float volumeMax,bool checkSourceTime,
               MethodInfo *method)

{
  if (checkSourceTime != 0) {
    pAVar1 = (this->fields).buildSource;
    if (pAVar1 == (AudioSource *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
    pvVar3 = (pAVar1->fields)._._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar5 = (float)(*pcRam_?)(pvVar3);
    if (fVar5 != 0.0) {
      return;
    }
  }
  pAVar1 = (this->fields).buildSource;
  if ((pAVar1 != (AudioSource *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pAVar1,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    uStack_6._0_4_ = worldPos->x;
    uStack_6._4_4_ = worldPos->y;
    fStack_7 = worldPos->z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (obj->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar3,&uStack_6);
    pAVar1 = (this->fields).buildSource;
    if (pAVar1 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                (pAVar1,(AudioResource *)audioClip,(MethodInfo *)0x0);
      pAVar1 = (this->fields).buildSource;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                        (pitchMin,pitchMax,(MethodInfo *)0x0);
      if (pAVar1 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (pAVar1,fVar5,(MethodInfo *)0x0);
        pAVar1 = (this->fields).buildSource;
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                          (volumeMin,volumeMax,(MethodInfo *)0x0);
        if (pAVar1 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                    (pAVar1,fVar5,(MethodInfo *)0x0);
          pAVar1 = (this->fields).buildSource;
          if (pAVar1 != (AudioSource *)0x0) {
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                      (pAVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Translate(Single, Boolean, Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_Translate
               (AudioBuild *this,float moveValue,bool moveToGridPos,Vector3 *worldPos,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).buildSource;
  if (moveToGridPos == 0) {
    if (pAVar1 != (AudioSource *)0x0) {
      bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (pAVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return;
      }
      if ((this->fields).currentTranslateMoveValue == moveValue) {
        return;
      }
      pSVar3 = (this->fields).translateNotGridClipStream;
      if (pSVar3 != (StreamedAudioClipManual *)0x0) {
        aVStack_4[0].x = worldPos->x;
        aVStack_4[0].y = worldPos->y;
        volumeMin = _UNK_?;
        pitchMax = _UNK_?;
        goto code_?;
      }
    }
  }
  else {
    if (pAVar1 == (AudioSource *)0x0) goto code_?;
    bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pAVar1 = (this->fields).buildSource;
      if (pAVar1 == (AudioSource *)0x0) goto code_?;
      pAVar5 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                         (pAVar1,(MethodInfo *)0x0);
      pSVar3 = (this->fields).translateNotGridClipStream;
      if (pSVar3 == (StreamedAudioClipManual *)0x0) goto code_?;
      pAVar6 = (pSVar3->fields)._Clip_k__BackingField;
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
      if (pAVar5 != (AudioClip *)0x0 || pAVar6 != (AudioClip *)0x0) {
        if (pAVar6 == (AudioClip *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pAVar5 == (AudioClip *)0x0) goto code_?;
          bVar7 = (pAVar5->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pAVar5 == (AudioClip *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar7 = (pAVar6->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar7 = pAVar5 == pAVar6;
        }
        if (!bVar7) {
          return;
        }
      }
    }
    pSVar3 = (this->fields).translateGridClipStream;
    if (pSVar3 != (StreamedAudioClipManual *)0x0) {
      aVStack_4[0].x = worldPos->x;
      aVStack_4[0].y = worldPos->y;
      volumeMin = _UNK_?;
      pitchMax = _UNK_?;
code_?:
      aVStack_4[0].z = worldPos->z;
      AudioBuild_PlayClip(this,aVStack_4,(pSVar3->fields)._Clip_k__BackingField,_UNK_?,
                          pitchMax,volumeMin,_UNK_?,0,(MethodInfo *)0x0);
      (this->fields).currentTranslateMoveValue = moveValue;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void VertexMoved(Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_VertexMoved
               (AudioBuild *this,Vector3 *worldPos,MethodInfo *method)

{
  pSVar1 = (this->fields).vertexMovedClipStream;
  if (pSVar1 != (StreamedAudioClipManual *)0x0) {
    aVStack_2[0].x = worldPos->x;
    aVStack_2[0].y = worldPos->y;
    aVStack_2[0].z = worldPos->z;
    AudioBuild_PlayClip(this,aVStack_2,(pSVar1->fields)._Clip_k__BackingField,_UNK_?,
                        _UNK_?,_UNK_?,_UNK_?,1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* AudioBuild() */

void Assembly-CSharp.dll::AudioBuild::AudioBuild__ctor(AudioBuild *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__AudioSource);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AudioSource *)FUN_?(TypeInfo__UnityEngine__AudioSource);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = iRam_? != 0;
  (this->fields).buildSource = pAVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).buildSource >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
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

