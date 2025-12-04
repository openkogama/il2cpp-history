
/* Void Initialize(String, Int32, String[], List`1[System.Int32]) */

void Assembly-CSharp.dll::SettingsTMPDropdown::SettingsTMPDropdown_Initialize
               (SettingsTMPDropdown *this,String *key,int32_t value,String__Array *options,
               List_1_System_Int32_ *possibleWOData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TMPro::TMP_Dropdown::OptionData>__Add_TMPro__TMP_Dropdown__OptionData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__IndexOf_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TMPro::TMP_Dropdown::OptionData>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<TMPro::TMP_Dropdown::OptionData>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TMPro__TMP_Dropdown__OptionData);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SettingsTMPDropdown__ValueChanged_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<int>__AddListener_UnityEngine__Events__UnityAction<int>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).key = key;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).key >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).possibleWOData = possibleWOData;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).possibleWOData >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_00 = (List_1_TMPro_TMP_Dropdown_OptionData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<TMPro::TMP_Dropdown::OptionData>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<TMPro::TMP_Dropdown::OptionData>__List__
            );
  pMVar7 = _UNK_?;
  pOVar8 = _UNK_?;
  uVar2 = 0;
  if (options != (String__Array *)0x0) {
    ppSVar9 = options->vector;
    while ((int)uVar2 < (int)options->max_length) {
      item = (Object *)FUN_?(TypeInfo__TMPro__TMP_Dropdown__OptionData);
      item[2].klass = pOVar8;
      item[2].monitor = pMVar7;
      if ((uint)options->max_length <= uVar2) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pOVar11 = (Object__Class *)TM::TM__(*ppSVar9,(MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      item[1].klass = pOVar11;
      if (bVar6) {
        uVar12 = (uint)((ulonglong)(item + 1) >> 0xc);
        uVar3 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar12 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      pMVar13 = 
      MethodInfo__System__Collections__Generic__List<TMPro::TMP_Dropdown::OptionData>__Add_TMPro__TMP_Dropdown__OptionData_
      ;
      if (this_00 == (List_1_TMPro_TMP_Dropdown_OptionData_ *)0x0) goto code_?;
      piVar14 = &(this_00->fields)._version;
      *piVar14 = *piVar14 + 1;
      pTVar15 = (this_00->fields)._items;
      if (pTVar15 == (TMP_Dropdown_OptionData__Array *)0x0) goto code_?;
      uVar12 = (this_00->fields)._size;
      if (uVar12 < (uint)pTVar15->max_length) {
        (this_00->fields)._size = uVar12 + 1;
        FUN_?(pTVar15,(longlong)(int)uVar12,item);
        uVar2 = uVar2 + 1;
        ppSVar9 = ppSVar9 + 1;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_00,item,pMVar13->klass->rgctx_data[0xe].method);
        uVar2 = uVar2 + 1;
        ppSVar9 = ppSVar9 + 1;
      }
    }
    if (possibleWOData != (List_1_System_Int32_ *)0x0) {
      value_00 = FUN_?(possibleWOData,value,
                               MethodInfo__System__Collections__Generic__List<int>__IndexOf_int_);
      pTVar16 = (this->fields).dropdown;
      if ((pTVar16 != (TMP_Dropdown *)0x0) &&
         (pTVar17 = (pTVar16->fields).m_Options, pTVar17 != (TMP_Dropdown_OptionDataList *)0x0)) {
        bVar6 = iRam_? != 0;
        (pTVar17->fields).m_Options = this_00;
        if (bVar6) {
          uVar2 = (uint)((ulonglong)&pTVar17->fields >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        Unity.TextMeshPro.dll::TMPro::TMP_Dropdown::TMP_Dropdown_RefreshShownValue
                  (pTVar16,(MethodInfo *)0x0);
        pTVar16 = (this->fields).dropdown;
        if (pTVar16 != (TMP_Dropdown *)0x0) {
          Unity.TextMeshPro.dll::TMPro::TMP_Dropdown::TMP_Dropdown_SetValue
                    (pTVar16,value_00,1,(MethodInfo *)0x0);
          pTVar16 = (this->fields).dropdown;
          if (pTVar16 != (TMP_Dropdown *)0x0) {
            pTVar18 = (pTVar16->fields).m_OnValueChanged;
            uVar19 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
            FUN_?(uVar19,this,MethodInfo__SettingsTMPDropdown__ValueChanged_int_);
            if (pTVar18 != (TMP_Dropdown_DropdownEvent *)0x0) {
              pMVar13 = MethodInfo__UnityEngine__Events__UnityEvent<int>__AddListener_UnityEngine__Events__UnityAction<int>_
                       ->klass->rgctx_data[2].method;
              pIVar20 = pMVar13->klass;
              if ((pIVar20->field_0x135 & 1) == 0) {
                pIVar20 = (Il2CppClass *)FUN_?(pIVar20);
              }
              pvVar21 = pIVar20->rgctx_data[5].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
                pvVar21 = (void *)FUN_?(pvVar21);
              }
              uVar22 = FUN_?(pvVar21);
              pIVar20 = pMVar13->klass;
              if ((pIVar20->field_0x135 & 1) == 0) {
                pIVar20 = (Il2CppClass *)FUN_?(pIVar20);
              }
              FUN_?(uVar22,uVar19,
                            (pIVar20->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
              if ((pTVar18 != (TMP_Dropdown_DropdownEvent *)0x0) &&
                 (pIVar23 = (pTVar18->fields)._._.m_Calls, pIVar23 != (InvokableCallList *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pLVar24 = (pIVar23->fields).m_RuntimeCalls;
                if (pLVar24 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                  FUN_?(pLVar24,uVar22);
                  (pIVar23->fields).m_NeedsUpdate = 1;
                  return;
                }
              }
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SettingsTMPDropdown::SettingsTMPDropdown_Reset
               (SettingsTMPDropdown *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TMPro__TMP_Dropdown_MethodInfo__UnityEngine__Component__GetComponent<TMPro::TMP_Dropdown>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (TMP_Dropdown *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      TMPro__TMP_Dropdown_MethodInfo__UnityEngine__Component__GetComponent<TMPro::TMP_Dropdown>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).dropdown = pTVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).dropdown >> 0xc);
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


/* Void ValueChanged(Int32) */

void Assembly-CSharp.dll::SettingsTMPDropdown::SettingsTMPDropdown_ValueChanged
               (SettingsTMPDropdown *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SettingsTMPDropdown____c__DisplayClass4_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SettingsTMPDropdown____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SettingsTMPDropdown____c__DisplayClass4_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  *(int32_t *)&object[1].monitor = value;
  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__SettingsTMPDropdown____c__DisplayClass4_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar8 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
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
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar7,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar10 = (longlong)(pLVar9->fields)._size;
    uVar3 = 0;
    if (0 < lVar10) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar9->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar13 = (pLVar9->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar7,(BaseEventData *)0x0,this_01,
                           (pMVar8->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar10);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

