
/* Void Close() */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_Close
               (MaterialsControllerEditMode *this,MethodInfo *method)

{
  pUVar1 = (this->fields).closeCallback;
  if (pUVar1 != (UnityAction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_OnEnable
               (MaterialsControllerEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MaterialsControllerEditMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial;
  if ((this->fields).prevMaterial != bVar1) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).OnMaterialChanged_1.methodPtr)
              (this,(ulonglong)bVar1,(this->klass->vtable).OnMaterialChanged_1.method);
    return;
  }
  return;
}


/* Void OnMaterialChanged(Byte) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_OnMaterialChanged
               (MaterialsControllerEditMode *this,uint8_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).prevMaterial = id;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.desktopCubeModelingController;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pDVar2 != (DesktopCubeModelingController *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pDVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pDVar2 = (this->fields)._.desktopCubeModelingController;
      if (pDVar2 == (DesktopCubeModelingController *)0x0) goto code_?;
      DesktopCubeModelingController::DesktopCubeModelingController_SetMaterial
                (pDVar2,id,(MethodInfo *)0x0);
    }
  }
  pUVar3 = (this->fields)._.materialChange;
  if (pUVar3 != (UnityAction_1_System_Byte_ *)0x0) {
    (*(pUVar3->fields)._._.invoke_impl)((pUVar3->fields)._._.method_code,id);
  }
  pDVar2 = (this->fields).desktopCubeModelingControllerEditMode;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pDVar2 != (DesktopCubeModelingController *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pDVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pDVar2 = (this->fields).desktopCubeModelingControllerEditMode;
      if (pDVar2 == (DesktopCubeModelingController *)0x0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DesktopCubeModelingController::DesktopCubeModelingController_SetMaterial
                (pDVar2,id,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_OnPop
               (MaterialsControllerEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyUnRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialsControllerEditMode____c___OnPop_b__14_0_UnityEngine__EventSystems__IShortcutKeyUnRegister__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialsControllerEditMode____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MaterialsControllerEditMode____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MaterialsControllerEditMode____c);
  }
  this_01 = TypeInfo__MaterialsControllerEditMode____c->static_fields->__9__14_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IShortcutKeyUnRegister_ *)0x0) {
    if (*(int *)&(TypeInfo__MaterialsControllerEditMode____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MaterialsControllerEditMode____c);
    }
    object = TypeInfo__MaterialsControllerEditMode____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IShortcutKeyUnRegister_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__MaterialsControllerEditMode____c___OnPop_b__14_0_UnityEngine__EventSystems__IShortcutKeyUnRegister__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__MaterialsControllerEditMode____c->static_fields->__9__14_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                     &TypeInfo__MaterialsControllerEditMode____c->static_fields->__9__14_0 >> 0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyUnRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>_
            );
  this_00 = (this->fields)._.desktopCubeModelingController;
  if ((this_00 != (DesktopCubeModelingController *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields).desktopCubeModelingControllerEditMode = (DesktopCubeModelingController *)0x0;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(this->fields).desktopCubeModelingControllerEditMode >> 0xc);
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
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Open(UnityAction) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_Open
               (MaterialsControllerEditMode *this,UnityAction *closeCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
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
                  MethodInfo__MaterialsControllerEditMode___Open_b__10_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialsControllerEditMode___Open_b__10_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialsControllerEditMode____c___Open_b__10_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialsControllerEditMode____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar2,(Object *)this,
             MethodInfo__MaterialsControllerEditMode___Open_b__10_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  pDVar3 = (this->fields)._.desktopCubeModelingController;
  if ((pDVar3 != (DesktopCubeModelingController *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pDVar3,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields).closeCallback = closeCallback;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).closeCallback >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pDVar3 = (this->fields).desktopCubeModelingControllerEditCubeModelPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pDVar3 = (DesktopCubeModelingController *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pDVar3,
                         DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                        );
    bVar4 = iRam_? != 0;
    (this->fields).desktopCubeModelingControllerEditMode = pDVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).desktopCubeModelingControllerEditMode >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pDVar3 = (this->fields).desktopCubeModelingControllerEditMode;
    if (pDVar3 != (DesktopCubeModelingController *)0x0) {
      DesktopCubeModelingController::DesktopCubeModelingController_Initialize
                (pDVar3,(this->fields)._.cubeModelingStateMachine,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MaterialsControllerEditMode____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MaterialsControllerEditMode____c);
      }
      this_02 = TypeInfo__MaterialsControllerEditMode____c->static_fields->__9__10_1;
      if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__MaterialsControllerEditMode____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MaterialsControllerEditMode____c);
        }
        object = TypeInfo__MaterialsControllerEditMode____c->static_fields->__9;
        this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                   MethodInfo__MaterialsControllerEditMode____c___Open_b__10_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__MaterialsControllerEditMode____c->static_fields->__9__10_1 = this_02;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)
                          &TypeInfo__MaterialsControllerEditMode____c->static_fields->__9__10_1 >>
                         0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (pEVar2,(Object *)this,
                 MethodInfo__MaterialsControllerEditMode___Open_b__10_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      pMVar9 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,pEVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      this_00 = (this->fields)._.cubeModelingStateMachine;
      if (this_00 != (CubeModelingStateMachine *)0x0) {
        value = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                          (this_00,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__CubeModelingStateMachine___set_CurrentMaterialId_b__23_0_UnityEngine__EventSystems__IHandleMaterial__UnityEngine__EventSystems__BaseEventData_
                        ,value,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleMaterial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MaterialsControllerEditMode);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial = value;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        OVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
                 ObscuredByte_op_Implicit(value,(MethodInfo *)0x0);
        bVar4 = cRam_? == '\0';
        (this_00->fields).currentMaterialId = OVar10;
        if (bVar4) {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar11 != (MVGameControllerBase *)0x0) &&
            (pMVar12 = (pMVar11->fields).game, pMVar12 != (MVNetworkGame *)0x0)) &&
           (pMVar13 = (pMVar12->fields).operationRequests,
           pMVar13 != (MVNetworkGame_OperationRequests *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_03 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
          ObscuredByte_InternalDecrypt((ObscuredByte *)&stack0x00000010,(MethodInfo *)0x0);
          value_00 = (Object *)FUN_?(uRam_?,&stack0x00000010);
          if (this_03 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar14 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x67);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_03,0x67,value_00,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar9 >> 8),2),
                       method_00);
            pPVar15 = (pMVar13->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar15 != (PhotonPeer *)0x0) {
              (*(pPVar15->klass->vtable).SendOperation.methodPtr)
                        (pPVar15,CONCAT71((int7)((ulonglong)uVar14 >> 8),0x79),this_03,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar15->klass->vtable).SendOperation.method);
              pGVar1 = (this_00->fields).gameObject;
              pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        (pEVar2,(Object *)this_00,
                         MethodInfo__CubeModelingStateMachine___set_CurrentMaterialId_b__23_0_UnityEngine__EventSystems__IHandleMaterial__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pMVar9 = 
              UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleMaterial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>_
              ;
              if ((
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleMaterial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>_
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
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_GetEventChain
                        (pGVar1,(IList_1_UnityEngine_Transform_ *)
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                                 s_InternalTransformList,(MethodInfo *)0x0);
              pLVar16 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar16 != (List_1_UnityEngine_Transform_ *)0x0) {
                lVar6 = (longlong)(pLVar16->fields)._size;
                uVar5 = 0;
                if (0 < lVar6) {
                  lVar17 = 0;
                  lVar18 = 0x20;
                  do {
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    pLVar16 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList;
                    if (pLVar16 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                    if ((uint)(pLVar16->fields)._size <= uVar5) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    pTVar20 = (pLVar16->fields)._items;
                    if (pTVar20 == (Transform__Array *)0x0) goto code_?;
                    if ((uint)pTVar20->max_length <= uVar5) {
                      FUN_?();
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    this_01 = *(Component **)((longlong)pTVar20->vector + lVar18 + -0x20);
                    if (this_01 == (Component *)0x0) goto code_?;
                    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject(this_01,(MethodInfo *)0x0);
                    bVar21 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                             ExecuteEvents_Execute_18
                                       (pGVar1,(BaseEventData *)0x0,pEVar2,
                                        (pMVar9->field7_0x38).rgctx_data[1].method);
                    if (bVar21 != 0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_01,(MethodInfo *)0x0);
                      return;
                    }
                    uVar5 = uVar5 + 1;
                    lVar17 = lVar17 + 1;
                    lVar18 = lVar18 + 8;
                  } while (lVar17 < lVar6);
                }
                return;
              }
code_?:
              FUN_?();
              pcVar19 = (code *)swi(3);
              (*pcVar19)();
              return;
            }
          }
        }
        FUN_?();
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void PlayModeToggleOverwrite() */

void Assembly-CSharp.dll::MaterialsControllerEditMode::
     MaterialsControllerEditMode_PlayModeToggleOverwrite
               (MaterialsControllerEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ignoring);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_Ignoring;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Transform SetActive() */

Transform *
Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_SetActive
          (MaterialsControllerEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.desktopCubeModelingControllerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pDVar1 = (DesktopCubeModelingController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pDVar1,
                      DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                     );
  bVar2 = iRam_? != 0;
  (this->fields)._.desktopCubeModelingController = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.desktopCubeModelingController >> 0xc);
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
  pDVar1 = (this->fields)._.desktopCubeModelingController;
  if (pDVar1 != (DesktopCubeModelingController *)0x0) {
    DesktopCubeModelingController::DesktopCubeModelingController_Initialize
              (pDVar1,(this->fields)._.cubeModelingStateMachine,(MethodInfo *)0x0);
    pCVar7 = (this->fields)._.cubeModelingStateMachine;
    if (pCVar7 != (CubeModelingStateMachine *)0x0) {
      uVar8 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                        (pCVar7,(MethodInfo *)0x0);
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (pCVar7,uVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.desktopCubeModelingController;
      if (pDVar1 != (DesktopCubeModelingController *)0x0) {
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pDVar1,(MethodInfo *)0x0);
        pCVar7 = (this->fields)._.cubeModelingStateMachine;
        this_00 = (this->fields).createCubeModelController;
        if ((pCVar7 != (CubeModelingStateMachine *)0x0) &&
           (uVar8 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                              (pCVar7,(MethodInfo *)0x0),
           this_00 != (CreateCubeModelController *)0x0)) {
          CreateCubeModelController::CreateCubeModelController_Initialize
                    (this_00,(MaterialsController *)this,pTVar9,uVar8,(MethodInfo *)0x0);
          return pTVar9;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pTVar9 = (Transform *)(*pcVar10)();
  return pTVar9;
}


/* Void <Open>b__10_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode__Open_b__10_0
               (MaterialsControllerEditMode *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MaterialsControllerEditMode__PlayModeToggleOverwrite__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__MaterialsControllerEditMode__PlayModeToggleOverwrite__,(MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Open>b__10_2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode__Open_b__10_2
               (MaterialsControllerEditMode *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MaterialsControllerEditMode__OnPop__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).desktopCubeModelingControllerEditMode;
  if (this_00 != (DesktopCubeModelingController *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__MaterialsControllerEditMode__OnPop__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Transform get_CubeModelingControllerTransform() */

Transform *
Assembly-CSharp.dll::MaterialsControllerEditMode::
MaterialsControllerEditMode_get_CubeModelingControllerTransform
          (MaterialsControllerEditMode *this,MethodInfo *method)

{
  obj = (this->fields)._.desktopCubeModelingController;
  if (obj == (DesktopCubeModelingController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pTVar2 = (Transform *)(*pcVar1)();
    return pTVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (DesktopCubeModelingController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pTVar2 = (Transform *)(*pcVar1)();
    return pTVar2;
  }
  pvVar3 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pTVar2 = (Transform *)(*pcVar1)();
    return pTVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    pTVar2 = (Transform *)(*pcVar1)();
    return pTVar2;
  }
  pcRam_? = pcVar1;
  plVar5 = (longlong *)(*pcRam_?)(pvVar3);
  pMVar6 = 
  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
  ;
  if ((
      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                 );
  }
  if (plVar5 != (longlong *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    System__Runtime__InteropServices__GCHandle__MethodInfo__Unity__Collections__LowLevel__Unsafe__UnsafeUtility__As<void*,_System::Runtime::InteropServices::GCHandle>_System__IntPtr__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((ulonglong)plVar5 & 1) == 0) {
      lVar7 = *plVar5;
    }
    else {
      lVar7 = FUN_?(plVar5);
    }
    pvVar3 = ((pMVar6->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    if (lVar7 != 0) {
      pTVar2 = (Transform *)FUN_?(lVar7,pvVar3,in_R8,in_R9,unaff_RDI);
      if (pTVar2 != (Transform *)0x0) {
        return pTVar2;
      }
      FUN_?(lVar7,pvVar3);
      pcVar1 = (code *)swi(3);
      pTVar2 = (Transform *)(*pcVar1)();
      return pTVar2;
    }
  }
  return (Transform *)0x0;
}

