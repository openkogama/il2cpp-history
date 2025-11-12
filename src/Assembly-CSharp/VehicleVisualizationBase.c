
/* Void ChangeLOD(Single) */

void Assembly-CSharp.dll::VehicleVisualizationBase::VehicleVisualizationBase_ChangeLOD
               (VehicleVisualizationBase *this,float distance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  if (((this->fields).disabledByLod == 0) || ((this->fields).cullDistance <= distance)) {
    if (((this->fields).disabledByLod == 0) && ((this->fields).cullDistance <= distance)) {
      (this->fields).disabledByLod = 1;
      pLVar2 = (this->fields).lodGameObjects;
      if (pLVar2 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
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
      pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
      uStack_10 = 0;
      LStack_1._8_8_ = pLStack_9;
      LStack_1._current = (Object *)0x0;
      uStack_4 = 0;
      pLStack_9 = &LStack_1;
      LStack_1._list = (List_1_System_Object_ *)pLVar2;
      while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_1,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                               ), pOVar12 = LStack_1._current,
            pMVar13 = 
            UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
            , bVar11 != 0) {
        if ((GameObject *)LStack_1._current == (GameObject *)0x0) goto code_?;
        if ((
            UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
        }
        p_Var10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentsInChildren_4
                            ((GameObject *)pOVar12,0,((pMVar13->field7_0x38).rgctx_data)->method);
        uVar3 = 0;
        if (p_Var10 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
        for (; uVar14 = (uint)p_Var10->max_length, (int)uVar3 < (int)uVar14; uVar3 = uVar3 + 1) {
          if (uVar14 <= uVar3) goto code_?;
          if ((Renderer *)p_Var10->vector[(int)uVar3] == (Renderer *)0x0)
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    ((Renderer *)p_Var10->vector[(int)uVar3],0,(MethodInfo *)0x0);
        }
      }
    }
  }
  else {
    (this->fields).disabledByLod = 0;
    pLVar2 = (this->fields).lodGameObjects;
    if (pLVar2 == (List_1_UnityEngine_GameObject_ *)0x0) {
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
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
    pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
    uStack_10 = 0;
    LStack_1._8_8_ = pLStack_9;
    LStack_1._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_9 = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)pLVar2;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                             ), pOVar12 = LStack_1._current,
          pMVar13 = 
          UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
          , bVar11 != 0) {
      if ((GameObject *)LStack_1._current == (GameObject *)0x0) goto code_?;
      if ((
          UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                     );
      }
      p_Var10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentsInChildren_4
                          ((GameObject *)pOVar12,0,((pMVar13->field7_0x38).rgctx_data)->method);
      uVar3 = 0;
      if (p_Var10 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
      for (; uVar14 = (uint)p_Var10->max_length, (int)uVar3 < (int)uVar14; uVar3 = uVar3 + 1) {
        if (uVar14 <= uVar3) goto code_?;
        if ((Renderer *)p_Var10->vector[(int)uVar3] == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)p_Var10->vector[(int)uVar3],1,(MethodInfo *)0x0);
      }
    }
  }
  if ((this->fields).isInSpawner == 0) {
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)this,(MethodInfo *)0x0);
    if ((bVar11 != 0) &&
       (pfVar16 = &(this->fields).disableVisualizationDistance,
       *pfVar16 <= distance && distance != *pfVar16)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
    }
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)this,(MethodInfo *)0x0);
    if ((bVar11 == 0) && (distance <= (this->fields).disableVisualizationDistance)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ParentHullTransformToVisualizationRoot(Transform, Transform) */

void Assembly-CSharp.dll::VehicleVisualizationBase::
     VehicleVisualizationBase_ParentHullTransformToVisualizationRoot
               (Transform *hullTransform,Transform *visualizationRoot,MethodInfo *method)

{
  if (hullTransform == (Transform *)0x0) {
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
  pvVar2 = (hullTransform->fields)._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)hullTransform,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_4 = 0;
  uStack_5 = 0;
  pvVar2 = (hullTransform->fields)._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)hullTransform,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar2,&uStack_4);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
            (hullTransform,visualizationRoot,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (hullTransform->fields)._._.m_CachedPtr;
  if (pvVar2 != (void *)0x0) {
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
    uStack_6 = (undefined4)uStack_4;
    uStack_7 = uStack_4._4_4_;
    uStack_8 = (undefined4)uStack_5;
    uStack_9 = uStack_5._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (hullTransform->fields)._._.m_CachedPtr;
    if (pvVar2 != (void *)0x0) {
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
      (*pcRam_?)(pvVar2,&uStack_6);
      return;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)hullTransform,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* VehicleVisualizationBase() */

void Assembly-CSharp.dll::VehicleVisualizationBase::VehicleVisualizationBase__ctor
               (VehicleVisualizationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).lodGameObjects = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).lodGameObjects >> 0xc);
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
  (this->fields).disableVisualizationDistance = 40.0;
  (this->fields).cullDistance = 145.0;
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

