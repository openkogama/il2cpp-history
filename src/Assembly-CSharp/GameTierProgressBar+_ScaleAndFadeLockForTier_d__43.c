
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameTierProgressBar+<ScaleAndFadeLockForTier>d__43::
     GameTierProgressBar_ScaleAndFadeLockForTier_d_43_MoveNext
               (GameTierProgressBar_ScaleAndFadeLockForTier_d_43 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pGVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._progress_5__2 = 0.0;
    (this->fields)._alpha_5__3 = 1.0;
    if ((pGVar2 == (GameTierProgressBar *)0x0) ||
       (pLVar3 = (pGVar2->fields).tierProgressDataList,
       pLVar3 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
    pGVar4 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar3,
                        (this->fields).tier,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    this_00 = pGVar4->LockedTierIcon;
    if ((CanvasGroup *)this_00 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              ((CanvasGroup *)this_00,1.0,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        (this->fields).__1__state = -1;
      }
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if ((this->fields)._alpha_5__3 <= 0.0) {
    if ((pGVar2 != (GameTierProgressBar *)0x0) &&
       (pLVar3 = (pGVar2->fields).tierProgressDataList,
       pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
      pGVar4 = mscorlib.dll::System::Collections::Generic::
               List`1[GameTierProgressBar+TierProgressData]::
               List_1_GameTierProgressBar_TierProgressData__get_Item
                         ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar3,
                          (this->fields).tier,
                          MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                         );
      this_02 = pGVar4->LockedTierIcon;
      if ((CanvasGroup *)this_02 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  ((CanvasGroup *)this_02,0.0,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)0x0;
        func_?();
        (this->fields).__1__state = 2;
        return 1;
      }
    }
  }
  else {
    fVar5 = (this->fields)._progress_5__2;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar6 = fVar6 + fVar5;
    (this->fields)._progress_5__2 = fVar6;
    if (pGVar2 != (GameTierProgressBar *)0x0) {
      (this->fields)._alpha_5__3 = _UNK_? - fVar6 / (pGVar2->fields).unlockedTierLerpDuration
      ;
      pLVar3 = (pGVar2->fields).tierProgressDataList;
      if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        pGVar4 = mscorlib.dll::System::Collections::Generic::
                 List`1[GameTierProgressBar+TierProgressData]::
                 List_1_GameTierProgressBar_TierProgressData__get_Item
                           ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar3,
                            (this->fields).tier,
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                           );
        this_01 = pGVar4->LockedTierIcon;
        if ((CanvasGroup *)this_01 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    ((CanvasGroup *)this_01,(this->fields)._alpha_5__3,(MethodInfo *)0x0);
          (this->fields).__2__current = (Object *)0x0;
          func_?();
          (this->fields).__1__state = 1;
          return 1;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameTierProgressBar+<ScaleAndFadeLockForTier>d__43::
     GameTierProgressBar_ScaleAndFadeLockForTier_d_43_System_Collections_IEnumerator_Reset
               (GameTierProgressBar_ScaleAndFadeLockForTier_d_43 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__GameTierProgressBar___ScaleAndFadeLockForTier_d__43__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

