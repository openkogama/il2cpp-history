
/* Void OnValueChanged() */

void Assembly-CSharp.dll::AccessoryShopToggleInventory::AccessoryShopToggleInventory_OnValueChanged
               (AccessoryShopToggleInventory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryShopToggleInventory___OnValueChanged_b__8_0_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toggle;
  if ((pTVar1 != (Toggle *)0x0) && (pGVar2 = (this->fields).backpackOn, pGVar2 != (GameObject *)0x0)
     ) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,(pTVar1->fields).m_IsOn,(MethodInfo *)0x0);
    pTVar1 = (this->fields).toggle;
    if ((pTVar1 != (Toggle *)0x0) &&
       (pGVar2 = (this->fields).backpackOff, pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,(pTVar1->fields).m_IsOn == 0,(MethodInfo *)0x0);
      pTVar1 = (this->fields).toggle;
      if (pTVar1 != (Toggle *)0x0) {
        pIVar3 = (this->fields).checkBox;
        if ((pTVar1->fields).m_IsOn == 0) {
          if (pIVar3 == (Image *)0x0) goto code_?;
          fStack_4 = (this->fields).toggleOffColor.r;
          fStack_5 = (this->fields).toggleOffColor.g;
          fStack_6 = (this->fields).toggleOffColor.b;
          fStack_7 = (this->fields).toggleOffColor.a;
        }
        else {
          if (pIVar3 == (Image *)0x0) goto code_?;
          fStack_4 = (this->fields).toggleOnColor.r;
          fStack_5 = (this->fields).toggleOnColor.g;
          fStack_6 = (this->fields).toggleOnColor.b;
          fStack_7 = (this->fields).toggleOnColor.a;
        }
        (*(pIVar3->klass->vtable).set_color.methodPtr)
                  (pIVar3,&fStack_4,(pIVar3->klass->vtable).set_color.method);
        obj = (this->fields).canvasGroup;
        if (obj != (CanvasGroup *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar8 = (obj->fields)._._._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          cVar11 = (*pcRam_?)(pvVar8);
          if (cVar11 != '\0') {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_00,(Object *)this,
                       MethodInfo__AccessoryShopToggleInventory___OnValueChanged_b__8_0_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar2,(BaseEventData *)0x0,this_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
                      );
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetBackpackIconIsEnabled(Boolean) */

void Assembly-CSharp.dll::AccessoryShopToggleInventory::
     AccessoryShopToggleInventory_SetBackpackIconIsEnabled
               (AccessoryShopToggleInventory *this,bool enable,MethodInfo *method)

{
  value = _UNK_?;
  if (enable != 0) {
    value = _UNK_?;
  }
  pCVar1 = (this->fields).canvasGroup;
  if (pCVar1 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar1,value,(MethodInfo *)0x0);
    pCVar1 = (this->fields).canvasGroup;
    if (pCVar1 != (CanvasGroup *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                      ,enable,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pCVar1 == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (pCVar1->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar3,enable);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OnValueChanged>b__8_0(IAccessoryInventoryControl, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopToggleInventory::
     AccessoryShopToggleInventory__OnValueChanged_b__8_0
               (AccessoryShopToggleInventory *this,IAccessoryInventoryControl *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toggle;
  if ((pTVar1 == (Toggle *)0x0) || (x == (IAccessoryInventoryControl *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = (pTVar1->fields).m_IsOn == 0;
  pIVar4 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)bVar3;
  uVar5 = 0;
  pIVar6 = x->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    pIVar4 = pIVar6->interfaceOffsets;
    do {
      if (pIVar4[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryInventoryControl) {
        pVVar8 = &(pIVar6->vtable).DisplayPurchasableItems + pIVar4[uVar5].offset;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  pVVar8 = (VirtualInvokeData *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryInventoryControl,0,pIVar4,
                         unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar8->methodPtr)(x,(ulonglong)bVar3,pVVar8->method,pVVar8->methodPtr);
  return;
}

