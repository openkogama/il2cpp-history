
/* Void Dispose() */

void Assembly-CSharp.dll::GameTierProgressBar+<ScaleAndFadeLockForTier>c__Iterator0::
     GameTierProgressBar_ScaleAndFadeLockForTier_c_Iterator0_Dispose
               (GameTierProgressBar_ScaleAndFadeLockForTier_c_Iterator0 *this,MethodInfo *method)

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameTierProgressBar+<ScaleAndFadeLockForTier>c__Iterator0::
     GameTierProgressBar_ScaleAndFadeLockForTier_c_Iterator0_MoveNext
               (GameTierProgressBar_ScaleAndFadeLockForTier_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pGVar2 = (this->fields)._this;
    (this->fields)._progress___0 = 0.0;
    (this->fields)._alpha___0 = 1.0;
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
  else if (iVar1 != 1) {
    return 0;
  }
  if ((this->fields)._alpha___0 <= 0.0) {
    pGVar2 = (this->fields)._this;
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
        (this->fields)._current = (Object *)0x0;
        if ((this->fields)._disposing == 0) {
          (this->fields)._PC = 2;
        }
        return 1;
      }
    }
  }
  else {
    fVar5 = (this->fields)._progress___0;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar6 = fVar6 + fVar5;
    pGVar2 = (this->fields)._this;
    (this->fields)._progress___0 = fVar6;
    if (pGVar2 != (GameTierProgressBar *)0x0) {
      (this->fields)._alpha___0 = _UNK_? - fVar6 / (pGVar2->fields).unlockedTierLerpDuration;
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
                    ((CanvasGroup *)this_01,(this->fields)._alpha___0,(MethodInfo *)0x0);
          (this->fields)._current = (Object *)0x0;
          if ((this->fields)._disposing != 0) {
            return 1;
          }
          (this->fields)._PC = 1;
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


/* Void Reset() */

void Assembly-CSharp.dll::GameTierProgressBar+<ScaleAndFadeLockForTier>c__Iterator0::
     GameTierProgressBar_ScaleAndFadeLockForTier_c_Iterator0_Reset
               (GameTierProgressBar_ScaleAndFadeLockForTier_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

