
/* Void AddUseRequirement(UseRequirement) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_AddUseRequirement
               (UseInteractorVisualization *this,UseRequirement *useRequirement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_;
  pLVar3 = (this->fields).useRequirements;
  if (pLVar3 == (List_1_UseRequirement_ *)0x0) {
code_?:
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar5 = &(pLVar3->fields)._version;
  *piVar5 = *piVar5 + 1;
  pUVar6 = (pLVar3->fields)._items;
  if (pUVar6 == (UseRequirement__Array *)0x0) goto code_?;
  uVar7 = (pLVar3->fields)._size;
  if (uVar7 < (uint)pUVar6->max_length) {
    (pLVar3->fields)._size = uVar7 + 1;
    auStack_1._0_8_ = &UNK_?;
    FUN_?(pUVar6,(longlong)(int)uVar7,useRequirement);
  }
  else {
    auStack_1._0_8_ = &UNK_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddWithResize
              ((List_1_System_Object_ *)pLVar3,(Object *)useRequirement,
               pMVar2->klass->rgctx_data[0xe].method);
  }
  if ((this->fields).hasInputBlockingRequirement == 0) {
    if (useRequirement == (UseRequirement *)0x0) goto code_?;
    auStack_1._0_8_ = &UNK_?;
    cVar8 = (*(useRequirement->klass->vtable).get_IsInputBlocking.methodPtr)
                       (useRequirement,(useRequirement->klass->vtable).get_IsInputBlocking.method);
  }
  else {
    cVar8 = '\x01';
  }
  (this->fields).hasInputBlockingRequirement = cVar8 != '\0';
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).active = 0;
  (this->fields).dist = 1.3;
  pLVar3 = (this->fields).useRequirements;
  if (pLVar3 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pLStack_9 >> 0xc);
    uVar10 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar13 = uVar11 == *puVar12;
      if (bVar13) {
        *puVar12 = uVar11 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar13);
  }
  puStack_14 = (undefined1 *)((ulonglong)(uint)(pLVar3->fields)._version << 0x20);
  uStack_15 = 0;
  auStack_1._8_8_ = puStack_14;
  pOStack_16 = (Object *)0x0;
  uStack_17 = 0;
  puStack_18 = auStack_1;
  pLStack_9 = pLVar3;
  auStack_1._0_8_ = pLVar3;
  while (bVar19 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar19 != 0) {
    if (pOStack_16 == (Object *)0x0) goto code_?;
    cVar8 = (*(code *)pOStack_16->klass[1]._0.interopData)
                       (pOStack_16,pOStack_16->klass[1]._0.klass);
    if (cVar8 != '\0') {
      piVar5 = &(this->fields).active;
      *piVar5 = *piVar5 + 1;
    }
  }
  if ((this->fields).active == 1) {
    (this->fields).dist = 0.01;
  }
  bVar13 = (this->fields).active == 0;
  if (!bVar13) {
    (this->fields).spacing = (float)(int)(0x168 / (longlong)(this->fields).active);
    bVar13 = (this->fields).active == 0;
  }
  (this->fields)._HasUseRequirements_k__BackingField = !bVar13;
  fVar20 = 0.0;
  pLVar3 = (this->fields).useRequirements;
  if (pLVar3 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pLStack_9 >> 0xc);
    uVar10 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar13 = uVar11 == *puVar12;
      if (bVar13) {
        *puVar12 = uVar11 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar13);
  }
  puStack_14 = (undefined1 *)((ulonglong)(uint)(pLVar3->fields)._version << 0x20);
  uStack_15 = 0;
  auStack_1._8_8_ = puStack_14;
  pOStack_16 = (Object *)0x0;
  pLStack_9 = (List_1_UseRequirement_ *)0x0;
  puStack_14 = auStack_1;
  auStack_1._0_8_ = pLVar3;
  while (bVar19 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), pOVar21 = pOStack_16, bVar19 != 0) {
    if (pOStack_16 == (Object *)0x0) goto code_?;
    cVar8 = (*(code *)pOStack_16->klass[1]._0.interopData)
                       (pOStack_16,pOStack_16->klass[1]._0.klass);
    if (cVar8 != '\0') {
      pOVar22 = pOVar21->klass;
      uStack_17._0_4_ = (this->fields).pivot.x;
      uStack_17._4_4_ = (this->fields).pivot.y;
      puStack_18 = (undefined1 *)CONCAT44(puStack_18._4_4_,(this->fields).pivot.z);
      (*(code *)pOVar22[1]._0.fields)
                (pOVar21,&uStack_17,fVar20,(this->fields).dist,pOVar22[1]._0.events);
      fVar20 = fVar20 + (this->fields).spacing;
    }
  }
  if ((this->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization_SetupCulling(this,(MethodInfo *)0x0);
      goto code_?;
    }
    if ((this->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization_RemoveCulling(this,(MethodInfo *)0x0);
  }
code_?:
  bVar19 = (this->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar23 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar23 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar24 = func_?(&UNK_?);
    FUN_?(uVar24,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar23,bVar19);
  return;
}


/* Void CalculateScale() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_CalculateScale
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  fVar1 = (TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase - _UNK_?) /
          _UNK_?;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (_UNK_? < fVar1) {
    fVar1 = _UNK_?;
  }
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (_UNK_? < fVar1) {
    (this->fields).scale = _UNK_? + _UNK_? + _UNK_?;
    return;
  }
  (this->fields).scale = fVar1 + fVar1 + _UNK_?;
  return;
}


/* Void CalculateSpacing() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_CalculateSpacing
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).active = 0;
  (this->fields).dist = 1.3;
  pLVar1 = (this->fields).useRequirements;
  if (pLVar1 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pLStack_4 >> 0xc);
    uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  puStack_9 = (undefined1 *)((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
  uStack_10 = 0;
  auStack_11._8_8_ = puStack_9;
  pOStack_12 = (Object *)0x0;
  uStack_13 = 0;
  puStack_14 = auStack_11;
  pLStack_4 = pLVar1;
  auStack_11._0_8_ = pLVar1;
  while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)auStack_11,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           ), bVar15 != 0) {
    if (pOStack_12 == (Object *)0x0) goto code_?;
    cVar16 = (*(code *)pOStack_12->klass[1]._0.interopData)(pOStack_12,pOStack_12->klass[1]._0.klass)
    ;
    if (cVar16 != '\0') {
      piVar17 = &(this->fields).active;
      *piVar17 = *piVar17 + 1;
    }
  }
  if ((this->fields).active == 1) {
    (this->fields).dist = 0.01;
  }
  bVar8 = (this->fields).active == 0;
  if (!bVar8) {
    (this->fields).spacing = (float)(int)(0x168 / (longlong)(this->fields).active);
    bVar8 = (this->fields).active == 0;
  }
  (this->fields)._HasUseRequirements_k__BackingField = !bVar8;
  fVar18 = 0.0;
  pLVar1 = (this->fields).useRequirements;
  if (pLVar1 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pLStack_4 >> 0xc);
    uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  puStack_9 = (undefined1 *)((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
  uStack_10 = 0;
  auStack_11._8_8_ = puStack_9;
  pOStack_12 = (Object *)0x0;
  pLStack_4 = (List_1_UseRequirement_ *)0x0;
  puStack_9 = auStack_11;
  auStack_11._0_8_ = pLVar1;
  while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)auStack_11,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           ), pOVar19 = pOStack_12, bVar15 != 0) {
    if (pOStack_12 == (Object *)0x0) goto code_?;
    cVar16 = (*(code *)pOStack_12->klass[1]._0.interopData)(pOStack_12,pOStack_12->klass[1]._0.klass)
    ;
    if (cVar16 != '\0') {
      pOVar20 = pOVar19->klass;
      uStack_13._0_4_ = (this->fields).pivot.x;
      uStack_13._4_4_ = (this->fields).pivot.y;
      puStack_14 = (undefined1 *)CONCAT44(puStack_14._4_4_,(this->fields).pivot.z);
      (*(code *)pOVar20[1]._0.fields)
                (pOVar19,&uStack_13,fVar18,(this->fields).dist,pOVar20[1]._0.events);
      fVar18 = fVar18 + (this->fields).spacing;
    }
  }
  if ((this->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization_SetupCulling(this,(MethodInfo *)0x0);
      goto code_?;
    }
    if ((this->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization_RemoveCulling(this,(MethodInfo *)0x0);
  }
code_?:
  bVar15 = (this->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar21 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar21 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar22 = func_?(&UNK_?);
    FUN_?(uVar22,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar21,bVar15);
  return;
}


/* Void ChangeLOD(Single) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_ChangeLOD
               (UseInteractorVisualization *this,float distance,MethodInfo *method)

{
  bVar1 = (this->fields).visible;
  if (distance < _UNK_?) {
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<float>);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__UseInteractorVisualization___Show_b__31_0_float_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this == (UseInteractorVisualization *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar3);
      fVar5 = (this->fields).scale;
      pAVar6 = (Action_1_Single_ *)FUN_?(TypeInfo__System__Action<float>);
      FUN_?(pAVar6,this);
      pIVar7 = pTween::pTween_To(_UNK_?,0.0,fVar5,pAVar6,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                ((MonoBehaviour *)this,pIVar7,(MethodInfo *)0x0);
      (this->fields).visible = 1;
      return;
    }
  }
  else if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<float>);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__UseInteractorVisualization___Hide_b__32_0_float_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this == (UseInteractorVisualization *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar3 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar3);
    fVar5 = (this->fields).scale;
    pAVar6 = (Action_1_Single_ *)FUN_?(TypeInfo__System__Action<float>);
    FUN_?(pAVar6,this);
    pIVar7 = pTween::pTween_To(_UNK_?,fVar5,0.0,pAVar6,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              ((MonoBehaviour *)this,pIVar7,(MethodInfo *)0x0);
    (this->fields).visible = 0;
  }
  return;
}


/* Void ChangeUseRequirements(Func`2[UseRequirement,Boolean], Func`2[UseRequirement,Boolean]) */

void Assembly-CSharp.dll::UseInteractorVisualization::
     UseInteractorVisualization_ChangeUseRequirements
               (UseInteractorVisualization *this,
               Func_2_UseRequirement_Boolean_ *includeUseRequirementInUpdate,
               Func_2_UseRequirement_Boolean_ *updateRequirement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).useRequirements;
  if ((List_1_UseRequirement_ *)LStack_1._list == (List_1_UseRequirement_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_UseRequirement_ *)LStack_1._list)->fields)._version <<
               0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    do {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_1,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      pOVar11 = LStack_1._current;
      if (bVar10 == 0) {
        return;
      }
      if (includeUseRequirementInUpdate == (Func_2_UseRequirement_Boolean_ *)0x0)
      goto code_?;
      cVar12 = (*(includeUseRequirementInUpdate->fields)._._.invoke_impl)
                        ((includeUseRequirementInUpdate->fields)._._.method_code,LStack_1._current,
                         (includeUseRequirementInUpdate->fields)._._.method);
    } while (cVar12 == '\0');
    if (updateRequirement == (Func_2_UseRequirement_Boolean_ *)0x0) break;
    (*(updateRequirement->fields)._._.invoke_impl)
              ((updateRequirement->fields)._._.method_code,pOVar11,
               (updateRequirement->fields)._._.method);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CheckCullingSetup() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_CheckCullingSetup
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if ((this->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CullingSubscriberBase,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__UseInteractorVisualization__OnStateChanged_UnityEngine__CullingGroupEvent_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                 FUN_?(
                              TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                              );
      FUN_?(callback,this);
      pCVar1 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
      CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar1,callback,(MethodInfo *)0x0);
      if (pCVar1 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_set_Radius
                  (pCVar1,TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        (pCVar1->fields)._DistanceBandIndex_k__BackingField = 1;
        (this->fields).cullingSubscriberBase = pCVar1;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
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
        pMVar7 = (this->fields).wo;
        if (pMVar7 != (MVWorldObjectClient *)0x0) {
          pUVar8 = (pMVar7->fields).PositionChanged;
          pUVar9 = (UnityAction_2_System_Object_System_Object_ *)
                   FUN_?(
                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar9,(Object *)this,
                     MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pUVar8,(Delegate *)pUVar9,(MethodInfo *)0x0);
          pUVar11 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          if (pDVar10 == (Delegate *)0x0) {
            (pMVar7->fields).PositionChanged =
                 (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
          }
          else {
            pUVar8 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                     FUN_?(pDVar10,
                                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                  );
            if (pUVar8 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
              FUN_?(pDVar10,pUVar11);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            (pMVar7->fields).PositionChanged = pUVar8;
            pUVar11 = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            lVar13 = FUN_?(pDVar10,
                                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                  );
            if (lVar13 == 0) {
              FUN_?(pDVar10,pUVar11);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&(pMVar7->fields).PositionChanged >> 0xc);
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
          pMVar7 = (this->fields).wo;
          if (pMVar7 != (MVWorldObjectClient *)0x0) {
            puVar14 = (undefined8 *)
                      (*(pMVar7->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_15);
            VStack_16._0_8_ = *puVar14;
            VStack_16.z = *(float *)(puVar14 + 1);
            UseInteractorVisualization_UpdatePosition(this,&VStack_16,(MethodInfo *)0x0);
            return;
          }
        }
      }
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((this->fields)._HasUseRequirements_k__BackingField != 0) {
      return;
    }
  }
  if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    if ((this->fields).wo != (MVWorldObjectClient *)0x0) {
      pMVar7 = (this->fields).wo;
      pUVar8 = (pMVar7->fields).PositionChanged;
      pUVar9 = (UnityAction_2_System_Object_System_Object_ *)
               FUN_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar9,(Object *)this,
                 MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar8,(Delegate *)pUVar9,(MethodInfo *)0x0);
      pUVar11 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pDVar10 == (Delegate *)0x0) {
        (pMVar7->fields).PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar8 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                 FUN_?(pDVar10,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        if (pUVar8 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          FUN_?(pDVar10,pUVar11);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        (pMVar7->fields).PositionChanged = pUVar8;
        pUVar11 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        lVar13 = FUN_?();
        if (lVar13 == 0) {
          FUN_?(pDVar10,pUVar11);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pMVar7->fields).PositionChanged >> 0xc);
        lVar13 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar13 + 0xADDR);
          puVar6 = (ulonglong *)(lVar13 + 0xADDR);
          LOCK();
          bVar2 = uVar4 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
    }
    pCVar1 = (this->fields).cullingSubscriberBase;
    if (pCVar1 == (CullingSubscriberBase *)0x0) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar1,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      lVar13 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar13 + 0xADDR);
        puVar6 = (ulonglong *)(lVar13 + 0xADDR);
        LOCK();
        bVar2 = uVar4 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pvVar17 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar17 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pcVar12 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar18 = func_?(&UNK_?);
    FUN_?(uVar18,0);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pcRam_? = pcVar12;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar17,0);
  return;
}


/* Void DestroyRequirementObjects(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UseInteractorVisualization::
     UseInteractorVisualization_DestroyRequirementObjects
               (UseInteractorVisualization *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c___DestroyRequirementObjects_b__42_0_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass42_0___DestroyRequirementObjects_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass42_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass42_0);
  if (pOVar1 != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    pOVar1[1].klass = (Object__Class *)data;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
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
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0;
    if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) {
      if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
      this_00 = (Func_2_UseRequirement_Boolean_ *)
                FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                ((Predicate_1_Object_ *)this_00,(Object *)object,
                 MethodInfo__UseInteractorVisualization____c___DestroyRequirementObjects_b__42_0_UseRequirement_
                 ,(MethodInfo *)0x0);
      TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0 = this_00;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)
                       &TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0 >> 0xc);
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
    }
    this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,pOVar1,
               MethodInfo__UseInteractorVisualization____c__DisplayClass42_0___DestroyRequirementObjects_b__1_UseRequirement_
               ,(MethodInfo *)0x0);
    if (this != (UseInteractorVisualization *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                      ,this_00,this_01,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      LStack_7._list = (List_1_System_Object_ *)(this->fields).useRequirements;
      if ((List_1_UseRequirement_ *)LStack_7._list == (List_1_UseRequirement_ *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_9 >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar6;
          LOCK();
          uVar5 = *puVar6;
          if (uVar10 == uVar5) {
            *puVar6 = uVar10 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar5);
      }
      puStack_11 = (undefined1 *)
                   ((ulonglong)(uint)(((List_1_UseRequirement_ *)LStack_7._list)->fields)._version
                   << 0x20);
      puStack_12 = (undefined *)0x0;
      LStack_7._8_8_ = puStack_11;
      LStack_7._current = (Object *)0x0;
      uStack_9 = 0;
      puStack_11 = (undefined1 *)&LStack_7;
      while( true ) {
        do {
          bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_7,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            );
          pOVar1 = LStack_7._current;
          if (bVar13 == 0) {
            return;
          }
          if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) goto code_?;
          cVar14 = (*(this_00->fields)._._.invoke_impl)
                            ((this_00->fields)._._.method_code,LStack_7._current,
                             (this_00->fields)._._.method);
        } while (cVar14 == '\0');
        if (this_01 == (Predicate_1_Object_ *)0x0) break;
        (*(this_01->fields)._._.invoke_impl)
                  ((this_01->fields)._._.method_code,pOVar1,(this_01->fields)._._.method);
      }
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_Disable
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization____c___Disable_b__33_0_UseRequirement_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization____c___Disable_b__33_1_UseRequirement_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__33_0;
  if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar1 = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    this_00 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_00,(Object *)pUVar1,
               MethodInfo__UseInteractorVisualization____c___Disable_b__33_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__33_0 = this_00;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__33_0 >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__33_1;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar1 = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)pUVar1,
               MethodInfo__UseInteractorVisualization____c___Disable_b__33_1_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__33_1 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__33_1 >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (this == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,this_00,this_01,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_8._list = (List_1_System_Object_ *)(this->fields).useRequirements;
  if ((List_1_UseRequirement_ *)LStack_8._list == (List_1_UseRequirement_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&uStack_9 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar5;
      LOCK();
      uVar4 = *puVar5;
      if (uVar10 == uVar4) {
        *puVar5 = uVar10 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar4);
  }
  puStack_11 = (undefined1 *)
               ((ulonglong)(uint)(((List_1_UseRequirement_ *)LStack_8._list)->fields)._version <<
               0x20);
  puStack_12 = (undefined *)0x0;
  LStack_8._8_8_ = puStack_11;
  LStack_8._current = (Object *)0x0;
  uStack_9 = 0;
  puStack_11 = (undefined1 *)&LStack_8;
  while( true ) {
    do {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      pOVar14 = LStack_8._current;
      if (bVar13 == 0) {
        return;
      }
      if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) goto code_?;
      cVar15 = (*(this_00->fields)._._.invoke_impl)
                        ((this_00->fields)._._.method_code,LStack_8._current,
                         (this_00->fields)._._.method);
    } while (cVar15 == '\0');
    if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) break;
    (*(this_01->fields)._._.invoke_impl)
              ((this_01->fields)._._.method_code,pOVar14,(this_01->fields)._._.method);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* UseGUIResult EvaluateUsability() */

UseGUIResult__Enum
Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
          (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).useRequirements;
  if (pLVar1 == (List_1_UseRequirement_ *)0x0) {
    FUN_?();
  }
  else {
    if ((pLVar1->fields)._size == 0) {
      return UseGUIResult__Enum_NoCost;
    }
    UVar2 = 0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_9 = 0;
    LStack_10._8_8_ = pLStack_8;
    LStack_10._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_10;
    LStack_10._list = (List_1_System_Object_ *)pLVar1;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_10,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      if (bVar11 == 0) {
        return UVar2;
      }
      if (LStack_10._current == (Object *)0x0) break;
      UVar12 = (*(code *)(LStack_10._current)->klass[1]._0.image)
                        (LStack_10._current,(LStack_10._current)->klass[1]._0.gc_desc);
      UVar2 = UVar2 | UVar12;
    }
  }
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  UVar2 = (*pcVar13)();
  return UVar2;
}


/* ShowUseOption GetShowOptions() */

ShowUseOption__Enum
Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_GetShowOptions
          (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).useRequirements;
  if (pLVar1 == (List_1_UseRequirement_ *)0x0) {
    FUN_?();
  }
  else {
    if ((pLVar1->fields)._size == 0) {
      return ShowUseOption__Enum_Normal;
    }
    SVar2 = ShowUseOption__Enum_Normal;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_9 = 0;
    LStack_10._8_8_ = pLStack_8;
    LStack_10._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_10;
    LStack_10._list = (List_1_System_Object_ *)pLVar1;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_10,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      if (bVar11 == 0) {
        return SVar2;
      }
      if (LStack_10._current == (Object *)0x0) break;
      SVar12 = (*(code *)(LStack_10._current)->klass[1]._0.element_class)
                        (LStack_10._current,(LStack_10._current)->klass[1]._0.castClass);
      SVar2 = SVar2 | SVar12;
    }
  }
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  SVar2 = (*pcVar13)();
  return SVar2;
}


/* Void Hide() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_Hide
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<float>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization___Hide_b__32_0_float_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar2);
  startValue = (this->fields).scale;
  callback = (Action_1_Single_ *)FUN_?(TypeInfo__System__Action<float>);
  FUN_?(callback,this);
  routine = pTween::pTween_To(_UNK_?,startValue,0.0,callback,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  (this->fields).visible = 0;
  return;
}


/* Void Initialize(Single, MVWorldObjectClient) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_Initialize
               (UseInteractorVisualization *this,float yOffset,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).wo = wo;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).wo >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).pivot.y = yOffset;
  UseInteractorVisualization_CalculateSpacing(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  fVar6 = (TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase - _UNK_?) /
          _UNK_?;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  else if (_UNK_? < fVar6) {
    fVar6 = _UNK_?;
  }
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  else if (_UNK_? < fVar6) {
    fVar6 = _UNK_?;
  }
  (this->fields).scale = fVar6 + fVar6 + _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pvVar8 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar8,0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_OnDestroy
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    if ((this->fields).wo != (MVWorldObjectClient *)0x0) {
      pMVar1 = (this->fields).wo;
      pUVar2 = (pMVar1->fields).PositionChanged;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      pUVar4 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                 FUN_?(pDVar3,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          FUN_?(pDVar3,pUVar4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (pMVar1->fields).PositionChanged = pUVar2;
        pUVar4 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        lVar6 = FUN_?();
        if (lVar6 == 0) {
          FUN_?(pDVar3,pUVar4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(pMVar1->fields).PositionChanged >> 0xc);
        lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar9 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 == (CullingSubscriberBase *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    bVar10 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar10) {
      uVar7 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar9 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar11 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar11,0);
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_OnDisable
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass34_0___OnDisable_b__0_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass34_0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass34_0);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar1[1].klass = (Object__Class *)0x0;
  *(undefined4 *)&pOVar1[1].monitor = 0;
  this_00 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_00,(Object *)0x0,
             MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
             (MethodInfo *)0x0);
  this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_01,pOVar1,
             MethodInfo__UseInteractorVisualization____c__DisplayClass34_0___OnDisable_b__0_UseRequirement_
             ,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,this_00,this_01,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_3._list = (List_1_System_Object_ *)(this->fields).useRequirements;
  if ((List_1_UseRequirement_ *)LStack_3._list == (List_1_UseRequirement_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  puStack_9 = (undefined1 *)
               ((ulonglong)(uint)(((List_1_UseRequirement_ *)LStack_3._list)->fields)._version <<
               0x20);
  puStack_10 = (undefined *)0x0;
  LStack_3._8_8_ = puStack_9;
  LStack_3._current = (Object *)0x0;
  uStack_5 = 0;
  puStack_9 = (undefined1 *)&LStack_3;
  while( true ) {
    do {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_3,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      pOVar1 = LStack_3._current;
      if (bVar11 == 0) {
        return;
      }
      if (this_00 == (Predicate_1_Object_ *)0x0) goto code_?;
      cVar12 = (*(this_00->fields)._._.invoke_impl)
                        ((this_00->fields)._._.method_code,LStack_3._current,
                         (this_00->fields)._._.method);
    } while (cVar12 == '\0');
    if (this_01 == (Predicate_1_Object_ *)0x0) break;
    (*(this_01->fields)._._.invoke_impl)
              ((this_01->fields)._._.method_code,pOVar1,(this_01->fields)._._.method);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_OnEnable
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass35_0___OnEnable_b__0_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass35_0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass35_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  object[1].klass = (Object__Class *)0x0;
  *(undefined4 *)&object[1].monitor = 0;
  this_00 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_00,(Object *)0x0,
             MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
             (MethodInfo *)0x0);
  this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_01,object,
             MethodInfo__UseInteractorVisualization____c__DisplayClass35_0___OnEnable_b__0_UseRequirement_
             ,(MethodInfo *)0x0);
  UseInteractorVisualization_ChangeUseRequirements
            (this,(Func_2_UseRequirement_Boolean_ *)this_00,
             (Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<float>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization___Show_b__31_0_float_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar2);
  endValue = (this->fields).scale;
  callback = (Action_1_Single_ *)FUN_?(TypeInfo__System__Action<float>);
  FUN_?(callback,this);
  routine = pTween::pTween_To(_UNK_?,0.0,endValue,callback,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  (this->fields).visible = 1;
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_OnPositionChanged
               (UseInteractorVisualization *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if (positionChangedEventArgs != (PositionChangedEventArgs *)0x0) {
    aVStack_1[0].x = (positionChangedEventArgs->fields).NewPos.x;
    aVStack_1[0].y = (positionChangedEventArgs->fields).NewPos.y;
    aVStack_1[0].z = (positionChangedEventArgs->fields).NewPos.z;
    UseInteractorVisualization_UpdatePosition(this,aVStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_OnStateChanged
               (UseInteractorVisualization *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass21_0___OnStateChanged_b__0_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass21_0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass21_0);
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (object != (Object *)0x0) {
      bVar2 = CullingApiWrapper::CullingApiWrapper_Visible
                        (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
      *(bool *)&object[1].klass = bVar2;
      this_00 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
                 (MethodInfo *)0x0);
      this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                (this_01,object,
                 MethodInfo__UseInteractorVisualization____c__DisplayClass21_0___OnStateChanged_b__0_UseRequirement_
                 ,(MethodInfo *)0x0);
      UseInteractorVisualization_ChangeUseRequirements
                (this,(Func_2_UseRequirement_Boolean_ *)this_00,
                 (Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
      uVar3 = *(undefined1 *)&object[1].klass;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                      ,uVar3,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this == (UseInteractorVisualization *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar5 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar5,uVar3);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PayUseCost() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_PayUseCost
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_1_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_0;
  if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar1 = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    this_00 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_00,(Object *)pUVar1,
               MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_0 = this_00;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_0 >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_1;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar1 = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)pUVar1,
               MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_1_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_1 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_1 >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (this == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,this_00,this_01,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_8._list = (List_1_System_Object_ *)(this->fields).useRequirements;
  if ((List_1_UseRequirement_ *)LStack_8._list == (List_1_UseRequirement_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&uStack_9 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar5;
      LOCK();
      uVar4 = *puVar5;
      if (uVar10 == uVar4) {
        *puVar5 = uVar10 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar4);
  }
  puStack_11 = (undefined1 *)
               ((ulonglong)(uint)(((List_1_UseRequirement_ *)LStack_8._list)->fields)._version <<
               0x20);
  puStack_12 = (undefined *)0x0;
  LStack_8._8_8_ = puStack_11;
  LStack_8._current = (Object *)0x0;
  uStack_9 = 0;
  puStack_11 = (undefined1 *)&LStack_8;
  while( true ) {
    do {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      pOVar14 = LStack_8._current;
      if (bVar13 == 0) {
        return;
      }
      if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) goto code_?;
      cVar15 = (*(this_00->fields)._._.invoke_impl)
                        ((this_00->fields)._._.method_code,LStack_8._current,
                         (this_00->fields)._._.method);
    } while (cVar15 == '\0');
    if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) break;
    (*(this_01->fields)._._.invoke_impl)
              ((this_01->fields)._._.method_code,pOVar14,(this_01->fields)._._.method);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RemoveCulling() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_RemoveCulling
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    if ((this->fields).wo != (MVWorldObjectClient *)0x0) {
      pMVar1 = (this->fields).wo;
      pUVar2 = (pMVar1->fields).PositionChanged;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      pUVar4 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                 FUN_?(pDVar3,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          FUN_?(pDVar3,pUVar4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (pMVar1->fields).PositionChanged = pUVar2;
        pUVar4 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        lVar6 = FUN_?();
        if (lVar6 == 0) {
          FUN_?(pDVar3,pUVar4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(pMVar1->fields).PositionChanged >> 0xc);
        lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar9 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 == (CullingSubscriberBase *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    bVar10 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar10) {
      uVar7 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar9 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar11 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar11,0);
  return;
}


/* Boolean SetUseRequirementActive(UseRequirement, Boolean) */

bool Assembly-CSharp.dll::UseInteractorVisualization::
     UseInteractorVisualization_SetUseRequirementActive
               (UseRequirement *useRequirement,bool b,MethodInfo *method)

{
  if (useRequirement != (UseRequirement *)0x0) {
    this = (GameObject *)
           (*(useRequirement->klass->vtable).__unknown_10.methodPtr)
                     (useRequirement,(useRequirement->klass->vtable).__unknown_10.method);
    if (this != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this,b,(MethodInfo *)0x0);
      return 1;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean SetUseRequirementScale(UseRequirement, Vector3) */

bool Assembly-CSharp.dll::UseInteractorVisualization::
     UseInteractorVisualization_SetUseRequirementScale
               (UseRequirement *useRequirement,Vector3 *scale,MethodInfo *method)

{
  if (useRequirement != (UseRequirement *)0x0) {
    fStack_1 = scale->z;
    uStack_2._0_4_ = scale->x;
    uStack_2._4_4_ = scale->y;
    (*(useRequirement->klass->vtable).__unknown_9.methodPtr)
              (uStack_2,&uStack_2,(useRequirement->klass->vtable).__unknown_9.method);
    return 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_SetupCulling
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization__OnStateChanged_UnityEngine__CullingGroupEvent_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
             FUN_?(
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                          );
  FUN_?(callback,this);
  this_00 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_00,callback,(MethodInfo *)0x0);
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_set_Radius
              (this_00,TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this_00->fields)._DistanceBandIndex_k__BackingField = 1;
    (this->fields).cullingSubscriberBase = this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pMVar6 = (this->fields).wo;
    if (pMVar6 != (MVWorldObjectClient *)0x0) {
      pUVar7 = (pMVar6->fields).PositionChanged;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar7,(Delegate *)this_01,(MethodInfo *)0x0);
      pUVar9 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pDVar8 == (Delegate *)0x0) {
        (pMVar6->fields).PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                 FUN_?(pDVar8,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        if (pUVar7 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          FUN_?(pDVar8,pUVar9);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pMVar6->fields).PositionChanged = pUVar7;
        pUVar9 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        lVar11 = FUN_?(pDVar8,
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
        if (lVar11 == 0) {
          FUN_?(pDVar8,pUVar9);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar6->fields).PositionChanged >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pMVar6 = (this->fields).wo;
      if (pMVar6 != (MVWorldObjectClient *)0x0) {
        puVar12 = (undefined8 *)(*(pMVar6->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_13);
        VStack_14._0_8_ = *puVar12;
        VStack_14.z = *(float *)(puVar12 + 1);
        UseInteractorVisualization_UpdatePosition(this,&VStack_14,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_Show
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<float>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization___Show_b__31_0_float_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar2);
  endValue = (this->fields).scale;
  callback = (Action_1_Single_ *)FUN_?(TypeInfo__System__Action<float>);
  FUN_?(callback,this);
  routine = pTween::pTween_To(_UNK_?,0.0,endValue,callback,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  (this->fields).visible = 1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_Update
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->upVector).x;
  uVar2._4_4_ = (pVVar1->upVector).y;
  fVar3 = (pVVar1->upVector).z;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  fVar5 = (float)(*pcRam_?)();
  if (this_00 != (Transform *)0x0) {
    VStack_6._0_8_ = uVar2;
    VStack_6.z = fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (this_00,&VStack_6,fVar5 * _UNK_?,Space__Enum_Self,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_6.x = 0.0;
    VStack_6.y = 0.0;
    VStack_6.z = 0.0;
    if ((this_00->fields)._._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)();
    pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (((pSVar7 != (SpawnRoleDataMediator *)0x0) &&
        (pSVar8 = (pSVar7->fields).position,
        pSVar8 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0)) &&
       (pSVar9 = (pSVar8->fields)._.subscribableVariable,
       pSVar9 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      uStack_10._0_4_ = (pSVar9->fields)._.value.x;
      uStack_10._4_4_ = (pSVar9->fields)._.value.y;
      VStack_6.z = VStack_6.z - (pSVar9->fields)._.value.z;
      VStack_6.y = VStack_6.y - (float)uStack_10._4_4_;
      VStack_6.x = VStack_6.x - (float)(undefined4)uStack_10;
      fVar3 = (float)FUN_?(&VStack_6);
      bVar11 = (this->fields).visible;
      if (fVar3 < _UNK_?) {
        if (bVar11 == 0) {
          UseInteractorVisualization_Show(this,(MethodInfo *)0x0);
        }
      }
      else if (bVar11 != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<float>);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__UseInteractorVisualization___Hide_b__32_0_float_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this == (UseInteractorVisualization *)0x0) goto code_?;
        pvVar12 = (this->fields)._._._._.m_CachedPtr;
        if (pvVar12 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
code_?:
          FUN_?();
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar12);
        fVar3 = (this->fields).scale;
        callback = (Action_1_Single_ *)FUN_?(TypeInfo__System__Action<float>);
        FUN_?(callback,this);
        routine = pTween::pTween_To(_UNK_?,fVar3,0.0,callback,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        (this->fields).visible = 0;
      }
      if ((this->fields).hasInputBlockingRequirement != 0) {
        aLStack_13[0]._list = (List_1_System_Object_ *)(this->fields).useRequirements;
        if ((List_1_UseRequirement_ *)aLStack_13[0]._list == (List_1_UseRequirement_ *)0x0)
        goto code_?;
        if (iRam_? != 0) {
          uVar14 = (uint)((ulonglong)&uStack_10 >> 0xc);
          uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
          do {
            uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
            puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
            LOCK();
            bVar18 = uVar16 == *puVar17;
            if (bVar18) {
              *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
            }
            UNLOCK();
          } while (!bVar18);
        }
        pLStack_19 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)
                      (uint)(((List_1_UseRequirement_ *)aLStack_13[0]._list)->fields)._version <<
                     0x20);
        uStack_20 = 0;
        aLStack_13[0]._8_8_ = pLStack_19;
        aLStack_13[0]._current = (Object *)0x0;
        uStack_10 = 0;
        pLStack_19 = aLStack_13;
        while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                       Object]::List_1_T_Enumerator_System_Object__MoveNext
                                 (aLStack_13,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                                 ), pOVar21 = aLStack_13[0]._current, bVar11 != 0) {
          if (aLStack_13[0]._current == (Object *)0x0) goto code_?;
          cVar22 = (*(code *)(aLStack_13[0]._current)->klass[1].interfaceOffsets)
                             (aLStack_13[0]._current,
                              (aLStack_13[0]._current)->klass[1].static_fields);
          if ((cVar22 != '\0') &&
             (pOVar23 = pOVar21->klass,
             cVar22 = (*(code *)pOVar23[1].rgctx_data)(pOVar21,pOVar23[1]._1.typeHierarchy),
             cVar22 != '\0')) {
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateData(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_UpdateData
               (UseInteractorVisualization *this,Dictionary_2_System_Object_System_Object_ *data,
               int32_t ownerID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_8_ = &UNK_?;
  pOVar2 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (pOVar2 == (Object *)0x0) {
code_?:
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = iRam_? != 0;
  pOVar2[1].klass = (Object__Class *)data;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  *(int32_t *)&pOVar2[1].monitor = ownerID;
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
  }
  this_00 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
  if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      auStack_1._0_8_ = &UNK_?;
      FUN_?();
    }
    object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    auStack_1._0_8_ = &UNK_?;
    this_00 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    auStack_1._0_8_ = &UNK_?;
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_00,(Object *)object,
               MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_00;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  auStack_1._0_8_ = &UNK_?;
  this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  auStack_1._0_8_ = &UNK_?;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_01,pOVar2,
             MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (this == (UseInteractorVisualization *)0x0) goto code_?;
  auStack_1._0_8_ = &UNK_?;
  UseInteractorVisualization_ChangeUseRequirements
            (this,this_00,(Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).active = 0;
  (this->fields).dist = 1.3;
  pLVar9 = (this->fields).useRequirements;
  if (pLVar9 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pLStack_10 >> 0xc);
    uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar11 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar11 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  puStack_12 = (undefined1 *)((ulonglong)(uint)(pLVar9->fields)._version << 0x20);
  uStack_13 = 0;
  auStack_1._8_8_ = puStack_12;
  pOStack_14 = (Object *)0x0;
  uStack_15 = 0;
  puStack_16 = auStack_1;
  pLStack_10 = pLVar9;
  auStack_1._0_8_ = pLVar9;
  while (bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           ), bVar17 != 0) {
    if (pOStack_14 == (Object *)0x0) goto code_?;
    cVar18 = (*(code *)pOStack_14->klass[1]._0.interopData)(pOStack_14,pOStack_14->klass[1]._0.klass)
    ;
    if (cVar18 != '\0') {
      piVar19 = &(this->fields).active;
      *piVar19 = *piVar19 + 1;
    }
  }
  if ((this->fields).active == 1) {
    (this->fields).dist = 0.01;
  }
  bVar4 = (this->fields).active == 0;
  if (!bVar4) {
    (this->fields).spacing = (float)(int)(0x168 / (longlong)(this->fields).active);
    bVar4 = (this->fields).active == 0;
  }
  (this->fields)._HasUseRequirements_k__BackingField = !bVar4;
  fVar20 = 0.0;
  pLVar9 = (this->fields).useRequirements;
  if (pLVar9 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pLStack_10 >> 0xc);
    uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar11 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar11 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  puStack_12 = (undefined1 *)((ulonglong)(uint)(pLVar9->fields)._version << 0x20);
  uStack_13 = 0;
  auStack_1._8_8_ = puStack_12;
  pOStack_14 = (Object *)0x0;
  pLStack_10 = (List_1_UseRequirement_ *)0x0;
  puStack_12 = auStack_1;
  auStack_1._0_8_ = pLVar9;
  while (bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           ), pOVar2 = pOStack_14, bVar17 != 0) {
    if (pOStack_14 == (Object *)0x0) goto code_?;
    cVar18 = (*(code *)pOStack_14->klass[1]._0.interopData)(pOStack_14,pOStack_14->klass[1]._0.klass)
    ;
    if (cVar18 != '\0') {
      pOVar21 = pOVar2->klass;
      uStack_15._0_4_ = (this->fields).pivot.x;
      uStack_15._4_4_ = (this->fields).pivot.y;
      puStack_16 = (undefined1 *)CONCAT44(puStack_16._4_4_,(this->fields).pivot.z);
      (*(code *)pOVar21[1]._0.fields)
                (pOVar2,&uStack_15,fVar20,(this->fields).dist,pOVar21[1]._0.events);
      fVar20 = fVar20 + (this->fields).spacing;
    }
  }
  if ((this->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization_SetupCulling(this,(MethodInfo *)0x0);
      goto code_?;
    }
    if ((this->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization_RemoveCulling(this,(MethodInfo *)0x0);
  }
code_?:
  bVar17 = (this->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar22 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar22 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar23 = func_?(&UNK_?);
    FUN_?(uVar23,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar22,bVar17);
  return;
}


/* Void UpdatePosition(Vector3) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_UpdatePosition
               (UseInteractorVisualization *this,Vector3 *pos,MethodInfo *method)

{
  uVar1 = pos->x;
  uVar2 = pos->y;
  pCVar3 = (this->fields).cullingSubscriberBase;
  fVar4 = (this->fields).pivot.y;
  uVar5 = (this->fields).pivot.x;
  fVar6 = (this->fields).pivot.z;
  fVar7 = pos->z;
  if (pCVar3 != (CullingSubscriberBase *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar8 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar8 != (BoundingSphere__Array *)0x0) {
      uVar9 = (pCVar3->fields)._CullingIndex_k__BackingField;
      if (uVar9 < (uint)pBVar8->max_length) {
        pBVar8->vector[(int)uVar9].position.x = (float)uVar5 + (float)uVar1;
        pBVar8->vector[(int)uVar9].position.y = fVar4 + (float)uVar2;
        pBVar8->vector[(int)uVar9].position.z = fVar6 + fVar7;
        return;
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean UseRequirementActive(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization::
     UseInteractorVisualization_UseRequirementActive
               (UseRequirement *useRequirement,MethodInfo *method)

{
  if (useRequirement != (UseRequirement *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*(useRequirement->klass->vtable).__unknown_7.methodPtr)
                      (useRequirement,(useRequirement->klass->vtable).__unknown_7.method);
    return bVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void <Hide>b__32_0(Single) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization__Hide_b__32_0
               (UseInteractorVisualization *this,float t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass32_0___Hide_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass32_0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass32_0);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar1[1].klass = (Object__Class *)CONCAT44(t,t);
  *(float *)&pOVar1[1].monitor = t;
  this_00 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_00,(Object *)0x0,
             MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
             (MethodInfo *)0x0);
  this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_01,pOVar1,
             MethodInfo__UseInteractorVisualization____c__DisplayClass32_0___Hide_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,this_00,this_01,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_3._list = (List_1_System_Object_ *)(this->fields).useRequirements;
  if ((List_1_UseRequirement_ *)LStack_3._list == (List_1_UseRequirement_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&puStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_UseRequirement_ *)LStack_3._list)->fields)._version <<
               0x20);
  uStack_10 = 0;
  LStack_3._8_8_ = pLStack_9;
  LStack_3._current = (Object *)0x0;
  puStack_5 = (undefined *)0x0;
  pLStack_9 = &LStack_3;
  while( true ) {
    do {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_3,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      pOVar1 = LStack_3._current;
      if (bVar11 == 0) {
        return;
      }
      if (this_00 == (Predicate_1_Object_ *)0x0) goto code_?;
      cVar12 = (*(this_00->fields)._._.invoke_impl)
                        ((this_00->fields)._._.method_code,LStack_3._current,
                         (this_00->fields)._._.method);
    } while (cVar12 == '\0');
    if (this_01 == (Predicate_1_Object_ *)0x0) break;
    (*(this_01->fields)._._.invoke_impl)
              ((this_01->fields)._._.method_code,pOVar1,(this_01->fields)._._.method);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <Show>b__31_0(Single) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization__Show_b__31_0
               (UseInteractorVisualization *this,float t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass31_0___Show_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass31_0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass31_0);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar1[1].klass = (Object__Class *)CONCAT44(t,t);
  *(float *)&pOVar1[1].monitor = t;
  this_00 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_00,(Object *)0x0,
             MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
             (MethodInfo *)0x0);
  this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_01,pOVar1,
             MethodInfo__UseInteractorVisualization____c__DisplayClass31_0___Show_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,this_00,this_01,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_3._list = (List_1_System_Object_ *)(this->fields).useRequirements;
  if ((List_1_UseRequirement_ *)LStack_3._list == (List_1_UseRequirement_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&puStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_UseRequirement_ *)LStack_3._list)->fields)._version <<
               0x20);
  uStack_10 = 0;
  LStack_3._8_8_ = pLStack_9;
  LStack_3._current = (Object *)0x0;
  puStack_5 = (undefined *)0x0;
  pLStack_9 = &LStack_3;
  while( true ) {
    do {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_3,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      pOVar1 = LStack_3._current;
      if (bVar11 == 0) {
        return;
      }
      if (this_00 == (Predicate_1_Object_ *)0x0) goto code_?;
      cVar12 = (*(this_00->fields)._._.invoke_impl)
                        ((this_00->fields)._._.method_code,LStack_3._current,
                         (this_00->fields)._._.method);
    } while (cVar12 == '\0');
    if (this_01 == (Predicate_1_Object_ *)0x0) break;
    (*(this_01->fields)._._.invoke_impl)
              ((this_01->fields)._._.method_code,pOVar1,(this_01->fields)._._.method);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* UseInteractorVisualization() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization__ctor
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UseRequirement>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UseRequirement_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UseRequirement>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UseRequirement>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).useRequirements = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).useRequirements >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = cRam_? == '\0';
  uVar3 = (ulonglong)_UNK_?;
  (this->fields).pivot.x = (float)(int)(uVar3 << 0x20);
  (this->fields).pivot.y = (float)(int)((uVar3 << 0x20) >> 0x20);
  (this->fields).pivot.z = 0.0;
  (this->fields).dist = 0.01;
  (this->fields).spacing = 120.0;
  (this->fields).scale = 1.0;
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

