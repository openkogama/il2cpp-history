
/* Void Initialize(String, Int32, String[], List`1[System.Int32]) */

void Assembly-CSharp.dll::SettingsTMPDropdown::SettingsTMPDropdown_Initialize(SettingsTMPDropdown *this,String *key,int32_t value,String__Array *options,List_1_System_Int32_ *possibleWOData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<TMPro::TMP_Dropdown::OptionData>__Add_TMPro__TMP_Dropdown__OptionData_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__IndexOf_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TMPro::TMP_Dropdown::OptionData>__List__);
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
    FUN_?(&MethodInfo__UnityEngine__Events__UnityEvent<int>__AddListener_UnityEngine__Events__UnityAction<int>_);
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
  this_00 = (List_1_TMPro_TMP_Dropdown_OptionData_ *)FUN_?(TypeInfo__System__Collections__Generic__List<TMPro::TMP_Dropdown::OptionData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,MethodInfo__System__Collections__Generic__List<TMPro::TMP_Dropdown::OptionData>__List__);
  uVar2 = 0;
  if (options != (String__Array *)0x0) {
    ppSVar7 = options->vector;
    while ((int)uVar2 < (int)options->max_length) {
      item = (Object *)FUN_?(TypeInfo__TMPro__TMP_Dropdown__OptionData);
      item[2].klass = (Object__Class *)0x3f8000003f800000;
      item[2].monitor = (MonitorData *)0x3f8000003f800000;
      if ((uint)options->max_length <= uVar2) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pOVar9 = (Object__Class *)TM::TM__(*ppSVar7,(MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      item[1].klass = pOVar9;
      if (bVar6) {
        uVar10 = (uint)((ulonglong)(item + 1) >> 0xc);
        uVar3 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      pMVar11 = MethodInfo__System__Collections__Generic__List<TMPro::TMP_Dropdown::OptionData>__Add_TMPro__TMP_Dropdown__OptionData_;
      if (this_00 == (List_1_TMPro_TMP_Dropdown_OptionData_ *)0x0) goto code_?;
      piVar12 = &(this_00->fields)._version;
      *piVar12 = *piVar12 + 1;
      pTVar13 = (this_00->fields)._items;
      if (pTVar13 == (TMP_Dropdown_OptionData__Array *)0x0) goto code_?;
      uVar10 = (this_00->fields)._size;
      if (uVar10 < (uint)pTVar13->max_length) {
        (this_00->fields)._size = uVar10 + 1;
        FUN_?(pTVar13,(longlong)(int)uVar10,item);
        uVar2 = uVar2 + 1;
        ppSVar7 = ppSVar7 + 1;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__AddWithResize((List_1_System_Object_ *)this_00,item,pMVar11->klass->rgctx_data[0xe].method);
        uVar2 = uVar2 + 1;
        ppSVar7 = ppSVar7 + 1;
      }
    }
    if (possibleWOData != (List_1_System_Int32_ *)0x0) {
      value_00 = FUN_?(possibleWOData,value,MethodInfo__System__Collections__Generic__List<int>__IndexOf_int_);
      pTVar14 = (this->fields).dropdown;
      if ((pTVar14 != (TMP_Dropdown *)0x0) && (pTVar15 = (pTVar14->fields).m_Options, pTVar15 != (TMP_Dropdown_OptionDataList *)0x0)) {
        bVar6 = iRam_? != 0;
        (pTVar15->fields).m_Options = this_00;
        if (bVar6) {
          uVar2 = (uint)((ulonglong)&pTVar15->fields >> 0xc);
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
        Unity.TextMeshPro.dll::TMPro::TMP_Dropdown::TMP_Dropdown_RefreshShownValue(pTVar14,(MethodInfo *)0x0);
        pTVar14 = (this->fields).dropdown;
        if (pTVar14 != (TMP_Dropdown *)0x0) {
          Unity.TextMeshPro.dll::TMPro::TMP_Dropdown::TMP_Dropdown_SetValue(pTVar14,value_00,1,(MethodInfo *)0x0);
          pTVar14 = (this->fields).dropdown;
          if (pTVar14 != (TMP_Dropdown *)0x0) {
            pTVar16 = (pTVar14->fields).m_OnValueChanged;
            uVar17 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
            FUN_?(uVar17,this,MethodInfo__SettingsTMPDropdown__ValueChanged_int_);
            if (pTVar16 != (TMP_Dropdown_DropdownEvent *)0x0) {
              pMVar11 = MethodInfo__UnityEngine__Events__UnityEvent<int>__AddListener_UnityEngine__Events__UnityAction<int>_->klass->rgctx_data[2].method;
              pIVar18 = pMVar11->klass;
              if ((pIVar18->field_0x135 & 1) == 0) {
                pIVar18 = (Il2CppClass *)FUN_?(pIVar18);
              }
              pvVar19 = pIVar18->rgctx_data[5].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar19 + 0x135) & 1) == 0) {
                pvVar19 = (void *)FUN_?(pvVar19);
              }
              uVar20 = FUN_?(pvVar19);
              pIVar18 = pMVar11->klass;
              if ((pIVar18->field_0x135 & 1) == 0) {
                pIVar18 = (Il2CppClass *)FUN_?(pIVar18);
              }
              FUN_?(uVar20,uVar17,(pIVar18->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
              if ((pTVar16 != (TMP_Dropdown_DropdownEvent *)0x0) && (pIVar21 = (pTVar16->fields)._._.m_Calls, pIVar21 != (InvokableCallList *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pLVar22 = (pIVar21->fields).m_RuntimeCalls;
                if (pLVar22 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                  FUN_?(pLVar22,uVar20);
                  (pIVar21->fields).m_NeedsUpdate = 1;
                  return;
                }
              }
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SettingsTMPDropdown::SettingsTMPDropdown_Reset(SettingsTMPDropdown *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TMPro__TMP_Dropdown_MethodInfo__UnityEngine__Component__GetComponent<TMPro::TMP_Dropdown>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (TMP_Dropdown *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1((Component *)this,TMPro__TMP_Dropdown_MethodInfo__UnityEngine__Component__GetComponent<TMPro::TMP_Dropdown>__);
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

void Assembly-CSharp.dll::SettingsTMPDropdown::SettingsTMPDropdown_ValueChanged(SettingsTMPDropdown *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SettingsTMPDropdown____c__DisplayClass4_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_);
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
  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>);
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor(this_01,object,MethodInfo__SettingsTMPDropdown____c__DisplayClass4_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar8 = UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_;
  if ((UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_);
    LOCK();
    UNLOCK();
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain(pGVar7,(IList_1_UnityEngine_Transform_ *)TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->s_InternalTransformList,(MethodInfo *)0x0);
  pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->s_InternalTransformList;
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
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->s_InternalTransformList;
        if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar9->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject(this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18(pGVar7,(BaseEventData *)0x0,this_01,(pMVar8->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject(this_00,(MethodInfo *)0x0);
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

