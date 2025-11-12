
/* Void Initialize(String, Boolean) */

void Assembly-CSharp.dll::SettingsToggle::SettingsToggle_Initialize
               (SettingsToggle *this,String *key,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__SettingsToggle__ValueChanged_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).key = key;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).key >> 0xc);
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
  pTVar6 = (this->fields).toggle;
  if (pTVar6 != (Toggle *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(pTVar6,value,1,(MethodInfo *)0x0);
    pTVar6 = (this->fields).toggle;
    if (pTVar6 != (Toggle *)0x0) {
      pTVar7 = (pTVar6->fields).onValueChanged;
      uVar8 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
      FUN_?(uVar8,this,MethodInfo__SettingsToggle__ValueChanged_bool_);
      if (pTVar7 != (Toggle_ToggleEvent *)0x0) {
        pMVar9 = MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                 ->klass->rgctx_data[2].method;
        pIVar10 = pMVar9->klass;
        if ((pIVar10->field_0x135 & 1) == 0) {
          pIVar10 = (Il2CppClass *)FUN_?(pIVar10);
        }
        pvVar11 = pIVar10->rgctx_data[5].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar11 + 0x135) & 1) == 0) {
          pvVar11 = (void *)FUN_?(pvVar11);
        }
        uVar12 = FUN_?(pvVar11);
        pIVar10 = pMVar9->klass;
        if ((pIVar10->field_0x135 & 1) == 0) {
          pIVar10 = (Il2CppClass *)FUN_?(pIVar10);
        }
        FUN_?(uVar12,uVar8,
                      (pIVar10->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
        if ((pTVar7 != (Toggle_ToggleEvent *)0x0) &&
           (pIVar13 = (pTVar7->fields)._._.m_Calls, pIVar13 != (InvokableCallList *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar14 = (pIVar13->fields).m_RuntimeCalls;
          if (pLVar14 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
            FUN_?(pLVar14,uVar12);
            (pIVar13->fields).m_NeedsUpdate = 1;
            return;
          }
        }
        FUN_?();
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean IsSet() */

bool Assembly-CSharp.dll::SettingsToggle::SettingsToggle_IsSet
               (SettingsToggle *this,MethodInfo *method)

{
  pTVar1 = (this->fields).toggle;
  if (pTVar1 != (Toggle *)0x0) {
    return (pTVar1->fields).m_IsOn;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void ValueChanged(Boolean) */

void Assembly-CSharp.dll::SettingsToggle::SettingsToggle_ValueChanged
               (SettingsToggle *this,bool value,MethodInfo *method)

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
                  MethodInfo__SettingsToggle____c__DisplayClass3_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SettingsToggle____c__DisplayClass3_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SettingsToggle____c__DisplayClass3_0);
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
  *(bool *)&object[1].monitor = value;
  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__SettingsToggle____c__DisplayClass3_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
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

