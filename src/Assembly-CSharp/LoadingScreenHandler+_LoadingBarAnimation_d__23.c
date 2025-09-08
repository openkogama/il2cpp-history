
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LoadingScreenHandler+<LoadingBarAnimation>d__23::
     LoadingScreenHandler_LoadingBarAnimation_d_23_MoveNext
               (LoadingScreenHandler_LoadingBarAnimation_d_23 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pLVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((pLVar2 != (LoadingScreenHandler *)0x0) &&
       (pPVar3 = (pLVar2->fields).loadingBar, pPVar3 != (ProgressBar *)0x0)) {
      (this->fields)._startProgress_5__2 = (pPVar3->fields).progress;
      (this->fields)._loadingBarTime_5__3 = 0.0;
      this_01 = (SubscribableVariable_1_System_Single_ *)
                func_?(TypeInfo__UnityEngine__WaitForSeconds);
      SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                (this_01,0.1,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)this_01;
      func_?(&(this->fields).__2__current,this_01);
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (pLVar2 != (LoadingScreenHandler *)0x0) {
      fVar4 = (pLVar2->fields).targetLoadingBarTime;
      pfVar5 = &(this->fields)._loadingBarTime_5__3;
      if (fVar4 < *pfVar5 || fVar4 == *pfVar5) {
        return 0;
      }
      fVar4 = (this->fields)._loadingBarTime_5__3;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar6 = fVar6 + fVar4;
      (this->fields)._loadingBarTime_5__3 = fVar6;
      fVar6 = MathFunctions::MathFunctions_SmoothInverseLerp
                        (0.0,(pLVar2->fields).targetLoadingBarTime,fVar6,(MethodInfo *)0x0);
      this_00 = (ProgressBarAndroid *)(pLVar2->fields).loadingBar;
      fVar4 = (this->fields)._startProgress_5__2;
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
      else if (_UNK_? < fVar6) {
        fVar6 = _UNK_?;
      }
      if (this_00 != (ProgressBarAndroid *)0x0) {
        ProgressBarAndroid::ProgressBarAndroid_set_Progress
                  (this_00,((pLVar2->fields).targetProgress - fVar4) * fVar6 + fVar4,
                   (MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)0x0;
        func_?();
        (this->fields).__1__state = 2;
        return 1;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LoadingScreenHandler+<LoadingBarAnimation>d__23::
     LoadingScreenHandler_LoadingBarAnimation_d_23_System_Collections_IEnumerator_Reset
               (LoadingScreenHandler_LoadingBarAnimation_d_23 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__LoadingScreenHandler___LoadingBarAnimation_d__23__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

