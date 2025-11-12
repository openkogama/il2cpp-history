
/* Void Initialize(GamePassTier, Int32, UnityAction`1[MV.Common.GamePassTier]) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_Initialize
               (SpawnRoleTierEditorMenu *this,GamePassTier__Enum newTier,int32_t newspawnRoleCost,
               UnityAction_1_MV_Common_GamePassTier_ *ChangeTierRequirement,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).ChangeTierRequirement = ChangeTierRequirement;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).ChangeTierRequirement >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  (this->fields).spawnRoleCost = newspawnRoleCost;
  bVar1 = cRam_? == '\0';
  pTVar6 = (this->fields).currentTierNumberText;
  (this->fields).currentTier = (uint8_t)newTier;
  if (bVar1) {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_7[0]._pointer._value = (void *)0x0;
  aRStack_7[0]._length = 0;
  aRStack_7[0]._12_4_ = 0;
  pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                     (newTier & 0xff,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pTVar6 == (Text *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (*(pTVar6->klass->vtable).set_text.methodPtr)(pTVar6,pSVar8);
  iVar10 = (this->fields).spawnRoleCost;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar11 = (this->fields).progressBar;
  (this->fields).spawnRoleCost = iVar10;
  if ((this->fields).currentTier == 0) {
    if (pPVar11 == (ProgressBar *)0x0) goto code_?;
    value = (float)iVar10 / _UNK_?;
    if (value < 0.0) {
      value = 0.0;
    }
    else if (_UNK_? < value) {
      value = _UNK_?;
    }
    pSVar12 = (pPVar11->fields).progressBar;
    (pPVar11->fields).progress = value;
    if (pSVar12 == (Scrollbar *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
              (pSVar12,value,(MethodInfo *)0x0);
    pTVar6 = (this->fields).progressBarText;
    pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).spawnRoleCost,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_7[0]._pointer._value = (void *)0x0;
    aRStack_7[0]._length = 0;
    aRStack_7[0]._12_4_ = 0;
    str2 = mscorlib.dll::System::Number::Number_FormatInt32
                     (100,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar8 = mscorlib.dll::System::String::String_Concat_5
                       (pSVar8,::StringLiteral__,str2,(MethodInfo *)0x0);
  }
  else {
    if (pPVar11 == (ProgressBar *)0x0) goto code_?;
    pSVar12 = (pPVar11->fields).progressBar;
    (pPVar11->fields).progress = 1.0;
    if (pSVar12 == (Scrollbar *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
              (pSVar12,_UNK_?,(MethodInfo *)0x0);
    pTVar6 = (this->fields).progressBarText;
    pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).spawnRoleCost,(MethodInfo *)0x0);
  }
  if (pTVar6 != (Text *)0x0) {
    (*(pTVar6->klass->vtable).set_text.methodPtr)
              (pTVar6,pSVar8,(pTVar6->klass->vtable).set_text.method);
    (this->fields).canSelectTier0 = (this->fields).spawnRoleCost < 0x65;
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnTierSelected(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_OnTierSelected
               (SpawnRoleTierEditorMenu *this,GamePassTier__Enum newTier,MethodInfo *method)

{
  SpawnRoleTierEditorMenu_UpdateTier(this,newTier,(MethodInfo *)0x0);
  pUVar1 = (this->fields).ChangeTierRequirement;
  if (pUVar1 != (UnityAction_1_MV_Common_GamePassTier_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(char)newTier,(pUVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SelectTier() */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_SelectTier
               (SpawnRoleTierEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleTierSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleTierSettings>_SpawnRoleTierSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleTierEditorMenu__OnTierSelected_MV__Common__GamePassTier_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleTierEditorMenu____c__DisplayClass11_0___SelectTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleTierEditorMenu____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SpawnRoleTierEditorMenu____c__DisplayClass11_0);
  original = (this->fields).tierSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       SpawnRoleTierSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleTierSettings>_SpawnRoleTierSettings_
                      );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    pOVar1 = object[1].klass;
    bVar7 = (this->fields).currentTier;
    bVar8 = (this->fields).canSelectTier0;
    pIVar9 = (Il2CppClass *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>);
    FUN_?(pIVar9,this);
    if (pOVar1 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      bVar2 = iRam_? != 0;
      *(bool *)&(pOVar1->_0).this_arg.attrs = bVar8;
      (pOVar1->_0).element_class = pIVar9;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(pOVar1->_0).element_class >> 0xc);
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
      pIVar10 = (pOVar1->_0).byval_arg.data.array;
      if (pIVar10 != (Il2CppArrayType *)0x0) {
        if (*(uint *)&pIVar10->lobounds <= (uint)bVar7) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        piVar12 = pIVar10->sizes;
        if (piVar12 != (int *)0x0) {
          if ((uint)piVar12[6] <= (uint)bVar7) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(GameObject **)(piVar12 + (ulonglong)bVar7 * 2 + 8) != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (*(GameObject **)(piVar12 + (ulonglong)bVar7 * 2 + 8),1,(MethodInfo *)0x0);
            pGVar13 = *(GameObject **)&(pOVar1->_0).byval_arg.attrs;
            if (pGVar13 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar13,bVar8,(MethodInfo *)0x0);
              pGVar13 = (GameObject *)(pOVar1->_0).this_arg.data.typeHandle;
              if (pGVar13 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar13,bVar8 == 0,(MethodInfo *)0x0);
                pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          (this_01,object,
                           MethodInfo__SpawnRoleTierEditorMenu____c__DisplayClass11_0___SelectTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pMVar14 = 
                UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                ;
                if ((
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
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
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_GetEventChain
                          (pGVar13,(IList_1_UnityEngine_Transform_ *)
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields
                                   ->s_InternalTransformList,(MethodInfo *)0x0);
                pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar15 != (List_1_UnityEngine_Transform_ *)0x0) {
                  lVar4 = (longlong)(pLVar15->fields)._size;
                  uVar3 = 0;
                  if (0 < lVar4) {
                    lVar16 = 0;
                    lVar17 = 0x20;
                    do {
                      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                      }
                      pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                               s_InternalTransformList;
                      if (pLVar15 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                      if ((uint)(pLVar15->fields)._size <= uVar3) {
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      pTVar18 = (pLVar15->fields)._items;
                      if (pTVar18 == (Transform__Array *)0x0) goto code_?;
                      if ((uint)pTVar18->max_length <= uVar3) {
                        FUN_?();
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      this_00 = *(Component **)((longlong)pTVar18->vector + lVar17 + -0x20);
                      if (this_00 == (Component *)0x0) goto code_?;
                      pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject(this_00,(MethodInfo *)0x0);
                      bVar8 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                               ExecuteEvents_Execute_18
                                         (pGVar13,(BaseEventData *)0x0,this_01,
                                          (pMVar14->field7_0x38).rgctx_data[1].method);
                      if (bVar8 != 0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
                        return;
                      }
                      uVar3 = uVar3 + 1;
                      lVar16 = lVar16 + 1;
                      lVar17 = lVar17 + 8;
                    } while (lVar16 < lVar4);
                  }
                  return;
                }
code_?:
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdateSpawnRoleCost(Int32) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateSpawnRoleCost
               (SpawnRoleTierEditorMenu *this,int32_t newspawnRoleCost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).progressBar;
  (this->fields).spawnRoleCost = newspawnRoleCost;
  if ((this->fields).currentTier == 0) {
    if (pPVar1 == (ProgressBar *)0x0) goto code_?;
    value = (float)newspawnRoleCost / _UNK_?;
    if (value < 0.0) {
      value = 0.0;
    }
    else if (_UNK_? < value) {
      value = _UNK_?;
    }
    pSVar2 = (pPVar1->fields).progressBar;
    (pPVar1->fields).progress = value;
    if (pSVar2 == (Scrollbar *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
              (pSVar2,value,(MethodInfo *)0x0);
    pTVar3 = (this->fields).progressBarText;
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).spawnRoleCost,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_5[0]._pointer._value = (void *)0x0;
    aRStack_5[0]._length = 0;
    aRStack_5[0]._12_4_ = 0;
    str2 = mscorlib.dll::System::Number::Number_FormatInt32
                     (100,aRStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Concat_5
                       (pSVar4,::StringLiteral__,str2,(MethodInfo *)0x0);
  }
  else {
    if (pPVar1 == (ProgressBar *)0x0) goto code_?;
    pSVar2 = (pPVar1->fields).progressBar;
    (pPVar1->fields).progress = 1.0;
    if (pSVar2 == (Scrollbar *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
              (pSVar2,_UNK_?,(MethodInfo *)0x0);
    pTVar3 = (this->fields).progressBarText;
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).spawnRoleCost,(MethodInfo *)0x0);
  }
  if (pTVar3 != (Text *)0x0) {
    (*(pTVar3->klass->vtable).set_text.methodPtr)
              (pTVar3,pSVar4,(pTVar3->klass->vtable).set_text.method);
    (this->fields).canSelectTier0 = (this->fields).spawnRoleCost < 0x65;
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateTier(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateTier
               (SpawnRoleTierEditorMenu *this,GamePassTier__Enum newTier,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  pTVar2 = (this->fields).currentTierNumberText;
  (this->fields).currentTier = (uint8_t)newTier;
  if (bVar1) {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_3[0]._pointer._value = (void *)0x0;
  aRStack_3[0]._length = 0;
  aRStack_3[0]._12_4_ = 0;
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                     (newTier & 0xff,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pTVar2 == (Text *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pSVar4);
  iVar6 = (this->fields).spawnRoleCost;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar7 = (this->fields).progressBar;
  (this->fields).spawnRoleCost = iVar6;
  if ((this->fields).currentTier == 0) {
    if (pPVar7 == (ProgressBar *)0x0) goto code_?;
    value = (float)iVar6 / _UNK_?;
    if (value < 0.0) {
      value = 0.0;
    }
    else if (_UNK_? < value) {
      value = _UNK_?;
    }
    pSVar8 = (pPVar7->fields).progressBar;
    (pPVar7->fields).progress = value;
    if (pSVar8 == (Scrollbar *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
              (pSVar8,value,(MethodInfo *)0x0);
    pTVar2 = (this->fields).progressBarText;
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).spawnRoleCost,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_3[0]._pointer._value = (void *)0x0;
    aRStack_3[0]._length = 0;
    aRStack_3[0]._12_4_ = 0;
    str2 = mscorlib.dll::System::Number::Number_FormatInt32
                     (100,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Concat_5
                       (pSVar4,::StringLiteral__,str2,(MethodInfo *)0x0);
  }
  else {
    if (pPVar7 == (ProgressBar *)0x0) goto code_?;
    pSVar8 = (pPVar7->fields).progressBar;
    (pPVar7->fields).progress = 1.0;
    if (pSVar8 == (Scrollbar *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
              (pSVar8,_UNK_?,(MethodInfo *)0x0);
    pTVar2 = (this->fields).progressBarText;
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).spawnRoleCost,(MethodInfo *)0x0);
  }
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)
              (pTVar2,pSVar4,(pTVar2->klass->vtable).set_text.method);
    (this->fields).canSelectTier0 = (this->fields).spawnRoleCost < 0x65;
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

