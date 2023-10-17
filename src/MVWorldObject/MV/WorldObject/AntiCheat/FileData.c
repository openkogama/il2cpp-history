
/* Boolean Equals(Object) */

bool MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_Equals
               (FileData *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__AntiCheat__FileData);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    if ((((TypeInfo__MV__WorldObject__AntiCheat__FileData->_1).typeHierarchyDepth <=
          (obj->klass->_1).typeHierarchyDepth) &&
        ((obj->klass->_1).typeHierarchy
         [(TypeInfo__MV__WorldObject__AntiCheat__FileData->_1).typeHierarchyDepth - 1] ==
         (Il2CppClass *)TypeInfo__MV__WorldObject__AntiCheat__FileData)) &&
       ((MonitorData *)(this->fields).crc == obj[1].monitor)) {
      a = FileData_NameAsString(this,(MethodInfo *)0x0);
      b = FileData_NameAsString((FileData *)obj,(MethodInfo *)0x0);
      bVar1 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_GetHashCode
                  (FileData *this,MethodInfo *method)

{
  iVar1 = func_?(this);
  return iVar1;
}


/* String NameAsString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_NameAsString
                   (FileData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)(this->fields).name;
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    pUVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    if (pEVar1 != (Encoding *)0x0) {
      pSVar3 = (String *)(*(pEVar1->klass->vtable).GetString.methodPtr)(pEVar1,pUVar2);
      return pSVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* Void SetName(String) */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_SetName
               (FileData *this,String *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar1 != (Encoding *)0x0) {
    collection = (IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                 (*(pEVar1->klass->vtable).GetBytes_1.methodPtr)
                           (pEVar1,a,(pEVar1->klass->vtable).GetBytes_1.method);
    this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (this_00,collection,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                );
      (this->fields).name = (List_1_System_Byte_ *)this_00;
      func_?(&this->fields,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_ToString
                   (FileData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__UInt32);
    func_?(&StringLiteral_Dll__);
    func_?(&StringLiteral__CRC__);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    if ((StringLiteral_Dll__ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_Dll__,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    pSVar3 = StringLiteral_Dll__;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Dll__;
    func_?(args->vector,pSVar3);
    pSVar3 = FileData_NameAsString(this,(MethodInfo *)0x0);
    if ((pSVar3 != (String *)0x0) &&
       (iVar2 = func_?(pSVar3,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar3;
    func_?(args->vector + 1,pSVar3);
    if ((StringLiteral__CRC__ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__CRC__,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    pSVar3 = StringLiteral__CRC__;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__CRC__;
    func_?(args->vector + 2,pSVar3);
    uStack_4 = (this->fields).crc;
    pOVar5 = (Object *)func_?(TypeInfo__System__UInt32,&uStack_4);
    if ((pOVar5 == (Object *)0x0) ||
       (iVar2 = func_?(pOVar5,(args->klass->_0).element_class), iVar2 != 0)) {
      if (3 < args->max_length) {
        args->vector[3] = pOVar5;
        func_?(args->vector + 3,pOVar5);
        pSVar3 = mscorlib.dll::System::String::String_Concat_2(args,(MethodInfo *)0x0);
        return pSVar3;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
}


/* FileData(String, UInt32) */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData__ctor_1
               (FileData *this,String *name,uint32_t crc,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar1 != (Encoding *)0x0) {
    collection = (IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                 (*(pEVar1->klass->vtable).GetBytes_1.methodPtr)
                           (pEVar1,name,(pEVar1->klass->vtable).GetBytes_1.method);
    this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (this_00,collection,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                );
      (this->fields).name = (List_1_System_Byte_ *)this_00;
      func_?(&this->fields,this_00);
      (this->fields).crc = crc;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* FileData(Byte[], UInt32) */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData__ctor_2
               (FileData *this,Byte__Array *name,uint32_t crc,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
              (this_00,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)name,
               MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
              );
    (this->fields).name = (List_1_System_Byte_ *)this_00;
    func_?(&this->fields,this_00);
    (this->fields).crc = crc;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

