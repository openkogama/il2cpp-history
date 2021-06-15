
/* Void OverrideRuntimeType(RuntimeEventType) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
     SingleCubeFineGrainedEvent_OverrideRuntimeType
               (SingleCubeFineGrainedEvent *this,RuntimeEventType__Enum runtimeEventType,
               MethodInfo *method)

{
  (this->fields)._._RuntimeEventType_k__BackingField = (undefined1)runtimeEventType;
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
         SingleCubeFineGrainedEvent_ToString(SingleCubeFineGrainedEvent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
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
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
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
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
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
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._._RuntimeEventType_k__BackingField = (undefined1)runtimeEventType;
  if ((undefined1)runtimeEventType == RuntimeEventType__Enum_FineGrainedSingleCubeAdd) {
    if (bp == (BytePacker *)0x0) goto code_?;
    uVar1 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
    (this->fields).material = uVar1;
  }
  if (bp != (BytePacker *)0x0) {
    iVar2 = BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
    iVar3 = BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
    iVar4 = BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
    uVar5 = 0;
    func_?(&stack0xfffffff4,iVar2,iVar3,iVar4);
    (this->fields)._.position.x = (short)uVar5;
    (this->fields)._.position.y = (short)((uint)uVar5 >> 0x10);
    (this->fields)._.position.z = 0;
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Byte[] get_Data() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
SingleCubeFineGrainedEvent_get_Data(SingleCubeFineGrainedEvent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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

