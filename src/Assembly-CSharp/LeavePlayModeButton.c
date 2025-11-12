
/* Void Awake() */

void Assembly-CSharp.dll::LeavePlayModeButton::LeavePlayModeButton_Awake
               (LeavePlayModeButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (obj->fields)._.m_CachedPtr;
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Execute() */

void Assembly-CSharp.dll::LeavePlayModeButton::LeavePlayModeButton_Execute
               (LeavePlayModeButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ILeaveEditPlayModeHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LeavePlayModeButton____c___Execute_b__1_0_ILeaveEditPlayModeHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LeavePlayModeButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (pGVar1->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
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
  cVar5 = (*pcRam_?)(pvVar3);
  if (cVar5 != '\0') {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__LeavePlayModeButton___ExecuteLeaveEditDelayed_d__2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    lVar6 = FUN_?(TypeInfo__LeavePlayModeButton___ExecuteLeaveEditDelayed_d__2);
    bVar7 = iRam_? != 0;
    *(undefined4 *)(lVar6 + 0x10) = 0;
    *(LeavePlayModeButton **)(lVar6 + 0x20) = this;
    if (bVar7) {
      uVar8 = (uint)(lVar6 + 0x20U >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    if (lVar6 == 0) {
      uVar4 = func_?(&TypeInfo__System__NullReferenceException);
      this_02 = (NullReferenceException *)func_?(uVar4);
      pSVar12 = (String *)func_?(&StringLiteral_routine_is_null);
      mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                (this_02,pSVar12,(MethodInfo *)0x0);
      uVar4 = func_?(&
                                   MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                  );
      FUN_?(this_02,uVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
    if (bVar13 == 0) {
      uVar4 = func_?(&TypeInfo__System__ArgumentException);
      this_03 = (InvalidEnumArgumentException *)func_?(uVar4);
      pSVar12 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_03,pSVar12,(MethodInfo *)0x0);
      uVar4 = func_?(&
                                   MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                  );
      FUN_?(this_03,uVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this != (LeavePlayModeButton *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,lVar6);
      return;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__LeavePlayModeButton____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LeavePlayModeButton____c);
  }
  this_01 = TypeInfo__LeavePlayModeButton____c->static_fields->__9__1_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_ILeaveEditPlayModeHandler_ *)0x0) {
    if (*(int *)&(TypeInfo__LeavePlayModeButton____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__LeavePlayModeButton____c);
    }
    object = TypeInfo__LeavePlayModeButton____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_ILeaveEditPlayModeHandler_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__LeavePlayModeButton____c___Execute_b__1_0_ILeaveEditPlayModeHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LeavePlayModeButton____c->static_fields->__9__1_0 = this_01;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&TypeInfo__LeavePlayModeButton____c->static_fields->__9__1_0 >> 0xc
                     );
      lVar6 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar11 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar14 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ILeaveEditPlayModeHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ILeaveEditPlayModeHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar14->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar14);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar15 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar6 = (longlong)(pLVar15->fields)._size;
    uVar8 = 0;
    if (0 < lVar6) {
      lVar16 = 0;
      lVar9 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar15 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar15->fields)._size <= uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar17 = (pLVar15->fields)._items;
        if (pTVar17 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar17->max_length <= uVar8) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar17->vector + lVar9 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar14->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar8 = uVar8 + 1;
        lVar16 = lVar16 + 1;
        lVar9 = lVar9 + 8;
      } while (lVar16 < lVar6);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator ExecuteLeaveEditDelayed() */

IEnumerator *
Assembly-CSharp.dll::LeavePlayModeButton::LeavePlayModeButton_ExecuteLeaveEditDelayed
          (LeavePlayModeButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LeavePlayModeButton___ExecuteLeaveEditDelayed_d__2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__LeavePlayModeButton___ExecuteLeaveEditDelayed_d__2);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}

