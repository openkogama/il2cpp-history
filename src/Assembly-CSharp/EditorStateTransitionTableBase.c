
/* Void SetStateTypes() */

void Assembly-CSharp.dll::EditorStateTransitionTableBase::
     EditorStateTransitionTableBase_SetStateTypes
               (EditorStateTransitionTableBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ESStateBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  SStack_1.table = (this->fields)._.table;
  if ((Dictionary_2_System_Object_System_Object_ *)SStack_1.table ==
      (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&SStack_1 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (ulonglong)
              (uint)(((Dictionary_2_System_Object_System_Object_ *)SStack_1.table)->fields).
                    _version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
  DStack_11._current.key = (Object *)0x0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  pDVar12 = (Dictionary_2_System_Object_System_Object_ *)SStack_1.table;
  DStack_11._dictionary = (Dictionary_2_System_Object_System_Object_ *)SStack_1.table;
  while( true ) {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                      );
    if (bVar13 == 0) {
      return;
    }
    pOVar14 = DStack_11._current.value;
    if (DStack_11._current.value == (Object *)0x0) break;
    bVar15 = (TypeInfo__ESStateBase->_1).naturalAligment;
    if (((((DStack_11._current.value)->klass->_1).naturalAligment < bVar15) ||
        (((DStack_11._current.value)->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
         (Il2CppClass *)TypeInfo__ESStateBase)) || (DStack_11._current.value == (Object *)0x0))
    goto code_?;
    if ((Dictionary_2_System_Object_System_Object_ *)DStack_11._current.key ==
        (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar12 = (Dictionary_2_System_Object_System_Object_ *)DStack_11._current.key;
    if ((((Dictionary_2_System_Object_IState___Class *)(DStack_11._current.key)->klass)->_0).
        element_class != (TypeInfo__EditorEvent->_0).element_class) goto code_?;
    *(undefined4 *)&DStack_11._current.value[1].klass =
         *(undefined4 *)
          &((Dictionary_2_System_Object_System_Object___Fields *)
           ((longlong)DStack_11._current.key + 0x10))->_buckets;
  }
  FUN_?();
code_?:
  FUN_?(pDVar12);
code_?:
  FUN_?();
code_?:
  FUN_?(pOVar14);
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* EditorStateTransitionTableBase() */

void Assembly-CSharp.dll::EditorStateTransitionTableBase::EditorStateTransitionTableBase__ctor
               (EditorStateTransitionTableBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Dictionary__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<System::Object,_IState>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_IState>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._.table = (Dictionary_2_System_Object_IState_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

