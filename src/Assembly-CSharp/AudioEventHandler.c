
/* Void AddTranslateSoundData(Single, Boolean, Vector3) */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_AddTranslateSoundData
               (float moveValue,bool moveToGridPos,Vector3 *worldPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Add_TranslateSoundData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AudioEventHandler);
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Add_TranslateSoundData_;
  TStack_2._5_3_ = 0;
  TStack_2.moveToGridPos = moveToGridPos;
  uVar3 = worldPos->x;
  uVar4 = worldPos->y;
  this = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  fVar5 = worldPos->z;
  TStack_2.worldPos.z._0_1_ = SUB41(fVar5,0);
  TStack_2.worldPos.z._1_2_ = (undefined2)((uint)fVar5 >> 8);
  TStack_2.worldPos.z._3_1_ = (undefined1)((uint)fVar5 >> 0x18);
  TStack_2.moveValue = moveValue;
  TStack_2.worldPos.x = (float)uVar3;
  TStack_2.worldPos.y = (float)uVar4;
  if (this != (List_1_TranslateSoundData_ *)0x0) {
    piVar6 = &(this->fields)._version;
    *piVar6 = *piVar6 + 1;
    pTVar7 = (this->fields)._items;
    if (pTVar7 != (TranslateSoundData__Array *)0x0) {
      uVar8 = (this->fields)._size;
      fStack_9 = (float)uVar3;
      uStack_10 = (uint)moveToGridPos;
      fStack_11 = (float)uVar4;
      if (uVar8 < (uint)pTVar7->max_length) {
        (this->fields)._size = uVar8 + 1;
        uStack_12 = TStack_2.worldPos.z._0_1_;
        uStack_13 = TStack_2.worldPos.z._1_2_;
        uStack_14 = TStack_2.worldPos.z._3_1_;
        if ((uint)pTVar7->max_length <= uVar8) {
          fStack_15 = moveValue;
          FUN_?();
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar17 = (ulonglong)CONCAT14(moveToGridPos,moveValue);
        pTVar18 = pTVar7->vector + (int)uVar8;
        pTVar18->moveValue = (float)(int)uVar17;
        pTVar18->moveToGridPos = (char)(uVar17 >> 0x20);
        *(int3 *)&pTVar18->field_0x5 = (int3)(uVar17 >> 0x28);
        (pTVar18->worldPos).x = (float)uVar3;
        (pTVar18->worldPos).y = (float)uVar4;
        pTVar7->vector[(int)uVar8].worldPos.z = fVar5;
      }
      else {
        uStack_12 = TStack_2.worldPos.z._0_1_;
        uStack_13 = TStack_2.worldPos.z._1_2_;
        uStack_14 = TStack_2.worldPos.z._3_1_;
        TStack_2._4_4_ = uStack_10;
        mscorlib.dll::System::Collections::Generic::List`1[TranslateSoundData]::
        List_1_TranslateSoundData__AddWithResize
                  (this,&TStack_2,pMVar1->klass->rgctx_data[0xe].method);
      }
      return;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateSoundData>__TrimExcess__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AudioEventHandler);
  }
  TypeInfo__AudioEventHandler->static_fields->audioBuild = (AudioBuild *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__AudioEventHandler->static_fields >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pLVar6 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (pLVar6 != (List_1_TranslateSoundData_ *)0x0) {
    piVar7 = &(pLVar6->fields)._version;
    *piVar7 = *piVar7 + 1;
    (pLVar6->fields)._size = 0;
    pLVar6 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
    if ((pLVar6 != (List_1_TranslateSoundData_ *)0x0) &&
       (pTVar8 = (pLVar6->fields)._items, pTVar8 != (TranslateSoundData__Array *)0x0)) {
      if ((int)((double)(int)pTVar8->max_length * _UNK_?) <= (pLVar6->fields)._size) {
        return;
      }
      iVar9 = (pLVar6->fields)._size;
      pMVar10 = MethodInfo__System__Collections__Generic__List<TranslateSoundData>__TrimExcess__->
               klass->rgctx_data[0x1b].method;
      if (iVar9 < (pLVar6->fields)._size) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                  (ExceptionArgument__Enum_value,
                   ExceptionResource__Enum_ArgumentOutOfRange_SmallCapacity,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar8 = (pLVar6->fields)._items;
      if (pTVar8 == (TranslateSoundData__Array *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (iVar9 != (int)pTVar8->max_length) {
        pIVar12 = pMVar10->klass->rgctx_data;
        if (iVar9 < 1) {
          pvVar13 = pIVar12[2].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
            pvVar13 = (void *)FUN_?(pvVar13);
          }
          if (*(int *)((longlong)pvVar13 + 0xe4) == 0) {
            FUN_?(pvVar13);
          }
          pIVar14 = pMVar10->klass->rgctx_data[2].klass;
          if ((pIVar14->field_0x135 & 1) == 0) {
            pIVar14 = (Il2CppClass *)FUN_?(pIVar14);
          }
          (pLVar6->fields)._items = *(TranslateSoundData__Array **)pIVar14->static_fields;
        }
        else {
          pvVar13 = pIVar12[3].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
            pvVar13 = (void *)FUN_?(pvVar13);
          }
          pTVar8 = (TranslateSoundData__Array *)FUN_?(pvVar13);
          if (0 < (pLVar6->fields)._size) {
            mscorlib.dll::System::Array::Array_Copy_3
                      ((Array *)(pLVar6->fields)._items,0,(Array *)pTVar8,0,(pLVar6->fields)._size,
                       (MethodInfo *)0x0);
          }
          (pLVar6->fields)._items = pTVar8;
        }
        func_?(&pLVar6->fields);
      }
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void HandleTranslateData() */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_HandleTranslateData
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TranslateSoundData>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AudioEventHandler);
  }
  pLVar1 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (pLVar1 != (List_1_TranslateSoundData_ *)0x0) {
    uStack_2 = 0;
    uStack_3 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pLStack_5 >> 0xc);
      uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    lStack_10 = (ulonglong)(uint)(pLVar1->fields)._version << 0x20;
    uStack_11 = 0;
    lStack_12 = lStack_10;
    uStack_13 = 0;
    uStack_14 = 0;
    uStack_15 = 0;
    uStack_16 = 0;
    ppLStack_17 = &pLStack_18;
    pLStack_5 = pLVar1;
    pLStack_18 = pLVar1;
    while (cVar19 = FUN_?(&pLStack_18,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__MoveNext__
                                 ), uVar20 = uStack_13, cVar19 != '\0') {
      moveValue = (float)uStack_13;
      fVar21 = (float)uStack_14;
      fVar22 = uStack_14._4_4_;
      fVar23 = (float)uStack_15;
      if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AudioEventHandler);
      }
      this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
      if (this == (AudioBuild *)0x0) goto code_?;
      VStack_24.x = fVar21;
      VStack_24.y = fVar22;
      VStack_24.z = fVar23;
      AudioBuild::AudioBuild_Translate
                (this,moveValue,(bool)((ulonglong)uVar20 >> 0x20),&VStack_24,(MethodInfo *)0x0);
    }
    if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AudioEventHandler);
    }
    pLVar1 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
    if (pLVar1 != (List_1_TranslateSoundData_ *)0x0) {
      piVar25 = &(pLVar1->fields)._version;
      *piVar25 = *piVar25 + 1;
      (pLVar1->fields)._size = 0;
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void Init(AudioBuild) */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_Init
               (AudioBuild *audioBuild,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AudioEventHandler);
  }
  TypeInfo__AudioEventHandler->static_fields->audioBuild = audioBuild;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__AudioEventHandler->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* Void PlaySound(AudioActions, IntVector, GameObject) */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_PlaySound
               (AudioActions__Enum audioAction,IntVector *localPos,GameObject *gameObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (gameObject == (GameObject *)0x0) goto code_?;
  obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                  (gameObject,(MethodInfo *)0x0);
  uVar1 = localPos->x;
  uVar2 = localPos->y;
  uVar3._0_4_ = (float)(int)(short)uVar1;
  if (obj == (Transform *)0x0) goto code_?;
  uVar3._4_4_ = (float)(int)(short)uVar2;
  VStack_4._0_8_ = uVar3;
  VStack_4.z = (float)(int)localPos->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_5.x = 0.0;
  VStack_5.y = 0.0;
  VStack_5.z = 0.0;
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar6,&VStack_4,&VStack_5);
  switch(audioAction) {
  case AudioActions__Enum_CubeAdded:
    if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AudioEventHandler);
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if ((this == (AudioBuild *)0x0) ||
       (pSVar8 = (this->fields).cubeAddedClipStream, pSVar8 == (StreamedAudioClipManual *)0x0))
    goto code_?;
    VStack_4.x = VStack_5.x;
    VStack_4.y = VStack_5.y;
    VStack_4.z = VStack_5.z;
    pitchMin = _UNK_?;
    pitchMax = _UNK_?;
    goto code_?;
  case AudioActions__Enum_CubeRemoved:
    if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AudioEventHandler);
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    pSVar8 = (this->fields).cubeRemovedClipStream;
    break;
  case AudioActions__Enum_FaceMoved:
    if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AudioEventHandler);
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if ((this == (AudioBuild *)0x0) ||
       (pSVar8 = (this->fields).faceMovedClipStream, pSVar8 == (StreamedAudioClipManual *)0x0))
    goto code_?;
    VStack_4.x = VStack_5.x;
    VStack_4.y = VStack_5.y;
    VStack_4.z = VStack_5.z;
    pitchMin = _UNK_?;
    pitchMax = _UNK_?;
    goto code_?;
  case AudioActions__Enum_EdgeMoved:
    if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AudioEventHandler);
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    pSVar8 = (this->fields).edgeMovedClipStream;
    break;
  case AudioActions__Enum_VertexMoved:
    if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AudioEventHandler);
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    pSVar8 = (this->fields).vertexMovedClipStream;
    break;
  case AudioActions__Enum_CubePainted:
    if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AudioEventHandler);
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    pSVar8 = (this->fields).cubePaintedClipStream;
    break;
  default:
    goto code_?;
  }
  if (pSVar8 == (StreamedAudioClipManual *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  VStack_4.x = VStack_5.x;
  VStack_4.y = VStack_5.y;
  VStack_4.z = VStack_5.z;
  pitchMin = _UNK_?;
  pitchMax = _UNK_?;
code_?:
  VStack_5._0_8_ = VStack_4._0_8_;
  VStack_5.z = VStack_4.z;
  AudioBuild::AudioBuild_PlayClip
            (this,&VStack_4,(pSVar8->fields)._Clip_k__BackingField,pitchMin,pitchMax,_UNK_?
             ,_UNK_?,1,(MethodInfo *)0x0);
code_?:
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_Update(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TranslateSoundData>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AudioEventHandler);
  }
  pLVar1 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (pLVar1 != (List_1_TranslateSoundData_ *)0x0) {
    uStack_2 = 0;
    uStack_3 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pLStack_5 >> 0xc);
      uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    lStack_10 = (ulonglong)(uint)(pLVar1->fields)._version << 0x20;
    uStack_11 = 0;
    lStack_12 = lStack_10;
    uStack_13 = 0;
    uStack_14 = 0;
    puStack_15 = (undefined *)0x0;
    uStack_16 = 0;
    ppLStack_17 = &pLStack_18;
    pLStack_5 = pLVar1;
    pLStack_18 = pLVar1;
    while (cVar19 = FUN_?(&pLStack_18,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__MoveNext__
                                 ), uVar20 = uStack_13, cVar19 != '\0') {
      moveValue = (float)uStack_13;
      fVar21 = (float)uStack_14;
      fVar22 = uStack_14._4_4_;
      fVar23 = puStack_15._0_4_;
      if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AudioEventHandler);
      }
      this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
      if (this == (AudioBuild *)0x0) goto code_?;
      VStack_24.x = fVar21;
      VStack_24.y = fVar22;
      VStack_24.z = fVar23;
      AudioBuild::AudioBuild_Translate
                (this,moveValue,(bool)((ulonglong)uVar20 >> 0x20),&VStack_24,(MethodInfo *)0x0);
    }
    if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AudioEventHandler);
    }
    pLVar1 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
    if (pLVar1 != (List_1_TranslateSoundData_ *)0x0) {
      piVar25 = &(pLVar1->fields)._version;
      *piVar25 = *piVar25 + 1;
      (pLVar1->fields)._size = 0;
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* AudioEventHandler() */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateSoundData>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<TranslateSoundData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_TranslateSoundData_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<TranslateSoundData>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<TranslateSoundData>__List__);
  bVar2 = iRam_? != 0;
  TypeInfo__AudioEventHandler->static_fields->translateSoundDatas = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&TypeInfo__AudioEventHandler->static_fields->translateSoundDatas >>
                  0xc);
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
  return;
}

