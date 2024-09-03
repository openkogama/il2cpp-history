
/* Void Reset() */

void Assembly-CSharp.dll::ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper_Reset
               (ModifierIndicator_OverlayWrapper *this,MethodInfo *method)

{
  this_00 = (this->fields).image.image;
  if (this_00 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


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
    pIVar4 = (this->fields).image.image;
    (this->fields).fadeOutTimer = 0.0;
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
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)();
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ModifierIndicator+OverlayWrapper(ModifierIndicator+AnimatedImage, AnimationCurve) */

void Assembly-CSharp.dll::ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper__ctor
               (ModifierIndicator_OverlayWrapper *this,ModifierIndicator_AnimatedImage overlayImage,
               AnimationCurve *fadeOutCurve,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).image.image = overlayImage.image;
  (this->fields).image.animator = overlayImage.animator;
  (this->fields).image.streamComponent = overlayImage.streamComponent;
  (this->fields).image.alphaHandler = overlayImage.alphaHandler;
  func_?(&(this->fields).image,0);
  this_00 = (this->fields).image.image;
  if (this_00 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    (this->fields).fadeOutCurve = fadeOutCurve;
    func_?(&this->fields,fadeOutCurve);
    if (fadeOutCurve != (AnimationCurve *)0x0) {
      pKVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                         (fadeOutCurve,(MethodInfo *)0x0);
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_length
                        (fadeOutCurve,(MethodInfo *)0x0);
      if (pKVar1 != (Keyframe__Array *)0x0) {
        if (iVar2 - 1U < pKVar1->max_length) {
          fVar3 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::
                  Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                            ((KeyValuePair_2_System_Single_System_Single_ *)
                             (pKVar1->vector + iVar2 + -1),(MethodInfo *)0x0);
          (this->fields).fadeOutTimer = fVar3;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
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
  pCStack_1 = (CanvasGroup *)&stack0xfffffffc;
  pCVar2 = (this->fields).image.alphaHandler;
  if (pCVar2 != (CanvasGroup *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pCStack_1 = pCVar2;
    fVar3 = (float10)(*pcRam_?)();
    return (float)fVar3;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar3 = (float10)(*pcVar6)();
  return (float)fVar3;
}


/* Void set_Image(Image) */

void Assembly-CSharp.dll::ModifierIndicator+OverlayWrapper::
     ModifierIndicator_OverlayWrapper_set_Image
               (ModifierIndicator_OverlayWrapper *this,Image *value,MethodInfo *method)

{
  pMVar1 = &(this->fields).image;
  pMVar1->image = value;
  func_?(pMVar1,value);
  return;
}

