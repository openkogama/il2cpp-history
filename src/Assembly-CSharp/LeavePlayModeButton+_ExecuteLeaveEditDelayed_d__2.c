
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LeavePlayModeButton+<ExecuteLeaveEditDelayed>d__2::
     LeavePlayModeButton_ExecuteLeaveEditDelayed_d_2_MoveNext
               (LeavePlayModeButton_ExecuteLeaveEditDelayed_d_2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ILeaveEditPlayModeHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LeavePlayModeButton____c___ExecuteLeaveEditDelayed_b__2_0_ILeaveEditPlayModeHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LeavePlayModeButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    lVar2 = lRam_?;
    pOVar3 = (Object *)0x0;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar3 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
          lVar2 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar6 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
      }
    }
    else {
      pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    bVar7 = iRam_? != 0;
    (this->fields).__2__current = pOVar3;
    if (bVar7) {
      uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      lVar2 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar6 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    (this->fields).__1__state = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        this_00 = (this->fields).__4__this;
        (this->fields).__1__state = -1;
        if (this_00 == (LeavePlayModeButton *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__LeavePlayModeButton____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__LeavePlayModeButton____c);
        }
        this_01 = TypeInfo__LeavePlayModeButton____c->static_fields->__9__2_0;
        if (this_01 == (ExecuteEvents_EventFunction_1_ILeaveEditPlayModeHandler_ *)0x0) {
          if (*(int *)&(TypeInfo__LeavePlayModeButton____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__LeavePlayModeButton____c);
          }
          object = TypeInfo__LeavePlayModeButton____c->static_fields->__9;
          this_01 = (ExecuteEvents_EventFunction_1_ILeaveEditPlayModeHandler_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                     MethodInfo__LeavePlayModeButton____c___ExecuteLeaveEditDelayed_b__2_0_ILeaveEditPlayModeHandler__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__LeavePlayModeButton____c->static_fields->__9__2_0 = this_01;
          func_?(&TypeInfo__LeavePlayModeButton____c->static_fields->__9__2_0);
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ILeaveEditPlayModeHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>_
                  );
      }
      return 0;
    }
    (this->fields).__1__state = -1;
    lVar2 = lRam_?;
    pOVar3 = (Object *)0x0;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar3 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
          lVar2 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar6 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
      }
    }
    else {
      pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    bVar7 = iRam_? != 0;
    (this->fields).__2__current = pOVar3;
    if (bVar7) {
      uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      lVar2 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar6 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    (this->fields).__1__state = 2;
  }
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LeavePlayModeButton+<ExecuteLeaveEditDelayed>d__2::
     LeavePlayModeButton_ExecuteLeaveEditDelayed_d_2_System_Collections_IEnumerator_Reset
               (LeavePlayModeButton_ExecuteLeaveEditDelayed_d_2 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__LeavePlayModeButton___ExecuteLeaveEditDelayed_d__2__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

