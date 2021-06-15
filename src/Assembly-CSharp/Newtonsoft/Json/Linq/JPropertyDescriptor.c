
/* JObject CastInstance(Object) */

JObject * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPropertyDescriptor::
          JPropertyDescriptor_CastInstance(Object *instance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (instance == (Object *)0x0) {
    return (JObject *)0x0;
  }
  bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JObject->_1).naturalAligment;
  if (((instance->klass->_1).naturalAligment < bVar1) ||
     ((JObject__Class *)(instance->klass->_1).typeHierarchy[bVar1 - 1] !=
      TypeInfo__Newtonsoft__Json__Linq__JObject)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pJVar3 = (JObject *)0x0;
  if (bVar2) {
    pJVar3 = (JObject *)instance;
  }
  if (pJVar3 != (JObject *)0x0) {
    return pJVar3;
  }
  func_?(instance,TypeInfo__Newtonsoft__Json__Linq__JObject);
  pcVar4 = (code *)swi(3);
  pJVar3 = (JObject *)(*pcVar4)();
  return pJVar3;
}


/* Object GetValue(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPropertyDescriptor::
         JPropertyDescriptor_GetValue
                   (JPropertyDescriptor *this,Object *component,MethodInfo *method)

{
  this_00 = JPropertyDescriptor_CastInstance(component,(MethodInfo *)0x0);
  name = (String *)
         (*(code *)(this->klass->vtable).get_Name.method)
                   (this,(this->klass->vtable).get_NameHashCode.methodPtr);
  if (this_00 == (JObject *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    pOVar2 = (Object *)(*pcVar1)();
    return pOVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)name,StringLiteral_propertyName,(MethodInfo *)0x0);
  this_01 = JObject::JObject_Property(this_00,name,(MethodInfo *)0x0);
  if (this_01 == (JProperty *)0x0) {
    return (Object *)0x0;
  }
  pJVar3 = JProperty::JProperty_get_Value(this_01,(MethodInfo *)0x0);
  return (Object *)pJVar3;
}


/* Void SetValue(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPropertyDescriptor::JPropertyDescriptor_SetValue
               (JPropertyDescriptor *this,Object *component,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (Object *)0x0) {
code_?:
    this_00 = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
    pSVar1 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value,(MethodInfo *)0x0);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_2);
    this_00[1].klass = (ScaleAnimationBase__Class *)value;
    (this_00->fields).OnScaleAnimationStopped = pSVar1;
  }
  else {
    pOVar3 = value->klass;
    bVar4 = (pOVar3->_1).naturalAligment;
    bVar5 = (TypeInfo__Newtonsoft__Json__Linq__JToken->_1).naturalAligment;
    if ((bVar4 < bVar5) ||
       ((pOVar3->_1).typeHierarchy[bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pOVar7 = (Object *)0x0;
    if (bVar6) {
      pOVar7 = value;
    }
    if (pOVar7 == (Object *)0x0) goto code_?;
    bVar5 = (TypeInfo__Newtonsoft__Json__Linq__JToken->_1).naturalAligment;
    if ((bVar4 < bVar5) ||
       ((pOVar3->_1).typeHierarchy[bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    this_00 = (ScaleAnimationBase *)0x0;
    if (bVar6) {
      this_00 = (ScaleAnimationBase *)value;
    }
    pJVar8 = TypeInfo__Newtonsoft__Json__Linq__JToken;
    if (this_00 == (ScaleAnimationBase *)0x0) goto code_?;
  }
  this_01 = JPropertyDescriptor_CastInstance(component,(MethodInfo *)0x0);
  propertyName = (String *)
                 (*(code *)(this->klass->vtable).get_Name.method)
                           (this,(this->klass->vtable).get_NameHashCode.methodPtr);
  if (this_01 != (JObject *)0x0) {
    JObject::JObject_set_Item_1(this_01,propertyName,(JToken *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pJVar8 = extraout_EDX;
code_?:
  func_?(value,pJVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* JPropertyDescriptor(String, Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPropertyDescriptor::JPropertyDescriptor__ctor
               (JPropertyDescriptor *this,String *name,Type *propertyType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  PlayerElementData::PlayerElementData__ctor
            ((PlayerElementData *)this,(MVPlayer *)name,(Friend *)0x0,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)name,StringLiteral_name,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)propertyType,StringLiteral_propertyType,(MethodInfo *)0x0);
  (this->fields)._propertyType = propertyType;
  return;
}


/* Type get_ComponentType() */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPropertyDescriptor::
       JPropertyDescriptor_get_ComponentType(JPropertyDescriptor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__Newtonsoft__Json__Linq__JObject;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  return pTVar1;
}


/* Int32 get_NameHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPropertyDescriptor::
        JPropertyDescriptor_get_NameHashCode(JPropertyDescriptor *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._._.name;
  if (pSVar1 == (String *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  iVar3 = mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
          RuntimeHelpers_get_OffsetToStringData((MethodInfo *)0x0);
  puVar4 = (ushort *)((int)&pSVar1->klass + iVar3);
  iVar5 = 0;
  puVar6 = puVar4 + (pSVar1->fields).length;
  for (; puVar4 < puVar6 + -1; puVar4 = puVar4 + 2) {
    iVar5 = (iVar5 * 0x1f + (uint)*puVar4) * 0x1f + (uint)puVar4[1];
  }
  if (puVar4 < puVar6) {
    iVar5 = (uint)*puVar4 + iVar5 * 0x1f;
  }
  return iVar5;
}

