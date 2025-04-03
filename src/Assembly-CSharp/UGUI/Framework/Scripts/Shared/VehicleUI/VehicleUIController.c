
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
  this_00 = (this->fields).vehicleUIGroup;
  if (this_00 == (CanvasGroup *)0x0) {
code_?:
    func_?();
  }
  else {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    this_01 = (this->fields).rectTransform;
    if (this_01 == (RectTransform *)0x0) goto code_?;
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                      (this_01,(MethodInfo *)0x0);
    (this->fields).originalSize.x = fStack_2;
    fStack_3 = VVar1.y;
    (this->fields).originalSize.y = fStack_3;
    pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar4 == (SpawnRoleDataMediator *)0x0) goto code_?;
    this_02 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              (pSVar4->fields).isInVehicle;
    unaff_EDI = (Action_2_Boolean_Single___Class *)
                func_?(
                               TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<bool>
                               );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)unaff_EDI,(Object *)this,
               MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnIsInVehicleChange_bool_
               ,(MethodInfo *)0x0);
    if (this_02 == (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
    goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
              (this_02,(SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                        *)unaff_EDI,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<bool>_
              );
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
    this_03 = (pMVar5->fields)._.spawnRolesManager;
    unaff_EDI = (Action_2_Boolean_Single___Class *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)unaff_EDI,(Object *)this,
               MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnSpawnRoleModeChange_int_
               ,(MethodInfo *)0x0);
    if (this_03 == (SpawnRolesManager *)0x0) goto code_?;
    SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
              (this_03,(Action_1_Int32_ *)unaff_EDI,(MethodInfo *)0x0);
    pSVar6 = (this->fields).speedOMeter;
    if (pSVar6 == (SpeedOMeter *)0x0) goto code_?;
    a = (pSVar6->fields).OnShowHide;
    this_04 = (Action_2_Int32_Single_ *)func_?(TypeInfo__System__Action<bool,_float>);
    mscorlib.dll::System::Action`2[Int32,Single]::Action_2_Int32_Single___ctor
              (this_04,(Object *)this,
               MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnSpeedOMeterShowHide_bool__float_
               ,(MethodInfo *)0x0);
    pAStack7 =
         (Action_2_Boolean_Single___Class *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)a,(Delegate *)this_04,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<bool,_float>;
    if (pAStack7 == (Action_2_Boolean_Single___Class *)0x0) {
      (pSVar6->fields).OnShowHide = (Action_2_Boolean_Single_ *)0x0;
      func_?();
      return;
    }
    pAStack7 = TypeInfo__System__Action<bool,_float>;
    iVar8 = func_?();
    this = (VehicleUIController *)TypeInfo__System__Action<bool,_float>;
    if (iVar8 == 0) goto code_?;
    unaff_EDI = (Action_2_Boolean_Single___Class *)&UNK_?;
    pAStack7 = TypeInfo__System__Action<bool,_float>;
    _UNK_? = iVar8;
    pAStack7 = (Action_2_Boolean_Single___Class *)func_?();
    if (pAStack7 != (Action_2_Boolean_Single___Class *)0x0) {
      func_?();
      return;
    }
  }
  pAStack7 = (Action_2_Boolean_Single___Class *)this;
  func_?();
code_?:
  pAStack7 = unaff_EDI;
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
  this_01 = (this->fields).speedOMeter;
  if ((this_01 == (SpeedOMeter *)0x0) ||
     (SpeedOMeter::SpeedOMeter_UpdateSpeed(this_01,(MethodInfo *)0x0),
     (this->fields).vehicleEnergyMeter == (VehicleEnergyMeterText *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (*(char *)(in_stack_2 + 0x1c) == '\0') {
    return;
  }
  if (*(VehicleEnergyContainer **)(in_stack_2 + 0x20) == (VehicleEnergyContainer *)0x0)
  goto code_?;
  fVar3 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
          VehicleEnergyContainer_get_EnergyStatus
                    (*(VehicleEnergyContainer **)(in_stack_2 + 0x20),(MethodInfo *)0x0);
  this_00 = (Int32 *)(in_stack_2 + 0x24);
  iVar4 = this_00->m_value;
  iVar5 = (int)(fVar3 * _UNK_?);
  if (iVar5 < iVar4) {
code_?:
    this_00->m_value = iVar5;
  }
  else if (iVar4 < iVar5) {
    iVar5 = iVar4 + 1;
    goto code_?;
  }
  piVar6 = *(int **)(in_stack_2 + 0x18);
  unaff_retaddr = (int *)0x0;
  pSVar7 = mscorlib.dll::System::Int32::Int32_ToString(this_00,(MethodInfo *)0x0);
  pSVar8 = ::StringLiteral__;
  if (pSVar7 != (String *)0x0) {
    pSVar8 = pSVar7;
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0x318))(piVar6,pSVar8);
    unaff_retaddr = piVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText
                     );
      cRam_? = '\x01';
      unaff_retaddr = piVar6;
    }
    piVar6 = *(int **)(in_stack_2 + 0x18);
    if (this_00->m_value < 0x14) {
      if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(
                       TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText
                       );
      }
      pVVar9 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->
               static_fields;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x178))
                  (piVar6,(pVVar9->WarningColor).r,(pVVar9->WarningColor).g,
                   (pVVar9->WarningColor).b,(pVVar9->WarningColor).a,
                   *(undefined4 *)(*piVar6 + 0x17c));
        if (3 < *(int *)(in_stack_2 + 0x28)) {
          *(undefined4 *)(in_stack_2 + 0x28) = 0xfffffffc;
        }
        if ((*(Component **)(in_stack_2 + 0x18) != (Component *)0x0) &&
           (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (*(Component **)(in_stack_2 + 0x18),(MethodInfo *)0x0),
           pTVar10 != (Transform *)0x0)) {
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xfffffff8,pTVar10,(MethodInfo *)0x0);
          if (*(int *)(in_stack_2 + 0x28) < 0) {
            fVar3 = pVVar11->y + _UNK_?;
          }
          else {
            fVar3 = pVVar11->y - _UNK_?;
          }
          if (*(Component **)(in_stack_2 + 0x18) != (Component *)0x0) {
            pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (*(Component **)(in_stack_2 + 0x18),(MethodInfo *)0x0);
            if (pTVar10 != (Transform *)0x0) {
              value.y = fVar3;
              value.x = (float)*(undefined4 *)(in_stack_2 + 0x3c);
              value.z = *(float *)(in_stack_2 + 0x44);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar10,value,(MethodInfo *)0x0);
              *(int *)(in_stack_2 + 0x28) = *(int *)(in_stack_2 + 0x28) + 1;
              return;
            }
          }
        }
      }
    }
    else if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x178))
                (piVar6,*(undefined4 *)(in_stack_2 + 0x2c),
                 *(undefined4 *)(in_stack_2 + 0x30),*(undefined4 *)(in_stack_2 + 0x34)
                 ,*(undefined4 *)(in_stack_2 + 0x38),*(undefined4 *)(*piVar6 + 0x17c));
      if ((*(Component **)(in_stack_2 + 0x18) != (Component *)0x0) &&
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (*(Component **)(in_stack_2 + 0x18),(MethodInfo *)0x0),
         pTVar10 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar10,*(Vector3 *)(in_stack_2 + 0x3c),(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)(unaff_retaddr);
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
    if ((pVVar1 == (VehicleEnergyMeterText *)0x0) ||
       (pCVar2 = (pVVar1->fields).vehicleEnergyMeterTextGroup, pCVar2 == (CanvasGroup *)0x0))
    goto code_?;
    fVar3 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar2,(MethodInfo *)0x0);
    if (_UNK_? < fVar3) {
      return;
    }
  }
  VehicleUIController_UpdateVisibility(this,(MethodInfo *)0x0);
  pCVar2 = (this->fields).vehicleUIGroup;
  if (pCVar2 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar2,alpha,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar3 = (pMVar2->fields)._PlayerController_k__BackingField,
       pMVar3 != (MVLocalObjectController *)0x0)) {
      pMVar4 = MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
                         (pMVar3,(MethodInfo *)0x0);
      if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = (pMVar2->fields)._PlayerController_k__BackingField,
         pMVar3 != (MVLocalObjectController *)0x0)) {
        pMVar4 = MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
                           (pMVar3,(MethodInfo *)0x0);
        if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
           (this_00 = (pMVar4->fields).gameObject, this_00 != (GameObject *)0x0)) {
          _UNK_? =
               (Object_1 *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                         );
          func_?();
          x = _UNK_?;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            (x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            UNK_? = 0;
          }
          return;
        }
      }
    }
    func_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
code_?:
  ppMVar7 = &(this->fields).rigidBody;
  *ppMVar7 = (MVRigidBody *)0x0;
  (this->fields).insideVehicle = 0;
  func_?(ppMVar7,0);
  (this->fields).hasRigidBody = 0;
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController);
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).vehicleEnergyMeter;
  if ((pVVar1 != (VehicleEnergyMeterText *)0x0) &&
     (pCVar2 = (pVVar1->fields).vehicleEnergyMeterTextGroup, pCVar2 != (CanvasGroup *)0x0)) {
    fVar3 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar2,(MethodInfo *)0x0);
    pSVar4 = (this->fields).speedOMeter;
    bVar5 = _UNK_? < fVar3;
    if ((pSVar4 != (SpeedOMeter *)0x0) &&
       (pCVar2 = (pSVar4->fields).speedGroup, pCVar2 != (CanvasGroup *)0x0)) {
      fVar6 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                        (pCVar2,(MethodInfo *)0x0);
      fVar3 = _UNK_?;
      pCVar2 = (this->fields).vehicleUIGroup;
      value = _UNK_?;
      if (((this->fields).insideVehicle == 0) && (fVar6 <= _UNK_?)) {
        value = 0.0;
      }
      if (pCVar2 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar2,value,(MethodInfo *)0x0);
        if ((fVar6 <= fVar3) || (bVar5)) {
          pRVar7 = (this->fields).rectTransform;
          if (pRVar7 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                      (pRVar7,(this->fields).originalSize,(MethodInfo *)0x0);
            pSVar4 = (this->fields).speedOMeter;
            if ((pSVar4 != (SpeedOMeter *)0x0) &&
               (pTVar8 = (Transform *)(pSVar4->fields)._.rectTransform, pTVar8 != (Transform *)0x0))
            {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar8,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          pRVar7 = (this->fields).rectTransform;
          if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(
                           TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController
                           );
          }
          if (pRVar7 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                      (pRVar7,TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController
                              ->static_fields->SizeOnlySpeed,(MethodInfo *)0x0);
            pSVar4 = (this->fields).speedOMeter;
            if (pSVar4 != (SpeedOMeter *)0x0) {
              pTVar8 = (Transform *)(pSVar4->fields)._.rectTransform;
              ppQVar9 = (Quaternion__Class **)0xc2b40000;
              uVar10 = 0;
              fVar3 = 0.0;
              if (cRam_? == '\0') {
                ppQVar9 = &TypeInfo__UnityEngine__Quaternion;
                func_?();
                cRam_? = '\x01';
              }
              if (pTVar8 != (Transform *)0x0) {
                localPosition.y = (float)uVar10;
                localPosition.x = (float)ppQVar9;
                localPosition.z = fVar3;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                Transform_SetLocalPositionAndRotation
                          (pTVar8,localPosition,
                           TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* VehicleUIController() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController->static_fields
  ;
  (pVVar1->SizeOnlySpeed).x = 200.0;
  (pVVar1->SizeOnlySpeed).y = 180.0;
  return;
}

