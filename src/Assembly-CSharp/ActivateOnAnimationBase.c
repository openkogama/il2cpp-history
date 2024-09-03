
/* Avatar GetAvatar() */

Avatar * Assembly-CSharp.dll::ActivateOnAnimationBase::ActivateOnAnimationBase_GetAvatar
                   (ActivateOnAnimationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (Avatar *)0x0;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
    while( true ) {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return pAVar1;
      }
      if (pTVar2 == (Transform *)0x0) break;
      pAVar1 = (Avatar *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)pTVar2,
                          Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return pAVar1;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pAVar1 = (Avatar *)(*pcVar4)();
  return pAVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ActivateOnAnimationBase::ActivateOnAnimationBase_OnDestroy
               (ActivateOnAnimationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    cRam_? = '\x01';
  }
  if ((this->fields).mvAvatar == (MVAvatar *)0x0) {
    return;
  }
  this_00 = (((this->fields).mvAvatar)->fields).body;
  if ((this_00 == (MVBody *)0x0) ||
     (pBVar1 = MVBody::MVBody_get_Animation(this_00,(MethodInfo *)0x0),
     pBVar1 == (BoneAnimation *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pAVar2 = (pBVar1->fields).OnAnimationChange;
    pSVar3 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
             func_?(TypeInfo__System__Action<System::String>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (pSVar3,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pSVar3,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pBVar1->fields).OnAnimationChange = (Action_1_String_ *)0x0;
code_?:
      func_?();
      pMVar5 = (this->fields).mvAvatar;
      if ((pMVar5 == (MVAvatar *)0x0) ||
         (pAVar6 = (pMVar5->fields).limbManager, pAVar6 == (AvatarLimbManager *)0x0))
      goto code_?;
      pAVar2 = (pAVar6->fields).OnEmoteStart;
      pSVar3 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
               func_?(TypeInfo__System__Action<System::String>);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (pSVar3,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)pSVar3,(MethodInfo *)0x0);
      if (pDVar4 == (Delegate *)0x0) {
        (pAVar6->fields).OnEmoteStart = (Action_1_String_ *)0x0;
        func_?();
        return;
      }
      pAVar2 = (Action_1_String_ *)func_?();
      if (pAVar2 == (Action_1_String_ *)0x0) goto code_?;
      (pAVar6->fields).OnEmoteStart = pAVar2;
      iVar7 = func_?();
      if (iVar7 != 0) {
        func_?();
        return;
      }
      goto code_?;
    }
    pAVar2 = (Action_1_String_ *)func_?();
    if (pAVar2 != (Action_1_String_ *)0x0) {
      (pBVar1->fields).OnAnimationChange = pAVar2;
      iVar7 = func_?();
      if (iVar7 == 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ActivateOnAnimationBase::ActivateOnAnimationBase_Start
               (ActivateOnAnimationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (Object_1 *)0x0;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    do {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) break;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                    ((Component *)pTVar1,
                     Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    } while (bVar2 == 0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    if (x == (Object_1 *)0x0) goto code_?;
    (this->fields).mvAvatar = (MVAvatar *)x[1].monitor;
    func_?();
    pMVar3 = (this->fields).mvAvatar;
    if (((pMVar3 == (MVAvatar *)0x0) || (this_00 = (pMVar3->fields).body, this_00 == (MVBody *)0x0))
       || (pBVar4 = MVBody::MVBody_get_Animation(this_00,(MethodInfo *)0x0),
          pBVar4 == (BoneAnimation *)0x0)) goto code_?;
    pAVar5 = (pBVar4->fields).OnAnimationChange;
    pSVar6 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (pSVar6,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)pSVar6,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      (pAVar5->fields)._._.m_target = (Object *)0x0;
code_?:
      func_?();
      pMVar3 = (this->fields).mvAvatar;
      if ((pMVar3 == (MVAvatar *)0x0) ||
         (pAVar8 = (pMVar3->fields).limbManager, pAVar8 == (AvatarLimbManager *)0x0))
      goto code_?;
      pAVar5 = (pAVar8->fields).OnEmoteStart;
      pSVar6 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (pSVar6,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)pSVar6,(MethodInfo *)0x0);
      if (pDVar7 == (Delegate *)0x0) {
        (pAVar5->fields)._._.invoke_impl = (void *)0x0;
        func_?();
        return;
      }
      pvVar9 = (void *)func_?();
      if (pvVar9 == (void *)0x0) goto code_?;
      (pAVar5->fields)._._.invoke_impl = pvVar9;
      iVar10 = func_?();
      if (iVar10 != 0) {
        func_?();
        return;
      }
      goto code_?;
    }
    pOVar11 = (Object *)func_?();
    if (pOVar11 != (Object *)0x0) {
      (pAVar5->fields)._._.m_target = pOVar11;
      iVar10 = func_?();
      if (iVar10 == 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

