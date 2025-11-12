
/* Void CheckRequiredBehaviours(List`1[System.Type]) */

void Assembly-CSharp.dll::RTG::GizmoBehaviour::GizmoBehaviour_CheckRequiredBehaviours
               (GizmoBehaviour *this,List_1_System_Type_ *reqBehaviourTypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Type>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Type>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Type>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (reqBehaviourTypes == (List_1_System_Type_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(reqBehaviourTypes->fields)._version << 0x20);
  uStack_8 = 0;
  LStack_9._8_8_ = pLStack_7;
  LStack_9._current = (Object *)0x0;
  uStack_3 = 0;
  pLStack_7 = &LStack_9;
  LStack_9._list = (List_1_System_Object_ *)reqBehaviourTypes;
  do {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_9,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Type>__MoveNext__
                      );
    behaviourType = LStack_9._current;
    if (bVar10 == 0) {
      return;
    }
    pGVar11 = (this->fields)._gizmo;
    if (pGVar11 == (Gizmo *)0x0) goto code_?;
    this_00 = (pGVar11->fields)._behaviours;
    if (this_00 == (GizmoBehaviourCollection *)0x0) {
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar12 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetBehavioursOfType
                       (this_00,(Type *)behaviourType,(MethodInfo *)0x0);
    if (pLVar12 == (List_1_RTG_IGizmoBehaviour_ *)0x0) {
code_?:
      FUN_?();
code_?:
      FUN_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      goto code_?;
    }
    if ((pLVar12->fields)._size == 0) break;
    pIVar13 = (pLVar12->fields)._items;
    if (pIVar13 == (IGizmoBehaviour__Array *)0x0) goto code_?;
    if ((int)pIVar13->max_length == 0) {
      FUN_?();
      goto code_?;
    }
  } while (pIVar13->vector[0] != (IGizmoBehaviour *)0x0);
  GizmoBehaviour_ThrowReqBehaviourExeception(this,(Type *)behaviourType,(MethodInfo *)0x0);
  return;
}


/* Void SetEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoBehaviour::GizmoBehaviour_SetEnabled
               (GizmoBehaviour *this,bool enabled,MethodInfo *method)

{
  if (enabled == (this->fields)._isEnabled) {
    return;
  }
  pGVar1 = this->klass;
  if (enabled == 0) {
    (this->fields)._isEnabled = 0;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar1->vtable).OnDisabled_1.methodPtr)(this,(pGVar1->vtable).OnDisabled_1.method);
    return;
  }
  (this->fields)._isEnabled = enabled;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pGVar1->vtable).OnEnabled_1.methodPtr)(this,(pGVar1->vtable).OnEnabled_1.method);
  return;
}


/* Void ThrowReqBehaviourExeception(Type) */

void Assembly-CSharp.dll::RTG::GizmoBehaviour::GizmoBehaviour_ThrowReqBehaviourExeception
               (GizmoBehaviour *this,Type *reqBehaviorType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

