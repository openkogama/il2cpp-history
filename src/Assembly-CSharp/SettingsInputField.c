
/* Void Initialize(String, String) */

void Assembly-CSharp.dll::SettingsInputField::SettingsInputField_Initialize
               (SettingsInputField *this,String *key,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__SettingsInputField__ValueChanged_System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
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
  pIVar6 = (this->fields).inputField;
  if (pIVar6 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
              (pIVar6,value,1,(MethodInfo *)0x0);
    pIVar6 = (this->fields).inputField;
    if (pIVar6 != (InputField *)0x0) {
      pIVar7 = (pIVar6->fields).m_OnValueChanged;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,MethodInfo__SettingsInputField__ValueChanged_System__String_
                 ,(MethodInfo *)0x0);
      if (pIVar7 != (InputField_OnChangeEvent *)0x0) {
        pMVar8 = MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                 ->klass->rgctx_data[2].method;
        pIVar9 = pMVar8->klass;
        if ((pIVar9->field_0x135 & 1) == 0) {
          pIVar9 = (Il2CppClass *)FUN_?(pIVar9);
        }
        pvVar10 = pIVar9->rgctx_data[5].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0) {
          pvVar10 = (void *)FUN_?(pvVar10);
        }
        uVar11 = FUN_?(pvVar10);
        pIVar9 = pMVar8->klass;
        if ((pIVar9->field_0x135 & 1) == 0) {
          pIVar9 = (Il2CppClass *)FUN_?(pIVar9);
        }
        FUN_?(uVar11,this_00,
                      (pIVar9->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
        if ((pIVar7 != (InputField_OnChangeEvent *)0x0) &&
           (pIVar12 = (pIVar7->fields)._._.m_Calls, pIVar12 != (InvokableCallList *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar13 = (pIVar12->fields).m_RuntimeCalls;
          if (pLVar13 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
            FUN_?(pLVar13,uVar11);
            (pIVar12->fields).m_NeedsUpdate = 1;
            return;
          }
        }
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SettingsInputField::SettingsInputField_Reset
               (SettingsInputField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (InputField *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).inputField = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).inputField >> 0xc);
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


/* Void Update() */

void Assembly-CSharp.dll::SettingsInputField::SettingsInputField_Update
               (SettingsInputField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inputField;
  if (pIVar1 == (InputField *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pIVar1->fields).m_AllowInput == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = (MVInputWrapper_InputSuppression *)
           FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  pIVar4 = (pMVar3->klass->vtable).set_IsSuppressed.methodPtr;
  (*pIVar4)(pMVar3,CONCAT71((int7)((ulonglong)method >> 8),1),
            (pMVar3->klass->vtable).set_IsSuppressed.method,pIVar4,unaff_RBX);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed = pMVar3;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed >>
                  0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}


/* Void ValueChanged(String) */

void Assembly-CSharp.dll::SettingsInputField::SettingsInputField_ValueChanged
               (SettingsInputField *this,String *value,MethodInfo *method)

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
                  MethodInfo__SettingsInputField____c__DisplayClass4_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SettingsInputField____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SettingsInputField____c__DisplayClass4_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  object[1].klass = (Object__Class *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  iVar7 = iRam_?;
  object[1].monitor = (MonitorData *)value;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__SettingsInputField____c__DisplayClass4_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
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
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar8,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar3 = (longlong)(pLVar10->fields)._size;
    uVar2 = 0;
    if (0 < lVar3) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar13 = (pLVar10->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar2) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar8,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar3);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

