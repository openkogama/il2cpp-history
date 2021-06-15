
/* Void Awake() */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_Awake
               (ModifierIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (ModifierIndicator_OverlayWrapper__Array *)
           func_?(TypeInfo__ModifierIndicator__OverlayWrapper,3);
  pIVar2 = (this->fields).poisonOverlay.image;
  pIVar3 = (this->fields).poisonOverlay.animator;
  pSVar4 = (this->fields).poisonOverlay.streamComponent;
  pCVar5 = (this->fields).poisonOverlay.alphaHandler;
  pAVar6 = (this->fields).fadeOutCurve;
  (this->fields).modifierIndicators = pMVar1;
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
    func_?(0);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
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
    pIVar2 = (this->fields).fireOverlay.image;
    pIVar3 = (this->fields).fireOverlay.animator;
    pCVar5 = (this->fields).fireOverlay.alphaHandler;
    pMVar1 = (this->fields).modifierIndicators;
    pAVar6 = (this->fields).fadeOutCurve;
    puVar11 = &UNK_?;
    pMVar7 = (ModifierIndicator_OverlayWrapper *)func_?();
    overlayImage_00.animator = pIVar3;
    overlayImage_00.image = pIVar2;
    overlayImage_00.streamComponent = (StreamingAsset *)puVar11;
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
    pIVar2 = (this->fields).iceOverlay.image;
    pIVar3 = (this->fields).iceOverlay.animator;
    pCVar5 = (this->fields).iceOverlay.alphaHandler;
    pMVar1 = (this->fields).modifierIndicators;
    pAVar6 = (this->fields).fadeOutCurve;
    puVar11 = &UNK_?;
    pMVar7 = (ModifierIndicator_OverlayWrapper *)func_?();
    overlayImage_01.animator = pIVar3;
    overlayImage_01.image = pIVar2;
    overlayImage_01.streamComponent = (StreamingAsset *)puVar11;
    overlayImage_01.alphaHandler = pCVar5;
    ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper__ctor
              (pMVar7,overlayImage_01,pAVar6,(MethodInfo *)0x0);
    if (pMVar1 == (ModifierIndicator_OverlayWrapper__Array *)0x0) goto code_?;
    if (pMVar7 == (ModifierIndicator_OverlayWrapper *)0x0) {
code_?:
      if (pMVar1->max_length < 3) goto code_?;
      pMVar1->vector[2] = pMVar7;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_00,(Transform *)0x0,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    iVar10 = func_?(pMVar7,(pMVar1->klass->_0).element_class,pMVar8);
    if (iVar10 != 0) goto code_?;
  }
  uVar9 = func_?(0,0);
  func_?(uVar9);
code_?:
  uVar9 = func_?(0);
  func_?(uVar9);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_Initialize
               (ModifierIndicator *this,MVAvatarLocal *localAvatar,MethodInfo *method)

{
  if (localAvatar == (MVAvatarLocal *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pAVar2 = MVAvatarLocal::MVAvatarLocal_get_InteractableLocal(localAvatar,(MethodInfo *)0x0);
  (this->fields).localInteractable = (MVInteractableBase *)pAVar2;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)func_?(), pcVar1 == (code *)0x0))
  {
    uVar3 = func_?(&UNK_?,0);
    func_?(uVar3);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(0);
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_OnValidate
               (ModifierIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).fadeOutCurve;
  if (pAVar1 == (AnimationCurve *)0x0) {
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
    return;
  }
  pKVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                     (pAVar1,(MethodInfo *)0x0);
  pAVar1 = (this->fields).fadeOutCurve;
  if ((pAVar1 == (AnimationCurve *)0x0) ||
     (iVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_length
                        (pAVar1,(MethodInfo *)0x0), pKVar2 == (Keyframe__Array *)0x0)) {
code_?:
    func_?(0);
  }
  else if (iVar3 - 1U < pKVar2->max_length) {
    fVar4 = (float10)func_?(pKVar2->vector + iVar3 + -1);
    if ((float)fVar4 == 0.0) goto code_?;
    pAVar1 = (this->fields).fadeOutCurve;
    if (pAVar1 != (AnimationCurve *)0x0) {
      pKVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                         (pAVar1,(MethodInfo *)0x0);
      pAVar1 = (this->fields).fadeOutCurve;
      if ((pAVar1 != (AnimationCurve *)0x0) &&
         (iVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_length
                            (pAVar1,(MethodInfo *)0x0), pKVar2 != (Keyframe__Array *)0x0)) {
        uVar5 = 0;
        if (iVar3 - 1U < pKVar2->max_length) {
          func_?(pKVar2->vector + iVar3 + -1,0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_fadeOutCurve_has_been_auto_corre,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
    }
    goto code_?;
  }
  uVar5 = func_?(0);
  func_?(uVar5);
code_?:
  uVar5 = func_?(0,uVar5);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  func_?(0);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_Update
               (ModifierIndicator *this,MethodInfo *method)

{
  pMVar1 = (this->fields).localInteractable;
  if (pMVar1 == (MVInteractableBase *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    cVar3 = (*(code *)(pMVar1->klass->vtable).__unknown_2.method)
                      (pMVar1,4,(pMVar1->klass->vtable).__unknown_3.methodPtr);
    pMVar4 = (this->fields).modifierIndicators;
    if (pMVar4 == (ModifierIndicator_OverlayWrapper__Array *)0x0) goto code_?;
    if (pMVar4->max_length == 0) goto code_?;
    if (pMVar4->vector[0] == (ModifierIndicator_OverlayWrapper *)0x0) goto code_?;
    ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper_Update
              (pMVar4->vector[0],cVar3 != '\0',(MethodInfo *)0x0);
    pMVar1 = (this->fields).localInteractable;
    if (pMVar1 == (MVInteractableBase *)0x0) goto code_?;
    cVar5 = (*(code *)(pMVar1->klass->vtable).__unknown_2.method)
                      (pMVar1,1,(pMVar1->klass->vtable).__unknown_3.methodPtr);
    pMVar4 = (this->fields).modifierIndicators;
    if (pMVar4 == (ModifierIndicator_OverlayWrapper__Array *)0x0) goto code_?;
    if (1 < pMVar4->max_length) {
      if (pMVar4->vector[1] != (ModifierIndicator_OverlayWrapper *)0x0) {
        cVar6 = '\0';
        if (cVar3 == '\0') {
          cVar6 = cVar5;
        }
        ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper_Update
                  (pMVar4->vector[1],cVar6 != '\0',(MethodInfo *)0x0);
        cVar6 = '\x01';
        if (cVar3 == '\0') {
          cVar6 = cVar5;
        }
        pMVar1 = (this->fields).localInteractable;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          cVar3 = (*(code *)(pMVar1->klass->vtable).__unknown_2.method)
                            (pMVar1,10,(pMVar1->klass->vtable).__unknown_3.methodPtr);
          pMVar4 = (this->fields).modifierIndicators;
          if (pMVar4 != (ModifierIndicator_OverlayWrapper__Array *)0x0) {
            if (pMVar4->max_length < 3) goto code_?;
            if (pMVar4->vector[2] != (ModifierIndicator_OverlayWrapper *)0x0) {
              cVar5 = '\0';
              if (cVar6 == '\0') {
                cVar5 = cVar3;
              }
              ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper_Update
                        (pMVar4->vector[2],cVar5 != '\0',(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

