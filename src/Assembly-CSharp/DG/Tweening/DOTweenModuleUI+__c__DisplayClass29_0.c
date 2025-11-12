
/* Void <DOJumpAnchorPos>b__2() */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass29_0::
     DOTweenModuleUI_c_DisplayClass29_0__DOJumpAnchorPos_b__2
               (DOTweenModuleUI_c_DisplayClass29_0 *this,MethodInfo *method)

{
  this_00 = (this->fields).target;
  if (this_00 != (RectTransform *)0x0) {
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
    fStackX_c = VVar1.y;
    (this->fields).startPosY = fStackX_c;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <DOJumpAnchorPos>b__5() */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass29_0::
     DOTweenModuleUI_c_DisplayClass29_0__DOJumpAnchorPos_b__5
               (DOTweenModuleUI_c_DisplayClass29_0 *this,MethodInfo *method)

{
  if ((this->fields).offsetYSet == 0) {
    pSVar1 = (this->fields).s;
    (this->fields).offsetYSet = 1;
    if (pSVar1 == (Sequence *)0x0) goto code_?;
    fVar2 = (this->fields).endValue.y;
    if ((pSVar1->fields)._._isRelative_k__BackingField == 0) {
      fVar2 = fVar2 - (this->fields).startPosY;
    }
    (this->fields).offsetY = fVar2;
  }
  pRVar3 = (this->fields).target;
  if (pRVar3 != (RectTransform *)0x0) {
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(pRVar3,(MethodInfo *)0x0);
    fVar2 = (this->fields).offsetY;
    lifetimePercentage =
         DOTween.dll::DG::Tweening::TweenExtensions::TweenExtensions_ElapsedDirectionalPercentage
                   ((Tween *)(this->fields).s,(MethodInfo *)0x0);
    fVar2 = DOTween.dll::DG::Tweening::DOVirtual::DOVirtual_EasedValue
                      (0.0,fVar2,lifetimePercentage,Ease__Enum_OutQuad,(MethodInfo *)0x0);
    pRVar3 = (this->fields).target;
    if (pRVar3 != (RectTransform *)0x0) {
      auStack_5[0] = CONCAT44(fVar2 + VVar4.y,VVar4.x);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                      ,auStack_5[0],0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pRVar3 == (RectTransform *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar7 = (pRVar3->fields)._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar7,auStack_5);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

