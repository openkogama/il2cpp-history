
/* Boolean Equals(Object) */

bool MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_Equals
               (FileData *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__AntiCheat__FileData);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    bVar1 = (TypeInfo__MV__WorldObject__AntiCheat__FileData->_1).naturalAligment;
    if (((bVar1 <= (obj->klass->_1).naturalAligment) &&
        ((obj->klass->_1).typeHierarchy[bVar1 - 1] ==
         (Il2CppClass *)TypeInfo__MV__WorldObject__AntiCheat__FileData)) &&
       ((MonitorData *)(this->fields).crc == obj[1].monitor)) {
      a = FileData_NameAsString(this,(MethodInfo *)0x0);
      b = FileData_NameAsString((FileData *)obj,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
      return bVar2;
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
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)(this->fields).name;
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    pMVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    if (pEVar1 != (Encoding *)0x0) {
      pSVar3 = (String *)(*(code *)(pEVar1->klass->vtable).GetString.method)(pEVar1,pMVar2);
      return pSVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_ToString
                   (FileData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Dll__);
    func_?(&StringLiteral__CRC__);
    cRam_? = '\x01';
  }
  pSVar1 = FileData_NameAsString(this,(MethodInfo *)0x0);
  str3 = mscorlib.dll::System::UInt32::UInt32_ToString
                   ((UInt32 *)&(this->fields).crc,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_Dll__,pSVar1,StringLiteral__CRC__,str3,(MethodInfo *)0x0);
  return pSVar1;
}


/* FileData(Byte[], UInt32) */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData__ctor
               (FileData *this,Byte__Array *name,uint32_t crc,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (List_1_System_Byte_ *)
            func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte___ctor_1
            (this_00,(IEnumerable_1_System_Byte_ *)name,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
            );
  (this->fields).name = this_00;
  func_?(&this->fields,this_00);
  (this->fields).crc = crc;
  return;
}

