
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_Awake(VehicleUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action<bool,_float>);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<bool>_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<bool>
                   );
    func_?(&
                    MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnIsInVehicleChange_bool_
                   );
    func_?(&
                    MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnSpawnRoleModeChange_int_
                   );
    func_?(&
                    MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnSpeedOMeterShowHide_bool__float_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).rectTransform;
  if (this_00 == (RectTransform *)0x0) {
code_?:
    pAVar1 = unaff_ESI;
    func_?();
  }
  else {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,0,(MethodInfo *)0x0);
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar2 == (SpawnRoleDataMediator *)0x0) goto code_?;
    unaff_ESI = (Action_2_Boolean_Single___Class *)(pSVar2->fields).isInVehicle;
    unaff_EDI = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)unaff_EDI,(Object *)this,
               MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnIsInVehicleChange_bool_
               ,(MethodInfo *)0x0);
    if (unaff_ESI == (Action_2_Boolean_Single___Class *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
              ((SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)unaff_ESI,
               unaff_EDI,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<bool>_
              );
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
    unaff_ESI = (Action_2_Boolean_Single___Class *)(pMVar3->fields)._.spawnRolesManager;
    unaff_EDI = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)unaff_EDI,(Object *)this,
               MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnSpawnRoleModeChange_int_
               ,(MethodInfo *)0x0);
    if (unaff_ESI == (Action_2_Boolean_Single___Class *)0x0) goto code_?;
    SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
              ((SpawnRolesManager *)unaff_ESI,(Action_1_Int32_ *)unaff_EDI,(MethodInfo *)0x0);
    pAVar1 = TypeInfo__System__Action<bool,_float>;
    pSVar4 = (this->fields).speedOMeter;
    if (pSVar4 == (SpeedOMeter *)0x0) goto code_?;
    a = (pSVar4->fields).OnShowHide;
    this_02 = (Action_2_Int32_Single_ *)func_?();
    mscorlib.dll::System::Action`2[Int32,Single]::Action_2_Int32_Single___ctor
              (this_02,(Object *)this,
               MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnSpeedOMeterShowHide_bool__float_
               ,(MethodInfo *)0x0);
    unaff_EDI = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)a,(Delegate *)this_02,(MethodInfo *)0x0);
    pAVar5 = TypeInfo__System__Action<bool,_float>;
    if (unaff_EDI ==
        (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0
       ) {
      (pAVar1->_0).parent = (Il2CppClass *)0x0;
      pSStack6 =
           (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           &(pAVar1->_0).parent;
      pAStack7 = (Action_2_Boolean_Single___Class *)unaff_EDI;
      func_?();
      return;
    }
    pAStack7 = TypeInfo__System__Action<bool,_float>;
    pSStack6 = unaff_EDI;
    pIVar8 = (Il2CppClass *)func_?();
    pAStack7 = pAVar5;
    if (pIVar8 == (Il2CppClass *)0x0) goto code_?;
    (pAVar1->_0).parent = pIVar8;
    this = (VehicleUIController *)TypeInfo__System__Action<bool,_float>;
    pAStack7 = TypeInfo__System__Action<bool,_float>;
    pSStack6 = unaff_EDI;
    pAStack7 = (Action_2_Boolean_Single___Class *)func_?();
    if (pAStack7 != (Action_2_Boolean_Single___Class *)0x0) {
      pSStack6 =
           (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           &(pAVar1->_0).parent;
      func_?();
      return;
    }
  }
  pSStack6 = unaff_EDI;
  pAStack7 = (Action_2_Boolean_Single___Class *)this;
  func_?();
  pAStack7 = pAVar1;
code_?:
  pSStack6 = unaff_EDI;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_FixedUpdate(VehicleUIController *this,MethodInfo *method)

{
  if ((this->fields).hasRigidBody == 0) {
    return;
  }
  this_00 = (this->fields).speedOMeter;
  if ((this_00 != (SpeedOMeter *)0x0) &&
     (SpeedOMeter::SpeedOMeter_UpdateSpeed(this_00,(MethodInfo *)0x0),
     (this->fields).vehicleEnergyMeter != (VehicleEnergyMeterText *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&::StringLiteral__);
      cRam_? = '\x01';
    }
    if (*(char *)(in_stack_1 + 0x18) == '\0') {
      return;
    }
    if (*(VehicleEnergyContainer **)(in_stack_1 + 0x1c) != (VehicleEnergyContainer *)0x0) {
      fVar2 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
              VehicleEnergyContainer_get_EnergyStatus
                        (*(VehicleEnergyContainer **)(in_stack_1 + 0x1c),(MethodInfo *)0x0);
      iVar3 = (int)(fVar2 * _UNK_?);
      if (iVar3 < *(int *)(in_stack_1 + 0x20)) {
        *(int *)(in_stack_1 + 0x20) = iVar3;
      }
      else if (*(int *)(in_stack_1 + 0x20) < iVar3) {
        *(int *)(in_stack_1 + 0x20) = *(int *)(in_stack_1 + 0x20) + 1;
      }
      piVar4 = *(int **)(in_stack_1 + 0x14);
      unaff_retaddr = (int *)0x0;
      mscorlib.dll::System::Int32::Int32_ToString
                ((Int32 *)(in_stack_1 + 0x20),(MethodInfo *)0x0);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x318))(piVar4);
        unaff_retaddr = piVar4;
        if (cRam_? == '\0') {
          func_?(&
                          TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText
                         );
          cRam_? = '\x01';
          unaff_retaddr = piVar4;
        }
        piVar4 = *(int **)(in_stack_1 + 0x14);
        if (*(int *)(in_stack_1 + 0x20) < 0x14) {
          if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(
                           TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText
                           );
          }
          pVVar5 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->
                   static_fields;
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0x178))
                      (piVar4,(pVVar5->WarningColor).r,(pVVar5->WarningColor).g,
                       (pVVar5->WarningColor).b,(pVVar5->WarningColor).a,
                       *(undefined4 *)(*piVar4 + 0x17c));
            if (3 < *(int *)(in_stack_1 + 0x24)) {
              *(undefined4 *)(in_stack_1 + 0x24) = 0xfffffffc;
            }
            if ((*(Component **)(in_stack_1 + 0x14) != (Component *)0x0) &&
               (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   (*(Component **)(in_stack_1 + 0x14),(MethodInfo *)0x0),
               pTVar6 != (Transform *)0x0)) {
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localPosition
                                 ((Vector3 *)&stack0xfffffff8,pTVar6,(MethodInfo *)0x0);
              if (*(int *)(in_stack_1 + 0x24) < 0) {
                fVar2 = pVVar7->y + _UNK_?;
              }
              else {
                fVar2 = pVVar7->y - _UNK_?;
              }
              if (*(Component **)(in_stack_1 + 0x14) != (Component *)0x0) {
                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   (*(Component **)(in_stack_1 + 0x14),(MethodInfo *)0x0);
                if (pTVar6 != (Transform *)0x0) {
                  value.y = fVar2;
                  value.x = (float)*(undefined4 *)(in_stack_1 + 0x38);
                  value.z = *(float *)(in_stack_1 + 0x40);
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar6,value,(MethodInfo *)0x0);
                  *(int *)(in_stack_1 + 0x24) = *(int *)(in_stack_1 + 0x24) + 1;
                  return;
                }
              }
            }
          }
        }
        else if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x178))
                    (piVar4,*(undefined4 *)(in_stack_1 + 0x28),
                     *(undefined4 *)(in_stack_1 + 0x2c),
                     *(undefined4 *)(in_stack_1 + 0x30),
                     *(undefined4 *)(in_stack_1 + 0x34),*(undefined4 *)(*piVar4 + 0x17c));
          if ((*(Component **)(in_stack_1 + 0x14) != (Component *)0x0) &&
             (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 (*(Component **)(in_stack_1 + 0x14),(MethodInfo *)0x0),
             pTVar6 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar6,*(Vector3 *)(in_stack_1 + 0x38),(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    func_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)(unaff_retaddr);
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnIsInVehicleChange(Boolean) */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_OnIsInVehicleChange
               (VehicleUIController *this,bool value,MethodInfo *method)

{
  (this->fields).insideVehicle = value;
  VehicleUIController_UpdateRigidBody(this,(MethodInfo *)0x0);
  VehicleUIController_UpdateUI(this,(MethodInfo *)0x0);
  return;
}


/* Void OnSpawnRoleModeChange(Int32) */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_OnSpawnRoleModeChange
               (VehicleUIController *this,int32_t i,MethodInfo *method)

{
  VehicleUIController_UpdateRigidBody(this,(MethodInfo *)0x0);
  VehicleUIController_UpdateUI(this,(MethodInfo *)0x0);
  return;
}


/* Void OnSpeedOMeterShowHide(Boolean, Single) */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_OnSpeedOMeterShowHide
               (VehicleUIController *this,bool visible,float alpha,MethodInfo *method)

{
  if (visible == 0) {
    pVVar1 = (this->fields).vehicleEnergyMeter;
    if (pVVar1 == (VehicleEnergyMeterText *)0x0) goto code_?;
    if ((pVVar1->fields).isVisible != 0) {
      return;
    }
  }
  VehicleUIController_UpdateVisibility(this,(MethodInfo *)0x0);
  this_00 = (this->fields).rectTransform;
  if ((this_00 != (RectTransform *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,visible,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_Start(VehicleUIController *this,MethodInfo *method)

{
  VehicleUIController_UpdateRigidBody(this,(MethodInfo *)0x0);
  pSVar1 = (in_stack_2->fields).speedOMeter;
  if (pSVar1 != (SpeedOMeter *)0x0) {
    (*(code *)(pSVar1->klass->vtable).Initialize.method)
              (pSVar1,(in_stack_2->fields).insideVehicle,
               (in_stack_2->fields).rigidBody,pSVar1->klass[1]._0.image);
    pVVar3 = (in_stack_2->fields).vehicleEnergyMeter;
    if (pVVar3 != (VehicleEnergyMeterText *)0x0) {
      (*(code *)(pVVar3->klass->vtable).Initialize.method)
                (pVVar3,(in_stack_2->fields).insideVehicle,
                 (in_stack_2->fields).rigidBody,pVVar3->klass[1]._0.image);
      VehicleUIController_UpdateVisibility(in_stack_2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateRigidBody() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_UpdateRigidBody(VehicleUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    (this->fields).insideVehicle = 0;
    (this->fields).rigidBody = (MVRigidBody *)0x0;
    func_?(&(this->fields).rigidBody,0);
    (this->fields).hasRigidBody = 0;
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar2->fields)._PlayerController_k__BackingField,
     pMVar3 != (MVLocalObjectController *)0x0)) {
    pMVar4 = MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
                       (pMVar3,(MethodInfo *)0x0);
    if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = (pMVar2->fields)._PlayerController_k__BackingField,
         pMVar3 != (MVLocalObjectController *)0x0)) &&
        (pMVar4 = MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
                            (pMVar3,(MethodInfo *)0x0), pMVar4 != (MVWorldObjectClient *)0x0)) &&
       (this_00 = (pMVar4->fields).gameObject, this_00 != (GameObject *)0x0)) {
      _UNK_? =
           (Object_1 *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (this_00,
                      MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
      func_?();
      x = _UNK_?;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UNK_? = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                               (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (UNK_? != 0) {
        return;
      }
      UNK_? = 0;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateUI() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_UpdateUI(VehicleUIController *this,MethodInfo *method)

{
  pSVar1 = (this->fields).speedOMeter;
  if (pSVar1 != (SpeedOMeter *)0x0) {
    (*(code *)(pSVar1->klass->vtable).Initialize.method)
              (pSVar1,(this->fields).insideVehicle,(this->fields).rigidBody,
               pSVar1->klass[1]._0.image);
    pVVar2 = (this->fields).vehicleEnergyMeter;
    if (pVVar2 != (VehicleEnergyMeterText *)0x0) {
      (*(code *)(pVVar2->klass->vtable).Initialize.method)
                (pVVar2,(this->fields).insideVehicle,(this->fields).rigidBody,
                 pVVar2->klass[1]._0.image);
      VehicleUIController_UpdateVisibility(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateVisibility() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_UpdateVisibility(VehicleUIController *this,MethodInfo *method)

{
  if ((((this->fields).vehicleEnergyMeter != (VehicleEnergyMeterText *)0x0) &&
      (pSVar1 = (this->fields).speedOMeter, pSVar1 != (SpeedOMeter *)0x0)) &&
     (this_00 = (pSVar1->fields).speedGroup, this_00 != (CanvasGroup *)0x0)) {
    fVar2 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).rectTransform;
    if (this_01 != (RectTransform *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_01,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,(this->fields).insideVehicle != 0 || _UNK_? < fVar2,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

