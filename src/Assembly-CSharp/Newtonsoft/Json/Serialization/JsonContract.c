
/* Void InvokeOnDeserialized(Object, StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::
     JsonContract_InvokeOnDeserialized
               (JsonContract *this,Object *o,StreamingContext context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Runtime__Serialization__StreamingContext);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                    ((PropertyInfo_1 *)(this->fields)._OnDeserialized_k__BackingField,
                     (PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields)._OnDeserialized_k__BackingField;
  parameters = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pOVar2 = (Object *)
           func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,
                           &stack0xfffffff4);
  if (parameters == (Object__Array *)0x0) {
code_?:
    func_?();
  }
  else if ((pOVar2 == (Object *)0x0) ||
          (iVar3 = func_?(pOVar2,(parameters->klass->_0).element_class), iVar3 != 0)) {
    if (parameters->max_length == 0) goto code_?;
    parameters->vector[0] = pOVar2;
    func_?(parameters->vector,pOVar2);
    if (this_00 != (MethodInfo_1 *)0x0) {
      mscorlib.dll::System::Reflection::MethodBase::MethodBase_Invoke
                ((MethodBase *)this_00,o,parameters,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InvokeOnDeserializing(Object, StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::
     JsonContract_InvokeOnDeserializing
               (JsonContract *this,Object *o,StreamingContext context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Runtime__Serialization__StreamingContext);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                    ((PropertyInfo_1 *)(this->fields)._OnDeserializing_k__BackingField,
                     (PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields)._OnDeserializing_k__BackingField;
  parameters = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pOVar2 = (Object *)
           func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,
                           &stack0xfffffff4);
  if (parameters == (Object__Array *)0x0) {
code_?:
    func_?();
  }
  else if ((pOVar2 == (Object *)0x0) ||
          (iVar3 = func_?(pOVar2,(parameters->klass->_0).element_class), iVar3 != 0)) {
    if (parameters->max_length == 0) goto code_?;
    parameters->vector[0] = pOVar2;
    func_?(parameters->vector,pOVar2);
    if (this_00 != (MethodInfo_1 *)0x0) {
      mscorlib.dll::System::Reflection::MethodBase::MethodBase_Invoke
                ((MethodBase *)this_00,o,parameters,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InvokeOnError(Object, StreamingContext, ErrorContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::JsonContract_InvokeOnError
               (JsonContract *this,Object *o,StreamingContext context,ErrorContext *errorContext,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Runtime__Serialization__StreamingContext);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                    ((PropertyInfo_1 *)(this->fields)._OnError_k__BackingField,(PropertyInfo_1 *)0x0
                     ,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields)._OnError_k__BackingField;
  parameters = (Object__Array *)func_?(TypeInfo__System__Object,2);
  pOVar2 = (Object *)
           func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,
                           &stack0xfffffff4);
  if (parameters == (Object__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(parameters->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (parameters->max_length == 0) goto code_?;
    parameters->vector[0] = pOVar2;
    func_?(parameters->vector,pOVar2);
    if ((errorContext == (ErrorContext *)0x0) ||
       (iVar4 = func_?(errorContext,(parameters->klass->_0).element_class), iVar4 != 0)) {
      if (parameters->max_length < 2) goto code_?;
      parameters->vector[1] = (Object *)errorContext;
      func_?(parameters->vector + 1,errorContext);
      if (this_00 != (MethodInfo_1 *)0x0) {
        mscorlib.dll::System::Reflection::MethodBase::MethodBase_Invoke
                  ((MethodBase *)this_00,o,parameters,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InvokeOnSerialized(Object, StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::
     JsonContract_InvokeOnSerialized
               (JsonContract *this,Object *o,StreamingContext context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Runtime__Serialization__StreamingContext);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                    ((PropertyInfo_1 *)(this->fields)._OnSerialized_k__BackingField,
                     (PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields)._OnSerialized_k__BackingField;
  parameters = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pOVar2 = (Object *)
           func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,
                           &stack0xfffffff4);
  if (parameters == (Object__Array *)0x0) {
code_?:
    func_?();
  }
  else if ((pOVar2 == (Object *)0x0) ||
          (iVar3 = func_?(pOVar2,(parameters->klass->_0).element_class), iVar3 != 0)) {
    if (parameters->max_length == 0) goto code_?;
    parameters->vector[0] = pOVar2;
    func_?(parameters->vector,pOVar2);
    if (this_00 != (MethodInfo_1 *)0x0) {
      mscorlib.dll::System::Reflection::MethodBase::MethodBase_Invoke
                ((MethodBase *)this_00,o,parameters,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InvokeOnSerializing(Object, StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::
     JsonContract_InvokeOnSerializing
               (JsonContract *this,Object *o,StreamingContext context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Runtime__Serialization__StreamingContext);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                    ((PropertyInfo_1 *)(this->fields)._OnSerializing_k__BackingField,
                     (PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields)._OnSerializing_k__BackingField;
  parameters = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pOVar2 = (Object *)
           func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,
                           &stack0xfffffff4);
  if (parameters == (Object__Array *)0x0) {
code_?:
    func_?();
  }
  else if ((pOVar2 == (Object *)0x0) ||
          (iVar3 = func_?(pOVar2,(parameters->klass->_0).element_class), iVar3 != 0)) {
    if (parameters->max_length == 0) goto code_?;
    parameters->vector[0] = pOVar2;
    func_?(parameters->vector,pOVar2);
    if (this_00 != (MethodInfo_1 *)0x0) {
      mscorlib.dll::System::Reflection::MethodBase::MethodBase_Invoke
                ((MethodBase *)this_00,o,parameters,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* JsonContract(Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::JsonContract__ctor
               (JsonContract *this,Type *underlyingType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_underlyingType);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  paramName = StringLiteral_underlyingType;
  if (underlyingType != (Type *)0x0) {
    (this->fields)._UnderlyingType_k__BackingField = underlyingType;
    func_?(&this->fields,underlyingType);
    (this->fields)._CreatedType_k__BackingField = underlyingType;
    func_?(&(this->fields)._CreatedType_k__BackingField,underlyingType);
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_DefaultCreatorNonPublic(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::
     JsonContract_set_DefaultCreatorNonPublic(JsonContract *this,bool value,MethodInfo *method)

{
  (this->fields)._DefaultCreatorNonPublic_k__BackingField = value;
  return;
}


/* Void set_OnSerializing(MethodInfo) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::
     JsonContract_set_OnSerializing(JsonContract *this,MethodInfo_1 *value,MethodInfo *method)

{
  (this->fields)._OnSerializing_k__BackingField = value;
  func_?(&(this->fields)._OnSerializing_k__BackingField,value);
  return;
}

