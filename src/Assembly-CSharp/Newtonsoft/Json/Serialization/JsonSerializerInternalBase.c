
/* Void ClearErrorContext() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::
     JsonSerializerInternalBase_ClearErrorContext
               (JsonSerializerInternalBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._currentErrorContext != (ErrorContext *)0x0) {
    (this->fields)._currentErrorContext = (ErrorContext *)0x0;
    return;
  }
  this_00 = (InvalidOperationException *)
            func_?(TypeInfo__System__InvalidOperationException);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,StringLiteral_Could_not_clear_error_context__E,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ErrorContext GetErrorContext(Object, Object, Exception) */

ErrorContext *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::
JsonSerializerInternalBase_GetErrorContext
          (JsonSerializerInternalBase *this,Object *currentObject,Object *member,Exception *error,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)(this->fields)._currentErrorContext;
  if (this_00 == (ScaleAnimationBase *)0x0) {
    this_00 = (ScaleAnimationBase *)
              func_?(TypeInfo__Newtonsoft__Json__Serialization__ErrorContext);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_1);
    (this_00->fields).state = (int32_t)currentObject;
    (this_00->fields).originalScale.x = (float)member;
    (this_00->fields)._._._._.m_CachedPtr = error;
    (this->fields)._currentErrorContext = (ErrorContext *)this_00;
    if (this_00 == (ScaleAnimationBase *)0x0) {
      func_?(0);
      goto code_?;
    }
  }
  if ((this_00->fields)._._._._.m_CachedPtr == error) {
    return (ErrorContext *)this_00;
  }
code_?:
  this_01 = (InvalidOperationException *)
            func_?(TypeInfo__System__InvalidOperationException);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_01,StringLiteral_Current_error_context_error_is_d,(MethodInfo *)0x0);
  func_?(this_01,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase__GetErrorContext_System__Object__System__Object__System__Exception_
                 );
  pcVar2 = (code *)swi(3);
  pEVar3 = (ErrorContext *)(*pcVar2)();
  return pEVar3;
}


/* Boolean IsErrorHandled(Object, JsonContract, Object, Exception) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::
     JsonSerializerInternalBase_IsErrorHandled
               (JsonSerializerInternalBase *this,Object *currentObject,JsonContract *contract,
               Object *keyValue,Exception *ex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (ScaleAnimationBase *)(this->fields)._currentErrorContext;
  if (this_01 == (ScaleAnimationBase *)0x0) {
    this_01 = (ScaleAnimationBase *)
              func_?(TypeInfo__Newtonsoft__Json__Serialization__ErrorContext);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_1);
    (this_01->fields).state = (int32_t)currentObject;
    (this_01->fields).originalScale.x = (float)keyValue;
    (this_01->fields)._._._._.m_CachedPtr = ex;
    (this->fields)._currentErrorContext = (ErrorContext *)this_01;
    if (this_01 == (ScaleAnimationBase *)0x0) goto code_?;
  }
  if ((this_01->fields)._._._._.m_CachedPtr == ex) {
    pJVar2 = (this->fields)._Serializer_k__BackingField;
    if (pJVar2 == (JsonSerializer *)0x0) goto code_?;
    uVar3 = (*(code *)(pJVar2->klass->vtable).get_Context.method)
                      (pJVar2,(pJVar2->klass->vtable).set_Context.methodPtr);
    if (contract == (JsonContract *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (contract->fields)._OnError_k__BackingField;
    if (this_00 != (MethodInfo_1 *)0x0) {
      uStack_4._0_4_ = (ErrorEventArgs__Class *)0x2;
      parameters = (Object__Array *)func_?(TypeInfo__System__Object);
      uStack_4 = uVar3;
      pOVar5 = (Object *)
               func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,&uStack_4)
      ;
      if (parameters == (Object__Array *)0x0) goto code_?;
      if (pOVar5 != (Object *)0x0) {
        iVar6 = func_?(pOVar5,(parameters->klass->_0).element_class);
        if (iVar6 == 0) goto code_?;
      }
      if (parameters->max_length == 0) goto code_?;
      parameters->vector[0] = pOVar5;
      iVar6 = func_?(this_01,(parameters->klass->_0).element_class);
      if (iVar6 == 0) goto code_?;
      if (parameters->max_length < 2) goto code_?;
      parameters->vector[1] = (Object *)this_01;
      if (this_00 == (MethodInfo_1 *)0x0) goto code_?;
      mscorlib.dll::System::Reflection::MethodBase::MethodBase_Invoke
                ((MethodBase *)this_00,currentObject,parameters,(MethodInfo *)0x0);
    }
    bVar7 = *(bool *)&(this_01->fields).originalScale.y;
    if (bVar7 == 0) {
      uStack_4._0_4_ = TypeInfo__Newtonsoft__Json__Serialization__ErrorEventArgs;
      pJVar2 = (this->fields)._Serializer_k__BackingField;
      this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__EventArgs);
      }
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
      (this_02->fields)._this = (WinningConditionDebriefing *)currentObject;
      (this_02->fields)._current = (Object *)this_01;
      if (pJVar2 == (JsonSerializer *)0x0) goto code_?;
      JsonSerializer::JsonSerializer_OnError(pJVar2,(ErrorEventArgs *)this_02,(MethodInfo *)0x0);
      bVar7 = *(bool *)&(this_01->fields).originalScale.y;
    }
    return bVar7;
  }
  this_03 = (InvalidOperationException *)
            func_?(TypeInfo__System__InvalidOperationException);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_03,StringLiteral_Current_error_context_error_is_d,(MethodInfo *)0x0);
  func_?(this_03,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase__GetErrorContext_System__Object__System__Object__System__Exception_
                 );
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar7 = (*pcVar9)();
  return bVar7;
}


/* BidirectionalDictionary`2[System.String,System.Object] get_DefaultReferenceMappings() */

BidirectionalDictionary_2_System_String_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::
JsonSerializerInternalBase_get_DefaultReferenceMappings
          (JsonSerializerInternalBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (this->fields)._mappings;
  if (this_01 == (BidirectionalDictionary_2_System_String_System_Object_ *)0x0) {
    if ((((uint)(TypeInfo__System__Collections__Generic__EqualityComparer<System::String>->vtable).
                Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Collections__Generic__EqualityComparer<System::String>->_1).cctor_started
        == 0)) {
      func_?(TypeInfo__System__Collections__Generic__EqualityComparer<System::String>);
    }
    firstEqualityComparer =
         mscorlib.dll::System::Collections::Generic::EqualityComparer`1[WinningConditionType]::
         EqualityComparer_1_WinningConditionType__get_Default
                   (
                   MethodInfo__System__Collections__Generic__EqualityComparer<System::String>__get_Default__
                   );
    method_00 = 
    TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer
    ;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    this_01 = (BidirectionalDictionary_2_System_String_System_Object_ *)
              func_?(
                             TypeInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>
                             );
    Json::Utilities::BidirectionalDictionary`2[System::String,System::Object]::
    BidirectionalDictionary_2_System_String_System_Object___ctor
              (this_01,(IEqualityComparer_1_System_String_ *)firstEqualityComparer,
               (IEqualityComparer_1_System_Object_ *)this_00,
               MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__BidirectionalDictionary_System__Collections__Generic__IEqualityComparer<System::String>__System__Collections__Generic__IEqualityComparer<System::Object>_
              );
    (this->fields)._mappings = this_01;
  }
  return this_01;
}

