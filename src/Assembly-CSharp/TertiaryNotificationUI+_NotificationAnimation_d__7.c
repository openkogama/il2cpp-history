
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TertiaryNotificationUI+<NotificationAnimation>d__7::TertiaryNotificationUI_NotificationAnimation_d_7_MoveNext(TertiaryNotificationUI_NotificationAnimation_d_7 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields)._fadeTime_5__2 = 0.0;
  case 1:
    pfVar2 = &(this->fields)._fadeTime_5__2;
    (this->fields).__1__state = -1;
    if (0.1 < *pfVar2 || *pfVar2 == 0.1) {
      if (pTVar1 != (TertiaryNotificationUI *)0x0) {
        iVar3 = (pTVar1->fields).lifetime;
        this_01 = (SubscribableVariable_1_System_Single_ *)func_?(TypeInfo__UnityEngine__WaitForSeconds);
        SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor(this_01,(float)iVar3 - 0.15,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)this_01;
        func_?(&(this->fields).__2__current,this_01);
        (this->fields).__1__state = 2;
        return 1;
      }
    }
    else {
      fVar4 = (this->fields)._fadeTime_5__2;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      fVar5 = fVar5 + fVar4;
      (this->fields)._fadeTime_5__2 = fVar5;
      fVar4 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,0.1,fVar5,(MethodInfo *)0x0);
      if (pTVar1 != (TertiaryNotificationUI *)0x0) {
        pCVar6 = (pTVar1->fields).canvasGroup;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        else if (1.0 < fVar4) {
          fVar4 = 1.0;
        }
        if (pCVar6 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar6,fVar4 + 0.0,(MethodInfo *)0x0);
          (this->fields).__2__current = (Object *)0x0;
          func_?();
          (this->fields).__1__state = 1;
          return 1;
        }
      }
    }
    break;
  case 2:
    (this->fields)._fadeTime_5__2 = 0.0;
  case 3:
    (this->fields).__1__state = -1;
    if (0.15 < (this->fields)._fadeTime_5__2) {
      if ((pTVar1 != (TertiaryNotificationUI *)0x0) && (this_00 = (pTVar1->fields).notification, this_00 != (Notification *)0x0)) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)obj,(MethodInfo *)0x0);
code_?:
        return 0;
      }
    }
    else {
      fVar4 = (this->fields)._fadeTime_5__2;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      fVar5 = fVar5 + fVar4;
      (this->fields)._fadeTime_5__2 = fVar5;
      fVar4 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,0.15,fVar5,(MethodInfo *)0x0);
      if (pTVar1 != (TertiaryNotificationUI *)0x0) {
        pCVar6 = (pTVar1->fields).canvasGroup;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        else if (1.0 < fVar4) {
          fVar4 = 1.0;
        }
        if (pCVar6 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar6,fVar4 * -1.0 + 1.0,(MethodInfo *)0x0);
          (this->fields).__2__current = (Object *)0x0;
          func_?();
          (this->fields).__1__state = 3;
          return 1;
        }
      }
    }
    break;
  default:
    goto code_?;
  }
  func_?();
  pcVar7 = (char *)((int)&pTVar1[2].klass + 2);
  *pcVar7 = *pcVar7 + extraout_CL;
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TertiaryNotificationUI+<NotificationAnimation>d__7::TertiaryNotificationUI_NotificationAnimation_d_7_System_Collections_IEnumerator_Reset(TertiaryNotificationUI_NotificationAnimation_d_7 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__TertiaryNotificationUI___NotificationAnimation_d__7__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

