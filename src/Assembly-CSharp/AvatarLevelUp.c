
/* Void Init(Int32) */

void Assembly-CSharp.dll::AvatarLevelUp::AvatarLevelUp_Init
               (AvatarLevelUp *this,int32_t ownerActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).ownerActorNr = ownerActorNr;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVAvatar *)0x0) {
    this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pMVar1 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                         ((MVPlayerContainer *)this_01,ownerActorNr,(MethodInfo *)0x0);
      if (pMVar1 != (MVPlayer *)0x0) {
        pUVar2 = (pMVar1->fields).OnLevelChanged;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,MethodInfo__AvatarLevelUp__OnLevelChanged_int_,
                   MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                  );
        pUVar4 = (UnityAction_1_System_Int32_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_1_System_Int32_ *)0x0;
        if (pUVar4 != (UnityAction_1_System_Int32_ *)0x0) {
          if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
            pUVar2 = pUVar4;
          }
          if (pUVar2 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
        }
        (pMVar1->fields).OnLevelChanged = pUVar2;
        pSVar5 = (this->fields).scaleAnimation;
        if (pSVar5 != (ScaleAnimation *)0x0) {
          pSVar6 = (pSVar5->fields)._.OnScaleAnimationStopped;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,MethodInfo__AvatarLevelUp__OnScaleAnimationStopped_float_
                     ,(MethodInfo *)0x0);
          pSVar7 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pSVar6,(Delegate *)pUVar3,(MethodInfo *)0x0);
          pSVar6 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
          if (pSVar7 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
code_?:
            (pSVar5->fields)._.OnScaleAnimationStopped = pSVar6;
            return;
          }
          if (pSVar7->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
            pSVar6 = pSVar7;
          }
          if (pSVar6 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0)
          goto code_?;
          goto code_?;
        }
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarLevelUp::AvatarLevelUp_OnDestroy
               (AvatarLevelUp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    pSVar2 = (this->fields).scaleAnimation;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pSVar2 = (this->fields).scaleAnimation;
    if (pSVar2 != (ScaleAnimation *)0x0) {
      source_00 = (pSVar2->fields)._.OnScaleAnimationStopped;
      pSVar3 = TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__AvatarLevelUp__OnScaleAnimationStopped_float_,
                 (MethodInfo *)0x0);
      pIVar5 = (Il2CppClass *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source_00,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pIVar6 = (Il2CppClass *)0x0;
      if (pIVar5 == (Il2CppClass *)0x0) {
code_?:
        (pSVar3->_0).castClass = pIVar6;
        return;
      }
      if ((ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)pIVar5->image ==
          TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
        pIVar6 = pIVar5;
      }
      pSVar7 = TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate;
      if (pIVar6 != (Il2CppClass *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar8 == (MVNetworkGame *)0x0) goto code_?;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar9 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar9 != (MVAvatar *)0x0) &&
       (pMVar10 = MVAvatar::MVAvatar_get_Shield(pMVar9,(MethodInfo *)0x0),
       pMVar10 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
      bVar1 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                        ((MVPlayerContainer *)pMVar10,(this->fields).ownerActorNr,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar9 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar9 == (MVAvatar *)0x0) ||
            (pMVar10 = MVAvatar::MVAvatar_get_Shield(pMVar9,(MethodInfo *)0x0),
            pMVar10 == (MVRuntimeDataVariableClampedFloat *)0x0)) ||
           (pMVar11 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                               ((MVPlayerContainer *)pMVar10,(this->fields).ownerActorNr,
                                (MethodInfo *)0x0), pMVar11 == (MVPlayer *)0x0))
        goto code_?;
        source = (pMVar11->fields).OnLevelChanged;
        pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,MethodInfo__AvatarLevelUp__OnLevelChanged_int_,
                   MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                  );
        pIVar5 = (Il2CppClass *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pIVar6 = (Il2CppClass *)0x0;
        if (pIVar5 != (Il2CppClass *)0x0) {
          if ((UnityAction_1_System_Int32___Class *)pIVar5->image ==
              TypeInfo__UnityEngine__Events__UnityAction<int>) {
            pIVar6 = pIVar5;
          }
          pSVar7 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)
                    TypeInfo__UnityEngine__Events__UnityAction<int>;
          if (pIVar6 == (Il2CppClass *)0x0) goto code_?;
        }
        *(Il2CppClass **)&(pUVar12->_0).this_arg.attrs = pIVar6;
      }
      goto code_?;
    }
  }
code_?:
  func_?(0);
  pIVar5 = extraout_ECX;
  pSVar7 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)extraout_EDX;
code_?:
  func_?(pIVar5,pSVar7);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnLevelChanged(Int32) */

void Assembly-CSharp.dll::AvatarLevelUp::AvatarLevelUp_OnLevelChanged
               (AvatarLevelUp *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  pPVar2 = (this->fields).onLevelUpParticleSystem;
  if (pPVar2 != (ParticleSystem *)0x0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pPVar2,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      pPVar2 = (pAVar1->fields).onLevelUpParticleSystem;
      if (pPVar2 != (ParticleSystem *)0x0) {
        this = (AvatarLevelUp *)0x0;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (pPVar2,1,(MethodInfo *)0x0);
        pSVar4 = (pAVar1->fields).scaleAnimation;
        if (pSVar4 != (ScaleAnimation *)0x0) {
          in_stack_5 = pSVar4->klass[1]._0.image;
          method = (MethodInfo *)0x0;
          this = (AvatarLevelUp *)&UNK_?;
          level = (int32_t)pSVar4;
          (*(code *)(pSVar4->klass->vtable).Play.method)();
          pTVar6 = (pAVar1->fields).levelText;
          if (pTVar6 != (TextMesh *)0x0) {
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pTVar6,(MethodInfo *)0x0);
            value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Default,(MethodInfo *)0x0);
            if (pGVar3 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                        (pGVar3,value,(MethodInfo *)0x0);
              pTVar6 = (pAVar1->fields).levelText;
              this = (AvatarLevelUp *)level;
              arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSVar7 = mscorlib.dll::System::String::String_Concat
                                 ((Object *)StringLiteral_LEVEL_,arg1,(MethodInfo *)0x0);
              pSVar7 = TM::TM__(pSVar7,(MethodInfo *)0x0);
              if (pTVar6 != (TextMesh *)0x0) {
                UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                          (pTVar6,pSVar7,(MethodInfo *)0x0);
                pSVar4 = (pAVar1->fields).scaleAnimation;
                if (pSVar4 != (ScaleAnimation *)0x0) {
                  (*(code *)(pSVar4->klass->vtable).Play.method)(pSVar4,0,pSVar4->klass[1]._0.image)
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
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnScaleAnimationStopped(Single) */

void Assembly-CSharp.dll::AvatarLevelUp::AvatarLevelUp_OnScaleAnimationStopped
               (AvatarLevelUp *this,float extraTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).levelText;
  if (this_00 != (TextMesh *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Hidden,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

