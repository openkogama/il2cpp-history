
/* Void Init(Int32) */

void Assembly-CSharp.dll::AvatarLevelUp::AvatarLevelUp_Init
               (AvatarLevelUp *this,int32_t ownerActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarLevelUp__OnLevelChanged_int_);
    func_?(&MethodInfo__AvatarLevelUp__OnScaleAnimationStopped_float_);
    func_?(&TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    cRam_? = '\x01';
  }
  (this->fields).ownerActorNr = ownerActorNr;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pMVar2 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                       (this_00,ownerActorNr,(MethodInfo *)0x0);
    if (pMVar2 == (MVPlayer *)0x0) goto code_?;
    pUVar3 = (pMVar2->fields).OnLevelChanged;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,MethodInfo__AvatarLevelUp__OnLevelChanged_int_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar2->fields).OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
code_?:
      func_?();
      pSVar5 = (this->fields).scaleAnimation;
      if (pSVar5 == (ScaleAnimation *)0x0) goto code_?;
      pSVar6 = (pSVar5->fields)._.OnScaleAnimationStopped;
      ppSVar7 = &(pSVar5->fields)._.OnScaleAnimationStopped;
      this_02 = (UnityAction_1_System_Single_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single___ctor
                (this_02,(Object *)this,MethodInfo__AvatarLevelUp__OnScaleAnimationStopped_float_,
                 (MethodInfo *)0x0);
      pSVar6 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pSVar6,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pSVar6 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        *ppSVar7 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
        func_?();
        return;
      }
      pSVar8 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
      if (pSVar6->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
        pSVar8 = pSVar6;
      }
      if (pSVar8 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        *ppSVar7 = pSVar8;
        pSVar8 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
        if (pSVar6->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
          pSVar8 = pSVar6;
        }
        if (pSVar8 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
    pUVar3 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar3 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    (pMVar2->fields).OnLevelChanged = pUVar3;
    iVar9 = func_?();
    if (iVar9 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarLevelUp::AvatarLevelUp_OnDestroy
               (AvatarLevelUp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarLevelUp__OnLevelChanged_int_);
    func_?(&MethodInfo__AvatarLevelUp__OnScaleAnimationStopped_float_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if ((bVar1 == 0) ||
     (pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0),
     pMVar2 == (MVNetworkGame *)0x0)) {
code_?:
    pSVar3 = (this->fields).scaleAnimation;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pSVar3 = (this->fields).scaleAnimation;
    if (pSVar3 == (ScaleAnimation *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
      goto code_?;
    }
    pSVar4 = (pSVar3->fields)._.OnScaleAnimationStopped;
    this_01 = (UnityAction_1_System_Single_ *)
              func_?(TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (this_01,(Object *)this,MethodInfo__AvatarLevelUp__OnScaleAnimationStopped_float_,
               (MethodInfo *)0x0);
    pSVar4 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pSVar4,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pSVar4 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
      (pSVar3->fields)._.OnScaleAnimationStopped =
           (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
      func_?();
      return;
    }
    pSVar5 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
    if (pSVar4->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
      pSVar5 = pSVar4;
    }
    if (pSVar5 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) goto code_?;
    (pSVar3->fields)._.OnScaleAnimationStopped = pSVar5;
    pSVar5 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
    if (pSVar4->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
      pSVar5 = pSVar4;
    }
    if (pSVar5 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
      func_?();
      return;
    }
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (pMVar6 = (pMVar2->fields).playerContainer, pMVar6 == (MVPlayerContainer *)0x0))
    goto code_?;
    bVar1 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                      (pMVar6,(this->fields).ownerActorNr,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 == (MVNetworkGame *)0x0) ||
        (pMVar6 = (pMVar2->fields).playerContainer, pMVar6 == (MVPlayerContainer *)0x0)) ||
       (pMVar7 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                           (pMVar6,(this->fields).ownerActorNr,(MethodInfo *)0x0),
       pMVar7 == (MVPlayer *)0x0)) goto code_?;
    pUVar8 = (pMVar7->fields).OnLevelChanged;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,MethodInfo__AvatarLevelUp__OnLevelChanged_int_,
               (MethodInfo *)0x0);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar8,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar9 == (Delegate *)0x0) {
      (pMVar7->fields).OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
code_?:
      func_?();
      goto code_?;
    }
    pUVar8 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar8 != (UnityAction_1_System_Int32_ *)0x0) {
      (pMVar7->fields).OnLevelChanged = pUVar8;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnLevelChanged(Int32) */

void Assembly-CSharp.dll::AvatarLevelUp::AvatarLevelUp_OnLevelChanged
               (AvatarLevelUp *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_LEVEL_);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).onLevelUpParticleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pPVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pPVar1 = (this->fields).onLevelUpParticleSystem;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (pPVar1,1,(MethodInfo *)0x0);
        pSVar3 = (this->fields).scaleAnimation;
        if (pSVar3 != (ScaleAnimation *)0x0) {
          in_stack_4 = pSVar3->klass[1]._0.image;
          method = (MethodInfo *)0x0;
          level = (int32_t)pSVar3;
          (*(code *)(pSVar3->klass->vtable).Play.method)();
          pTVar5 = (this->fields).levelText;
          if (pTVar5 != (TextMesh *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar5,(MethodInfo *)0x0);
            value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Default,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                        (pGVar2,value,(MethodInfo *)0x0);
              pTVar5 = (this->fields).levelText;
              pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)&level,(MethodInfo *)0x0);
              pSVar6 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_LEVEL_,pSVar6,(MethodInfo *)0x0);
              pSVar6 = TM::TM__(pSVar6,(MethodInfo *)0x0);
              if (pTVar5 != (TextMesh *)0x0) {
                UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                          (pTVar5,pSVar6,(MethodInfo *)0x0);
                pSVar3 = (this->fields).scaleAnimation;
                if (pSVar3 != (ScaleAnimation *)0x0) {
                  (*(code *)(pSVar3->klass->vtable).Play.method)(pSVar3,0,pSVar3->klass[1]._0.image)
                  ;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnScaleAnimationStopped(Single) */

void Assembly-CSharp.dll::AvatarLevelUp::AvatarLevelUp_OnScaleAnimationStopped
               (AvatarLevelUp *this,float extraTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Hidden);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).levelText;
  if (this_00 != (TextMesh *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Hidden,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

