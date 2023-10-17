
/* Void ClearErrorContext() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::
     JsonSerializerInternalBase_ClearErrorContext
               (JsonSerializerInternalBase *this,MethodInfo *method)

{
  if ((this->fields)._currentErrorContext != (ErrorContext *)0x0) {
    (this->fields)._currentErrorContext = (ErrorContext *)0x0;
    func_?(&this->fields);
    return;
  }
  uVar1 = func_?(&TypeInfo__System__InvalidOperationException);
  this_00 = (InvalidOperationException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Could_not_clear_error_context__E);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,message,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ClearErrorContext__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__ErrorContext);
    cRam_? = '\x01';
  }
  if ((this->fields)._currentErrorContext == (ErrorContext *)0x0) {
    pEVar1 = (ErrorContext *)
             func_?(TypeInfo__Newtonsoft__Json__Serialization__ErrorContext);
    if (pEVar1 != (ErrorContext *)0x0) {
      ErrorContext::ErrorContext__ctor(pEVar1,currentObject,member,error,(MethodInfo *)0x0);
      (this->fields)._currentErrorContext = pEVar1;
      func_?(&this->fields,pEVar1);
      goto code_?;
    }
  }
  else {
code_?:
    pEVar1 = (this->fields)._currentErrorContext;
    if (pEVar1 != (ErrorContext *)0x0) {
      if ((pEVar1->fields)._Error_k__BackingField == error) {
        return pEVar1;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar2 = func_?(&TypeInfo__System__InvalidOperationException);
  this_00 = (InvalidOperationException *)func_?(uVar2);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Current_error_context_error_is_d);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,message,method_00);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase__GetErrorContext_System__Object__System__Object__System__Exception_
                         );
  func_?(this_00,uVar2);
  pcVar3 = (code *)swi(3);
  pEVar1 = (ErrorContext *)(*pcVar3)();
  return pEVar1;
}


/* Boolean IsErrorHandled(Object, JsonContract, Object, Exception) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::
     JsonSerializerInternalBase_IsErrorHandled
               (JsonSerializerInternalBase *this,Object *currentObject,JsonContract *contract,
               Object *keyValue,Exception *ex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__ErrorEventArgs);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__ErrorContext);
    cRam_? = '\x01';
  }
  if ((this->fields)._currentErrorContext == (ErrorContext *)0x0) {
    pEVar1 = (ErrorContext *)
             func_?(TypeInfo__Newtonsoft__Json__Serialization__ErrorContext);
    if (pEVar1 != (ErrorContext *)0x0) {
      ErrorContext::ErrorContext__ctor(pEVar1,currentObject,keyValue,ex,(MethodInfo *)0x0);
      (this->fields)._currentErrorContext = pEVar1;
      func_?(&this->fields,pEVar1);
      goto code_?;
    }
  }
  else {
code_?:
    pEVar1 = (this->fields)._currentErrorContext;
    if (pEVar1 != (ErrorContext *)0x0) {
      if ((pEVar1->fields)._Error_k__BackingField != ex) goto code_?;
      pJVar2 = (this->fields)._Serializer_k__BackingField;
      if (pJVar2 != (JsonSerializer *)0x0) {
        context = (StreamingContext)
                  (*(pJVar2->klass->vtable).get_Context.methodPtr)
                            (pJVar2,(pJVar2->klass->vtable).get_Context.method);
        if (contract != (JsonContract *)0x0) {
          JsonContract::JsonContract_InvokeOnError
                    (contract,currentObject,context,pEVar1,(MethodInfo *)0x0);
          if ((pEVar1->fields)._Handled_k__BackingField != 0) {
code_?:
            return (pEVar1->fields)._Handled_k__BackingField;
          }
          pJVar2 = (this->fields)._Serializer_k__BackingField;
          this_00 = (ErrorEventArgs *)func_?();
          if (this_00 != (ErrorEventArgs *)0x0) {
            ErrorEventArgs::ErrorEventArgs__ctor(this_00,currentObject,pEVar1,(MethodInfo *)0x0);
            if (pJVar2 != (JsonSerializer *)0x0) {
              JsonSerializer::JsonSerializer_OnError(pJVar2,this_00,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__InvalidOperationException);
  this_01 = (InvalidOperationException *)func_?(uVar3);
  func_?(this_01);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Current_error_context_error_is_d);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_01,message,method_00);
  uVar3 = func_?(&
                          MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase__GetErrorContext_System__Object__System__Object__System__Exception_
                         );
  func_?(this_01,uVar3);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* BidirectionalDictionary`2[System.String,System.Object] get_DefaultReferenceMappings() */

BidirectionalDictionary_2_System_String_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::
JsonSerializerInternalBase_get_DefaultReferenceMappings
          (JsonSerializerInternalBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__BidirectionalDictionary_System__Collections__Generic__IEqualityComparer<System::String>__System__Collections__Generic__IEqualityComparer<System::Object>_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__EqualityComparer<System::String>__get_Default__
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer
                   );
    cRam_? = '\x01';
  }
  if ((this->fields)._mappings == (BidirectionalDictionary_2_System_String_System_Object_ *)0x0) {
    firstEqualityComparer =
         mscorlib.dll::System::Collections::Generic::EqualityComparer`1[UnityEngine::
         UnitySynchronizationContext+WorkRequest]::
         EqualityComparer_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Default
                   (
                   MethodInfo__System__Collections__Generic__EqualityComparer<System::String>__get_Default__
                   );
    value = (Object *)
            func_?(
                           TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer
                           );
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EBX);
      this_00 = (BidirectionalDictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>
                               );
      if (this_00 != (BidirectionalDictionary_2_System_Object_System_Object_ *)0x0) {
        Json::Utilities::BidirectionalDictionary`2[System::Object,System::Object]::
        BidirectionalDictionary_2_System_Object_System_Object___ctor_1
                  (this_00,(IEqualityComparer_1_System_Object_ *)firstEqualityComparer,
                   (IEqualityComparer_1_System_Object_ *)value,
                   MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::Object>__BidirectionalDictionary_System__Collections__Generic__IEqualityComparer<System::String>__System__Collections__Generic__IEqualityComparer<System::Object>_
                  );
        (this->fields)._mappings = (BidirectionalDictionary_2_System_String_System_Object_ *)this_00
        ;
        func_?(&(this->fields)._mappings,this_00);
        goto code_?;
      }
    }
    func_?();
    pcVar1 = (code *)swi(3);
    pBVar2 = (BidirectionalDictionary_2_System_String_System_Object_ *)(*pcVar1)();
    return pBVar2;
  }
code_?:
  return (this->fields)._mappings;
}

