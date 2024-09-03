
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
         SingleCubeFineGrainedEvent_ToString(SingleCubeFineGrainedEvent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__MV__Common__RuntimeEventType);
    func_?(&StringLiteral_RuntimeEventType___0___Position_);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  this = (SingleCubeFineGrainedEvent *)
         CONCAT13((this->fields)._._RuntimeEventType_k__BackingField,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__MV__Common__RuntimeEventType,(int)&this + 3);
  uStack_2._0_2_ = (pSVar1->fields)._.position.x;
  uStack_2._2_2_ = (pSVar1->fields)._.position.y;
  iStack_3 = (pSVar1->fields)._.position.z;
  arg1 = (Object *)func_?(TypeInfo__MV__WorldObject__IntVector,&uStack_2);
  uStack_4 = (pSVar1->fields).material;
  arg2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_4);
  pSVar5 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_RuntimeEventType___0___Position_,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar5;
}


/* SingleCubeFineGrainedEvent(IntVector, Byte) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
     SingleCubeFineGrainedEvent__ctor
               (SingleCubeFineGrainedEvent *this,IntVector position,uint8_t material,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._.position.x = position.x;
  (this->fields)._.position.y = position.y;
  (this->fields)._.position.z = position.z;
  (this->fields)._._RuntimeEventType_k__BackingField = 1;
  (this->fields).material = material;
  return;
}


/* SingleCubeFineGrainedEvent(IntVector) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
     SingleCubeFineGrainedEvent__ctor_1
               (SingleCubeFineGrainedEvent *this,IntVector position,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._.position.x = position.x;
  (this->fields)._.position.y = position.y;
  (this->fields)._._RuntimeEventType_k__BackingField = 2;
  (this->fields)._.position.z = position.z;
  return;
}


/* SingleCubeFineGrainedEvent(RuntimeEventType, BytePacker) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
     SingleCubeFineGrainedEvent__ctor_2
               (SingleCubeFineGrainedEvent *this,RuntimeEventType__Enum runtimeEventType,
               BytePacker *bp,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._._RuntimeEventType_k__BackingField = (undefined1)runtimeEventType;
  if ((undefined1)runtimeEventType == RuntimeEventType__Enum_FineGrainedSingleCubeAdd) {
    if (bp == (BytePacker *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
    (this->fields).material = uVar2;
  }
  else if (bp == (BytePacker *)0x0) goto code_?;
  uVar3 = BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
  uVar4 = BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
  uVar5 = BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
  uVar6._0_2_ = 0;
  uVar6._2_2_ = 0;
  IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xfffffff4,(uint)uVar3,(uint)uVar4,(uint)uVar5,(MethodInfo *)0x0);
  (this->fields)._.position.x = (int16_t)uVar6;
  (this->fields)._.position.y = SUB42(uVar6,2);
  (this->fields)._.position.z = 0;
  return;
}


/* Byte[] get_Data() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
SingleCubeFineGrainedEvent_get_Data(SingleCubeFineGrainedEvent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  BytePacker::BytePacker__ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (BytePacker *)0x0) {
    BytePacker::BytePacker_Write
              (this_00,(this->fields)._._RuntimeEventType_k__BackingField,(MethodInfo *)0x0);
    if ((this->fields)._._RuntimeEventType_k__BackingField == 1) {
      BytePacker::BytePacker_Write(this_00,(this->fields).material,(MethodInfo *)0x0);
    }
    BytePacker::BytePacker_Write_4(this_00,(this->fields)._.position.x,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(this_00,(this->fields)._.position.y,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(this_00,(this->fields)._.position.z,(MethodInfo *)0x0);
    pBVar1 = BytePacker::BytePacker_ToArray(this_00,(MethodInfo *)0x0);
    return pBVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar2)();
  return pBVar1;
}

