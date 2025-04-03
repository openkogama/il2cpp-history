
/* MVHoverCraft+LocalObjectsHoverCraft(MVSimpleOneSeatVehicle, SmoothCharacterController,
   SimpleVehicleMotorBase) */

void Assembly-CSharp.dll::MVHoverCraft+LocalObjectsHoverCraft::
     MVHoverCraft_LocalObjectsHoverCraft__ctor
               (MVHoverCraft_LocalObjectsHoverCraft *this,MVSimpleOneSeatVehicle *vehicleBase,
               SmoothCharacterController *smoothController,SimpleVehicleMotorBase *hoverCraftMotor,
               MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_ESI,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                   );
    func_?(&PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__);
    func_?(&
                    VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                   );
    func_?(&
                    VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                   );
    func_?(&
                    VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                   );
    func_?(&MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&MethodInfo__PickupGUI__Enter__);
    func_?(&MethodInfo__PickupGUI__Leave__);
    func_?(&MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__,
                    uVar1);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
    cRam_? = '\x01';
  }
  (this->fields)._._.timeBeforeUnregisterAfterDeath = 3.0;
  this_01 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__);
  method_00 = (MethodInfo *)&(this->fields)._._.localComponents;
  *(MVRuntimeDataVariable_OnChangeDelegate__Class **)method_00 = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if ((vehicleBase == (MVSimpleOneSeatVehicle *)0x0) ||
     (pMVar2 = (vehicleBase->fields).Health, pMVar2 == (MVRuntimeDataVariableClampedFloat *)0x0))
  goto code_?;
  pMVar3 = (pMVar2->fields)._._.OnChange;
  this_01 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)
            func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
  VideoCapture+OnVideoCaptureResourceCreatedCallback::
  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
            ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)this_01,(Object *)this,
             MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
             (MethodInfo *)0x0);
  pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar3,(Delegate *)this_01,(MethodInfo *)0x0);
  uVar1 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar3);
  if (pMVar3 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar4 = pMVar3;
    }
    if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar2->fields)._._.OnChange = pMVar4;
      pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar4 = pMVar3;
      }
      this_01 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      goto code_?;
    }
    goto code_?;
  }
  pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
  (pMVar2->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
  func_?(&(pMVar2->fields)._._.OnChange,pMVar4);
  pGVar5 = (vehicleBase->fields)._._._._.gameObject;
  if ((pGVar5 == (GameObject *)0x0) ||
     (item = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar5,
                        VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                       ), item == (Object__Class *)0x0)) {
code_?:
    uVar1 = func_?();
code_?:
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?(uVar1);
    pAVar6 = extraout_ECX;
  }
  else {
    pOVar7 = (Object__Class *)(item->_0).image;
    (*(code *)pOVar7[1].static_fields)
              (item,(vehicleBase->fields).Modifiers,(vehicleBase->fields).Health,0,
               (vehicleBase->fields).shield,0,pOVar7[1].rgctx_data);
    this_01 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0;
    if (hoverCraftMotor == (SimpleVehicleMotorBase *)0x0) goto code_?;
    uVar1._0_1_ = (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.usingEnergy
    ;
    uVar1._1_3_ = *(undefined3 *)
                    &(vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.field_0x1
    ;
    uVar1._4_4_ = (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.storage;
    (*(code *)(hoverCraftMotor->klass->vtable).Init.method)
              (hoverCraftMotor,smoothController,item,uVar1,
               (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.consumption,
               (hoverCraftMotor->klass->vtable).OnLocalVehicleLeave.methodPtr);
    ppAVar8 = &(this->fields)._._.onEnter;
    pAVar9 = *ppAVar8;
    this_01 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)
              func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)this_01,(Object *)hoverCraftMotor,
               (hoverCraftMotor->klass->vtable).__unknown_3.methodPtr,(MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar9,(Delegate *)this_01,(MethodInfo *)0x0);
    uVar1 = CONCAT44(TypeInfo__System__Action,pMVar3);
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      *ppAVar8 = (Action *)0x0;
    }
    else {
      if (pMVar3->klass == (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action
         ) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      *ppAVar8 = (Action *)pMVar4;
      pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar3->klass == (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action
         ) {
        pMVar4 = pMVar3;
      }
      this_01 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action;
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    }
    func_?(ppAVar8,pMVar4);
    ppAVar8 = &(this->fields)._._.onLeave;
    pAVar9 = *ppAVar8;
    pGVar5 = (GameObject *)&UNK_?;
    this_01 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)this_01,(Object *)hoverCraftMotor,
               (hoverCraftMotor->klass->vtable).OnLocalVehicleEnter.methodPtr,(MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar9,(Delegate *)this_01,(MethodInfo *)0x0);
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      *ppAVar8 = (Action *)0x0;
code_?:
      func_?(ppAVar8,pMVar4);
      pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (pGVar5,
                          VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                         );
      this_01 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)(vehicleBase->fields).CurrentItem;
      if (pOVar10 == (Object *)0x0) goto code_?;
      pOVar10[3].klass = item;
      func_?(pOVar10 + 3,item);
      pOVar10[3].monitor = (MonitorData *)this_01;
      func_?(&pOVar10[3].monitor);
      this_00 = (vehicleBase->fields)._._._._.gameObject;
      if (this_00 == (GameObject *)0x0) goto code_?;
      pVVar11 = (VehiclePickupOwner *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (this_00,
                           VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                          );
      ppVVar12 = &(this->fields)._.pickupOwner;
      *ppVVar12 = pVVar11;
      func_?(ppVVar12,pVVar11);
      this_01 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)ppVVar12;
      if (*ppVVar12 == (VehiclePickupOwner *)0x0) goto code_?;
      ((*ppVVar12)->fields)._._IsLocal_k__BackingField = 1;
      pMVar13 = &this->fields;
      pAVar9 = (pMVar13->_)._.onDestroy;
      this_01 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)*ppVVar12;
      pNVar14 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar14,(Object *)this_01,MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__
                 ,(MethodInfo *)0x0);
      pAVar15 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar9,(Delegate *)pNVar14,(MethodInfo *)0x0);
      uVar1 = CONCAT44(TypeInfo__System__Action,pAVar15);
      pAVar9 = (Action *)0x0;
      if (pAVar15 != (Action *)0x0) {
        if (pAVar15->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar15;
        }
        if (pAVar9 != (Action *)0x0) {
          (pMVar13->_)._.onDestroy = pAVar9;
          uVar1 = CONCAT44(TypeInfo__System__Action,pAVar15);
          pAVar9 = (Action *)0x0;
          if (pAVar15->klass == TypeInfo__System__Action) {
            pAVar9 = pAVar15;
          }
          this_01 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)pMVar13;
          if (pAVar9 != (Action *)0x0) goto code_?;
        }
        goto code_?;
      }
      (pMVar13->_)._.onDestroy = (Action *)0x0;
code_?:
      func_?(pMVar13,pAVar9);
      pPVar16 = (PickupGUI *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar5,
                           PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__)
      ;
      this_01 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)&(this->fields)._.pickupGUI;
      *(PickupGUI **)this_01 = pPVar16;
      func_?(this_01,pPVar16);
      if (*(PickupGUI **)this_01 == (PickupGUI *)0x0) goto code_?;
      PickupGUI::PickupGUI_Initialize
                (*(PickupGUI **)this_01,(vehicleBase->fields)._._._._._.id,(MVPickupOwner *)*ppVVar12
                 ,(MethodInfo *)0x0);
      this_01 = *(MVRuntimeDataVariable_OnChangeDelegate__Class **)this_01;
      pAVar9 = (pMVar13->_)._.onDestroy;
      item_00 = TypeInfo__System__Action;
      pNVar14 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar14,(Object *)this_01,MethodInfo__PickupGUI__Enter__,(MethodInfo *)0x0);
      pAVar15 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar9,(Delegate *)pNVar14,(MethodInfo *)0x0);
      uVar1 = CONCAT44(TypeInfo__System__Action,pAVar15);
      pAVar9 = (Action *)0x0;
      if (pAVar15 == (Action *)0x0) {
        (pMVar13->_)._.onDestroy = (Action *)0x0;
code_?:
        puVar17 = (undefined4 *)&UNK_?;
        func_?(pMVar13,pAVar9);
        this_01 = _UNK_?;
        a = (Delegate *)*puVar17;
        pGVar5 = (GameObject *)&UNK_?;
        pAVar18 = TypeInfo__System__Action;
        pNVar14 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar14,(Object *)this_01,MethodInfo__PickupGUI__Leave__,(MethodInfo *)0x0);
        pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           (a,(Delegate *)pNVar14,(MethodInfo *)0x0);
        if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          (pAVar18->_0).image = (Il2CppImage *)0x0;
        }
        else {
          pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar3->klass ==
              (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
            pMVar4 = pMVar3;
          }
          pAVar6 = TypeInfo__System__Action;
          if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
          (pAVar18->_0).image = (Il2CppImage *)pMVar4;
          uVar1 = CONCAT44(TypeInfo__System__Action,pMVar3);
          pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar3->klass ==
              (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
            pMVar4 = pMVar3;
          }
          if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
        }
        func_?(pAVar18,pMVar4);
        pMVar19 = (MVTriggerHandler *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar5,
                             MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                            );
        ppMVar20 = &(this->fields)._.triggerHandler;
        *ppMVar20 = pMVar19;
        func_?(ppMVar20,pMVar19);
        pLVar21 = (this->fields)._._.localComponents;
        if (pLVar21 != (List_1_UnityEngine_Component_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar21,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                    );
          pLVar21 = (this->fields)._._.localComponents;
          if (pLVar21 != (List_1_UnityEngine_Component_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar21,(Object *)smoothController,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                      );
            pLVar21 = (this->fields)._._.localComponents;
            if (pLVar21 != (List_1_UnityEngine_Component_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pLVar21,(Object *)hoverCraftMotor,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                        );
              pLVar21 = (this->fields)._._.localComponents;
              if (pLVar21 != (List_1_UnityEngine_Component_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          ((List_1_System_Object_ *)pLVar21,(Object *)item_00,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                          );
                pLVar21 = (this->fields)._._.localComponents;
                if (pLVar21 != (List_1_UnityEngine_Component_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pLVar21,
                             (Object *)(this->fields)._.triggerHandler,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                            );
                  ppSVar22 = &(this->fields)._.vehicleMotor;
                  *ppSVar22 = hoverCraftMotor;
                  func_?(ppSVar22,hoverCraftMotor);
                  ppMVar23 = &(this->fields)._.owner;
                  *ppMVar23 = vehicleBase;
                  func_?(ppMVar23,vehicleBase);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
      if (pAVar15->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar15;
      }
      if (pAVar9 != (Action *)0x0) {
        (pMVar13->_)._.onDestroy = pAVar9;
        uVar1 = CONCAT44(TypeInfo__System__Action,pAVar15);
        pAVar9 = (Action *)0x0;
        if (pAVar15->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar15;
        }
        if (pAVar9 != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
    if (pMVar3->klass == (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action)
    {
      pMVar4 = pMVar3;
    }
    pAVar6 = TypeInfo__System__Action;
    if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      *ppAVar8 = (Action *)pMVar4;
      pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar3->klass == (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action
         ) {
        pMVar4 = pMVar3;
      }
      this_01 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action;
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?(pMVar3,pAVar6);
code_?:
  func_?(pMVar3,this_01);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}

