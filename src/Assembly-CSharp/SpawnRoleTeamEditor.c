
/* Void Initialize(MVTeam, UnityAction`1[MV.WorldObject.MVTeam]) */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_Initialize
               (SpawnRoleTeamEditor *this,MVTeam__Enum spawnRolesTeam,
               UnityAction_1_MV_WorldObject_MVTeam_ *onTeamChangeCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).onTeamChangeCallback = onTeamChangeCallback;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).onTeamChangeCallback >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pLVar6 = (this->fields).teamButtons;
  uVar2 = 0;
  if (pLVar6 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
    lVar7 = 0;
    do {
      if ((pLVar6->fields)._size <= (int)uVar2) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar8 == (MVGameControllerBase *)0x0) ||
          (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
         (pMVar10 = (pMVar9->fields).teamManager, pMVar10 == (MVTeamManager *)0x0)) break;
      pLVar6 = (this->fields).teamButtons;
      this_00 = (pMVar10->fields).teamNames;
      if (pLVar6 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar6->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pSVar12 = (pLVar6->fields)._items;
      if (pSVar12 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar12->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (this_00 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) break;
      IStack_13 = (Int32Enum__Enum)*(undefined8 *)((longlong)&pSVar12->vector[0].team + lVar7);
      pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,IStack_13,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                          );
      pLVar6 = (this->fields).teamButtons;
      if (pLVar6 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar6->fields)._size <= uVar2) goto code_?;
      pSVar12 = (pLVar6->fields)._items;
      if (pSVar12 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar12->max_length <= uVar2) goto code_?;
      plVar15 = *(longlong **)((longlong)&pSVar12->vector[0].buttonSelectedText + lVar7);
      if (plVar15 == (longlong *)0x0) break;
      (**(code **)(*plVar15 + 0x5e8))(plVar15,pOVar14,*(undefined8 *)(*plVar15 + 0x5f0));
      pLVar6 = (this->fields).teamButtons;
      if (pLVar6 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar6->fields)._size <= uVar2) goto code_?;
      pSVar12 = (pLVar6->fields)._items;
      if (pSVar12 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar12->max_length <= uVar2) goto code_?;
      plVar15 = *(longlong **)((longlong)&pSVar12->vector[0].buttonNotSelectedText + lVar7);
      if (plVar15 == (longlong *)0x0) break;
      (**(code **)(*plVar15 + 0x5e8))(plVar15,pOVar14,*(undefined8 *)(*plVar15 + 0x5f0));
      pLVar6 = (this->fields).teamButtons;
      if (pLVar6 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar6->fields)._size <= uVar2) goto code_?;
      pSVar12 = (pLVar6->fields)._items;
      if (pSVar12 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar12->max_length <= uVar2) goto code_?;
      pLVar6 = (this->fields).teamButtons;
      MStack_16 = (MVTeam__Enum)*(undefined8 *)((longlong)&pSVar12->vector[0].team + lVar7);
      if (pLVar6 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar6->fields)._size <= uVar2) goto code_?;
      pSVar12 = (pLVar6->fields)._items;
      if (pSVar12 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar12->max_length <= uVar2) goto code_?;
      pOVar14 = *(Object **)((longlong)&pSVar12->vector[0].buttonSelected + lVar7);
      if (pOVar14 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar14[1].klass == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar14,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)();
      pLVar6 = (this->fields).teamButtons;
      if (pLVar6 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar6->fields)._size <= uVar2) goto code_?;
      pSVar12 = (pLVar6->fields)._items;
      if (pSVar12 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar12->max_length <= uVar2) goto code_?;
      pOVar14 = *(Object **)((longlong)&pSVar12->vector[0].buttonNotSelected + lVar7);
      if (pOVar14 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar18 = pOVar14[1].klass;
      if (pOVar18 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar14,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(pOVar18,spawnRolesTeam != MStack_16);
      pLVar6 = (this->fields).teamButtons;
      uVar2 = uVar2 + 1;
      lVar7 = lVar7 + 0x28;
    } while (pLVar6 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0);
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SelectBlueTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectBlueTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Count__
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onTeamChangeCallback;
  if (pUVar1 != (UnityAction_1_MV_WorldObject_MVTeam_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,0,(pUVar1->fields)._._.method);
    uVar2 = 0;
    pLVar3 = (this->fields).teamButtons;
    uVar4 = uVar2;
    while (pLVar3 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
      uVar5 = (uint)uVar4;
      if ((pLVar3->fields)._size <= (int)uVar5) {
        return;
      }
      pLVar3 = (this->fields).teamButtons;
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar7 = (pLVar3->fields)._items;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) goto code_?;
      pOVar8 = *(Object **)((longlong)&pSVar7->vector[0].buttonSelected + uVar2);
      if (pOVar8 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar8[1].klass == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)();
      pLVar3 = (this->fields).teamButtons;
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
      pSVar7 = (pLVar3->fields)._items;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) goto code_?;
      pOVar8 = *(Object **)((longlong)&pSVar7->vector[0].buttonNotSelected + uVar2);
      if (pOVar8 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar10 = pOVar8[1].klass;
      if (pOVar10 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pOVar10);
      uVar4 = (ulonglong)(uVar5 + 1);
      uVar2 = uVar2 + 0x28;
      pLVar3 = (this->fields).teamButtons;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SelectGreenTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectGreenTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Count__
                  ,2,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onTeamChangeCallback;
  if (pUVar1 != (UnityAction_1_MV_WorldObject_MVTeam_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,2,(pUVar1->fields)._._.method);
    uVar2 = 0;
    pLVar3 = (this->fields).teamButtons;
    uVar4 = uVar2;
    while (pLVar3 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
      uVar5 = (uint)uVar4;
      if ((pLVar3->fields)._size <= (int)uVar5) {
        return;
      }
      pLVar3 = (this->fields).teamButtons;
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar7 = (pLVar3->fields)._items;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) goto code_?;
      pOVar8 = *(Object **)((longlong)&pSVar7->vector[0].buttonSelected + uVar2);
      if (pOVar8 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar8[1].klass == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)();
      pLVar3 = (this->fields).teamButtons;
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
      pSVar7 = (pLVar3->fields)._items;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) goto code_?;
      pOVar8 = *(Object **)((longlong)&pSVar7->vector[0].buttonNotSelected + uVar2);
      if (pOVar8 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar10 = pOVar8[1].klass;
      if (pOVar10 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pOVar10);
      uVar4 = (ulonglong)(uVar5 + 1);
      uVar2 = uVar2 + 0x28;
      pLVar3 = (this->fields).teamButtons;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SelectRedTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectRedTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Count__
                  ,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onTeamChangeCallback;
  if (pUVar1 != (UnityAction_1_MV_WorldObject_MVTeam_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,1,(pUVar1->fields)._._.method);
    uVar2 = 0;
    pLVar3 = (this->fields).teamButtons;
    uVar4 = uVar2;
    while (pLVar3 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
      uVar5 = (uint)uVar4;
      if ((pLVar3->fields)._size <= (int)uVar5) {
        return;
      }
      pLVar3 = (this->fields).teamButtons;
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar7 = (pLVar3->fields)._items;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) goto code_?;
      pOVar8 = *(Object **)((longlong)&pSVar7->vector[0].buttonSelected + uVar2);
      if (pOVar8 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar8[1].klass == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)();
      pLVar3 = (this->fields).teamButtons;
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
      pSVar7 = (pLVar3->fields)._items;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) goto code_?;
      pOVar8 = *(Object **)((longlong)&pSVar7->vector[0].buttonNotSelected + uVar2);
      if (pOVar8 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar10 = pOVar8[1].klass;
      if (pOVar10 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pOVar10);
      uVar4 = (ulonglong)(uVar5 + 1);
      uVar2 = uVar2 + 0x28;
      pLVar3 = (this->fields).teamButtons;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SelectTeam(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectTeam
               (SpawnRoleTeamEditor *this,MVTeam__Enum teamSelected,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onTeamChangeCallback;
  if (pUVar1 != (UnityAction_1_MV_WorldObject_MVTeam_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,teamSelected,(pUVar1->fields)._._.method);
    uVar2 = 0;
    pLVar3 = (this->fields).teamButtons;
    uVar4 = uVar2;
    while (pLVar3 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
      uVar5 = (uint)uVar4;
      if ((pLVar3->fields)._size <= (int)uVar5) {
        return;
      }
      pLVar3 = (this->fields).teamButtons;
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar7 = (pLVar3->fields)._items;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) goto code_?;
      pOVar8 = *(Object **)((longlong)&pSVar7->vector[0].buttonSelected + uVar2);
      if (pOVar8 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar8[1].klass == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)();
      pLVar3 = (this->fields).teamButtons;
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
      pSVar7 = (pLVar3->fields)._items;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) goto code_?;
      pOVar8 = *(Object **)((longlong)&pSVar7->vector[0].buttonNotSelected + uVar2);
      if (pOVar8 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar10 = pOVar8[1].klass;
      if (pOVar10 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pOVar10);
      uVar4 = (ulonglong)(uVar5 + 1);
      uVar2 = uVar2 + 0x28;
      pLVar3 = (this->fields).teamButtons;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SelectYellowTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectYellowTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Count__
                  ,3,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onTeamChangeCallback;
  if (pUVar1 != (UnityAction_1_MV_WorldObject_MVTeam_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,3,(pUVar1->fields)._._.method);
    uVar2 = 0;
    pLVar3 = (this->fields).teamButtons;
    uVar4 = uVar2;
    while (pLVar3 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
      uVar5 = (uint)uVar4;
      if ((pLVar3->fields)._size <= (int)uVar5) {
        return;
      }
      pLVar3 = (this->fields).teamButtons;
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar7 = (pLVar3->fields)._items;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) goto code_?;
      pOVar8 = *(Object **)((longlong)&pSVar7->vector[0].buttonSelected + uVar2);
      if (pOVar8 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar8[1].klass == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)();
      pLVar3 = (this->fields).teamButtons;
      if (pLVar3 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
      pSVar7 = (pLVar3->fields)._items;
      if (pSVar7 == (SpawnRoleTeamEditor_SpawnRoleTeamButton__Array *)0x0) break;
      if ((uint)pSVar7->max_length <= uVar5) goto code_?;
      pOVar8 = *(Object **)((longlong)&pSVar7->vector[0].buttonNotSelected + uVar2);
      if (pOVar8 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar10 = pOVar8[1].klass;
      if (pOVar10 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pOVar10);
      uVar4 = (ulonglong)(uVar5 + 1);
      uVar2 = uVar2 + 0x28;
      pLVar3 = (this->fields).teamButtons;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

