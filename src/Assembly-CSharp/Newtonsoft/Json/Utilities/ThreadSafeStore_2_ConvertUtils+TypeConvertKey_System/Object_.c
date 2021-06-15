
/* Object AddValue(ConvertUtils+TypeConvertKey) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         ThreadSafeStore`2[ConvertUtils+TypeConvertKey,System::Object]::
         ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object__AddValue
                   (ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object_ *this,
                   ConvertUtils_TypeConvertKey key,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  pOStack_4 = (Object *)0x0;
  func_?();
  pFVar5 = (this->fields)._creator;
  if (pFVar5 == (Func_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_Object_ *)0x0) {
code_?:
    func_?(0);
    func_?();
    pcVar6 = (code *)swi(3);
    pOVar7 = (Object *)(*pcVar6)();
    return pOVar7;
  }
  puVar8 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
  pOVar9 = (Object *)(*(code *)*puVar8)(pFVar5,key._initialType,key._targetType,puVar8);
  pOVar7 = (this->fields)._lock;
  mscorlib.dll::System::Threading::Monitor::Monitor_Enter(pOVar7,(MethodInfo *)0x0);
  pDVar10 = (this->fields)._store;
  uStack_1 = 0;
  if (pDVar10 == (Dictionary_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_System_Object_ *
                )0x0) {
    if ((*(byte *)(*(int *)(*(int *)(method->name + 0x60) + 0xc) + 0xbe) & 1) == 0) {
      func_?();
    }
    pDVar10 = (Dictionary_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_System_Object_ *)
             func_?();
    (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x10))();
    (this->fields)._store = pDVar10;
    if (pDVar10 == (Dictionary_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_System_Object_
                   *)0x0) goto code_?;
    puVar8 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
    (*(code *)*puVar8)(pDVar10,key._initialType,key._targetType,pOVar9,puVar8);
    pOStack_4 = pOVar9;
  }
  else {
    cVar11 = (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 4))
                      (pDVar10,key._initialType,key._targetType);
    if (cVar11 == '\0') {
      if ((*(byte *)(*(int *)(*(int *)(method->name + 0x60) + 0xc) + 0xbe) & 1) == 0) {
        func_?();
      }
      pDVar10 = (Dictionary_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_System_Object_ *)
               func_?();
      (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x18))(pDVar10);
      if (pDVar10 == (Dictionary_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_System_Object_
                     *)0x0) goto code_?;
      puVar8 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
      (*(code *)*puVar8)(pDVar10,key._initialType,key._targetType,pOVar9,puVar8);
      (this->fields)._store = pDVar10;
      pOStack_4 = pOVar9;
    }
  }
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::Threading::Monitor::Monitor_Exit(pOVar7,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = uStack_3;
  return pOStack_4;
}


/* Object Get(ConvertUtils+TypeConvertKey) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         ThreadSafeStore`2[ConvertUtils+TypeConvertKey,System::Object]::
         ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object__Get
                   (ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object_ *this,
                   ConvertUtils_TypeConvertKey key,MethodInfo *method)

{
  pOStack_1 = (Object *)0x0;
  pDVar2 = (this->fields)._store;
  puVar3 = *(undefined4 **)(method->name + 0x60);
  if (pDVar2 != (Dictionary_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_System_Object_ *
                )0x0) {
    cVar4 = (**(code **)puVar3[1])
                      (pDVar2,key._initialType,key._targetType,&pOStack_1,(undefined4 *)puVar3[1]);
    if (cVar4 != '\0') {
      return pOStack_1;
    }
    puVar3 = *(undefined4 **)(method->name + 0x60);
  }
  pOVar5 = (Object *)
           (**(code **)*puVar3)(this,key._initialType,key._targetType,(undefined4 *)*puVar3);
  return pOVar5;
}


/* ThreadSafeStore`2[ConvertUtils+TypeConvertKey,System.Object](Func`2[Newtonsoft.Json.Utilities.ConvertUtils+TypeConvertKey,Object])
    */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     ThreadSafeStore`2[ConvertUtils+TypeConvertKey,System::Object]::
     ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object___ctor
               (ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object_ *this,
               Func_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_Object_ *creator,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Object;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields)._lock = (Object *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if (creator != (Func_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_Object_ *)0x0) {
    (this->fields)._creator = creator;
    return;
  }
  this_01 = (ArgumentNullException *)func_?();
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,StringLiteral_creator,(MethodInfo *)0x0);
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

