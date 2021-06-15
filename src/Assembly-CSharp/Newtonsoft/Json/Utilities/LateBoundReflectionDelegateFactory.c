
/* Func`1[Object] CreateDefaultConstructor[Object](Type) */

Func_1_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_CreateDefaultConstructor
          (LateBoundReflectionDelegateFactory *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(iVar2,method->parameters[1]);
  if (iVar2 != 0) {
    *(Type **)(iVar2 + 8) = type;
    ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)type,StringLiteral_type,(MethodInfo *)0x0);
    if (*(Type **)(iVar2 + 8) != (Type *)0x0) {
      bVar3 = mscorlib.dll::System::Type::Type_get_IsValueType
                        (*(Type **)(iVar2 + 8),(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pCVar4 = ReflectionUtils::ReflectionUtils_GetDefaultConstructor_1
                           (*(Type **)(iVar2 + 8),1,(MethodInfo *)0x0);
        *(ConstructorInfo **)(iVar2 + 0xc) = pCVar4;
        if ((method->parameters[3][0x17].type & 1) == 0) {
          func_?();
        }
        pFVar5 = (Func_1_Object_ *)func_?();
        (*(code *)method->parameters[4]->data)(pFVar5);
        return pFVar5;
      }
      if ((method->parameters[3][0x17].type & 1) == 0) {
        func_?();
      }
      pFVar5 = (Func_1_Object_ *)func_?();
      pIVar1 = method->parameters[4];
      (*(code *)pIVar1->data)(pFVar5,iVar2,method->parameters[2],pIVar1);
      return pFVar5;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pFVar5 = (Func_1_Object_ *)(*pcVar6)();
  return pFVar5;
}


/* Func`2[Object,Object] CreateGet[Object](PropertyInfo) */

Func_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_CreateGet
          (LateBoundReflectionDelegateFactory *this,PropertyInfo_1 *propertyInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(iVar2,method->parameters[1]);
  if (iVar2 != 0) {
    *(PropertyInfo_1 **)(iVar2 + 8) = propertyInfo;
    ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)propertyInfo,StringLiteral_propertyInfo,(MethodInfo *)0x0);
    pIVar1 = method->parameters[3];
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    pFVar3 = (Func_2_Object_Object_ *)func_?(pIVar1);
    pIVar1 = method->parameters[4];
    (*(code *)pIVar1->data)(pFVar3,iVar2,method->parameters[2],pIVar1);
    return pFVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pFVar3 = (Func_2_Object_Object_ *)(*pcVar4)();
  return pFVar3;
}


/* Func`2[Object,Object] CreateGet[Object](FieldInfo) */

Func_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_CreateGet_1
          (LateBoundReflectionDelegateFactory *this,FieldInfo_1 *fieldInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(iVar2,method->parameters[1]);
  if (iVar2 != 0) {
    *(FieldInfo_1 **)(iVar2 + 8) = fieldInfo;
    ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)fieldInfo,StringLiteral_fieldInfo,(MethodInfo *)0x0);
    pIVar1 = method->parameters[3];
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    pFVar3 = (Func_2_Object_Object_ *)func_?(pIVar1);
    pIVar1 = method->parameters[4];
    (*(code *)pIVar1->data)(pFVar3,iVar2,method->parameters[2],pIVar1);
    return pFVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pFVar3 = (Func_2_Object_Object_ *)(*pcVar4)();
  return pFVar3;
}


/* MethodCall`2[System.Object,System.Object] CreateMethodCall[Object](MethodBase) */

MethodCall_2_System_Object_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_CreateMethodCall
          (LateBoundReflectionDelegateFactory *this,MethodBase *method_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(iVar2,method->parameters[1]);
  if (iVar2 != 0) {
    *(MethodBase **)(iVar2 + 0xc) = method_1;
    ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)method_1,StringLiteral_method,(MethodInfo *)0x0);
    iVar3 = func_?(*(undefined4 *)(iVar2 + 0xc),
                            TypeInfo__System__Reflection__ConstructorInfo);
    *(int *)(iVar2 + 8) = iVar3;
    pIVar1 = method->parameters[3];
    if (iVar3 == 0) {
      if ((pIVar1[0x17].type & 1) == 0) {
        func_?(pIVar1);
      }
      pMVar4 = (MethodCall_2_System_Object_System_Object_ *)func_?(pIVar1);
      pIVar1 = method->parameters[4];
      (*(code *)pIVar1->data)(pMVar4,iVar2,method->parameters[5],pIVar1);
      return pMVar4;
    }
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    pMVar4 = (MethodCall_2_System_Object_System_Object_ *)func_?(pIVar1);
    pIVar1 = method->parameters[4];
    (*(code *)pIVar1->data)(pMVar4,iVar2,method->parameters[2],pIVar1);
    return pMVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar4 = (MethodCall_2_System_Object_System_Object_ *)(*pcVar5)();
  return pMVar4;
}


/* Action`2[Object,Object] CreateSet[Object](FieldInfo) */

Action_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_CreateSet
          (LateBoundReflectionDelegateFactory *this,FieldInfo_1 *fieldInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(iVar2,method->parameters[1]);
  if (iVar2 != 0) {
    *(FieldInfo_1 **)(iVar2 + 8) = fieldInfo;
    ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)fieldInfo,StringLiteral_fieldInfo,(MethodInfo *)0x0);
    pIVar1 = method->parameters[3];
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    pAVar3 = (Action_2_Object_Object_ *)func_?(pIVar1);
    pIVar1 = method->parameters[4];
    (*(code *)pIVar1->data)(pAVar3,iVar2,method->parameters[2],pIVar1);
    return pAVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pAVar3 = (Action_2_Object_Object_ *)(*pcVar4)();
  return pAVar3;
}


/* Action`2[Object,Object] CreateSet[Object](PropertyInfo) */

Action_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_CreateSet_1
          (LateBoundReflectionDelegateFactory *this,PropertyInfo_1 *propertyInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(iVar2,method->parameters[1]);
  if (iVar2 != 0) {
    *(PropertyInfo_1 **)(iVar2 + 8) = propertyInfo;
    ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)propertyInfo,StringLiteral_propertyInfo,(MethodInfo *)0x0);
    pIVar1 = method->parameters[3];
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    pAVar3 = (Action_2_Object_Object_ *)func_?(pIVar1);
    pIVar1 = method->parameters[4];
    (*(code *)pIVar1->data)(pAVar3,iVar2,method->parameters[2],pIVar1);
    return pAVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pAVar3 = (Action_2_Object_Object_ *)(*pcVar4)();
  return pAVar3;
}


/* LateBoundReflectionDelegateFactory() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
     LateBoundReflectionDelegateFactory__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->static_fields->
  _instance = (LateBoundReflectionDelegateFactory *)this;
  return;
}


/* ReflectionDelegateFactory get_Instance() */

ReflectionDelegateFactory *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory::
LateBoundReflectionDelegateFactory_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->vtable).
              Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->_1).cctor_started
      == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory);
  }
  return (ReflectionDelegateFactory *)
         TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->static_fields->
         _instance;
}

