
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TertiaryNotificationUI+<NotificationAnimation>d__7::TertiaryNotificationUI_NotificationAnimation_d_7_MoveNext(TertiaryNotificationUI_NotificationAnimation_d_7 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pTVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields)._fadeTime_5__2 = 0.0;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      (this->fields)._fadeTime_5__2 = 0.0;
    }
    else if (iVar1 != 3) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if ((this->fields)._fadeTime_5__2 <= 0.15) {
      fVar3 = (this->fields)._fadeTime_5__2;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      fVar4 = fVar4 + fVar3;
      (this->fields)._fadeTime_5__2 = fVar4;
      if (pTVar2 != (TertiaryNotificationUI *)0x0) {
        pCVar5 = (pTVar2->fields).canvasGroup;
        fVar3 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,0.15,fVar4,(MethodInfo *)0x0);
        if (fVar3 < 0.0) {
          fVar3 = 0.0;
        }
        else if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
        if (pCVar5 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar5,fVar3 * -1.0 + 1.0,(MethodInfo *)0x0);
          bVar6 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar6 = uVar9 == *puVar10;
              if (bVar6) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
          (this->fields).__1__state = 3;
          return 1;
        }
      }
    }
    else if ((pTVar2 != (TertiaryNotificationUI *)0x0) && (this_00 = (pTVar2->fields).notification, this_00 != (Notification *)0x0)) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)obj,(MethodInfo *)0x0);
      return 0;
    }
    goto code_?;
  }
  pfVar11 = &(this->fields)._fadeTime_5__2;
  (this->fields).__1__state = -1;
  if (0.1 < *pfVar11 || *pfVar11 == 0.1) {
    if (pTVar2 != (TertiaryNotificationUI *)0x0) {
      iVar1 = (pTVar2->fields).lifetime;
      pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
      bVar6 = iRam_? != 0;
      *(float *)&pOVar12[1].klass = (float)iVar1 - 0.15;
      (this->fields).__2__current = pOVar12;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      (this->fields).__1__state = 2;
      return 1;
    }
  }
  else {
    fVar3 = (this->fields)._fadeTime_5__2;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 + fVar3;
    (this->fields)._fadeTime_5__2 = fVar4;
    if (pTVar2 != (TertiaryNotificationUI *)0x0) {
      pCVar5 = (pTVar2->fields).canvasGroup;
      fVar3 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,0.1,fVar4,(MethodInfo *)0x0);
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      if (pCVar5 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar5,fVar3 + 0.0,(MethodInfo *)0x0);
        bVar6 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TertiaryNotificationUI+<NotificationAnimation>d__7::TertiaryNotificationUI_NotificationAnimation_d_7_System_Collections_IEnumerator_Reset(TertiaryNotificationUI_NotificationAnimation_d_7 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__TertiaryNotificationUI___NotificationAnimation_d__7__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

