
/* IState GetState(Object) */

IState * Assembly-CSharp.dll::StateTransitionTable::StateTransitionTable_GetState
                   (StateTransitionTable *this,Object *evt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).table;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,evt,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__get_Item_System__Object_
                       );
    return (IState *)pOVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IState *)(*pcVar2)();
  return pIVar3;
}


/* Void SetState(Object, IState) */

void Assembly-CSharp.dll::StateTransitionTable::StateTransitionTable_SetState
               (StateTransitionTable *this,Object *evt,IState *state,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                  ,evt,state,uVar1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).table;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,evt,(Object *)state,CONCAT31((int3)((uint)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* StateTransitionTable() */

void Assembly-CSharp.dll::StateTransitionTable::StateTransitionTable__ctor
               (StateTransitionTable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Dictionary__
                 );
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
  (this->fields).table = (Dictionary_2_System_Object_IState_ *)this_00;
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

