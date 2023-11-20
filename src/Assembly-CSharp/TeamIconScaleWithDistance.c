
/* Void Update() */

void Assembly-CSharp.dll::TeamIconScaleWithDistance::TeamIconScaleWithDistance_Update
               (TeamIconScaleWithDistance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
    pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar3 != (SpawnRoleDataMediator *)0x0) {
      pVVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
               SpawnRoleVariable`1[UnityEngine::Vector3]::
               SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                         ((Vector3 *)&this,
                          (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar3->fields).position,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                         );
      uVar5 = pVVar4->x;
      uVar6 = pVVar4->y;
      method = (MethodInfo *)pVVar4->z;
      fVar7 = unaff_EBP - pVVar4->z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      if ((fStack_8 - (float)uVar5) * (fStack_8 - (float)uVar5) +
          (fStack_9 - (float)uVar6) * (fStack_9 - (float)uVar6) + fVar7 * fVar7 < 0.0) {
        func_?();
      }
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      uVar10 = (this->fields).scale.x;
      uVar11 = (this->fields).scale.y;
      in_stack_12 = (this->fields).minDistance;
      method = (MethodInfo *)(((float)uVar10 * fVar7) / in_stack_12);
      in_stack_13 = ((float)uVar11 * fVar7) / in_stack_12;
      in_stack_12 = ((this->fields).scale.z * fVar7) / in_stack_12;
      if (pTVar2 != (Transform *)0x0) {
        value.y = in_stack_13;
        value.x = (float)method;
        value.z = in_stack_12;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar2,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* TeamIconScaleWithDistance() */

void Assembly-CSharp.dll::TeamIconScaleWithDistance::TeamIconScaleWithDistance__ctor
               (TeamIconScaleWithDistance *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  (this->fields).scale.x = (float)_UNK_?;
  (this->fields).scale.y = (float)uVar1;
  (this->fields).minDistance = 10.0;
  (this->fields).maxDistance = 50.0;
  (this->fields).scale.z = 1.0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

