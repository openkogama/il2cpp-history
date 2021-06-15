
/* Boolean Equals(Object) */

bool MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_Equals
               (FileData *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    bVar1 = (TypeInfo__MV__WorldObject__AntiCheat__FileData->_1).naturalAligment;
    if (((obj->klass->_1).naturalAligment < bVar1) ||
       ((obj->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__MV__WorldObject__AntiCheat__FileData)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    this_00 = (FileData *)0x0;
    if (bVar2) {
      this_00 = (FileData *)obj;
    }
    if ((this_00 != (FileData *)0x0) && ((this->fields).crc == (this_00->fields).crc)) {
      a = FileData_NameAsString(this,(MethodInfo *)0x0);
      b = FileData_NameAsString(this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
      return bVar3;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Text__Encoding);
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  this_00 = (List_1_VoxelHit_ *)(this->fields).name;
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    if (pEVar1 != (Encoding *)0x0) {
      pSVar3 = (String *)(*(code *)(pEVar1->klass->vtable).GetString_1.method)(pEVar1,pVVar2);
      return pSVar3;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_ToString
                   (FileData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    if ((StringLiteral_Dll__ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_Dll__,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Dll__;
    pSVar3 = FileData_NameAsString(this,(MethodInfo *)0x0);
    if ((pSVar3 != (String *)0x0) &&
       (iVar2 = func_?(pSVar3,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar3;
    if ((StringLiteral__CRC__ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__CRC__,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__CRC__;
    pOVar4 = (Object *)func_?(TypeInfo__System__UInt32,&stack0xfffffff8);
    if ((pOVar4 == (Object *)0x0) ||
       (iVar2 = func_?(pOVar4,(args->klass->_0).element_class), iVar2 != 0)) {
      if (3 < args->max_length) {
        args->vector[3] = pOVar4;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar3 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        return pSVar3;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* FileData(Byte[], UInt32) */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData__ctor
               (FileData *this,Byte__Array *name,uint32_t crc,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (List_1_VoxelHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
            (this_00,(IEnumerable_1_VoxelHit_ *)name,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
            );
  (this->fields).name = (List_1_System_Byte__1 *)this_00;
  (this->fields).crc = crc;
  return;
}

