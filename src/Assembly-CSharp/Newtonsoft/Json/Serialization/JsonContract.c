
/* Void InvokeOnDeserialized(Object, StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::
     JsonContract_InvokeOnDeserialized
               (JsonContract *this,Object *o,StreamingContext context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._OnDeserialized_k__BackingField;
  if (this_00 == (MethodInfo_1 *)0x0) {
    return;
  }
  parameters = (Object__Array *)func_?(TypeInfo__System__Object,1);
  iStack_1 = context.state;
  pOStack_2 = context.additional;
  pOVar3 = (Object *)
           func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,&iStack_1);
  if (parameters == (Object__Array *)0x0) {
code_?:
    func_?(0);
  }
  else if ((pOVar3 == (Object *)0x0) ||
          (iVar4 = func_?(pOVar3,(parameters->klass->_0).element_class), iVar4 != 0)) {
    if (parameters->max_length == 0) goto code_?;
    parameters->vector[0] = pOVar3;
    if (this_00 != (MethodInfo_1 *)0x0) {
      mscorlib.dll::System::Reflection::MethodBase::MethodBase_Invoke
                ((MethodBase *)this_00,o,parameters,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InvokeOnDeserializing(Object, StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::
     JsonContract_InvokeOnDeserializing
               (JsonContract *this,Object *o,StreamingContext context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._OnDeserializing_k__BackingField;
  if (this_00 == (MethodInfo_1 *)0x0) {
    return;
  }
  parameters = (Object__Array *)func_?(TypeInfo__System__Object,1);
  iStack_1 = context.state;
  pOStack_2 = context.additional;
  pOVar3 = (Object *)
           func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,&iStack_1);
  if (parameters == (Object__Array *)0x0) {
code_?:
    func_?(0);
  }
  else if ((pOVar3 == (Object *)0x0) ||
          (iVar4 = func_?(pOVar3,(parameters->klass->_0).element_class), iVar4 != 0)) {
    if (parameters->max_length == 0) goto code_?;
    parameters->vector[0] = pOVar3;
    if (this_00 != (MethodInfo_1 *)0x0) {
      mscorlib.dll::System::Reflection::MethodBase::MethodBase_Invoke
                ((MethodBase *)this_00,o,parameters,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InvokeOnError(Object, StreamingContext, ErrorContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::JsonContract_InvokeOnError
               (JsonContract *this,Object *o,StreamingContext context,ErrorContext *errorContext,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._OnError_k__BackingField;
  if (this_00 == (MethodInfo_1 *)0x0) {
    return;
  }
  parameters = (Object__Array *)func_?(TypeInfo__System__Object,2);
  iStack_1 = context.state;
  pOStack_2 = context.additional;
  pOVar3 = (Object *)
           func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,&iStack_1);
  if (parameters == (Object__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
  }
  else {
    if ((pOVar3 != (Object *)0x0) &&
       (iVar5 = func_?(pOVar3,(parameters->klass->_0).element_class), iVar5 == 0))
    goto code_?;
    if (parameters->max_length == 0) goto code_?;
    parameters->vector[0] = pOVar3;
    if ((errorContext == (ErrorContext *)0x0) ||
       (iVar5 = func_?(errorContext,(parameters->klass->_0).element_class), iVar5 != 0)) {
      if (parameters->max_length < 2) goto code_?;
      parameters->vector[1] = (Object *)errorContext;
      if (this_00 != (MethodInfo_1 *)0x0) {
        mscorlib.dll::System::Reflection::MethodBase::MethodBase_Invoke
                  ((MethodBase *)this_00,o,parameters,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar4 = func_?(0,0);
  func_?(uVar4);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InvokeOnSerialized(Object, StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::
     JsonContract_InvokeOnSerialized
               (JsonContract *this,Object *o,StreamingContext context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._OnSerialized_k__BackingField;
  if (this_00 == (MethodInfo_1 *)0x0) {
    return;
  }
  parameters = (Object__Array *)func_?(TypeInfo__System__Object,1);
  iStack_1 = context.state;
  pOStack_2 = context.additional;
  pOVar3 = (Object *)
           func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,&iStack_1);
  if (parameters == (Object__Array *)0x0) {
code_?:
    func_?(0);
  }
  else if ((pOVar3 == (Object *)0x0) ||
          (iVar4 = func_?(pOVar3,(parameters->klass->_0).element_class), iVar4 != 0)) {
    if (parameters->max_length == 0) goto code_?;
    parameters->vector[0] = pOVar3;
    if (this_00 != (MethodInfo_1 *)0x0) {
      mscorlib.dll::System::Reflection::MethodBase::MethodBase_Invoke
                ((MethodBase *)this_00,o,parameters,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InvokeOnSerializing(Object, StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::
     JsonContract_InvokeOnSerializing
               (JsonContract *this,Object *o,StreamingContext context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._OnSerializing_k__BackingField;
  if (this_00 == (MethodInfo_1 *)0x0) {
    return;
  }
  parameters = (Object__Array *)func_?(TypeInfo__System__Object,1);
  iStack_1 = context.state;
  pOStack_2 = context.additional;
  pOVar3 = (Object *)
           func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,&iStack_1);
  if (parameters == (Object__Array *)0x0) {
code_?:
    func_?(0);
  }
  else if ((pOVar3 == (Object *)0x0) ||
          (iVar4 = func_?(pOVar3,(parameters->klass->_0).element_class), iVar4 != 0)) {
    if (parameters->max_length == 0) goto code_?;
    parameters->vector[0] = pOVar3;
    if (this_00 != (MethodInfo_1 *)0x0) {
      mscorlib.dll::System::Reflection::MethodBase::MethodBase_Invoke
                ((MethodBase *)this_00,o,parameters,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Nullable`1[Boolean] get_IsReference() */

Nullable_1_Boolean_
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::JsonContract_get_IsReference
          (JsonContract *this,MethodInfo *method)

{
  return (this->fields)._IsReference_k__BackingField;
}


/* Void set_IsReference(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonContract::
     JsonContract_set_IsReference(JsonContract *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  (this->fields)._IsReference_k__BackingField = value;
  return;
}

