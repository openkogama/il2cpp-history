
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SentrySdk+<GetStackTraces>c__Iterator0::
     SentrySdk_GetStackTraces_c_Iterator0_MoveNext
               (SentrySdk_GetStackTraces_c_Iterator0 *this,MethodInfo *method)

{
  method_03 = (MethodInfo *)&DAT_?;
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    pSVar3 = (this->fields).stackTrace;
    separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
    if (separator != (Char__Array *)0x0) {
      if (separator->max_length == 0) {
        uVar1 = func_?(0);
        func_?(uVar1);
code_?:
        uVar1 = func_?(0,0);
        func_?(uVar1);
        func_?(&stack0xffffffe0,&UNK_?);
      }
      else {
        separator->vector[0] = 10;
        if (pSVar3 != (String *)0x0) {
          pSVar4 = mscorlib.dll::System::String::String_Split(pSVar3,separator,(MethodInfo *)0x0);
          (this->fields)._stackList___0 = pSVar4;
          if (pSVar4 != (String__Array *)0x0) {
            uVar5 = pSVar4->max_length - 1;
            (this->fields)._i___1 = uVar5;
            goto code_?;
          }
        }
      }
    }
    goto code_?;
  }
  if (iVar2 != 1) {
code_?:
    *unaff_FS_OFFSET = uVar1;
    return 0;
  }
  do {
    do {
      piVar6 = &(this->fields)._i___1;
      *piVar6 = *piVar6 + -1;
      uVar5 = (this->fields)._i___1;
code_?:
      if ((int)uVar5 < 0) {
        (this->fields)._PC = -1;
        goto code_?;
      }
      pSVar4 = (this->fields)._stackList___0;
      if (pSVar4 == (String__Array *)0x0) goto code_?;
      if (pSVar4->max_length <= uVar5) goto code_?;
      method_00 = (MethodInfo *)pSVar4->vector[uVar5];
      (this->fields)._item___2 = (String *)method_00;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar7 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)method_00,TypeInfo__System__String->static_fields->Empty,
                         (MethodInfo *)0x0);
    } while (bVar7 != 0);
    pSVar3 = (this->fields)._item___2;
    if (pSVar3 == (String *)0x0) goto code_?;
    iVar8 = mscorlib.dll::System::String::String_IndexOf_2(pSVar3,0x29,unaff_EBX);
    (this->fields)._closingParen___2 = iVar8;
  } while (iVar8 == -1);
  pSVar3 = (this->fields)._item___2;
  if (pSVar3 == (String *)0x0) goto code_?;
  method_02 = (MethodInfo *)0x0;
  method_01 = (MethodInfo *)&UNK_?;
  pSVar3 = mscorlib.dll::System::String::String_Substring_1(pSVar3,0,iVar8 + 1,in_stack_9)
  ;
  (this->fields)._functionName___3 = pSVar3;
  this_02 = (Collection_1_VoxelHit_ *)(this->fields)._item___2;
  if (this_02 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
  pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items(this_02,method_03);
  iVar2 = (this->fields)._closingParen___2;
  if ((int)pIVar10 < iVar2 + 6) {
code_?:
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar3 = TypeInfo__System__String->static_fields->Empty;
code_?:
    (this->fields)._lineNo___4 = -1;
code_?:
    (this->fields)._filename___4 = pSVar3;
  }
  else {
    this_02 = (Collection_1_VoxelHit_ *)(this->fields)._item___2;
    if (this_02 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
    method_03 = (MethodInfo *)(iVar2 + 1);
    pSVar3 = mscorlib.dll::System::String::String_Substring_1
                        ((String *)this_02,(int32_t)method_03,5,unaff_EBP);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      method = (MethodInfo *)&UNK_?;
      func_?();
    }
    bVar7 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar3,StringLiteral___at_,(MethodInfo *)0x0);
    pCVar11 = (Collection_1_VoxelHit_ *)(this->fields)._item___2;
    if (bVar7 != 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_2
                          (StringLiteral_failed_parsing_,(String *)pCVar11,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      (this->fields)._functionName___3 = (this->fields)._item___2;
      (this->fields)._lineNo___4 = -1;
      pSVar3 = TypeInfo__System__String->static_fields->Empty;
      goto code_?;
    }
    if (pCVar11 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
    pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items(pCVar11,in_stack_12);
    this_00 = (Collection_1_VoxelHit_ *)(this->fields)._item___2;
    if ((this_00 == (Collection_1_VoxelHit_ *)0x0) ||
       (pIVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items(this_00,in_stack_14),
       pCVar11 == (Collection_1_VoxelHit_ *)0x0)) goto code_?;
    iVar8 = mscorlib.dll::System::String::String_LastIndexOf_2
                       ((String *)pCVar11,0x3a,(int32_t)((int)&pIVar10[-1].monitor + 3),
                        (int)pIVar13 - (this->fields)._closingParen___2,in_stack_15);
    puVar16 = (undefined1 *)(this->fields)._closingParen___2;
    pCVar11 = (Collection_1_VoxelHit_ *)(this->fields)._item___2;
    if (pCVar11 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
    pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items(pCVar11,in_stack_17);
    if (puVar16 == (undefined1 *)((int)&pIVar10[-1].monitor + 3)) goto code_?;
    if (iVar8 == -1) {
      pCVar11 = (Collection_1_VoxelHit_ *)(this->fields)._item___2;
      iVar2 = (this->fields)._closingParen___2;
      if ((pCVar11 == (Collection_1_VoxelHit_ *)0x0) ||
         (pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items(pCVar11,method_00),
         pCVar11 == (Collection_1_VoxelHit_ *)0x0)) goto code_?;
      pSVar3 = mscorlib.dll::System::String::String_Substring_1
                          ((String *)pCVar11,iVar2 + 6,
                           (int)pIVar10 + (-7 - (this->fields)._closingParen___2),(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    pSVar3 = (this->fields)._item___2;
    iVar2 = (this->fields)._closingParen___2;
    if (pSVar3 == (String *)0x0) goto code_?;
    pSVar3 = mscorlib.dll::System::String::String_Substring_1
                        (pSVar3,iVar2 + 6,(iVar8 - iVar2) + -6,method_00);
    pCVar11 = (Collection_1_VoxelHit_ *)(this->fields)._item___2;
    (this->fields)._filename___4 = pSVar3;
    if ((pCVar11 == (Collection_1_VoxelHit_ *)0x0) ||
       (pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items(pCVar11,method_01),
       pCVar11 == (Collection_1_VoxelHit_ *)0x0)) goto code_?;
    pSVar3 = mscorlib.dll::System::String::String_Substring_1
                        ((String *)pCVar11,iVar8 + 1,(int)pIVar10 + (-2 - iVar8),method_02);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      in_stack_18 = (MethodInfo *)&UNK_?;
      func_?();
    }
    iVar8 = mscorlib.dll::System::Convert::Convert_ToInt32_10(pSVar3,(MethodInfo *)0x0);
    (this->fields)._lineNo___4 = iVar8;
    pSVar3 = (this->fields)._filename___4;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar7 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar3,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    pSVar3 = (this->fields)._filename___4;
    if (pSVar3 == (String *)0x0) goto code_?;
    uVar19 = mscorlib.dll::System::String::String_get_Chars(pSVar3,0,in_stack_18);
    if (uVar19 == 0x3c) {
      pCVar11 = (Collection_1_VoxelHit_ *)(this->fields)._filename___4;
      if (pCVar11 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
      pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items(pCVar11,method_03);
      this_02 = (Collection_1_VoxelHit_ *)((int)&pIVar10[-1].monitor + 3);
      uVar19 = mscorlib.dll::System::String::String_get_Chars
                        ((String *)pCVar11,(int32_t)this_02,(MethodInfo *)0x0);
      if (uVar19 == 0x3e) goto code_?;
    }
    pSVar3 = (this->fields)._filename___4;
    if (pSVar3 == (String *)0x0) {
code_?:
      func_?(0);
      pcVar20 = (code *)swi(3);
      bVar7 = (*pcVar20)();
      return bVar7;
    }
    bVar7 = mscorlib.dll::System::String::String_Contains(pSVar3,StringLiteral_Assets_,method);
    (this->fields)._inApp___5 = bVar7;
  }
  else {
code_?:
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      method = (MethodInfo *)TypeInfo__System__String;
      func_?();
    }
    (this->fields)._filename___4 = TypeInfo__System__String->static_fields->Empty;
    pSVar3 = (this->fields)._functionName___3;
    (this->fields)._inApp___5 = 1;
    if (pSVar3 == (String *)0x0) goto code_?;
    bVar7 = mscorlib.dll::System::String::String_Contains(pSVar3,StringLiteral_UnityEngine_,method)
    ;
    if (bVar7 != 0) {
      (this->fields)._inApp___5 = 0;
    }
  }
  pSVar3 = (this->fields)._filename___4;
  pSStack21 = TypeInfo__Sentry__StackTraceSpec;
  iVar8 = (this->fields)._lineNo___4;
  function = (this->fields)._functionName___3;
  bVar7 = (this->fields)._inApp___5;
  this_01 = (StackTraceSpec *)func_?();
  Sentry::StackTraceSpec::StackTraceSpec__ctor
            (this_01,pSVar3,function,iVar8,bVar7,(MethodInfo *)0x0);
  (this->fields)._current = this_01;
  if ((this->fields)._disposing == 0) {
    (this->fields)._PC = 1;
  }
  *unaff_FS_OFFSET = this_02;
  return 1;
}


/* Void Reset() */

void Assembly-CSharp.dll::SentrySdk+<GetStackTraces>c__Iterator0::
     SentrySdk_GetStackTraces_c_Iterator0_Reset
               (SentrySdk_GetStackTraces_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* IEnumerator`1[Sentry.StackTraceSpec]
   System.Collections.Generic.IEnumerable<Sentry.StackTraceSpec>.GetEnumerator() */

IEnumerator_1_Sentry_StackTraceSpec_ *
Assembly-CSharp.dll::SentrySdk+<GetStackTraces>c__Iterator0::
SentrySdk_GetStackTraces_c_Iterator0_System_Collections_Generic_IEnumerable_Sentry_StackTraceSpec__GetEnumerator
          (SentrySdk_GetStackTraces_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = mscorlib.dll::System::Threading::Interlocked::Interlocked_CompareExchange_1
                     ((Object **)&(this->fields)._PC,(Object *)0x0,(Object *)0xfffffffe,
                      (MethodInfo *)0x0);
  if (pOVar1 != (Object *)0xfffffffe) {
    method_00 = TypeInfo__SentrySdk___GetStackTraces_c__Iterator0;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = (this->fields).stackTrace;
      return (IEnumerator_1_Sentry_StackTraceSpec_ *)this_00;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator_1_Sentry_StackTraceSpec_ *)(*pcVar2)();
    return pIVar3;
  }
  return (IEnumerator_1_Sentry_StackTraceSpec_ *)this;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::SentrySdk+<GetStackTraces>c__Iterator0::
SentrySdk_GetStackTraces_c_Iterator0_System_Collections_IEnumerable_GetEnumerator
          (SentrySdk_GetStackTraces_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = mscorlib.dll::System::Threading::Interlocked::Interlocked_CompareExchange_1
                     ((Object **)&(this->fields)._PC,(Object *)0x0,(Object *)0xfffffffe,
                      (MethodInfo *)0x0);
  if (pOVar1 != (Object *)0xfffffffe) {
    method_00 = TypeInfo__SentrySdk___GetStackTraces_c__Iterator0;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = (this->fields).stackTrace;
      return (IEnumerator *)this_00;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator *)(*pcVar2)();
    return pIVar3;
  }
  return (IEnumerator *)this;
}

