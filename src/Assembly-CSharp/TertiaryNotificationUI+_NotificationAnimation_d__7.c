
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TertiaryNotificationUI+<NotificationAnimation>d__7::
     TertiaryNotificationUI_NotificationAnimation_d_7_MoveNext
               (TertiaryNotificationUI_NotificationAnimation_d_7 *this,MethodInfo *method)

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
    fVar3 = _UNK_?;
    bVar4 = (this->fields)._fadeTime_5__2 <= _UNK_?;
    (this->fields).__1__state = -1;
    if (bVar4) {
      fVar5 = (this->fields)._fadeTime_5__2;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar6 = fVar6 + fVar5;
      (this->fields)._fadeTime_5__2 = fVar6;
      if (pTVar2 != (TertiaryNotificationUI *)0x0) {
        pCVar7 = (pTVar2->fields).canvasGroup;
        fVar3 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,fVar3,fVar6,(MethodInfo *)0x0)
        ;
        if (fVar3 < 0.0) {
          fVar3 = 0.0;
        }
        else if (_UNK_? < fVar3) {
          fVar3 = _UNK_?;
        }
        if (pCVar7 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar7,fVar3 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
          bVar4 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar4) {
            uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar4 = uVar10 == *puVar11;
              if (bVar4) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar4);
          }
          (this->fields).__1__state = 3;
          return 1;
        }
      }
    }
    else if ((pTVar2 != (TertiaryNotificationUI *)0x0) &&
            (this_00 = (pTVar2->fields).notification, this_00 != (Notification *)0x0)) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return 0;
    }
    goto code_?;
  }
  fVar3 = _UNK_?;
  pfVar12 = &(this->fields)._fadeTime_5__2;
  bVar4 = _UNK_? == *pfVar12;
  bVar13 = _UNK_? < *pfVar12;
  (this->fields).__1__state = -1;
  if (bVar13 || bVar4) {
    if (pTVar2 != (TertiaryNotificationUI *)0x0) {
      iVar1 = (pTVar2->fields).lifetime;
      pOVar14 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
      bVar4 = iRam_? != 0;
      *(float *)&pOVar14[1].klass = (float)iVar1 - _UNK_?;
      (this->fields).__2__current = pOVar14;
      if (bVar4) {
        uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar4 = uVar10 == *puVar11;
          if (bVar4) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      (this->fields).__1__state = 2;
      return 1;
    }
  }
  else {
    fVar5 = (this->fields)._fadeTime_5__2;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar6 = fVar6 + fVar5;
    (this->fields)._fadeTime_5__2 = fVar6;
    if (pTVar2 != (TertiaryNotificationUI *)0x0) {
      pCVar7 = (pTVar2->fields).canvasGroup;
      fVar3 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,fVar3,fVar6,(MethodInfo *)0x0);
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (_UNK_? < fVar3) {
        fVar3 = _UNK_?;
      }
      if (pCVar7 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar7,fVar3 + 0.0,(MethodInfo *)0x0);
        bVar4 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        if (bVar4) {
          uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar4 = uVar10 == *puVar11;
            if (bVar4) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TertiaryNotificationUI+<NotificationAnimation>d__7::
     TertiaryNotificationUI_NotificationAnimation_d_7_System_Collections_IEnumerator_Reset
               (TertiaryNotificationUI_NotificationAnimation_d_7 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__TertiaryNotificationUI___NotificationAnimation_d__7__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

