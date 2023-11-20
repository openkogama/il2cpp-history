
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd+<FadeOutAndPop>d__37::
     GeneralPromotionAd_FadeOutAndPop_d_37_MoveNext
               (GeneralPromotionAd_FadeOutAndPop_d_37 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<float>);
    func_?(&
                    MethodInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_b__37_0_float_
                   );
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    this_01 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (this_01,(Object *)this_00,
               MethodInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_b__37_0_float_
               ,(MethodInfo *)0x0);
    routine = pTween::pTween_To(0.5,1.0,0.0,(Action_1_Single_ *)this_01,(MethodInfo *)0x0);
    if (this_00 != (GeneralPromotionAd *)0x0) {
      pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
               MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0)
      ;
      (this->fields).__2__current = (Object *)pCVar2;
      func_?();
      (this->fields).__1__state = 1;
      return 1;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd+<FadeOutAndPop>d__37::
     GeneralPromotionAd_FadeOutAndPop_d_37_System_Collections_IEnumerator_Reset
               (GeneralPromotionAd_FadeOutAndPop_d_37 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

