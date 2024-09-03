
/* Void Awake() */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_Awake
               (ModifierIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ModifierIndicator__OverlayWrapper);
    func_?(&TypeInfo__ModifierIndicator__OverlayWrapper);
    cRam_? = '\x01';
  }
  pMVar1 = (ModifierIndicator_OverlayWrapper__Array *)
           func_?(TypeInfo__ModifierIndicator__OverlayWrapper,3);
  (this->fields).modifierIndicators = pMVar1;
  func_?(&(this->fields).modifierIndicators,pMVar1);
  pIVar2 = (this->fields).poisonOverlay.image;
  pIVar3 = (this->fields).poisonOverlay.animator;
  pSVar4 = (this->fields).poisonOverlay.streamComponent;
  pCVar5 = (this->fields).poisonOverlay.alphaHandler;
  pMVar1 = (this->fields).modifierIndicators;
  pAVar6 = (this->fields).fadeOutCurve;
  pMVar7 = (ModifierIndicator_OverlayWrapper *)
           func_?(TypeInfo__ModifierIndicator__OverlayWrapper);
  overlayImage.animator = pIVar3;
  overlayImage.image = pIVar2;
  overlayImage.streamComponent = pSVar4;
  overlayImage.alphaHandler = pCVar5;
  pMVar8 = pMVar7;
  ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper__ctor
            (pMVar7,overlayImage,pAVar6,(MethodInfo *)0x0);
  if (pMVar1 == (ModifierIndicator_OverlayWrapper__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
  }
  else {
    if (pMVar7 != (ModifierIndicator_OverlayWrapper *)0x0) {
      iVar10 = func_?(pMVar7,(pMVar1->klass->_0).element_class,pMVar8);
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pMVar1->max_length == 0) goto code_?;
    pMVar1->vector[0] = pMVar7;
    func_?(pMVar1->vector,pMVar7);
    pIVar3 = (this->fields).fireOverlay.animator;
    pSVar4 = (this->fields).fireOverlay.streamComponent;
    pCVar5 = (this->fields).fireOverlay.alphaHandler;
    pMVar1 = (this->fields).modifierIndicators;
    pAVar6 = (this->fields).fadeOutCurve;
    puVar11 = &UNK_?;
    pMVar7 = (ModifierIndicator_OverlayWrapper *)func_?();
    overlayImage_00.animator = pIVar3;
    overlayImage_00.image = (Image *)puVar11;
    overlayImage_00.streamComponent = pSVar4;
    overlayImage_00.alphaHandler = pCVar5;
    pMVar8 = pMVar7;
    ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper__ctor
              (pMVar7,overlayImage_00,pAVar6,(MethodInfo *)0x0);
    if (pMVar1 == (ModifierIndicator_OverlayWrapper__Array *)0x0) goto code_?;
    if (pMVar7 != (ModifierIndicator_OverlayWrapper *)0x0) {
      iVar10 = func_?(pMVar7,(pMVar1->klass->_0).element_class,pMVar8);
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pMVar1->max_length < 2) goto code_?;
    pMVar1->vector[1] = pMVar7;
    func_?(pMVar1->vector + 1,pMVar7);
    pIVar3 = (this->fields).iceOverlay.animator;
    pSVar4 = (this->fields).iceOverlay.streamComponent;
    pCVar5 = (this->fields).iceOverlay.alphaHandler;
    pMVar1 = (this->fields).modifierIndicators;
    pAVar6 = (this->fields).fadeOutCurve;
    puVar11 = &UNK_?;
    pMVar8 = (ModifierIndicator_OverlayWrapper *)func_?();
    overlayImage_01.animator = pIVar3;
    overlayImage_01.image = (Image *)puVar11;
    overlayImage_01.streamComponent = pSVar4;
    overlayImage_01.alphaHandler = pCVar5;
    ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper__ctor
              (pMVar8,overlayImage_01,pAVar6,(MethodInfo *)0x0);
    if (pMVar1 == (ModifierIndicator_OverlayWrapper__Array *)0x0) goto code_?;
    if (pMVar8 == (ModifierIndicator_OverlayWrapper *)0x0) {
code_?:
      if (pMVar1->max_length < 3) goto code_?;
      pMVar1->vector[2] = pMVar8;
      func_?(pMVar1->vector + 2,pMVar8);
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_00,(Transform *)0x0,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    iVar10 = func_?(pMVar8,(pMVar1->klass->_0).element_class);
    if (iVar10 != 0) goto code_?;
  }
  uVar9 = func_?(0);
  func_?(uVar9);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_Initialize
               (ModifierIndicator *this,MVAvatarLocal *localAvatar,MethodInfo *method)

{
  if (localAvatar != (MVAvatarLocal *)0x0) {
    pAVar1 = (localAvatar->fields).interactableLocal;
    (this->fields).localInteractable = (MVInteractableBase *)pAVar1;
    func_?(&(this->fields).localInteractable,pAVar1);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_OnValidate
               (ModifierIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_fadeOutCurve_has_been_auto_corre);
    cRam_? = '\x01';
  }
  if ((this->fields).fadeOutCurve == (AnimationCurve *)0x0) goto code_?;
  pKVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                     ((this->fields).fadeOutCurve,(MethodInfo *)0x0);
  pAVar2 = (this->fields).fadeOutCurve;
  if ((pAVar2 != (AnimationCurve *)0x0) &&
     (iVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_length
                        (pAVar2,(MethodInfo *)0x0), pKVar1 != (Keyframe__Array *)0x0)) {
    if (pKVar1->max_length <= iVar3 - 1U) goto code_?;
    fVar4 = mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__GetValueOrDefault
                      ((Nullable_1_Single_ *)(pKVar1->vector + iVar3 + -1),(MethodInfo *)0x0);
    if (fVar4 == 0.0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      return;
    }
    pAVar2 = (this->fields).fadeOutCurve;
    if (pAVar2 != (AnimationCurve *)0x0) {
      pKVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                         (pAVar2,(MethodInfo *)0x0);
      pAVar2 = (this->fields).fadeOutCurve;
      if ((pAVar2 != (AnimationCurve *)0x0) &&
         (iVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_length
                            (pAVar2,(MethodInfo *)0x0), pKVar1 != (Keyframe__Array *)0x0)) {
        if (pKVar1->max_length <= iVar3 - 1U) goto code_?;
        UnityEngine.TextCoreFontEngineModule.dll::UnityEngine::TextCore::LowLevel::GlyphValueRecord
        ::GlyphValueRecord_set_yPlacement
                  ((GlyphValueRecord *)(pKVar1->vector + iVar3 + -1),0.0,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_fadeOutCurve_has_been_auto_corre,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetIndicators() */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_ResetIndicators
               (ModifierIndicator *this,MethodInfo *method)

{
  uVar1 = 0;
  while (pMVar2 = (this->fields).modifierIndicators,
        pMVar2 != (ModifierIndicator_OverlayWrapper__Array *)0x0) {
    if (pMVar2->max_length <= uVar1) goto code_?;
    if ((pMVar2->vector[uVar1] == (ModifierIndicator_OverlayWrapper *)0x0) ||
       (this_00 = (pMVar2->vector[uVar1]->fields).image.image, this_00 == (Image *)0x0)) break;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    bVar3 = (char)uVar1 + 1;
    uVar1 = (uint)bVar3;
    if (2 < bVar3) {
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_Update
               (ModifierIndicator *this,MethodInfo *method)

{
  pMVar1 = (this->fields).localInteractable;
  if (pMVar1 != (MVInteractableBase *)0x0) {
    bVar2 = (*(code *)(pMVar1->klass->vtable).__unknown_3.method)
                      (pMVar1,4,(pMVar1->klass->vtable).__unknown_4.methodPtr);
    pMVar3 = (this->fields).modifierIndicators;
    if (pMVar3 != (ModifierIndicator_OverlayWrapper__Array *)0x0) {
      if (pMVar3->max_length == 0) goto code_?;
      if (pMVar3->vector[0] != (ModifierIndicator_OverlayWrapper *)0x0) {
        ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper_Update
                  (pMVar3->vector[0],bVar2 & 1,(MethodInfo *)0x0);
        pMVar1 = (this->fields).localInteractable;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          bVar4 = (*(code *)(pMVar1->klass->vtable).__unknown_3.method)
                            (pMVar1,1,(pMVar1->klass->vtable).__unknown_4.methodPtr);
          pMVar3 = (this->fields).modifierIndicators;
          if (pMVar3 != (ModifierIndicator_OverlayWrapper__Array *)0x0) {
            if (pMVar3->max_length < 2) goto code_?;
            if (pMVar3->vector[1] != (ModifierIndicator_OverlayWrapper *)0x0) {
              ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper_Update
                        (pMVar3->vector[1],bVar2 == 0 & bVar4,(MethodInfo *)0x0);
              pMVar1 = (this->fields).localInteractable;
              if (pMVar1 != (MVInteractableBase *)0x0) {
                bVar5 = (*(code *)(pMVar1->klass->vtable).__unknown_3.method)
                                  (pMVar1,10,(pMVar1->klass->vtable).__unknown_4.methodPtr);
                pMVar3 = (this->fields).modifierIndicators;
                if (pMVar3 != (ModifierIndicator_OverlayWrapper__Array *)0x0) {
                  if (pMVar3->max_length < 3) goto code_?;
                  if (pMVar3->vector[2] != (ModifierIndicator_OverlayWrapper *)0x0) {
                    ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper_Update
                              (pMVar3->vector[2],(bVar2 == 0 && bVar4 == 0) & bVar5,
                               (MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

