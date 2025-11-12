
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RegisteredPromotionPopup+<FadeOutAndPopPromotion>d__17::
     RegisteredPromotionPopup_FadeOutAndPopPromotion_d_17_MoveNext
               (RegisteredPromotionPopup_FadeOutAndPopPromotion_d_17 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<float>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RegisteredPromotionPopup___FadeOutAndPopPromotion_b__17_0_float_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
    }
    return 0;
  }
  (this->fields).__1__state = -1;
  callback = (Action_1_Single_ *)FUN_?(TypeInfo__System__Action<float>);
  FUN_?(callback,this_00);
  routine = pTween::pTween_To(_UNK_?,_UNK_?,0.0,callback,(MethodInfo *)0x0);
  if (this_00 == (RegisteredPromotionPopup *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                     ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).__2__current = (Object *)pCVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RegisteredPromotionPopup+<FadeOutAndPopPromotion>d__17::
     RegisteredPromotionPopup_FadeOutAndPopPromotion_d_17_System_Collections_IEnumerator_Reset
               (RegisteredPromotionPopup_FadeOutAndPopPromotion_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__RegisteredPromotionPopup___FadeOutAndPopPromotion_d__17__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

