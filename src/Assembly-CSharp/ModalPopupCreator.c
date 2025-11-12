
/* NotificationPopup Create(String, String) */

NotificationPopup *
Assembly-CSharp.dll::ModalPopupCreator::ModalPopupCreator_Create
          (ModalPopupCreator *this,String *text,String *header,MethodInfo *method)

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
                  NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModalPopupCreator____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ModalPopupCreator____c__DisplayClass4_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pNVar6 = (this->fields).notificationPopupPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar7 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pNVar6,
                        NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                       );
    bVar1 = iRam_? != 0;
    object[1].klass = pOVar7;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar7 = object[1].klass;
    if ((pOVar7 != (Object__Class *)0x0) &&
       (pIVar8 = (pOVar7->_0).byval_arg.data.array, pIVar8 != (Il2CppArrayType *)0x0)) {
      (**(code **)&pIVar8->etype[0x5e].attrs)(pIVar8,text,pIVar8->etype[0x5f].data.dummy);
      plVar9 = *(longlong **)&(pOVar7->_0).byval_arg.attrs;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x5e8))(plVar9,header,*(undefined8 *)(*plVar9 + 0x5f0));
        return (NotificationPopup *)object[1].klass;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pNVar6 = (NotificationPopup *)(*pcVar10)();
  return pNVar6;
}


/* Void CreateErrorNotificationPopup(String, String) */

void Assembly-CSharp.dll::ModalPopupCreator::ModalPopupCreator_CreateErrorNotificationPopup
               (ModalPopupCreator *this,String *error,String *header,MethodInfo *method)

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
                  NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModalPopupCreator____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ModalPopupCreator____c__DisplayClass4_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    original = (this->fields).notificationPopupPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar6 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                       );
    bVar1 = iRam_? != 0;
    object[1].klass = pOVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__ModalPopupCreator____c__DisplayClass4_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar6 = object[1].klass;
    if ((pOVar6 != (Object__Class *)0x0) &&
       (pIVar7 = (pOVar6->_0).byval_arg.data.array, pIVar7 != (Il2CppArrayType *)0x0)) {
      (**(code **)&pIVar7->etype[0x5e].attrs)(pIVar7,error,pIVar7->etype[0x5f].data.dummy);
      plVar8 = *(longlong **)&(pOVar6->_0).byval_arg.attrs;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x5e8))(plVar8,header,*(undefined8 *)(*plVar8 + 0x5f0));
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* ConfirmationPopup Create(String, UnityAction`2[System.Boolean,ConfirmationPopup], String) */

ConfirmationPopup *
Assembly-CSharp.dll::ModalPopupCreator::ModalPopupCreator_Create_1
          (ModalPopupCreator *this,String *text,
          UnityAction_2_System_Boolean_ConfirmationPopup_ *resultCallback,String *header,
          MethodInfo *method)

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
                  ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ModalPopupCreator____c__DisplayClass5_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModalPopupCreator____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ModalPopupCreator____c__DisplayClass5_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pCVar6 = (this->fields).confirmationPopupPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar7 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pCVar6,
                        ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                       );
    bVar1 = iRam_? != 0;
    object[1].klass = pOVar7;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__ModalPopupCreator____c__DisplayClass5_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (object[1].klass != (Object__Class *)0x0) {
      ConfirmationPopup::ConfirmationPopup_Initialize
                ((ConfirmationPopup *)object[1].klass,text,resultCallback,header,(MethodInfo *)0x0);
      return (ConfirmationPopup *)object[1].klass;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pCVar6 = (ConfirmationPopup *)(*pcVar8)();
  return pCVar6;
}


/* PleaseWaitPopup Create() */

PleaseWaitPopup *
Assembly-CSharp.dll::ModalPopupCreator::ModalPopupCreator_Create_2
          (ModalPopupCreator *this,MethodInfo *method)

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
                  PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ModalPopupCreator____c__DisplayClass6_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModalPopupCreator____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ModalPopupCreator____c__DisplayClass6_0);
  pPVar1 = (this->fields).waitPopupPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar2 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pPVar1,
                      PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                     );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pPVar1 = (PleaseWaitPopup *)(*pcVar3)();
    return pPVar1;
  }
  bVar4 = iRam_? != 0;
  object[1].klass = pOVar2;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_00,object,
             MethodInfo__ModalPopupCreator____c__DisplayClass6_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return (PleaseWaitPopup *)object[1].klass;
}


/* Void Create(MVPurchaseReturnCode, Int32) */

void Assembly-CSharp.dll::ModalPopupCreator::ModalPopupCreator_Create_3
               (ModalPopupCreator *this,MVPurchaseReturnCode__Enum returnCode,int32_t priceGold,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                  ,CONCAT44(in_register_00000014,returnCode),
                  CONCAT44(in_register_00000084,priceGold));
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
    FUN_?(&TypeInfo__MV__Common__MVPurchaseReturnCode);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ModalPopupCreator__OnGoldPurchaseDialogResult_bool__ConfirmationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ModalPopupCreator____c__DisplayClass7_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModalPopupCreator____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Get_more_gold_now_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_enough_gold);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ModalPopupCreator____c__DisplayClass7_0);
  if (object == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)this;
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
  if (returnCode == MVPurchaseReturnCode__Enum_InsufficientFunds) {
    pCVar7 = (this->fields).confirmationPopupPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pCVar7,
                        ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                       );
    bVar2 = iRam_? != 0;
    object[1].monitor = (MonitorData *)pOVar8;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__ModalPopupCreator____c__DisplayClass7_0___Create_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pCVar7 = (ConfirmationPopup *)object[1].monitor;
    pSVar9 = TM::TM__(StringLiteral_Get_more_gold_now_,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_System_Boolean_System_Object_ *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
    UnityAction_2_System_Boolean_System_Object___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ModalPopupCreator__OnGoldPurchaseDialogResult_bool__ConfirmationPopup_,
               (MethodInfo *)0x0);
    header = TM::TM__(StringLiteral_Not_enough_gold,(MethodInfo *)0x0);
    if (pCVar7 == (ConfirmationPopup *)0x0) goto code_?;
    ConfirmationPopup::ConfirmationPopup_Initialize
              (pCVar7,pSVar9,(UnityAction_2_System_Boolean_ConfirmationPopup_ *)this_01,header,
               (MethodInfo *)0x0);
  }
  else {
    EStack_10.klass = (Enum__Class *)TypeInfo__MV__Common__MVPurchaseReturnCode;
    EStack_10.monitor = (MonitorData *)0xffffffffffffffff;
    MStack_11 = returnCode;
    pSVar9 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_10,(MethodInfo *)0x0);
    ModalPopupCreator_Create(this,pSVar9,StringLiteral_Error,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnGoldPurchaseDialogResult(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ModalPopupCreator::ModalPopupCreator_OnGoldPurchaseDialogResult
               (bool result,ConfirmationPopup *confirmationPopup,MethodInfo *method)

{
  if (confirmationPopup == (ConfirmationPopup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ConfirmationPopup::ConfirmationPopup_Pop(confirmationPopup,(MethodInfo *)0x0);
  if (result == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar3 = (pGVar2->fields).purchaseGoldURL;
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_8[0] = (uint16_t *)0x0;
  puStack_4 = (uint16_t *)0x0;
  uStack_5 = 0;
  uStack_6 = 0;
  ppuStack_7 = apuStackX_8;
  if (pSVar3 != (String *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      puStack_4 = (uint16_t *)0x1;
      uStack_5 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar8 = (pSVar3->fields)._stringLength;
      apuStackX_8[0] = &(pSVar3->fields)._firstChar;
      if (iVar8 == 0) {
        apuStackX_8[0] = (uint16_t *)0x0;
      }
      uStack_5 = CONCAT44(uStack_5._4_4_,iVar8);
      puStack_4 = apuStackX_8[0];
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&puStack_4);
  return;
}

