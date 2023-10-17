
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
  }
  else {
    pAVar2 = (pBVar1->fields).OnAnimationChange;
    pAVar3 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<System::String>);
    if (pAVar3 == (Action_1_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (pAVar3,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pAVar3,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pBVar1->fields).OnAnimationChange = (Action_1_String_ *)0x0;
    }
    else {
      pAVar2 = (Action_1_String_ *)func_?();
      if (pAVar2 == (Action_1_String_ *)0x0) goto code_?;
      (pBVar1->fields).OnAnimationChange = pAVar2;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    pMVar6 = (this->fields).mvAvatar;
    if ((pMVar6 == (MVAvatar *)0x0) ||
       (pAVar7 = (pMVar6->fields).limbManager, pAVar7 == (AvatarLimbManager *)0x0))
    goto code_?;
    pAVar2 = (pAVar7->fields).OnEmoteStart;
    pAVar3 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<System::String>);
    if (pAVar3 == (Action_1_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (pAVar3,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pAVar3,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pAVar7->fields).OnEmoteStart = (Action_1_String_ *)0x0;
      func_?();
      return;
    }
    pAVar2 = (Action_1_String_ *)func_?();
    if (pAVar2 != (Action_1_String_ *)0x0) {
      (pAVar7->fields).OnEmoteStart = pAVar2;
      iVar5 = func_?();
      if (iVar5 != 0) {
        func_?();
        return;
      }
    }
  }
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
    (this->fields).mvAvatar = (MVAvatar *)x[1].klass;
    func_?();
    pMVar3 = (this->fields).mvAvatar;
    if ((((pMVar3 == (MVAvatar *)0x0) || (this_00 = (pMVar3->fields).body, this_00 == (MVBody *)0x0)
         ) || (pBVar4 = MVBody::MVBody_get_Animation(this_00,(MethodInfo *)0x0),
              pBVar4 == (BoneAnimation *)0x0)) ||
       (pAVar5 = (Action_1_Object_ *)func_?(), pAVar5 == (Action_1_Object_ *)0x0))
    goto code_?;
    pAVar6 = pAVar5;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (pAVar5,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)pAVar5,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      (pBVar4->fields).OnAnimationChange = (Action_1_String_ *)0x0;
    }
    else {
      pAVar8 = (Action_1_String_ *)func_?();
      if (pAVar8 == (Action_1_String_ *)0x0) goto code_?;
      (pBVar4->fields).OnAnimationChange = pAVar8;
      iVar9 = func_?();
      if (iVar9 == 0) goto code_?;
    }
    func_?();
    pMVar3 = (this->fields).mvAvatar;
    if (((pMVar3 == (MVAvatar *)0x0) ||
        (pAVar10 = (pMVar3->fields).limbManager, pAVar10 == (AvatarLimbManager *)0x0)) ||
       (pAVar5 = (Action_1_Object_ *)func_?(), pAVar5 == (Action_1_Object_ *)0x0))
    goto code_?;
    pAVar6 = pAVar5;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (pAVar5,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)pAVar5,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      (pAVar10->fields).OnEmoteStart = (Action_1_String_ *)0x0;
      func_?();
      return;
    }
    pAVar8 = (Action_1_String_ *)func_?();
    if (pAVar8 != (Action_1_String_ *)0x0) {
      (pAVar10->fields).OnEmoteStart = pAVar8;
      iVar9 = func_?();
      if (iVar9 != 0) {
        func_?();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

