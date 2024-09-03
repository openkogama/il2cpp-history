
/* Boolean HasFirstTimeEventOccured(FirstTimeEvent) */

bool MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
     FirstTimeState_HasFirstTimeEventOccured
               (FirstTimeState *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (firstTimeEvent == FirstTimeEvent__Enum_NoEvent) {
    return 1;
  }
  this_00 = (this->fields).bitArray;
  if (this_00 != (BitArray *)0x0) {
    if (firstTimeEvent < (this_00->fields).m_length) {
      bVar1 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item
                        (this_00,firstTimeEvent,(MethodInfo *)0x0);
      return bVar1;
    }
    return 0;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void OverrideFirstTimeEvent(FirstTimeEvent, Boolean) */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
     FirstTimeState_OverrideFirstTimeEvent
               (FirstTimeState *this,FirstTimeEvent__Enum firstTimeEvent,bool value,
               MethodInfo *method)

{
  pBVar1 = (this->fields).bitArray;
  if (pBVar1 != (BitArray *)0x0) {
    if ((pBVar1->fields).m_length <= firstTimeEvent) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Length
                ((this->fields).bitArray,firstTimeEvent + 1,(MethodInfo *)0x0);
    }
    pBVar1 = (this->fields).bitArray;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                (pBVar1,firstTimeEvent,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetFirstTimeEvent(FirstTimeEvent) */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_SetFirstTimeEvent
               (FirstTimeState *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  pBVar1 = (this->fields).bitArray;
  if (pBVar1 != (BitArray *)0x0) {
    if ((pBVar1->fields).m_length <= firstTimeEvent) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Length
                ((this->fields).bitArray,firstTimeEvent + 1,(MethodInfo *)0x0);
    }
    pBVar1 = (this->fields).bitArray;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                (pBVar1,firstTimeEvent,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_ToString
                   (FirstTimeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    cRam_? = '\x01';
  }
  this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  index = 0;
  pBVar1 = (this->fields).bitArray;
  if (pBVar1 != (BitArray *)0x0) {
    while (index < (pBVar1->fields).m_length) {
      pBVar1 = (this->fields).bitArray;
      if ((pBVar1 == (BitArray *)0x0) ||
         (bVar2 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item
                            (pBVar1,index,(MethodInfo *)0x0), this_00 == (StringBuilder *)0x0))
      goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                (this_00,bVar2 + 0x30,(MethodInfo *)0x0);
      pBVar1 = (this->fields).bitArray;
      index = index + 1;
      if (pBVar1 == (BitArray *)0x0) goto code_?;
    }
    if (this_00 != (StringBuilder *)0x0) {
      pSVar3 = (String *)
               (*(code *)(this_00->klass->vtable).ToString.method)
                         (this_00,(this_00->klass->vtable).
                                  System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr
                         );
      return pSVar3;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* FirstTimeState() */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState__ctor
               (FirstTimeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__BitArray);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor(this_00,0,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).bitArray = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* FirstTimeState(FirstTimeState) */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState__ctor_1
               (FirstTimeState *this,FirstTimeState *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__BitArray);
    cRam_? = '\x01';
  }
  pBVar1 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor(pBVar1,0,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).bitArray = pBVar1;
  func_?(method_00,pBVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (other != (FirstTimeState *)0x0) {
    pBVar1 = (other->fields).bitArray;
    this_00 = (BitArray *)func_?();
    mscorlib.dll::System::Collections::BitArray::BitArray__ctor_3(this_00,pBVar1,(MethodInfo *)0x0);
    (this->fields).bitArray = this_00;
    func_?(&this->fields,this_00);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Byte[] get_ByteArray() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_get_ByteArray
          (FirstTimeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  if ((this->fields).bitArray != (BitArray *)0x0) {
    iVar1 = (((this->fields).bitArray)->fields).m_length;
    pBVar2 = (Byte__Array *)
             func_?(TypeInfo__System__Byte,(uint)(iVar1 % 8 != 0) + iVar1 / 8);
    this_00 = (this->fields).bitArray;
    if (this_00 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_CopyTo
                (this_00,(Array *)pBVar2,0,(MethodInfo *)0x0);
      return pBVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pBVar2 = (Byte__Array *)(*pcVar3)();
  return pBVar2;
}


/* Void set_ByteArray(Byte[]) */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_set_ByteArray
               (FirstTimeState *this,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__BitArray);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_2(this_00,value,(MethodInfo *)0x0);
  (this->fields).bitArray = this_00;
  func_?(&this->fields,this_00);
  return;
}

