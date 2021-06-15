
/* String Generate(Type, Func`2[String,String]) */

String * Assembly-CSharp.dll::LSEnumGenerator::LSEnumGenerator_Generate
                   (Type *type,Func_2_String_String_ *customStringCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = LSEnumGenerator_GenerateEnumCode(type,customStringCallback,(MethodInfo *)0x0);
  if (type != (Type *)0x0) {
    arg0 = (Object *)
           (*(code *)(type->klass->vtable).__unknown.method)
                     (type,(type->klass->vtable).get_ReflectedType.methodPtr);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_u000Du000A____public_static_string____0_,arg0,(Object *)pSVar1
                        ,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* String GenerateEnumCode(Type, Func`2[String,String]) */

String * Assembly-CSharp.dll::LSEnumGenerator::LSEnumGenerator_GenerateEnumCode
                   (Type *type,Func_2_String_String_ *customStringCallback,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  if (type != (Type *)0x0) {
    arg0 = (Object *)
           (*(code *)(type->klass->vtable).__unknown.method)
                     (type,(type->klass->vtable).get_ReflectedType.methodPtr);
    if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Enum);
    }
    this = mscorlib.dll::System::Enum::Enum_GetValues(type,(MethodInfo *)0x0);
    if (this != (Array *)0x0) {
      pIVar5 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
      iStack_1 = 0;
      while (pIVar5 != (IEnumerator *)0x0) {
        cVar6 = func_?(1,TypeInfo__System__Collections__IEnumerator,pIVar5);
        if (cVar6 == '\0') {
          iStack_1 = 0xffffffff;
          iVar7 = func_?(pIVar5,TypeInfo__System__IDisposable);
          if (iVar7 != 0) {
            func_?(0,TypeInfo__System__IDisposable,iVar7);
          }
          *unaff_FS_OFFSET = uStack_3;
          return pSVar4;
        }
        value = (Object *)func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar5);
        if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Enum);
        }
        arg1 = mscorlib.dll::System::Enum::Enum_GetName(type,value,(MethodInfo *)0x0);
        pSVar8 = arg1;
        if (customStringCallback != (Func_2_String_String_ *)0x0) {
          iStack_1._0_1_ = 1;
          pSVar8 = (String *)
                   System.Core.dll::System::Func`2[Object,Int32]::Func_2_Object_Int32__Invoke
                             ((Func_2_Object_Int32_ *)customStringCallback,(Object *)arg1,
                              MethodInfo__System__Func<System::String,_System::String>__Invoke_System__String_
                             );
          iStack_1 = (uint)iStack_1._1_3_ << 8;
        }
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar8 = mscorlib.dll::System::String::String_Format_2
                           (StringLiteral_____________map_Add__int__0___1_,arg0,(Object *)arg1,
                            (Object *)pSVar8,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_2(pSVar4,pSVar8,(MethodInfo *)0x0);
      }
    }
  }
  uVar9 = func_?(0);
  func_?(uVar9,0,0);
  pcVar10 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar10)();
  return pSVar4;
}

