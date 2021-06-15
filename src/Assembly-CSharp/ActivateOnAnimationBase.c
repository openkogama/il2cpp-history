
/* Avatar GetAvatar() */

Avatar_1 *
Assembly-CSharp.dll::ActivateOnAnimationBase::ActivateOnAnimationBase_GetAvatar
          (ActivateOnAnimationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (Avatar_1 *)0x0;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
    while( true ) {
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return pAVar1;
      }
      if (pTVar2 == (Transform *)0x0) break;
      pAVar1 = (Avatar_1 *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)pTVar2,
                          Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return pAVar1;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pAVar1 = (Avatar_1 *)(*pcVar4)();
  return pAVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ActivateOnAnimationBase::ActivateOnAnimationBase_OnDestroy
               (ActivateOnAnimationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 == (MVAvatar *)0x0) {
    return;
  }
  this_00 = MVAvatar::MVAvatar_get_Body(pMVar1,(MethodInfo *)0x0);
  if ((this_00 != (MVBody *)0x0) &&
     (pBVar2 = MVBody::MVBody_get_Animation(this_00,(MethodInfo *)0x0),
     pBVar2 != (BoneAnimation *)0x0)) {
    source = (pBVar2->fields).OnAnimationChange;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,this->klass[1]._0.image,
               MethodInfo__System__Action<System::String>__Action_System__Object__void__);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pDVar5 = (Delegate *)0x0;
    if (pDVar4 != (Delegate *)0x0) {
      if ((Action_1_String___Class *)pDVar4->klass == TypeInfo__System__Action<System::String>) {
        pDVar5 = pDVar4;
      }
      if (pDVar5 == (Delegate *)0x0) goto code_?;
    }
    *(Delegate **)(unaff_ESI + 0xc) = pDVar5;
    pMVar1 = (this->fields).mvAvatar;
    if ((pMVar1 != (MVAvatar *)0x0) &&
       (iVar6 = MVMovable::MVMovable_get_ParentMoverID((MVMovable *)pMVar1,(MethodInfo *)0x0),
       pAVar7 = TypeInfo__System__Action<System::String>, iVar6 != 0)) {
      pDVar5 = *(Delegate **)(iVar6 + 0xc);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,this->klass[1]._0.image,
                 MethodInfo__System__Action<System::String>__Action_System__Object__void__);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar5,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pDVar5 = (Delegate *)0x0;
      if (pDVar4 == (Delegate *)0x0) {
code_?:
        (pAVar7->_0).namespaze = (char *)pDVar5;
        return;
      }
      if ((Action_1_String___Class *)pDVar4->klass == TypeInfo__System__Action<System::String>) {
        pDVar5 = pDVar4;
      }
      if (pDVar5 != (Delegate *)0x0) goto code_?;
      goto code_?;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (MVInteractableBase *)0x0;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    do {
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) break;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      x = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                    ((Component_1 *)pTVar1,
                     Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    } while (bVar2 == 0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    if (x != (MVInteractableBase *)0x0) {
      pMVar3 = *(MVAvatar **)&(x->fields)._.findWorldObjectParent;
      (this->fields).mvAvatar = pMVar3;
      if (((pMVar3 != (MVAvatar *)0x0) &&
          (this_00 = MVAvatar::MVAvatar_get_Body(pMVar3,(MethodInfo *)0x0), this_00 != (MVBody *)0x0
          )) && (pBVar4 = MVBody::MVBody_get_Animation(this_00,(MethodInfo *)0x0),
                pBVar4 != (BoneAnimation *)0x0)) {
        pAVar5 = (pBVar4->fields).OnAnimationChange;
        pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar6,(Object *)this,this->klass[1]._0.image,
                   MethodInfo__System__Action<System::String>__Action_System__Object__void__);
        pAVar7 = (Action_1_String_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar5,(Delegate *)pUVar6,(MethodInfo *)0x0);
        pAVar5 = (Action_1_String_ *)0x0;
        if (pAVar7 != (Action_1_String_ *)0x0) {
          if (pAVar7->klass == TypeInfo__System__Action<System::String>) {
            pAVar5 = pAVar7;
          }
          if (pAVar5 == (Action_1_String_ *)0x0) goto code_?;
        }
        (pBVar4->fields).OnAnimationChange = pAVar5;
        pMVar3 = (this->fields).mvAvatar;
        if ((pMVar3 != (MVAvatar *)0x0) &&
           (iVar8 = MVMovable::MVMovable_get_ParentMoverID((MVMovable *)pMVar3,(MethodInfo *)0x0),
           object = TypeInfo__System__Action<System::String>, iVar8 != 0)) {
          pDVar9 = *(Delegate **)(iVar8 + 0xc);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)object,(void *)(object->_0).image[5].exportedTypeCount,
                     MethodInfo__System__Action<System::String>__Action_System__Object__void__);
          pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar9,(Delegate *)pUVar6,(MethodInfo *)0x0);
          pDVar9 = (Delegate *)0x0;
          if (pDVar10 == (Delegate *)0x0) {
code_?:
            *(Delegate **)(iVar8 + 0xc) = pDVar9;
            return;
          }
          if ((Action_1_String___Class *)pDVar10->klass == TypeInfo__System__Action<System::String>)
          {
            pDVar9 = pDVar10;
          }
          if (pDVar9 != (Delegate *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

