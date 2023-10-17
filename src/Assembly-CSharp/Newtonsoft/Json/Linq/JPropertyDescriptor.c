
/* JObject CastInstance(Object) */

JObject * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPropertyDescriptor::
          JPropertyDescriptor_CastInstance(Object *instance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject);
    cRam_? = '\x01';
  }
  if (instance == (Object *)0x0) {
    return (JObject *)0x0;
  }
  if (((TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth <=
       (instance->klass->_1).typeHierarchyDepth) &&
     ((JObject__Class *)
      (instance->klass->_1).typeHierarchy
      [(TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth - 1] ==
      TypeInfo__Newtonsoft__Json__Linq__JObject)) {
    return (JObject *)instance;
  }
  func_?(instance,TypeInfo__Newtonsoft__Json__Linq__JObject);
  pcVar1 = (code *)swi(3);
  pJVar2 = (JObject *)(*pcVar1)();
  return pJVar2;
}


/* Object GetValue(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPropertyDescriptor::
         JPropertyDescriptor_GetValue
                   (JPropertyDescriptor *this,Object *component,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject);
    cRam_? = '\x01';
  }
  if (component != (Object *)0x0) {
    if (((TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth <=
         (component->klass->_1).typeHierarchyDepth) &&
       ((JObject__Class *)
        (component->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth - 1] ==
        TypeInfo__Newtonsoft__Json__Linq__JObject)) {
      name = (String *)
             (*(this->klass->vtable).get_Name.methodPtr)(this,(this->klass->vtable).get_Name.method)
      ;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_propertyName);
        cRam_? = '\x01';
      }
      Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                ((Object *)name,StringLiteral_propertyName,(MethodInfo *)0x0);
      this_00 = JObject::JObject_Property((JObject *)component,name,(MethodInfo *)0x0);
      if (this_00 != (JProperty *)0x0) {
        pJVar1 = JProperty::JProperty_get_Value(this_00,(MethodInfo *)0x0);
        return (Object *)pJVar1;
      }
      return (Object *)0x0;
    }
    func_?(component,TypeInfo__Newtonsoft__Json__Linq__JObject);
  }
  (*(this->klass->vtable).get_Name.methodPtr)(this,(this->klass->vtable).get_Name.method);
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar2)();
  return pOVar3;
}


/* Void SetValue(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPropertyDescriptor::JPropertyDescriptor_SetValue
               (JPropertyDescriptor *this,Object *component,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JToken);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  if (((value == (Object *)0x0) ||
      (pOVar1 = value->klass,
      (pOVar1->_1).typeHierarchyDepth <
      (TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth)) ||
     ((pOVar1->_1).typeHierarchy
      [(TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth - 1] !=
      (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
    value_00 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (value_00 == (JToken *)0x0) goto code_?;
    pJVar2 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value,(MethodInfo *)0x0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value_00,ExceptionArgument__Enum_obj,unaff_ESI);
    value_00[1].monitor = (MonitorData *)value;
    func_?(&value_00[1].monitor,value);
    value_00[1].klass = pJVar2;
    value = (Object *)value_00;
code_?:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject);
      cRam_? = '\x01';
    }
    if (component != (Object *)0x0) {
      if (((TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth <=
           (component->klass->_1).typeHierarchyDepth) &&
         ((JObject__Class *)
          (component->klass->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth - 1] ==
          TypeInfo__Newtonsoft__Json__Linq__JObject)) {
        propertyName = (String *)
                       (*(this->klass->vtable).get_Name.methodPtr)
                                 (this,(this->klass->vtable).get_Name.method);
        JObject::JObject_set_Item_1
                  ((JObject *)component,propertyName,(JToken *)value,(MethodInfo *)0x0);
        return;
      }
      func_?(component,TypeInfo__Newtonsoft__Json__Linq__JObject);
      pJVar2 = extraout_EDX;
      goto code_?;
    }
  }
  else {
    pJVar2 = TypeInfo__Newtonsoft__Json__Linq__JToken;
    if (((TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth <=
         (pOVar1->_1).typeHierarchyDepth) &&
       ((pOVar1->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) goto code_?;
code_?:
    func_?(value,pJVar2);
  }
  (*(this->klass->vtable).get_Name.methodPtr)(this,(this->klass->vtable).get_Name.method);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* JPropertyDescriptor(String, Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPropertyDescriptor::JPropertyDescriptor__ctor
               (JPropertyDescriptor *this,String *name,Type *propertyType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_propertyType);
    func_?(&StringLiteral_name);
    cRam_? = '\x01';
  }
  System.dll::System::ComponentModel::PropertyDescriptor::PropertyDescriptor__ctor
            ((PropertyDescriptor *)this,name,(Attribute__Array *)0x0,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)name,StringLiteral_name,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)propertyType,StringLiteral_propertyType,(MethodInfo *)0x0);
  (this->fields)._propertyType = propertyType;
  func_?(&(this->fields)._propertyType,propertyType);
  return;
}


/* Type get_ComponentType() */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPropertyDescriptor::
       JPropertyDescriptor_get_ComponentType(JPropertyDescriptor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__Newtonsoft__Json__Linq__JObject);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__Newtonsoft__Json__Linq__JObject;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  return pTVar1;
}

