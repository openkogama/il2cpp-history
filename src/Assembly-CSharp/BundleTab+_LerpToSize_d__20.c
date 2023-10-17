
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::BundleTab+<LerpToSize>d__20::BundleTab_LerpToSize_d_20_MoveNext
               (BundleTab_LerpToSize_d_20 *this,MethodInfo *method)

{
  pBVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  iVar2 = (this->fields).__1__state;
  pBVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pBVar3 == (BundleTab *)0x0) goto code_?;
    pRVar5 = (pBVar3->fields).rectTransform;
    (pBVar3->fields).startTime = fVar4;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    VStack_6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_get_anchoredPosition(pRVar5,(MethodInfo *)0x0);
    fVar4 = (this->fields)._pos_5__2.x;
    (this->fields)._pos_5__2 = VStack_6;
    (this->fields)._xPos_5__3 = fVar4;
    this = (BundleTab_LerpToSize_d_20 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    VVar7 = VStack_6;
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    this = (BundleTab_LerpToSize_d_20 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    VVar7 = (Vector2)((ulonglong)(uint)VStack_6.y << 0x20);
    if (pBVar3 == (BundleTab *)0x0) goto code_?;
  }
  fStack_8 = (pBVar1->fields)._xPos_5__3;
  fStack_9 = (pBVar1->fields).size;
  if ((pBVar3->fields).lerpTime <= (float)this - (pBVar3->fields).startTime) {
    fVar4 = (fStack_9 - fStack_8) + fStack_8;
    (pBVar1->fields)._pos_5__2.x = fVar4;
    pRVar5 = (pBVar3->fields).rectTransform;
    VStack_6.y = (pBVar1->fields)._pos_5__2.y;
    if (pRVar5 != (RectTransform *)0x0) {
      VVar7.y = VStack_6.y;
      VVar7.x = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (pRVar5,VVar7,(MethodInfo *)0x0);
      return 0;
    }
  }
  else {
    VStack_6 = VVar7;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar4 = (fVar4 - (pBVar3->fields).startTime) / (pBVar3->fields).lerpTime;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    fStack_10 = (fStack_9 - fStack_8) * fVar4 + fStack_8;
    (pBVar1->fields)._pos_5__2.x = fStack_10;
    pRVar5 = (pBVar3->fields).rectTransform;
    fStack_8 = (pBVar1->fields)._pos_5__2.y;
    if (pRVar5 != (RectTransform *)0x0) {
      value.y = fStack_8;
      value.x = fStack_10;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (pRVar5,value,(MethodInfo *)0x0);
      VStack_6.y = 0.0;
      pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&VStack_6.y);
      (pBVar1->fields).__2__current = pOVar11;
      func_?(&(pBVar1->fields).__2__current,pOVar11);
      (pBVar1->fields).__1__state = 1;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::BundleTab+<LerpToSize>d__20::
     BundleTab_LerpToSize_d_20_System_Collections_IEnumerator_Reset
               (BundleTab_LerpToSize_d_20 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__BundleTab___LerpToSize_d__20__System_Collections_IEnumerator_Reset__)
  ;
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

