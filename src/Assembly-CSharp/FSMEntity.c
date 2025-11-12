
/* Void ClearStateStack() */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_ClearStateStack(FSMEntity *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).stateStack;
  if (this_00 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this_00->fields)._size < 1) {
    return;
  }
  mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
  Stack_1_UnityEngine_UIElements_TextureId__Pop
            (this_00,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
  (this->fields).clearStack = 1;
  evt = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000008);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = StringLiteral_State_is_locked__could_not_set_s;
  if ((this->fields).lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar2,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar3 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,2,pSVar2);
    return;
  }
  bVar4 = iRam_? != 0;
  (this->fields).nextEvent = evt;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).nextEvent >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (evt == (Object *)0x0) {
    if ((this->fields).currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar4 = iRam_? != 0;
    (this->fields).currentState = (IState *)0x0;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).currentState >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  else {
    this_01 = (this->fields).transitionTable;
    if (this_01 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar9 = StateTransitionTable::StateTransitionTable_GetState(this_01,evt,(MethodInfo *)0x0);
    if (pIVar9 != (IState *)0x0) {
      if ((this->fields).currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar2 = (String *)
               (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
      (this->fields).stateName = pSVar2;
      func_?(&(this->fields).stateName);
      (this->fields).currentState = pIVar9;
      func_?(&(this->fields).currentState);
      (this->fields).nextEvent = (Object *)0x0;
      func_?(&(this->fields).nextEvent);
      (this->fields).prevEvent = (this->fields).curEvent;
      func_?(&this->fields);
      (this->fields).curEvent = evt;
      func_?(&(this->fields).curEvent);
      if ((this->fields).currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_02 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(this->fields).data;
      if (this_02 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((this->fields).clearStack == 0) {
      (this->fields).clearStack = 1;
    }
    else {
      pSVar10 = (this->fields).stateStack;
      if (pSVar10 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      piVar11 = &(pSVar10->fields)._version;
      *piVar11 = *piVar11 + 1;
      (pSVar10->fields)._size = 0;
    }
  }
  return;
}


/* Boolean PopState() */

bool Assembly-CSharp.dll::FSMEntity::FSMEntity_PopState(FSMEntity *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).lockState == 0) {
    this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).stateStack;
    if (this_00 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    if (0 < (this_00->fields)._size) {
      aiStackX_8[0] =
           (int32_t)mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
                    TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Pop
                              (this_00,
                               MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
      (this->fields).clearStack = 0;
      value = (Object *)FUN_?(TypeInfo__EditorEvent,aiStackX_8);
      FSMEntity_set_Event(this,value,(MethodInfo *)0x0);
      return 1;
    }
  }
  return 0;
}


/* Void PushState(EditorEvent) */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_PushState
               (FSMEntity *this,EditorEvent__Enum nextState,MethodInfo *method)

{
  if ((this->fields).lockState != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent,CONCAT44(in_register_00000014,nextState),0x12,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).lockState != 0) {
    return;
  }
  this_00 = (Stack_1_System_Int32Enum_ *)(this->fields).stateStack;
  pOVar1 = (this->fields).curEvent;
  if ((this_00 != (Stack_1_System_Int32Enum_ *)0x0) && (pOVar1 != (Object *)0x0)) {
    if ((pOVar1->klass->_0).element_class != (TypeInfo__EditorEvent->_0).element_class) {
      FUN_?(pOVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar3 = (this_00->fields)._array;
    if (pIVar3 != (Int32Enum__Enum__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (uVar4 < (uint)pIVar3->max_length) {
        pIVar3->vector[(int)uVar4] = *(Int32Enum__Enum *)&pOVar1[1].klass;
        (this_00->fields)._size = uVar4 + 1;
        piVar5 = &(this_00->fields)._version;
        *piVar5 = *piVar5 + 1;
      }
      else {
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
        Stack_1_System_Int32Enum__PushWithResize
                  (this_00,*(Int32Enum__Enum *)&pOVar1[1].klass,
                   MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_->
                   klass->rgctx_data[0xc].method);
      }
      (this->fields).clearStack = 0;
      aEStackX_8[0] = nextState;
      pOVar1 = (Object *)FUN_?(TypeInfo__EditorEvent,aEStackX_8);
      FSMEntity_set_Event(this,pOVar1,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PushState(EditorEvent, EditorEvent) */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_PushState_1
               (FSMEntity *this,EditorEvent__Enum nextState,EditorEvent__Enum overridePushState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).lockState != 0) {
    return;
  }
  this_00 = (Stack_1_System_Int32Enum_ *)(this->fields).stateStack;
  if (overridePushState == EditorEvent__Enum_UndefinedState) {
    pOVar1 = (this->fields).curEvent;
    if ((this_00 == (Stack_1_System_Int32Enum_ *)0x0) || (pOVar1 == (Object *)0x0)) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pOVar1->klass->_0).element_class != (TypeInfo__EditorEvent->_0).element_class) {
      FUN_?(pOVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar3 = (this_00->fields)._array;
    if (pIVar3 == (Int32Enum__Enum__Array *)0x0) goto code_?;
    uVar4 = (this_00->fields)._size;
    if ((uint)pIVar3->max_length <= uVar4) {
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
      Stack_1_System_Int32Enum__PushWithResize
                (this_00,*(Int32Enum__Enum *)&pOVar1[1].klass,
                 MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_->
                 klass->rgctx_data[0xc].method);
      goto code_?;
    }
    pIVar3->vector[(int)uVar4] = *(Int32Enum__Enum *)&pOVar1[1].klass;
  }
  else {
    if ((this_00 == (Stack_1_System_Int32Enum_ *)0x0) ||
       (pIVar3 = (this_00->fields)._array, pIVar3 == (Int32Enum__Enum__Array *)0x0))
    goto code_?;
    uVar4 = (this_00->fields)._size;
    if ((uint)pIVar3->max_length <= uVar4) {
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
      Stack_1_System_Int32Enum__PushWithResize
                (this_00,overridePushState,
                 MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_->
                 klass->rgctx_data[0xc].method);
      goto code_?;
    }
    pIVar3->vector[(int)uVar4] = overridePushState;
  }
  (this_00->fields)._size = uVar4 + 1;
  piVar5 = &(this_00->fields)._version;
  *piVar5 = *piVar5 + 1;
code_?:
  (this->fields).clearStack = 0;
  aEStackX_8[0] = nextState;
  pOVar1 = (Object *)FUN_?(TypeInfo__EditorEvent,aEStackX_8);
  FSMEntity_set_Event(this,pOVar1,(MethodInfo *)0x0);
  return;
}


/* FSMEntity() */

void Assembly-CSharp.dll::FSMEntity::FSMEntity__ctor(FSMEntity *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Stack__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Stack<EditorEvent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).data = (Dictionary_2_System_Object_System_Object_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).data >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).clearStack = 1;
  this_01 = (Stack_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Stack<EditorEvent>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            (this_01,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Stack__);
  bVar1 = iRam_? != 0;
  (this->fields).stateStack = (Stack_1_EditorEvent_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).stateStack >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void set_Event(Object) */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_set_Event
               (FSMEntity *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_State_is_locked__could_not_set_s;
  if ((this->fields).lockState != 0) {
    if (value == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(value->klass->vtable).ToString.methodPtr)
                       (value,(value->klass->vtable).ToString.method);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,2,pSVar1);
    return;
  }
  bVar4 = iRam_? != 0;
  (this->fields).nextEvent = value;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).nextEvent >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (value == (Object *)0x0) {
    if ((this->fields).currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar4 = iRam_? != 0;
    (this->fields).currentState = (IState *)0x0;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).currentState >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  else {
    this_00 = (this->fields).transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar9 = StateTransitionTable::StateTransitionTable_GetState(this_00,value,(MethodInfo *)0x0);
    if (pIVar9 != (IState *)0x0) {
      if ((this->fields).currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar1 = (String *)
               (*(value->klass->vtable).ToString.methodPtr)
                         (value,(value->klass->vtable).ToString.method);
      (this->fields).stateName = pSVar1;
      func_?(&(this->fields).stateName);
      (this->fields).currentState = pIVar9;
      func_?(&(this->fields).currentState);
      (this->fields).nextEvent = (Object *)0x0;
      func_?(&(this->fields).nextEvent);
      (this->fields).prevEvent = (this->fields).curEvent;
      func_?(&this->fields);
      (this->fields).curEvent = value;
      func_?(&(this->fields).curEvent);
      if ((this->fields).currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(this->fields).data;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((this->fields).clearStack == 0) {
      (this->fields).clearStack = 1;
    }
    else {
      pSVar10 = (this->fields).stateStack;
      if (pSVar10 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      piVar11 = &(pSVar10->fields)._version;
      *piVar11 = *piVar11 + 1;
      (pSVar10->fields)._size = 0;
    }
  }
  return;
}

