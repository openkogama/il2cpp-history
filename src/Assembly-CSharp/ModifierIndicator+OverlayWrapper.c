
/* Void Update(Boolean) */

void Assembly-CSharp.dll::ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper_Update
               (ModifierIndicator_OverlayWrapper *this,bool active,MethodInfo *method)

{
  pCVar1 = (this->fields).image.alphaHandler;
  if (active == 0) {
    if (pCVar1 == (CanvasGroup *)0x0) goto code_?;
    fVar2 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar1,(MethodInfo *)0x0);
    if (_UNK_? < fVar2) {
      this_00 = (this->fields).fadeOutCurve;
      if (this_00 != (AnimationCurve *)0x0) {
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (this_00,(this->fields).fadeOutTimer,(MethodInfo *)0x0);
        pCVar1 = (this->fields).image.alphaHandler;
        if (pCVar1 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar1,fVar2,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)(this->fields).fadeOutTimer;
          fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
          (this->fields).fadeOutTimer = fVar2 + (float)method_00;
          return;
        }
      }
      goto code_?;
    }
    pIVar3 = (this->fields).image.animator;
    if (pIVar3 == (ImageAnimator *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar3,0,(MethodInfo *)0x0);
    pIVar4 = (this->fields).image.image;
  }
  else {
    if (pCVar1 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar1,1.0,(MethodInfo *)0x0);
    (this->fields).fadeOutTimer = 0.0;
    pIVar4 = (this->fields).image.image;
    if (pIVar4 == (Image *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar4,1,(MethodInfo *)0x0);
    pIVar3 = (this->fields).image.animator;
    if (pIVar3 == (ImageAnimator *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar3,1,(MethodInfo *)0x0);
    pIVar4 = (Image *)(this->fields).image.streamComponent;
  }
  if (pIVar4 != (Image *)0x0) {
    pcVar5 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      pcVar5 = (code *)func_?();
      if (pcVar5 == (code *)0x0) {
        puStack6 = (undefined *)0x0;
        puStack7 = (undefined *)0x0;
        puStack8 = (undefined *)func_?();
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pcRam_? = pcVar5;
    (*pcRam_?)();
    return;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ModifierIndicator+OverlayWrapper(ModifierIndicator+AnimatedImage, AnimationCurve) */

void Assembly-CSharp.dll::ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper__ctor
               (ModifierIndicator_OverlayWrapper *this,ModifierIndicator_AnimatedImage overlayImage,
               AnimationCurve *fadeOutCurve,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).image.image = overlayImage.image;
  (this->fields).image.animator = overlayImage.animator;
  (this->fields).image.streamComponent = overlayImage.streamComponent;
  (this->fields).image.alphaHandler = overlayImage.alphaHandler;
  this_00 = (this->fields).image.image;
  if (this_00 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    (this->fields).fadeOutCurve = fadeOutCurve;
    if (fadeOutCurve != (AnimationCurve *)0x0) {
      pKVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                         (fadeOutCurve,(MethodInfo *)0x0);
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_length
                        (fadeOutCurve,(MethodInfo *)0x0);
      if (pKVar1 != (Keyframe__Array *)0x0) {
        if (iVar2 - 1U < pKVar1->max_length) {
          fVar3 = (float10)func_?();
          (this->fields).fadeOutTimer = (float)fVar3;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Single get_Alpha() */

float Assembly-CSharp.dll::ModifierIndicator+OverlayWrapper::
      ModifierIndicator_OverlayWrapper_get_Alpha
                (ModifierIndicator_OverlayWrapper *this,MethodInfo *method)

{
  pCVar1 = (this->fields).image.alphaHandler;
  if (pCVar1 == (CanvasGroup *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    fVar3 = (float10)(*pcVar2)();
    return (float)fVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?,0,0);
    func_?(uVar4);
    pcVar2 = (code *)swi(3);
    fVar3 = (float10)(*pcVar2)();
    return (float)fVar3;
  }
  pcRam_? = pcVar2;
  fVar3 = (float10)(*pcRam_?)(pCVar1);
  return (float)fVar3;
}


/* Void set_Alpha(Single) */

void Assembly-CSharp.dll::ModifierIndicator+OverlayWrapper::
     ModifierIndicator_OverlayWrapper_set_Alpha
               (ModifierIndicator_OverlayWrapper *this,float value,MethodInfo *method)

{
  this_00 = (this->fields).image.alphaHandler;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

