
/* Void DoOverheatBlinking() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_DoOverheatBlinking
               (JetPackVisualization *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  pVVar2 = (this->fields).vehicleBlinker;
  if (pVVar2 == (VehicleBlinker *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                  ,0,_UNK_?,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (pVVar2->fields)._.blinkers;
  if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
     (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                         ), pOVar4 != (Object *)0x0)) {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    uVar6 = (*pcRam_?)();
    *(undefined4 *)((longlong)&pOVar4[1].monitor + 4) = uVar1;
    *(undefined4 *)&pOVar4[1].monitor = uVar6;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EnableThruster(Boolean) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_EnableThruster
               (JetPackVisualization *this,bool enable,MethodInfo *method)

{
  bStackX_10 = enable;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
                  ,CONCAT71(in_register_00000011,enable),method,in_R9,this);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_20 = (Object *)0x0;
  pLVar1 = (this->fields).thrusters;
  if (pLVar1 != (List_1_UnityEngine_ParticleSystem_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_9 = 0;
    LStack_10._8_8_ = pLStack_8;
    LStack_10._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_8 = &LStack_10;
    LStack_10._list = (List_1_System_Object_ *)pLVar1;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_10,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                             ), bVar11 != 0) {
      if (LStack_10._current == (Object *)0x0) goto code_?;
      pOStackX_8 = LStack_10._current;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&pOStackX_8 >> 0xc);
        uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pOStackX_20 = LStack_10._current;
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar12;
      (*pcRam_?)(&pOStackX_20,enable);
    }
    obj = (this->fields).moving;
    if (enable == 0) {
      if (obj != (AudioSource *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar13 = (obj->fields)._._._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcRam_? = pcVar12;
        (*pcRam_?)(pvVar13,0);
        return;
      }
    }
    else if (obj != (AudioSource *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar13 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(pvVar13,_UNK_?);
      return;
    }
  }
  FUN_?();
code_?:
  uVar14 = func_?(&UNK_?);
  FUN_?(uVar14,0);
code_?:
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void HandleJetMode() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_HandleJetMode
               (JetPackVisualization *this,MethodInfo *method)

{
  if (((this->fields).modeChanged != 0) || ((this->fields).mode == 2)) {
    (this->fields).modeChanged = 0;
  }
  return;
}


/* Void Init(Boolean, Transform, MVRuntimeDataVariable) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_Init
               (JetPackVisualization *this,bool isInSpawner,Transform *jetPackCubeModel,
               MVRuntimeDataVariable *jetMode,MethodInfo *method)

{
  pMStackX_20 = jetMode;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVJetPack__JetModeType);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__JetPackVisualization___Init_b__16_0_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  pPStack_2 = (ParticleSystem *)0x0;
  pPStack_3 = (ParticleSystem *)0x0;
  if (jetPackCubeModel == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_4 = 0;
  fStack_5 = 0.0;
  pvVar6 = (jetPackCubeModel->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)jetPackCubeModel,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar6);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLStack_9 = (List_1_UnityEngine_ParticleSystem_ *)0x0;
  lStack_10 = 0;
  pvVar6 = (jetPackCubeModel->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)jetPackCubeModel,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar6,&pLStack_9);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
            (jetPackCubeModel,(this->fields).JetPackRoot,(MethodInfo *)0x0);
  uStack_11 = uStack_4;
  pLStack_12 = (List_1_T_Enumerator_System_Object_ *)CONCAT44(pLStack_12._4_4_,fStack_5);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (jetPackCubeModel->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)jetPackCubeModel,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar6);
  pLStack_13 = pLStack_9;
  lStack_14 = lStack_10;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (jetPackCubeModel->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) goto code_?;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
code_?:
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
code_?:
    FUN_?();
code_?:
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar6,&pLStack_13);
  if (jetMode == (MVRuntimeDataVariable *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pMVar15 = (jetMode->fields).OnChange;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,MethodInfo__JetPackVisualization___Init_b__16_0_System__Object_,
             (MethodInfo *)0x0);
  pMVar15 = (MVRuntimeDataVariable_OnChangeDelegate *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pMVar15,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMVar15 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
    (jetMode->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
  }
  else {
    pMVar16 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar15->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar16 = pMVar15;
    }
    if (pMVar16 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (jetMode->fields).OnChange = pMVar16;
    pMVar16 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar15->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar16 = pMVar15;
    }
    if (pMVar16 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  if (iRam_? != 0) {
    uVar17 = (uint)((ulonglong)&(jetMode->fields).OnChange >> 0xc);
    uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
    do {
      uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
      puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
      LOCK();
      bVar21 = uVar19 == *puVar20;
      if (bVar21) {
        *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
      }
      UNLOCK();
    } while (!bVar21);
  }
  iVar22 = iRam_?;
  (this->fields)._.isInSpawner = isInSpawner;
  if (isInSpawner == 0) {
    pLVar23 = (this->fields).thrusters;
    if (pLVar23 == (List_1_UnityEngine_ParticleSystem_ *)0x0) goto code_?;
    if (iVar22 != 0) {
      uVar17 = (uint)((ulonglong)&pLStack_13 >> 0xc);
      uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
        puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
        LOCK();
        bVar21 = uVar19 == *puVar20;
        if (bVar21) {
          *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
        }
        UNLOCK();
      } while (!bVar21);
    }
    lStack_14 = (ulonglong)(uint)(pLVar23->fields)._version << 0x20;
    uStack_24 = 0;
    LStack_1._index = (undefined4)lStack_14;
    LStack_1._version = lStack_14._4_4_;
    LStack_1._current = (Object *)0x0;
    uStack_11 = 0;
    pLStack_12 = &LStack_1;
    pLStack_13 = pLVar23;
    LStack_1._list = (List_1_System_Object_ *)pLVar23;
    while (bVar25 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                             ), pOVar26 = LStack_1._current, bVar25 != 0) {
      if ((ParticleSystem *)LStack_1._current == (ParticleSystem *)0x0) goto code_?;
      pPStackX_18 = (ParticleSystem *)LStack_1._current;
      if (iRam_? != 0) {
        uVar17 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
        uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
        do {
          uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
          puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
          LOCK();
          bVar21 = uVar19 == *puVar20;
          if (bVar21) {
            *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
          }
          UNLOCK();
        } while (!bVar21);
      }
      pPStack_2 = (ParticleSystem *)LStack_1._current;
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar7;
      fVar27 = (float)(*pcRam_?)(&pPStack_2);
      (this->fields).originalMaxSize = fVar27;
      if ((ParticleSystem *)pOVar26 == (ParticleSystem *)0x0) goto code_?;
      pPStackX_18 = (ParticleSystem *)pOVar26;
      if (iRam_? != 0) {
        uVar17 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
        uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
        do {
          uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
          puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
          LOCK();
          bVar21 = uVar19 == *puVar20;
          if (bVar21) {
            *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
          }
          UNLOCK();
        } while (!bVar21);
      }
      pPStack_3 = (ParticleSystem *)pOVar26;
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar7;
      fVar27 = (float)(*pcRam_?)(&pPStack_3);
      (this->fields).originalMaxEmission = fVar27;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                ((ParticleSystem *)pOVar26,1,(MethodInfo *)0x0);
    }
    pOVar26 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                        ((jetMode->fields).value,(MethodInfo *)0x0);
    if (pOVar26 == (Object *)0x0) goto code_?;
    if ((pOVar26->klass->_0).element_class != (TypeInfo__MVJetPack__JetModeType->_0).element_class)
    {
      FUN_?(pOVar26);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    JetPackVisualization_OnJetModeChange(this,(uint)*(byte *)&pOVar26[1].klass,(MethodInfo *)0x0);
    obj = (this->fields).moving;
    if (obj == (AudioSource *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (obj->fields)._._._._.m_CachedPtr;
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
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6);
    pVVar28 = (this->fields).vehicleBlinker;
    pTVar29 = (this->fields).JetPackRoot;
    if ((pTVar29 == (Transform *)0x0) ||
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar29,(MethodInfo *)0x0),
       pMVar30 = 
       UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
       , this_01 == (GameObject *)0x0)) goto code_?;
    if ((
        UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    }
    pMVar31 = (MeshFilter__Array *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_4
                        (this_01,0,((pMVar30->field7_0x38).rgctx_data)->method);
    if (pVVar28 == (VehicleBlinker *)0x0) goto code_?;
    (pVVar28->fields)._.meshFilters = pMVar31;
    if (iRam_? != 0) {
      uVar17 = (uint)((ulonglong)&(pVVar28->fields)._.meshFilters >> 0xc);
      uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
        puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
        LOCK();
        bVar21 = uVar19 == *puVar20;
        if (bVar21) {
          *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
        }
        UNLOCK();
      } while (!bVar21);
    }
    pVVar28 = (this->fields).vehicleBlinker;
    if (pVVar28 == (VehicleBlinker *)0x0) goto code_?;
    (pVVar28->fields)._.visible = 1;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (this->fields)._._._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar6);
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
  }
  pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar29 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar29->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar29,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar6,&uStack_4);
    (this->fields).prevWorldPosition.x = (float)(undefined4)uStack_4;
    (this->fields).prevWorldPosition.y = (float)uStack_4._4_4_;
    (this->fields).prevWorldPosition.z = fStack_5;
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void JetPackPitch() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_JetPackPitch
               (JetPackVisualization *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_3._0_4_ = 0.0;
  auStack_3._4_4_ = 0.0;
  stack0xffffffffffffff40 = 0;
  pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar4,auStack_3);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar6 = _UNK_?;
  fVar7 = (float)auStack_3._4_4_ + (float)auStack_3._4_4_;
  fVar8 = (float)auStack_3._8_4_ + (float)auStack_3._8_4_;
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (float)auStack_3._0_4_ * ((float)auStack_3._0_4_ + (float)auStack_3._0_4_);
  fVar11 = fStack_12 * ((float)auStack_3._0_4_ + (float)auStack_3._0_4_);
  uVar13 = (pVVar9->forwardVector).x;
  uVar14 = (pVVar9->forwardVector).y;
  fVar15 = (pVVar9->forwardVector).z;
  fVar16 = (_UNK_? - ((float)auStack_3._8_4_ * fVar8 + (float)auStack_3._4_4_ * fVar7))
           * (float)uVar13 + ((float)auStack_3._0_4_ * fVar7 - fStack_12 * fVar8) * (float)uVar14 +
           (fStack_12 * fVar7 + (float)auStack_3._0_4_ * fVar8) * fVar15;
  fVar17 = (_UNK_? - ((float)auStack_3._8_4_ * fVar8 + fVar10)) * (float)uVar14 +
           (fStack_12 * fVar8 + (float)auStack_3._0_4_ * fVar7) * (float)uVar13 +
           ((float)auStack_3._4_4_ * fVar8 - fVar11) * fVar15;
  fVar15 = ((float)auStack_3._0_4_ * fVar8 - fStack_12 * fVar7) * (float)uVar13 +
           (fVar11 + (float)auStack_3._4_4_ * fVar8) * (float)uVar14 +
           (_UNK_? - ((float)auStack_3._4_4_ * fVar7 + fVar10)) * fVar15;
  uStack_18 = CONCAT44(fVar17,fVar16);
  fStack_19 = fVar15;
  fVar8 = (float)FUN_?(&uStack_18);
  if (_UNK_? < fVar8) {
    fVar15 = fVar15 / fVar8;
    uStack_18 = CONCAT44(fVar17 / fVar8,fVar16 / fVar8);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_18._0_4_ = (pVVar9->zeroVector).x;
    uStack_18._4_4_ = (pVVar9->zeroVector).y;
    fVar15 = (pVVar9->zeroVector).z;
  }
  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                     ((Vector3 *)auStack_3,&(this->fields).posDiff,in_R8);
  uVar5._0_4_ = pVVar20->x;
  uVar5._4_4_ = pVVar20->y;
  fVar8 = (this->fields).smoothPitchFactor;
  fVar7 = (this->fields).smoothMoveSpeed;
  fVar17 = (this->fields).pitchFactor;
  fVar10 = (float)uStack_18 * (float)(undefined4)uVar5;
  fVar16 = uStack_18._4_4_ * (float)uVar5._4_4_;
  fVar11 = pVVar20->z;
  pcVar2 = pcRam_?;
  uStack_18 = uVar5;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar21 = (float)(*pcRam_?)();
  fVar21 = fVar21 * (this->fields).pitchSpeedTime;
  if (fVar21 < 0.0) {
    fVar21 = 0.0;
  }
  else if (fVar6 < fVar21) {
    fVar21 = fVar6;
  }
  fVar22 = fVar21 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                    ._0_4_ * fVar21 * fVar21 + fVar21 * _UNK_? * fVar21;
  fVar21 = (float)((uint)(this->fields).pitchMax ^ _UNK_?);
  pTVar1 = (this->fields).JetPackRoot;
  fVar15 = (fVar6 - fVar22) * fVar8 +
           fVar22 * (fVar16 + fVar10 + fVar15 * fVar11) * fVar7 * fVar17;
  (this->fields).smoothPitchFactor = fVar15;
  if ((fVar21 <= fVar15) && (fVar6 = (this->fields).pitchMax, fVar21 = fVar15, fVar6 < fVar15)) {
    fVar21 = fVar6;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_18._0_4_ = (pVVar9->rightVector).x;
  uStack_18._4_4_ = (pVVar9->rightVector).y;
  fStack_19 = (pVVar9->rightVector).z;
  auStack_3._0_4_ = 0.0;
  auStack_3._4_4_ = 0.0;
  stack0xffffffffffffff40 = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(fVar21,&uStack_18,auStack_3);
  if (pTVar1 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fStack_23 = (float)auStack_3._0_4_;
  fStack_24 = (float)auStack_3._4_4_;
  fStack_25 = (float)auStack_3._8_4_;
  uStack_26 = fStack_12;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar4,&fStack_23);
  return;
}


/* Void JetPackRoll() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_JetPackRoll
               (JetPackVisualization *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_2._0_4_ = 0.0;
    auStack_2._4_4_ = 0.0;
    stack0xffffffffffffff40 = 0;
    pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3,auStack_2);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar6 = _UNK_?;
    fVar7 = (float)auStack_2._4_4_ + (float)auStack_2._4_4_;
    fVar8 = (float)auStack_2._8_4_ + (float)auStack_2._8_4_;
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar10 = (float)auStack_2._0_4_ * ((float)auStack_2._0_4_ + (float)auStack_2._0_4_);
    fVar11 = fStack_12 * ((float)auStack_2._0_4_ + (float)auStack_2._0_4_);
    uVar13 = (pVVar9->rightVector).x;
    uVar14 = (pVVar9->rightVector).y;
    fVar15 = (pVVar9->rightVector).z;
    fVar16 = (_UNK_? - ((float)auStack_2._8_4_ * fVar8 + (float)auStack_2._4_4_ * fVar7)
             ) * (float)uVar13 +
             ((float)auStack_2._0_4_ * fVar7 - fStack_12 * fVar8) * (float)uVar14 +
             (fStack_12 * fVar7 + (float)auStack_2._0_4_ * fVar8) * fVar15;
    fVar17 = (_UNK_? - ((float)auStack_2._8_4_ * fVar8 + fVar10)) * (float)uVar14 +
             (fStack_12 * fVar8 + (float)auStack_2._0_4_ * fVar7) * (float)uVar13 +
             ((float)auStack_2._4_4_ * fVar8 - fVar11) * fVar15;
    fVar15 = ((float)auStack_2._0_4_ * fVar8 - fStack_12 * fVar7) * (float)uVar13 +
             (fVar11 + (float)auStack_2._4_4_ * fVar8) * (float)uVar14 +
             (_UNK_? - ((float)auStack_2._4_4_ * fVar7 + fVar10)) * fVar15;
    uStack_18 = CONCAT44(fVar17,fVar16);
    fStack_19 = fVar15;
    fVar8 = (float)FUN_?(&uStack_18);
    if (_UNK_? < fVar8) {
      fVar15 = fVar15 / fVar8;
      uStack_18 = CONCAT44(fVar17 / fVar8,fVar16 / fVar8);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_18._0_4_ = (pVVar9->zeroVector).x;
      uStack_18._4_4_ = (pVVar9->zeroVector).y;
      fVar15 = (pVVar9->zeroVector).z;
    }
    pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                       ((Vector3 *)auStack_2,&(this->fields).posDiff,in_R8);
    uVar5._0_4_ = pVVar20->x;
    uVar5._4_4_ = pVVar20->y;
    fVar8 = (this->fields).smoothRollFactor;
    fVar7 = (this->fields).smoothMoveSpeed;
    fVar17 = (this->fields).pitchFactor;
    fVar10 = (float)uStack_18 * (float)(undefined4)uVar5;
    fVar16 = uStack_18._4_4_ * (float)uVar5._4_4_;
    fVar11 = pVVar20->z;
    pcVar4 = pcRam_?;
    uStack_18 = uVar5;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    fVar21 = (float)(*pcRam_?)();
    uVar22 = _UNK_?;
    fVar21 = fVar21 * (this->fields).pitchSpeedTime;
    if (fVar21 < 0.0) {
      fVar21 = 0.0;
    }
    else if (fVar6 < fVar21) {
      fVar21 = fVar6;
    }
    fVar21 = fVar21 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                      ._0_4_ * fVar21 * fVar21 + fVar21 * _UNK_? * fVar21;
    pTVar1 = (this->fields).JetPackRoot;
    (this->fields).smoothRollFactor =
         (fVar6 - fVar21) * fVar8 +
         fVar21 * (float)((uint)(fVar16 + fVar10 + fVar15 * fVar11) ^ _UNK_?) * fVar7 *
                  fVar17;
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_2._0_4_ = 0.0;
      auStack_2._4_4_ = 0.0;
      stack0xffffffffffffff40 = 0;
      pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,auStack_2);
      fVar15 = (this->fields).smoothRollFactor;
      fVar6 = (float)((uint)(this->fields).pitchMax ^ uVar22);
      if ((fVar6 <= fVar15) && (fVar8 = (this->fields).pitchMax, fVar6 = fVar15, fVar8 < fVar15)
         ) {
        fVar6 = fVar8;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_18._0_4_ = (pVVar9->forwardVector).x;
      uStack_18._4_4_ = (pVVar9->forwardVector).y;
      fStack_19 = (pVVar9->forwardVector).z;
      uStack_23 = 0;
      uStack_24 = 0;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(fVar6,&uStack_18,&uStack_23);
      fVar6 = (float)auStack_2._4_4_ * (float)uStack_24;
      fVar8 = (float)auStack_2._0_4_ * uStack_23._4_4_;
      fVar15 = (float)uStack_23 * (float)auStack_2._4_4_;
      fVar17 = (float)uStack_23 * (float)auStack_2._0_4_;
      fVar7 = (float)auStack_2._4_4_ * uStack_23._4_4_;
      auStack_2._4_4_ =
           (fStack_12 * uStack_23._4_4_ + (float)auStack_2._4_4_ * uStack_24._4_4_ +
           (float)uStack_23 * (float)auStack_2._8_4_) - (float)auStack_2._0_4_ * (float)uStack_24;
      auStack_2._0_4_ =
           ((float)uStack_23 * fStack_12 + (float)auStack_2._0_4_ * uStack_24._4_4_ + fVar6) -
           (float)auStack_2._8_4_ * uStack_23._4_4_;
      stack0xffffffffffffff40 =
           CONCAT44(((fStack_12 * uStack_24._4_4_ - fVar17) - fVar7) -
                    (float)auStack_2._8_4_ * (float)uStack_24,
                    (fStack_12 * (float)uStack_24 + (float)auStack_2._8_4_ * uStack_24._4_4_ +
                    fVar8) - fVar15);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,auStack_2);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnJetModeChange(MVJetPack+JetModeType) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_OnJetModeChange
               (JetPackVisualization *this,MVJetPack_JetModeType__Enum newMode,MethodInfo *method)

{
  uVar1 = (uint8_t)newMode;
  if ((this->fields).mode == uVar1) {
    (this->fields).mode = uVar1;
    return;
  }
  if ((this->fields).mode == 2) {
    JetPackVisualization_SetMaxSizeForThrusters
              (this,(this->fields).originalMaxSize,(this->fields).originalMaxEmission,
               (MethodInfo *)0x0);
  }
  if (uVar1 != 0) {
    if ((newMode & 0xff) != MVJetPack_JetModeType__Enum_On) {
      if ((newMode & 0xff) == MVJetPack_JetModeType__Enum_Overheating) {
        JetPackVisualization_SetMaxSizeForThrusters
                  (this,_UNK_?,_UNK_?,(MethodInfo *)0x0);
      }
      (this->fields).mode = uVar1;
      return;
    }
    JetPackVisualization_EnableThruster(this,1,(MethodInfo *)0x0);
    (this->fields).mode = uVar1;
    return;
  }
  JetPackVisualization_EnableThruster(this,0,(MethodInfo *)0x0);
  (this->fields).mode = 0;
  return;
}


/* Void SetMaxSizeForThrusters(Single, Single) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_SetMaxSizeForThrusters
               (JetPackVisualization *this,float maxSize,float maxEmission,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  apOStack_2[0] = (Object *)0x0;
  aLStack_3[0]._list = (List_1_System_Object_ *)(this->fields).thrusters;
  if ((List_1_UnityEngine_ParticleSystem_ *)aLStack_3[0]._list ==
      (List_1_UnityEngine_ParticleSystem_ *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
    uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_UnityEngine_ParticleSystem_ *)aLStack_3[0]._list)->fields)._version
               << 0x20);
  uStack_12 = 0;
  aLStack_3[0]._8_8_ = pLStack_11;
  aLStack_3[0]._current = (Object *)0x0;
  uStack_6 = 0;
  pLStack_11 = aLStack_3;
  while( true ) {
    bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (aLStack_3,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                      );
    pOVar14 = aLStack_3[0]._current;
    if (bVar13 == 0) {
      return;
    }
    if (aLStack_3[0]._current == (Object *)0x0) goto code_?;
    pOStackX_8 = aLStack_3[0]._current;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pOStackX_8 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pOStack_1 = aLStack_3[0]._current;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) break;
    pcRam_? = pcVar4;
    (*pcRam_?)(&pOStack_1,CONCAT44(in_XMM1_Db,maxSize));
    if (pOVar14 == (Object *)0x0) goto code_?;
    pOStackX_8 = pOVar14;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pOStackX_8 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    apOStack_2[0] = pOVar14;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
    goto code_?;
    pcRam_? = pcVar4;
    (*pcRam_?)(apOStack_2,CONCAT44(in_XMM2_Db,maxEmission));
  }
  uVar15 = func_?(&UNK_?);
  FUN_?(uVar15,0);
code_?:
  uVar15 = func_?(&UNK_?);
  FUN_?(uVar15,0);
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowOverHeatWarning() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_ShowOverHeatWarning
               (JetPackVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  if (fVar3 - (this->fields).lastOverHeatNotificationTime <= TypeRef__System__Activator__T._0_4_) {
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).lastOverHeatNotificationTime = fVar3;
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  ,8,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar2 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_01,8,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,2);
  key = (Object *)FUN_?(uRam_?,auStackX_18);
  auStackX_18[0] = 8;
  value = (Object *)FUN_?(TypeInfo__NotificationLifetime,auStackX_18);
  if (this_01 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_01,key,value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
    if (this_00 == (NotificationsManager *)0x0) goto code_?;
    NotificationsManager::NotificationsManager_InstantiateNotification
              (this_00,NotificationType__Enum_JetPackOverheating,
               (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_Update
               (JetPackVisualization *this,MethodInfo *method)

{
  JetPackVisualization_UpdateSpartialValues(this,(MethodInfo *)0x0);
  JetPackVisualization_JetPackPitch(this,(MethodInfo *)0x0);
  JetPackVisualization_JetPackRoll(this,(MethodInfo *)0x0);
  if (((this->fields).modeChanged != 0) || ((this->fields).mode == 2)) {
    (this->fields).modeChanged = 0;
  }
  return;
}


/* Void UpdateSpartialValues() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_UpdateSpartialValues
               (JetPackVisualization *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  uVar6 = (this->fields).prevWorldPosition.x;
  uVar7 = (this->fields).prevWorldPosition.y;
  fVar8 = (float)uStack_2 - (float)uVar6;
  fVar9 = uStack_2._4_4_ - (float)uVar7;
  fVar10 = (this->fields).prevWorldPosition.z;
  (this->fields).prevWorldPosition.x = (float)uStack_2;
  (this->fields).prevWorldPosition.y = uStack_2._4_4_;
  (this->fields).posDiff.x = fVar8;
  (this->fields).posDiff.y = fVar9;
  (this->fields).prevWorldPosition.z = fStack_3;
  (this->fields).posDiff.z = fStack_3 - fVar10;
  fVar10 = (float)FUN_?(&(this->fields).posDiff);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar8 = (float)(*pcRam_?)();
  fVar9 = (this->fields).smoothMoveSpeed;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar11 = (float)(*pcRam_?)();
  fVar11 = fVar11 * (this->fields).smoothMoveSpeedTime;
  if (fVar11 < 0.0) {
    fVar11 = 0.0;
  }
  else if (_UNK_? < fVar11) {
    fVar11 = _UNK_?;
  }
  fVar11 = fVar11 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                  ._0_4_ * fVar11 * fVar11 + fVar11 * _UNK_? * fVar11;
  (this->fields).smoothMoveSpeed = (_UNK_? - fVar11) * fVar9 + fVar11 * (fVar10 / fVar8);
  return;
}


/* Void <Init>b__16_0(Object) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization__Init_b__16_0
               (JetPackVisualization *this,Object *jetModeVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVJetPack__JetModeType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (jetModeVal == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((jetModeVal->klass->_0).element_class != (TypeInfo__MVJetPack__JetModeType->_0).element_class)
  {
    FUN_?(jetModeVal);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = *(uint8_t *)&jetModeVal[1].klass;
  if ((this->fields).mode != uVar2) {
    if ((this->fields).mode == 2) {
      JetPackVisualization_SetMaxSizeForThrusters
                (this,(this->fields).originalMaxSize,(this->fields).originalMaxEmission,
                 (MethodInfo *)0x0);
    }
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          JetPackVisualization_SetMaxSizeForThrusters
                    (this,_UNK_?,_UNK_?,(MethodInfo *)0x0);
        }
        (this->fields).mode = uVar2;
        return;
      }
      JetPackVisualization_EnableThruster(this,1,(MethodInfo *)0x0);
      (this->fields).mode = 1;
      return;
    }
    JetPackVisualization_EnableThruster(this,0,(MethodInfo *)0x0);
    (this->fields).mode = 0;
    return;
  }
  (this->fields).mode = uVar2;
  return;
}


/* JetPackVisualization() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization__ctor
               (JetPackVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).pitchMax = 60.0;
  (this->fields).pitchSpeedTime = 15.0;
  (this->fields).pitchFactor = 2.5;
  (this->fields).smoothMoveSpeedTime = 10.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).posDiff.x = (pVVar2->zeroVector).x;
  (this->fields).posDiff.y = fVar3;
  (this->fields).posDiff.z = fVar4;
  this_00 = (List_1_UnityEngine_ParticleSystem_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>)
  ;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).thrusters = this_00;
  if (bVar1) {
    uVar5 = (uint)((ulonglong)&(this->fields).thrusters >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar7 == *puVar8;
      if (bVar1) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).mode = 3;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__,0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (List_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._.lodGameObjects = this_01;
  if (bVar1) {
    uVar5 = (uint)((ulonglong)&(this->fields)._.lodGameObjects >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar7 == *puVar8;
      if (bVar1) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._.disableVisualizationDistance = 40.0;
  (this->fields)._.cullDistance = 145.0;
  if (bVar1) {
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

