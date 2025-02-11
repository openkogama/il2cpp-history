
/* Void HandleFireVisibility() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_HandleFireVisibility
               (InGameButtons *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupGUI);
    cRam_? = '\x01';
  }
  uVar1 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupGUI);
    cRam_? = '\x01';
  }
  if (((uVar1 & 1) == 0) ||
     ((TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField & 0x10) != 0)) {
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar2 == (SpawnRoleDataMediator *)0x0) goto code_?;
    BVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::ByteEnum]::SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                      ((SpawnRoleVariable_1_System_ByteEnum_ *)(pSVar2->fields).pickupItemIsInHand,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                      );
    method_00 = (MethodInfo *)(this->fields).fire;
    if ((char)BVar3 == '\0') {
      if ((method_00 != (MethodInfo *)0x0) &&
         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)method_00,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        pRVar5 = (this->fields).point;
        if ((pRVar5 != (RectTransform *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar5,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if (method_00 == (MethodInfo *)0x0) goto code_?;
    value = 0x69;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)method_00,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
  }
  else {
    pRVar5 = (this->fields).fire;
    if ((pRVar5 == (RectTransform *)0x0) ||
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar5,(MethodInfo *)0x0), pGVar4 == (GameObject *)0x0))
    goto code_?;
    method_00 = (MethodInfo *)0x0;
    value = 1;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar4,value,method_00);
  pRVar5 = (this->fields).point;
  if ((pRVar5 != (RectTransform *)0x0) &&
     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar5,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandleInPlayMode() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_HandleInPlayMode
               (InGameButtons *this,MethodInfo *method)

{
  pGVar1 = (this->fields).respawnButton;
  if ((pGVar1 != (GameObject *)0x0) &&
     (pGVar1 = (GameObject *)
               UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
               UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)
     ) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pGVar1 = (this->fields).respawnButton;
      if ((pGVar1 == (GameObject *)0x0) ||
         (pGVar1 = (GameObject *)
                   UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                   UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0),
         pGVar1 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
    }
    pRVar3 = (this->fields).jumpButton;
    if ((pRVar3 != (RectTransform *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar3,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return;
      }
      pRVar3 = (this->fields).jumpButton;
      if ((pRVar3 != (RectTransform *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar3,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleNotInPlayMode() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_HandleNotInPlayMode
               (InGameButtons *this,MethodInfo *method)

{
  pRVar1 = (this->fields).use;
  if ((pRVar1 != (RectTransform *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pRVar1 = (this->fields).use;
      if ((pRVar1 == (RectTransform *)0x0) ||
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
    pRVar1 = (this->fields).fire;
    if ((pRVar1 != (RectTransform *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pRVar1 = (this->fields).fire;
        if ((pRVar1 == (RectTransform *)0x0) ||
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0)
           ) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
      }
      pRVar1 = (this->fields).point;
      if ((pRVar1 != (RectTransform *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar2,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pRVar1 = (this->fields).point;
          if ((pRVar1 == (RectTransform *)0x0) ||
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar1,(MethodInfo *)0x0),
             pGVar2 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
        }
        pRVar1 = (this->fields).dropWeapon;
        if ((pRVar1 != (RectTransform *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
           ) {
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar2,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pRVar1 = (this->fields).dropWeapon;
            if ((pRVar1 == (RectTransform *)0x0) ||
               (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
               pGVar2 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
          }
          pRVar1 = (this->fields).leaveVehicle;
          if ((pRVar1 != (RectTransform *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar1,(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar2,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              pRVar1 = (this->fields).leaveVehicle;
              if ((pRVar1 == (RectTransform *)0x0) ||
                 (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
                 pGVar2 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,0,(MethodInfo *)0x0);
            }
            pGVar2 = (this->fields).respawnButton;
            if ((pGVar2 != (GameObject *)0x0) &&
               (pGVar2 = (GameObject *)
                         UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                         UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar2,(MethodInfo *)0x0),
               pGVar2 != (GameObject *)0x0)) {
              bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar2,(MethodInfo *)0x0);
              if (bVar3 != 0) {
                pGVar2 = (this->fields).respawnButton;
                if ((pGVar2 == (GameObject *)0x0) ||
                   (pGVar2 = (GameObject *)
                             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                             UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar2,(MethodInfo *)0x0),
                   pGVar2 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,0,(MethodInfo *)0x0);
              }
              pRVar1 = (this->fields).holsterButton;
              if ((pRVar1 != (RectTransform *)0x0) &&
                 (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
                 pGVar2 != (GameObject *)0x0)) {
                bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar2,(MethodInfo *)0x0);
                if (bVar3 != 0) {
                  pRVar1 = (this->fields).holsterButton;
                  if ((pRVar1 == (RectTransform *)0x0) ||
                     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
                     pGVar2 == (GameObject *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,0,(MethodInfo *)0x0);
                }
                pRVar1 = (this->fields).jumpButton;
                if ((pRVar1 != (RectTransform *)0x0) &&
                   (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
                   pGVar2 != (GameObject *)0x0)) {
                  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeSelf(pGVar2,(MethodInfo *)0x0);
                  if (bVar3 == 0) {
                    return;
                  }
                  pRVar1 = (this->fields).jumpButton;
                  if ((pRVar1 != (RectTransform *)0x0) &&
                     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
                     pGVar2 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar2,0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HideEUseIcon() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_HideEUseIcon
               (InGameButtons *this,MethodInfo *method)

{
  this_00 = (this->fields).use;
  if (this_00 != (RectTransform *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowEUseIcon(ShowUseOption) */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_ShowEUseIcon
               (InGameButtons *this,ShowUseOption__Enum option,MethodInfo *method)

{
  this_00 = (this->fields).use;
  if (this_00 != (RectTransform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_Update
               (InGameButtons *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__bool_
                   );
    cRam_? = '\x01';
  }
  InGameButtons_HandleFireVisibility(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupGUI);
    cRam_? = '\x01';
  }
  if (TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField !=
      (this->fields).showingEquipableUI) {
    pRVar1 = (this->fields).holsterButton;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pRVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pRVar1 = (this->fields).holsterButton;
      if (pRVar1 == (RectTransform *)0x0) goto code_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,(TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField & 8)
                        != 0,(MethodInfo *)0x0);
    }
    pRVar1 = (this->fields).dropWeapon;
    if (pRVar1 == (RectTransform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,(TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField & 2) !=
                      0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    (this->fields).showingEquipableUI =
         TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
  }
  pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar4 != (SpawnRoleDataMediator *)0x0) {
    a = (SpawnRoleVariable_1_System_Boolean_ *)(pSVar4->fields).isSeated;
    pRVar1 = (this->fields).leaveVehicle;
    if ((pRVar1 != (RectTransform *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar3,(MethodInfo *)0x0);
      this = (InGameButtons *)
             CONCAT31((int3)((uint)
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__bool_
                            >> 8),bVar2);
      bVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::Boolean]::
              SpawnRoleVariable_1_System_Boolean__op_Inequality_1(a,bVar2,(MethodInfo *)this);
      if (bVar2 != 0) {
        pRVar1 = (this_00->fields).leaveVehicle;
        if (pRVar1 == (RectTransform *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0);
        pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                           ((MethodInfo *)0x0);
        if (pSVar4 == (SpawnRoleDataMediator *)0x0) goto code_?;
        BVar5 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[System::ByteEnum]::
                SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                          ((SpawnRoleVariable_1_System_ByteEnum_ *)(pSVar4->fields).isSeated,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                          );
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,(bool)BVar5,(MethodInfo *)0x0);
      }
      pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar4 != (SpawnRoleDataMediator *)0x0) &&
         (pSVar6 = (pSVar4->fields).SpawnRoleModeTypeWrapper,
         pSVar6 != (SpawnRoleModeTypeWrapper *)0x0)) {
        bVar2 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                          (pSVar6,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                             ((MethodInfo *)0x0);
          if ((pSVar4 != (SpawnRoleDataMediator *)0x0) &&
             (pSVar6 = (pSVar4->fields).SpawnRoleModeTypeWrapper,
             pSVar6 != (SpawnRoleModeTypeWrapper *)0x0)) {
            bVar2 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                              (pSVar6,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
            if (bVar2 == 0) {
              InGameButtons_HandleNotInPlayMode(this_00,(MethodInfo *)0x0);
            }
            return;
          }
        }
        else {
          pGVar3 = (this_00->fields).respawnButton;
          if ((pGVar3 != (GameObject *)0x0) &&
             (pGVar3 = (GameObject *)
                       UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                       UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar3,(MethodInfo *)0x0),
             pGVar3 != (GameObject *)0x0)) {
            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar3,(MethodInfo *)0x0);
            if (bVar2 == 0) {
              pGVar3 = (this_00->fields).respawnButton;
              if ((pGVar3 == (GameObject *)0x0) ||
                 (pGVar3 = (GameObject *)
                           UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                           UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar3,(MethodInfo *)0x0),
                 pGVar3 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,1,(MethodInfo *)0x0);
            }
            pRVar1 = (this_00->fields).jumpButton;
            if ((pRVar1 != (RectTransform *)0x0) &&
               (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
               pGVar3 != (GameObject *)0x0)) {
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar3,(MethodInfo *)0x0);
              if (bVar2 != 0) {
                return;
              }
              pRVar1 = (this_00->fields).jumpButton;
              if ((pRVar1 != (RectTransform *)0x0) &&
                 (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
                 pGVar3 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar3,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

