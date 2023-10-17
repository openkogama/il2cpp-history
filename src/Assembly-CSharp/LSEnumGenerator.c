
/* String Generate(Type, Func`2[String,String]) */

String * Assembly-CSharp.dll::LSEnumGenerator::LSEnumGenerator_Generate
                   (Type *type,Func_2_String_String_ *customStringCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_u000Du000A____public_static_string____0_);
    cRam_? = '\x01';
  }
  pSVar1 = LSEnumGenerator_GenerateEnumCode(type,customStringCallback,(MethodInfo *)0x0);
  if (type != (Type *)0x0) {
    arg0 = (Object *)
           (*(type->klass->vtable).__unknown.methodPtr)(type,(type->klass->vtable).__unknown.method)
    ;
    pSVar1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_u000Du000A____public_static_string____0_,arg0,(Object *)pSVar1
                        ,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* String GenerateEnumCode(Type, Func`2[String,String]) */

String * Assembly-CSharp.dll::LSEnumGenerator::LSEnumGenerator_GenerateEnumCode
                   (Type *type,Func_2_String_String_ *customStringCallback,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&StringLiteral_____________map_Add__int__0___1_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar4 = ::StringLiteral__;
  if (type != (Type *)0x0) {
    arg0 = (Object *)
           (*(type->klass->vtable).__unknown.methodPtr)(type,(type->klass->vtable).__unknown.method)
    ;
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Enum);
    }
    this = mscorlib.dll::System::Enum::Enum_GetValues(type,(MethodInfo *)0x0);
    if (this != (Array *)0x0) {
      pIVar5 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
      uStack_1 = 1;
      while (pIVar5 != (IEnumerator *)0x0) {
        cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar5);
        if (cVar6 == '\0') {
          uStack_1 = 0xffffffff;
          iVar7 = func_?(pIVar5,TypeInfo__System__IDisposable);
          if (iVar7 != 0) {
            func_?(0,TypeInfo__System__IDisposable,iVar7);
            *unaff_FS_OFFSET = uStack_3;
            return pSVar4;
          }
          *unaff_FS_OFFSET = uStack_3;
          return pSVar4;
        }
        if (pIVar5 == (IEnumerator *)0x0) break;
        value = (Object *)func_?(1,TypeInfo__System__Collections__IEnumerator,pIVar5);
        if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Enum);
        }
        arg1 = mscorlib.dll::System::Enum::Enum_GetName(type,value,(MethodInfo *)0x0);
        pSVar8 = arg1;
        if (customStringCallback != (Func_2_String_String_ *)0x0) {
          uStack_1._0_1_ = 2;
          pSVar8 = (String *)
                   (*(customStringCallback->fields)._._.invoke_impl)
                             ((customStringCallback->fields)._._.method_code,arg1,
                              (customStringCallback->fields)._._.method);
          uStack_1 = CONCAT31(uStack_1._1_3_,1);
        }
        pSVar8 = mscorlib.dll::System::String::String_Format_2
                           (StringLiteral_____________map_Add__int__0___1_,arg0,(Object *)arg1,
                            (Object *)pSVar8,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_3(pSVar4,pSVar8,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar9)();
  return pSVar4;
}

