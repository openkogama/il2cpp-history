
/* Void AvatarStateChangedHandler(Object) */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_AvatarStateChangedHandler
               (ShieldedModifier *this,Object *state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (state != (Object *)0x0) {
    pIVar1 = TypeInfo__System__Int32;
    if ((state->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    puVar2 = (uint *)func_?(state);
    if ((*puVar2 & 4) == 0) {
      if ((*puVar2 & 1) == 0) {
        return;
      }
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        this_00 = (this->fields).lineRenderer;
        if (this_00 != (RotatingShieldLine *)0x0) {
          RotatingShieldLine::RotatingShieldLine_OnSetVisible(this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        this_01 = (ReviveUIHandler *)(this->fields).lineRenderer;
        if (this_01 != (ReviveUIHandler *)0x0) {
          ReviveUIHandler::ReviveUIHandler_RoundEnded(this_01,(IWinningCondition *)0x0,unaff_ESI);
          return;
        }
      }
    }
  }
  func_?(0);
  state = extraout_ECX;
  pIVar1 = extraout_EDX;
code_?:
  func_?(state,pIVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IEnumerator MakeVisible(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_MakeVisible
          (ShieldedModifier *this,float fadeInTime,float fadeOutTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ShieldedModifier___MakeVisible_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).testState = (int32_t)fadeInTime;
    this_00[1].monitor = (MonitorData *)this;
    this_00[1].klass = (ScaleAnimationBase__Class *)fadeOutTime;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_OnActivated
               (ShieldedModifier *this,Avatar_1 *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.owner = target;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pAVar2 = (this->fields)._.owner;
  if ((((pAVar2 == (Avatar_1 *)0x0) ||
       (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 == (MVAvatar *)0x0)) ||
      (this_03 = (PrefabPool *)MVAvatar::MVAvatar_get_Body(pMVar3,(MethodInfo *)0x0),
      this_03 == (PrefabPool *)0x0)) ||
     (p = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_03,(MethodInfo *)0x0),
     pTVar1 == (Transform *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
            (pTVar1,(Transform *)p,(MethodInfo *)0x0);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) goto code_?;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                     ((Vector3 *)&stack0xffffffdc,pTVar1,(MethodInfo *)0x0);
  fVar5 = pVVar4->z;
  uVar6 = 0;
  method_00 = (MethodInfo *)0x3f800000;
  uVar7 = ZEXT48(&stack0xffffffe8);
  puVar8 = &UNK_?;
  func_?();
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar5;
  a.x = (float)(int)uVar7;
  a.y = (float)(int)(uVar7 >> 0x20);
  b.z = (float)puVar8;
  b.x = (float)(int)uVar6;
  b.y = (float)(int)((ulonglong)uVar6 >> 0x20);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffdc,a,b,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
            (pTVar1,*pVVar4,(MethodInfo *)0x0);
  this_00 = (this->fields).shieldRenderer;
  if (this_00 == (MeshRenderer *)0x0) goto code_?;
  pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                      ((Renderer *)this_00,(MethodInfo *)0x0);
  pAVar2 = (this->fields)._.owner;
  (this->fields).shieldMat = pMVar9;
  if (((pAVar2 == (Avatar_1 *)0x0) ||
      (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 == (MVAvatar *)0x0)) ||
     (pMVar10 = (pMVar3->fields).Health, pMVar10 == (MVRuntimeDataVariable_1_System_Single_ *)0x0))
  goto code_?;
  fVar11 = (float10)(*(code *)(pMVar10->klass->vtable).get_Value.method)();
  pAVar2 = (this->fields)._.owner;
  (this->fields).prevHealth = (float)fVar11;
  if (((pAVar2 == (Avatar_1 *)0x0) ||
      (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 == (MVAvatar *)0x0)) ||
     (pMVar10 = (pMVar3->fields).Health, pMVar10 == (MVRuntimeDataVariable_1_System_Single_ *)0x0))
  goto code_?;
  pMVar12 = (pMVar10->fields)._.OnChange;
  pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar13,(Object *)this,MethodInfo__ShieldedModifier__OnHealthChange_System__Object_,
             (MethodInfo *)0x0);
  pMVar14 = (MVRuntimeDataVariable_OnChangeDelegate *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pMVar12,(Delegate *)pUVar13,(MethodInfo *)0x0);
  pMVar12 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
  if (pMVar14 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
code_?:
    (pMVar10->fields)._.OnChange = pMVar12;
    this_01 = (this->fields).lineRenderer;
    if (this_01 == (RotatingShieldLine *)0x0) goto code_?;
    RotatingShieldLine::RotatingShieldLine_Initialize(this_01,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pAVar2 = (this->fields)._.owner;
    if (((pAVar2 == (Avatar_1 *)0x0) ||
        (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 == (MVAvatar *)0x0)) ||
       ((this_04 = MVAvatar::MVAvatar_get_Body(pMVar3,(MethodInfo *)0x0), this_04 == (MVBody *)0x0
        || ((this_05 = MVBody::MVBody_get_BodyData(this_04,(MethodInfo *)0x0),
            this_05 == (BodyData *)0x0 ||
            (p_00 = BodyData::BodyData_GetPartBone_1(this_05,StringLiteral_Torso,(MethodInfo *)0x0),
            pTVar1 == (Transform *)0x0)))))) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              (pTVar1,p_00,(MethodInfo *)0x0);
    pAVar2 = (this->fields)._.owner;
    if ((pAVar2 == (Avatar_1 *)0x0) ||
       ((pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 == (MVAvatar *)0x0 ||
        (pMVar15 = (pMVar3->fields).SpawnRoleModeTypes, pMVar15 == (MVRuntimeDataVariable *)0x0))))
    goto code_?;
    pMVar12 = (pMVar15->fields).OnChange;
    pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar13,(Object *)this,
               MethodInfo__ShieldedModifier__AvatarStateChangedHandler_System__Object_,
               (MethodInfo *)0x0);
    pMVar14 = (MVRuntimeDataVariable_OnChangeDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar12,(Delegate *)pUVar13,(MethodInfo *)0x0);
    pMVar12 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar14 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      if (pMVar14->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar12 = pMVar14;
      }
      if (pMVar12 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    }
    (pMVar15->fields).OnChange = pMVar12;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar16 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
    if (pIVar16 != (IPlayModeUI *)0x0) {
      cVar17 = func_?();
      if (cVar17 == '\0') {
        return;
      }
      this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_06 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_06,0,(MethodInfo *)0x0);
        this_02 = (ReviveUIHandler *)(this->fields).lineRenderer;
        if (this_02 != (ReviveUIHandler *)0x0) {
          ReviveUIHandler::ReviveUIHandler_RoundEnded(this_02,(IWinningCondition *)0x0,method_00);
          return;
        }
      }
    }
  }
  else {
    if (pMVar14->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar12 = pMVar14;
    }
    if (pMVar12 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
code_?:
    func_?();
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_OnDeactivated
               (ShieldedModifier *this,Avatar_1 *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._.owner;
  if ((pAVar1 != (Avatar_1 *)0x0) && (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0)
     ) {
    pMVar3 = (pMVar2->fields).Health;
    if (pMVar3 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      pMVar4 = (pMVar3->fields)._.OnChange;
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)this,MethodInfo__ShieldedModifier__OnHealthChange_System__Object_,
                 (MethodInfo *)0x0);
      pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pMVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
      pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        if (pMVar6->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar4 = pMVar6;
        }
        pMVar7 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      }
      (pMVar3->fields)._.OnChange = pMVar4;
      pAVar1 = (this->fields)._.owner;
      if ((pAVar1 != (Avatar_1 *)0x0) &&
         (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0)) {
        pMVar8 = (pMVar2->fields).SpawnRoleModeTypes;
        if (pMVar8 != (MVRuntimeDataVariable *)0x0) {
          pMVar4 = (pMVar8->fields).OnChange;
          pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar5,(Object *)this,
                     MethodInfo__ShieldedModifier__AvatarStateChangedHandler_System__Object_,
                     (MethodInfo *)0x0);
          pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pMVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
          pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
code_?:
            (pMVar8->fields).OnChange = pMVar4;
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
            return;
          }
          if (pMVar6->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar4 = pMVar6;
          }
          pMVar7 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
          if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pMVar6 = extraout_ECX;
  pMVar7 = extraout_EDX;
code_?:
  func_?(pMVar6,pMVar7);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnHealthChange(Object) */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_OnHealthChange
               (ShieldedModifier *this,Object *floatHealth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (floatHealth != (Object *)0x0) {
    pSVar1 = TypeInfo__System__Single;
    if ((floatHealth->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?(floatHealth);
    fVar3 = *pfVar2;
    if (((this->fields).prevHealth <= fVar3) || ((this->fields).readyToPlayEffect == 0)) {
code_?:
      (this->fields).prevHealth = fVar3;
      return;
    }
    bVar4 = cRam_? == '\0';
    (this->fields).readyToPlayEffect = 0;
    if (bVar4) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__ShieldedModifier___MakeVisible_c__Iterator0;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields).testState = 0x3dcccccd;
      this_00[1].klass = (ScaleAnimationBase__Class *)0x3f19999a;
      this_00[1].monitor = (MonitorData *)this;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?(0);
  floatHealth = extraout_ECX;
  pSVar1 = extraout_EDX;
code_?:
  func_?(floatHealth,pSVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ShieldedModifier() */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier__ctor
               (ShieldedModifier *this,MethodInfo *method)

{
  (this->fields).readyToPlayEffect = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* AvatarModifierPackageType get_ModifierType() */

AvatarModifierPackageType__Enum
Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_get_ModifierType
          (ShieldedModifier *this,MethodInfo *method)

{
  return AvatarModifierPackageType__Enum_Shielded;
}

