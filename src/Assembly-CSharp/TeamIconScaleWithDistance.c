
/* Void Update() */

void Assembly-CSharp.dll::TeamIconScaleWithDistance::TeamIconScaleWithDistance_Update
               (TeamIconScaleWithDistance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
    a = *pVVar3;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (this_00 != (SpawnRoleDataMediator *)0x0) {
      s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
          PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
          PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                    ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_00,(MethodInfo *)0x0);
      pVVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
               SpawnRoleVariable`1[UnityEngine::Vector3]::
               SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                         ((Vector3 *)&stack0xffffffcc,s,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                         );
      uVar4._0_4_ = pVVar3->x;
      uVar4._4_4_ = pVVar3->y;
      fVar5 = pVVar3->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        puVar6 = &UNK_?;
        pVVar7 = TypeInfo__UnityEngine__Vector3;
        func_?();
        uVar4 = CONCAT44(pVVar7,puVar6);
      }
      b.z = fVar5;
      b.x = (float)(int)uVar4;
      b.y = (float)(int)((ulonglong)uVar4 >> 0x20);
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                ((Vector3 *)&stack0xffffffcc,a,b,(MethodInfo *)0x0);
      fVar8 = (float10)func_?();
      fVar5 = (this->fields).minDistance;
      max = (this->fields).maxDistance;
      value = (float)fVar8;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                        (value,fVar5,max,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffcc,(this->fields).scale,fVar5,(MethodInfo *)0x0);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                         ((Vector3 *)&stack0xffffffcc,*pVVar3,(this->fields).minDistance,
                          (MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar2,*pVVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* TeamIconScaleWithDistance() */

void Assembly-CSharp.dll::TeamIconScaleWithDistance::TeamIconScaleWithDistance__ctor
               (TeamIconScaleWithDistance *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  (this->fields).minDistance = 10.0;
  (this->fields).maxDistance = 50.0;
  uStack_2 = 0;
  func_?(&uStack_2,0x3f800000,0x3f800000,0x3f800000,0);
  (this->fields).scale.x = (float)(undefined4)uStack_2;
  (this->fields).scale.y = (float)uStack_2._4_4_;
  (this->fields).scale.z = fStack_1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

