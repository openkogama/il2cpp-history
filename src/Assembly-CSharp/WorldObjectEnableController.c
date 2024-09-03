
/* WorldObjectEnableController() */

void Assembly-CSharp.dll::WorldObjectEnableController::WorldObjectEnableController__ctor
               (WorldObjectEnableController *this,MethodInfo *method)

{
  (this->fields).enableState = 2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Void set_EnableState(EnableState) */

void Assembly-CSharp.dll::WorldObjectEnableController::WorldObjectEnableController_set_EnableState
               (WorldObjectEnableController *this,EnableState__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).enableState != value) {
    pGVar1 = (this->fields).greyOutObjectScript;
    (this->fields).enableState = value;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (value == EnableState__Enum_DisableAndHide) {
        pGVar1 = (this->fields).greyOutObjectScript;
        if (pGVar1 != (GreyOutObjectScript *)0x0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>)
            ;
            func_?(&
                            MethodInfo__GreyOutObjectScript__HideExec_GreyOutObjectScript__PickupOriginalMaterials_
                           );
            cRam_? = '\x01';
          }
          pSVar3 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                   func_?(
                                  TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                                  );
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
          SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                    (pSVar3,(Object *)pGVar1,
                     MethodInfo__GreyOutObjectScript__HideExec_GreyOutObjectScript__PickupOriginalMaterials_
                     ,(MethodInfo *)0x0);
          GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                    (pGVar1,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)pSVar3,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else if (value == EnableState__Enum_DisableAndGreyOut) {
        pGVar1 = (this->fields).greyOutObjectScript;
        if (pGVar1 != (GreyOutObjectScript *)0x0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>)
            ;
            func_?(&
                            MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                           );
            cRam_? = '\x01';
          }
          pSVar3 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                   func_?(
                                  TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                                  );
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
          SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                    (pSVar3,(Object *)pGVar1,
                     MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                     ,(MethodInfo *)0x0);
          GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                    (pGVar1,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)pSVar3,
                     (MethodInfo *)0x0);
          (pGVar1->fields).isGreyedIn = 0;
          return;
        }
      }
      else {
        if (value != EnableState__Enum_Enable) {
          return;
        }
        pGVar1 = (this->fields).greyOutObjectScript;
        if (pGVar1 != (GreyOutObjectScript *)0x0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>)
            ;
            func_?(&
                            MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                           );
            cRam_? = '\x01';
          }
          pSVar3 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                   func_?(
                                  TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                                  );
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
          SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                    (pSVar3,(Object *)0x0,
                     MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                     ,(MethodInfo *)0x0);
          GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                    (pGVar1,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)pSVar3,
                     (MethodInfo *)0x0);
          (pGVar1->fields).isGreyedIn = 1;
          return;
        }
      }
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

